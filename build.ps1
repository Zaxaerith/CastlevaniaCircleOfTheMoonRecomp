# COTMRecomp one-click builder (bring your own legally dumped ROM).
# Usage:
#   .\build.ps1 -Rom "path\to\Castlevania - Circle of the Moon (USA).gba"
#   .\build.ps1                      # looks for a .gba in the project root

param(
    [string]$Rom = "",
    [string]$Tool = "",
    [string]$GbarecompRoot = "",
    [string]$Sdl2Root = "",
    [string]$BuildType = "Release"
)

$ErrorActionPreference = "Stop"
$root = Split-Path -Parent $MyInvocation.MyCommand.Path
Set-Location $root

Write-Host "=== Castlevania: Circle of the Moon (GBARecomp) Builder ===" -ForegroundColor Cyan

# ── locate ROM ────────────────────────────────────────────────────
if (-not $Rom) {
    $Rom = Get-ChildItem -Path $root -Filter "*.gba" -File -ErrorAction SilentlyContinue |
        Select-Object -First 1 -ExpandProperty FullName
}
if (-not $Rom -or -not (Test-Path $Rom)) {
    throw "ROM not found. Pass -Rom `"path\to\game.gba`" or place a .gba in the project root."
}
$Rom = (Resolve-Path $Rom).Path
Write-Host "ROM: $Rom" -ForegroundColor Yellow

# ── locate gba_recompile ──────────────────────────────────────────
if (-not $Tool) {
    foreach ($c in @(
        (Join-Path $root "..\gbarecomp-main\build-mingw\gba_recompile.exe"),
        (Join-Path $root "..\gbarecomp-main\build\Release\gba_recompile.exe"),
        (Join-Path $root "..\gbarecomp-main\build\gba_recompile.exe")
    )) {
        if (Test-Path $c) { $Tool = $c; break }
    }
}
if (-not $Tool) {
    throw "gba_recompile.exe not found. Build GBARecomp target 'gba_recompile', or pass -Tool."
}
Write-Host "Tool: $Tool" -ForegroundColor Yellow

# ── generate ROM-derived C++ (local only) ─────────────────────────
$gen = Join-Path $root "src\generated"
New-Item -ItemType Directory -Force -Path $gen | Out-Null
Write-Host "`n[1/2] Generating cart C++ ..." -ForegroundColor Cyan
& $Tool --rom $Rom --config (Join-Path $root "game.toml") `
        --symbols (Join-Path $root "symbols\cotm_functions.tsv") `
        --out $gen
if ($LASTEXITCODE -ne 0) { throw "gba_recompile failed." }

# ── configure + build ─────────────────────────────────────────────
if (-not $GbarecompRoot) { $GbarecompRoot = (Join-Path $root "..\gbarecomp-main") }
$cmakeArgs = @(
    "-S", $root, "-B", (Join-Path $root "build"),
    "-G", "Ninja",
    "-DCMAKE_BUILD_TYPE=$BuildType",
    "-DGBARECOMP_ROOT=$GbarecompRoot"
)
if ($Sdl2Root) { $cmakeArgs += "-DSDL2_ROOT=$Sdl2Root" }

Write-Host "`n[2/2] Configuring + building cotm.exe ..." -ForegroundColor Cyan
cmake @cmakeArgs
cmake --build (Join-Path $root "build") --target cotm

$exe = Join-Path $root "build\cotm.exe"
if (-not (Test-Path $exe)) { throw "Build failed: $exe not found." }

Write-Host ""
Write-Host "Build successful!" -ForegroundColor Green
Write-Host "  Executable : $exe"
Write-Host "  Run example:"
Write-Host "    .\build\cotm.exe --rom `"$Rom`" --bios `"path\to\gba_bios.bin`" --config game.toml" -ForegroundColor Yellow
