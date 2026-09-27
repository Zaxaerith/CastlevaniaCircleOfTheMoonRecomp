// COTMRecomp host — Castlevania: Circle of the Moon (USA) static recomp.
// Links the generated cart shards against gbarecomp_runtime and boots via
// run_game().

#include "runtime.h"

int main(int argc, char** argv) {
    gbarecomp::RunOptions opts;
    // Official USA dump (CRC32 E310970F, 8 MiB).
    opts.builtin_game_name = "Castlevania: Circle of the Moon (USA)";
    opts.builtin_rom_sha1  = "d661b01eb94186435723ac03344792c11c20c522";
    opts.builtin_rom_crc32 = 0xE310970F;
    // Native GBA view.
    opts.max_view_width = 240;
    opts.max_resize_view_width = 240;

    return gbarecomp::run_game(argc, argv, opts);
}
