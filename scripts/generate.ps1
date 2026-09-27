# Generate ROM-derived cart C++ from a legally dumped ROM.
# Usage:
#   .\scripts\generate.ps1 -Rom "C:\path\to\Castlevania - Circle of the Moon (USA).gba"
#   .\scripts\generate.ps1 -Rom "..." -Tool "C:\path\to\gba_recompile.exe"

param(
    [Parameter(Mandatory = $true)][string]$Rom,
    [string]$Tool = "",
    [string]$Out = "",
    [string]$Config = ""
)

$ErrorActionPreference = "Stop"
$root = Split-Path -Parent (Split-Path -Parent $MyInvocation.MyCommand.Path)
if (-not $Config) { $Config = Join-Path $root "game.toml" }
if (-not $Out) { $Out = Join-Path $root "src\generated" }

if (-not $Tool) {
    $candidates = @(
        (Join-Path $root "..\gbarecomp-main\build-mingw\gba_recompile.exe"),
        (Join-Path $root "..\gbarecomp-main\build\Release\gba_recompile.exe"),
        (Join-Path $root "..\gbarecomp-main\build\gba_recompile.exe")
    )
    foreach ($c in $candidates) {
        if (Test-Path $c) { $Tool = $c; break }
    }
}

if (-not $Tool -or -not (Test-Path $Tool)) {
    throw "gba_recompile.exe not found. Build GBARecomp target `gba_recompile` or pass -Tool."
}

Write-Host "ROM   : $Rom"
Write-Host "Config: $Config"
Write-Host "Out   : $Out"
Write-Host "Tool  : $Tool"

New-Item -ItemType Directory -Force -Path $Out | Out-Null

& $Tool --rom $Rom --config $Config --symbols (Join-Path $root "symbols\cotm_functions.tsv") --out $Out

Write-Host ""
Write-Host "Splitting into src/game modules ..."
& (Join-Path (Split-Path -Parent (Split-Path -Parent $MyInvocation.MyCommand.Path)) "scripts\split_generated.py")
# python fallback
if ($LASTEXITCODE -ne 0) {
  python (Join-Path $root "scripts\split_generated.py")
}

Write-Host "Done. Generated shards are local-only (gitignored)."
Write-Host "Next: cmake -S . -B build -DSDL2_ROOT=<prefix> && cmake --build build"



