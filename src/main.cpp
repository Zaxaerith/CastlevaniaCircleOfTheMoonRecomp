// COTMRecomp host — Castlevania: Circle of the Moon (USA) static recomp.
// Links the generated cart code against gbarecomp_runtime and boots via
// run_game().

#include "runtime.h"

#include <cstdlib>

int main(int argc, char** argv) {
    // Keep the game directory clean: discard self-heal miss/coverage dumps.
    // (Override by setting these before launch if you want the reports.)
    if (!std::getenv("GBARECOMP_MISS_FRAG"))
        _putenv("GBARECOMP_MISS_FRAG=NUL");
    if (!std::getenv("GBARECOMP_COVERAGE_JSON"))
        _putenv("GBARECOMP_COVERAGE_JSON=NUL");
    if (!std::getenv("GBARECOMP_SESSION_DIAGNOSTICS"))
        _putenv("GBARECOMP_SESSION_DIAGNOSTICS=0");

    gbarecomp::RunOptions opts;
    // Official USA dump (CRC32 E310970F, 8 MiB).
    opts.builtin_game_name = "Castlevania: Circle of the Moon (USA)";
    opts.builtin_rom_sha1  = "d661b01eb94186435723ac03344792c11c20c522";
    opts.builtin_rom_crc32 = 0xE310970F;
    // Native GBA view only.
    opts.max_view_width = 240;
    opts.max_resize_view_width = 240;

    return gbarecomp::run_game(argc, argv, opts);
}
