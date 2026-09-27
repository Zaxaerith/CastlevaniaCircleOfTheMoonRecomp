/* Auto-split from gbarecomp shards. Module: jump_tables
 * 67 guest functions. Do not hand-edit function bodies.
 */

#include "runtime_arm.h"
#include "recompiled.h"

/* 0x0806B0E0 thumb */
void gf_autojt_0806B090_15(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0806B0E0u);
    /* 0806B0E0  0806b0e0 T adds r0,r7,#0x0 */
    g_cpu.R[15] = 0x0806B0E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806B0E0 = 1u;
    _cyc_0806B0E0 = 1u;
    uint32_t _rn_0806B0E0 = g_cpu.R[7];
    uint32_t _r_0806B0E0;
    _r_0806B0E0 = _rn_0806B0E0 + 0x00000000u;
    arm_set_nzcv_add(_rn_0806B0E0, 0x00000000u, _r_0806B0E0);
    g_cpu.R[0] = _r_0806B0E0;
    g_cpu.R[15] = 0x0806B0E2u;
    runtime_tick(_cyc_0806B0E0);
    /* 0806B0E2  0806b0e2 T adds r0,r0,#0x94 */
    g_cpu.R[15] = 0x0806B0E2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806B0E2 = 1u;
    _cyc_0806B0E2 = 1u;
    uint32_t _rn_0806B0E2 = g_cpu.R[0];
    uint32_t _r_0806B0E2;
    _r_0806B0E2 = _rn_0806B0E2 + 0x00000094u;
    arm_set_nzcv_add(_rn_0806B0E2, 0x00000094u, _r_0806B0E2);
    g_cpu.R[0] = _r_0806B0E2;
    g_cpu.R[15] = 0x0806B0E4u;
    runtime_tick(_cyc_0806B0E2);
    /* 0806B0E4  0806b0e4 T ldr r0,[r0] */
    g_cpu.R[15] = 0x0806B0E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806B0E4 = 1u;
    _cyc_0806B0E4 = 2u;
    uint32_t _base_0806B0E4 = g_cpu.R[0];
    uint32_t _off_0806B0E4;
    _off_0806B0E4 = 0x00000000u;
    uint32_t _ea_0806B0E4 = _base_0806B0E4 + _off_0806B0E4;
    uint32_t _post_0806B0E4 = _base_0806B0E4 + _off_0806B0E4;
    _cyc_0806B0E4 += runtime_mem_cycles(_ea_0806B0E4, 4u, 0u);
    uint32_t _v_0806B0E4;
    { uint32_t _w = bus_read_u32(_ea_0806B0E4 & ~3u); uint32_t _rot = (_ea_0806B0E4 & 3u) * 8u; _v_0806B0E4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0806B0E4;
    g_cpu.R[15] = 0x0806B0E6u;
    runtime_tick(_cyc_0806B0E4);
    /* 0806B0E6  0806b0e6 T cmps r0,#0x2 */
    g_cpu.R[15] = 0x0806B0E6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806B0E6 = 1u;
    _cyc_0806B0E6 = 1u;
    uint32_t _rn_0806B0E6 = g_cpu.R[0];
    uint32_t _r_0806B0E6;
    _r_0806B0E6 = _rn_0806B0E6 - 0x00000002u;
    arm_set_nzcv_sub(_rn_0806B0E6, 0x00000002u, _r_0806B0E6);
    g_cpu.R[15] = 0x0806B0E8u;
    runtime_tick(_cyc_0806B0E6);
    /* 0806B0E8  0806b0e8 T beq 0x0806b0f2 */
    g_cpu.R[15] = 0x0806B0E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806B0E8 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0806B0E8 = 3u;
        g_cpu.R[15] = 0x0806B0F2u;
        runtime_tick(_cyc_0806B0E8);
        GBARECOMP_TAIL_CALL(gf_tfunc_0806B0F2);
    }
    g_cpu.R[15] = 0x0806B0EAu;
    runtime_tick(_cyc_0806B0E8);
    /* 0806B0EA  0806b0ea T b 0x0806b0f0 */
    g_cpu.R[15] = 0x0806B0EAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806B0EA = 1u;
    _cyc_0806B0EA = 3u;
    g_cpu.R[15] = 0x0806B0F0u;
    runtime_tick(_cyc_0806B0EA);
    GBARECOMP_TAIL_CALL(gf_tfunc_0806B0F0);
    g_cpu.R[15] = 0x0806B0ECu;
    runtime_tick(_cyc_0806B0EA);
    /* fall-through to 0x0806B0EC */
    g_cpu.R[15] = 0x0806B0ECu;
    runtime_dispatch(0x0806B0ECu);
    return;
}

/* 0x0806B0F2  mode=thumb  end=0x0806B0F4  branches=0  indirect */


/* 0x0806B0EC thumb */
void gf_autojt_0806B090_00(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0806B0ECu);
    /* 0806B0EC  0806b0ec T movs r0,#0x2 */
    g_cpu.R[15] = 0x0806B0ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806B0EC = 1u;
    _cyc_0806B0EC = 1u;
    uint32_t _r_0806B0EC;
    _r_0806B0EC = 0x00000002u;
    arm_set_nzc_logic(_r_0806B0EC, cpsr_c());
    g_cpu.R[0] = _r_0806B0EC;
    g_cpu.R[15] = 0x0806B0EEu;
    runtime_tick(_cyc_0806B0EC);
    /* 0806B0EE  0806b0ee T b 0x0806b0f2 */
    g_cpu.R[15] = 0x0806B0EEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806B0EE = 1u;
    _cyc_0806B0EE = 3u;
    g_cpu.R[15] = 0x0806B0F2u;
    runtime_tick(_cyc_0806B0EE);
    GBARECOMP_TAIL_CALL(gf_tfunc_0806B0F2);
    g_cpu.R[15] = 0x0806B0F0u;
    runtime_tick(_cyc_0806B0EE);
    /* fall-through to 0x0806B0F0 */
    g_cpu.R[15] = 0x0806B0F0u;
    runtime_dispatch(0x0806B0F0u);
    return;
}

/* 0x0806B0F0  mode=thumb  end=0x0806B0F2  branches=0  indirect */


/* 0x0806C258 thumb */
void gf_autojt_0806C240_00(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0806C258u);
    /* 0806C258  0806c258 T mov r0,r8 */
    g_cpu.R[15] = 0x0806C258u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C258 = 1u;
    _cyc_0806C258 = 1u;
    uint32_t _rm_0806C258 = g_cpu.R[8];
    uint32_t _op2_0806C258;
    uint32_t _co_0806C258;
    _op2_0806C258 = _rm_0806C258;
    _co_0806C258 = cpsr_c();
    uint32_t _r_0806C258;
    _r_0806C258 = _op2_0806C258;
    g_cpu.R[0] = _r_0806C258;
    g_cpu.R[15] = 0x0806C25Au;
    runtime_tick(_cyc_0806C258);
    /* 0806C25A  0806c25a T adds r1,r7,#0x0 */
    g_cpu.R[15] = 0x0806C25Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C25A = 1u;
    _cyc_0806C25A = 1u;
    uint32_t _rn_0806C25A = g_cpu.R[7];
    uint32_t _r_0806C25A;
    _r_0806C25A = _rn_0806C25A + 0x00000000u;
    arm_set_nzcv_add(_rn_0806C25A, 0x00000000u, _r_0806C25A);
    g_cpu.R[1] = _r_0806C25A;
    g_cpu.R[15] = 0x0806C25Cu;
    runtime_tick(_cyc_0806C25A);
    /* 0806C25C  0806c25c T movs r2,#0x2c */
    g_cpu.R[15] = 0x0806C25Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C25C = 1u;
    _cyc_0806C25C = 1u;
    uint32_t _r_0806C25C;
    _r_0806C25C = 0x0000002Cu;
    arm_set_nzc_logic(_r_0806C25C, cpsr_c());
    g_cpu.R[2] = _r_0806C25C;
    g_cpu.R[15] = 0x0806C25Eu;
    runtime_tick(_cyc_0806C25C);
    /* 0806C25E  0806c25e T bl.hi 0x0806a262 */
    g_cpu.R[15] = 0x0806C25Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C25E = 1u;
    _cyc_0806C25E = 1u;
    g_cpu.R[14] = 0x0806A262u;
    g_cpu.R[15] = 0x0806C260u;
    runtime_tick(_cyc_0806C25E);
    /* 0806C260  0806c260 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0806C260u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C260 = 1u;
    _cyc_0806C260 = 3u;
    uint32_t _blt_0806C260 = (g_cpu.R[14] + 0x0000054Au) & ~1u;
    g_cpu.R[14] = 0x0806C263u;
    g_cpu.R[15] = _blt_0806C260;
    runtime_call_push_return(0x0806C262u);
    runtime_tick(_cyc_0806C260);
    _cyc_0806C260 = 0u;
    runtime_dispatch(_blt_0806C260);
    if (g_cpu.R[15] != 0x0806C262u) { runtime_call_cancel_return(0x0806C262u); return; }
    g_cpu.R[15] = 0x0806C262u;
    runtime_tick(_cyc_0806C260);
    /* fall-through to 0x0806C262 */
    g_cpu.R[15] = 0x0806C262u;
    runtime_dispatch(0x0806C262u);
    return;
}

/* 0x0806C262  mode=thumb  end=0x0806C264  branches=1 */


/* 0x0806C264 thumb */
void gf_autojt_0806C240_01(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0806C264u);
    /* 0806C264  0806c264 T mov r0,r8 */
    g_cpu.R[15] = 0x0806C264u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C264 = 1u;
    _cyc_0806C264 = 1u;
    uint32_t _rm_0806C264 = g_cpu.R[8];
    uint32_t _op2_0806C264;
    uint32_t _co_0806C264;
    _op2_0806C264 = _rm_0806C264;
    _co_0806C264 = cpsr_c();
    uint32_t _r_0806C264;
    _r_0806C264 = _op2_0806C264;
    g_cpu.R[0] = _r_0806C264;
    g_cpu.R[15] = 0x0806C266u;
    runtime_tick(_cyc_0806C264);
    /* 0806C266  0806c266 T adds r1,r7,#0x0 */
    g_cpu.R[15] = 0x0806C266u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C266 = 1u;
    _cyc_0806C266 = 1u;
    uint32_t _rn_0806C266 = g_cpu.R[7];
    uint32_t _r_0806C266;
    _r_0806C266 = _rn_0806C266 + 0x00000000u;
    arm_set_nzcv_add(_rn_0806C266, 0x00000000u, _r_0806C266);
    g_cpu.R[1] = _r_0806C266;
    g_cpu.R[15] = 0x0806C268u;
    runtime_tick(_cyc_0806C266);
    /* 0806C268  0806c268 T movs r2,#0x2e */
    g_cpu.R[15] = 0x0806C268u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C268 = 1u;
    _cyc_0806C268 = 1u;
    uint32_t _r_0806C268;
    _r_0806C268 = 0x0000002Eu;
    arm_set_nzc_logic(_r_0806C268, cpsr_c());
    g_cpu.R[2] = _r_0806C268;
    g_cpu.R[15] = 0x0806C26Au;
    runtime_tick(_cyc_0806C268);
    /* 0806C26A  0806c26a T bl.hi 0x0806a26e */
    g_cpu.R[15] = 0x0806C26Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C26A = 1u;
    _cyc_0806C26A = 1u;
    g_cpu.R[14] = 0x0806A26Eu;
    g_cpu.R[15] = 0x0806C26Cu;
    runtime_tick(_cyc_0806C26A);
    /* 0806C26C  0806c26c T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0806C26Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C26C = 1u;
    _cyc_0806C26C = 3u;
    uint32_t _blt_0806C26C = (g_cpu.R[14] + 0x0000053Eu) & ~1u;
    g_cpu.R[14] = 0x0806C26Fu;
    g_cpu.R[15] = _blt_0806C26C;
    runtime_call_push_return(0x0806C26Eu);
    runtime_tick(_cyc_0806C26C);
    _cyc_0806C26C = 0u;
    runtime_dispatch(_blt_0806C26C);
    if (g_cpu.R[15] != 0x0806C26Eu) { runtime_call_cancel_return(0x0806C26Eu); return; }
    g_cpu.R[15] = 0x0806C26Eu;
    runtime_tick(_cyc_0806C26C);
    /* fall-through to 0x0806C26E */
    g_cpu.R[15] = 0x0806C26Eu;
    runtime_dispatch(0x0806C26Eu);
    return;
}

/* 0x0806C270  mode=thumb  end=0x0806C27A  branches=3 */


/* 0x0806C270 thumb */
void gf_autojt_0806C240_02(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0806C270u);
    /* 0806C270  0806c270 T mov r0,r8 */
    g_cpu.R[15] = 0x0806C270u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C270 = 1u;
    _cyc_0806C270 = 1u;
    uint32_t _rm_0806C270 = g_cpu.R[8];
    uint32_t _op2_0806C270;
    uint32_t _co_0806C270;
    _op2_0806C270 = _rm_0806C270;
    _co_0806C270 = cpsr_c();
    uint32_t _r_0806C270;
    _r_0806C270 = _op2_0806C270;
    g_cpu.R[0] = _r_0806C270;
    g_cpu.R[15] = 0x0806C272u;
    runtime_tick(_cyc_0806C270);
    /* 0806C272  0806c272 T adds r1,r7,#0x0 */
    g_cpu.R[15] = 0x0806C272u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C272 = 1u;
    _cyc_0806C272 = 1u;
    uint32_t _rn_0806C272 = g_cpu.R[7];
    uint32_t _r_0806C272;
    _r_0806C272 = _rn_0806C272 + 0x00000000u;
    arm_set_nzcv_add(_rn_0806C272, 0x00000000u, _r_0806C272);
    g_cpu.R[1] = _r_0806C272;
    g_cpu.R[15] = 0x0806C274u;
    runtime_tick(_cyc_0806C272);
    /* 0806C274  0806c274 T movs r2,#0x2d */
    g_cpu.R[15] = 0x0806C274u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C274 = 1u;
    _cyc_0806C274 = 1u;
    uint32_t _r_0806C274;
    _r_0806C274 = 0x0000002Du;
    arm_set_nzc_logic(_r_0806C274, cpsr_c());
    g_cpu.R[2] = _r_0806C274;
    g_cpu.R[15] = 0x0806C276u;
    runtime_tick(_cyc_0806C274);
    /* 0806C276  0806c276 T bl.hi 0x0806a27a */
    g_cpu.R[15] = 0x0806C276u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C276 = 1u;
    _cyc_0806C276 = 1u;
    g_cpu.R[14] = 0x0806A27Au;
    g_cpu.R[15] = 0x0806C278u;
    runtime_tick(_cyc_0806C276);
    /* 0806C278  0806c278 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0806C278u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C278 = 1u;
    _cyc_0806C278 = 3u;
    uint32_t _blt_0806C278 = (g_cpu.R[14] + 0x00000532u) & ~1u;
    g_cpu.R[14] = 0x0806C27Bu;
    g_cpu.R[15] = _blt_0806C278;
    runtime_call_push_return(0x0806C27Au);
    runtime_tick(_cyc_0806C278);
    _cyc_0806C278 = 0u;
    runtime_dispatch(_blt_0806C278);
    if (g_cpu.R[15] != 0x0806C27Au) { runtime_call_cancel_return(0x0806C27Au); return; }
    g_cpu.R[15] = 0x0806C27Au;
    runtime_tick(_cyc_0806C278);
    /* fall-through to 0x0806C27A */
    g_cpu.R[15] = 0x0806C27Au;
    runtime_dispatch(0x0806C27Au);
    return;
}

/* 0x0806C298  mode=thumb  end=0x0806C29C  branches=4 */


/* 0x0806C27C thumb */
void gf_autojt_0806C240_05(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0806C27Cu);
    /* 0806C27C  0806c27c T mov r0,r8 */
    g_cpu.R[15] = 0x0806C27Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C27C = 1u;
    _cyc_0806C27C = 1u;
    uint32_t _rm_0806C27C = g_cpu.R[8];
    uint32_t _op2_0806C27C;
    uint32_t _co_0806C27C;
    _op2_0806C27C = _rm_0806C27C;
    _co_0806C27C = cpsr_c();
    uint32_t _r_0806C27C;
    _r_0806C27C = _op2_0806C27C;
    g_cpu.R[0] = _r_0806C27C;
    g_cpu.R[15] = 0x0806C27Eu;
    runtime_tick(_cyc_0806C27C);
    /* 0806C27E  0806c27e T adds r1,r7,#0x0 */
    g_cpu.R[15] = 0x0806C27Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C27E = 1u;
    _cyc_0806C27E = 1u;
    uint32_t _rn_0806C27E = g_cpu.R[7];
    uint32_t _r_0806C27E;
    _r_0806C27E = _rn_0806C27E + 0x00000000u;
    arm_set_nzcv_add(_rn_0806C27E, 0x00000000u, _r_0806C27E);
    g_cpu.R[1] = _r_0806C27E;
    g_cpu.R[15] = 0x0806C280u;
    runtime_tick(_cyc_0806C27E);
    /* 0806C280  0806c280 T movs r2,#0x30 */
    g_cpu.R[15] = 0x0806C280u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C280 = 1u;
    _cyc_0806C280 = 1u;
    uint32_t _r_0806C280;
    _r_0806C280 = 0x00000030u;
    arm_set_nzc_logic(_r_0806C280, cpsr_c());
    g_cpu.R[2] = _r_0806C280;
    g_cpu.R[15] = 0x0806C282u;
    runtime_tick(_cyc_0806C280);
    /* 0806C282  0806c282 T bl.hi 0x0806a286 */
    g_cpu.R[15] = 0x0806C282u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C282 = 1u;
    _cyc_0806C282 = 1u;
    g_cpu.R[14] = 0x0806A286u;
    g_cpu.R[15] = 0x0806C284u;
    runtime_tick(_cyc_0806C282);
    /* 0806C284  0806c284 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0806C284u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C284 = 1u;
    _cyc_0806C284 = 3u;
    uint32_t _blt_0806C284 = (g_cpu.R[14] + 0x00000526u) & ~1u;
    g_cpu.R[14] = 0x0806C287u;
    g_cpu.R[15] = _blt_0806C284;
    runtime_call_push_return(0x0806C286u);
    runtime_tick(_cyc_0806C284);
    _cyc_0806C284 = 0u;
    runtime_dispatch(_blt_0806C284);
    if (g_cpu.R[15] != 0x0806C286u) { runtime_call_cancel_return(0x0806C286u); return; }
    g_cpu.R[15] = 0x0806C286u;
    runtime_tick(_cyc_0806C284);
    /* fall-through to 0x0806C286 */
    g_cpu.R[15] = 0x0806C286u;
    runtime_dispatch(0x0806C286u);
    return;
}

/* 0x0806C286  mode=thumb  end=0x0806C288  branches=1 */


/* 0x0806C348 thumb */
void gf_autojt_0806C330_00(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0806C348u);
    /* 0806C348  0806c348 T mov r5,r9 */
    g_cpu.R[15] = 0x0806C348u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C348 = 1u;
    _cyc_0806C348 = 1u;
    uint32_t _rm_0806C348 = g_cpu.R[9];
    uint32_t _op2_0806C348;
    uint32_t _co_0806C348;
    _op2_0806C348 = _rm_0806C348;
    _co_0806C348 = cpsr_c();
    uint32_t _r_0806C348;
    _r_0806C348 = _op2_0806C348;
    g_cpu.R[5] = _r_0806C348;
    g_cpu.R[15] = 0x0806C34Au;
    runtime_tick(_cyc_0806C348);
    /* 0806C34A  0806c34a T ldr r2,[r5] */
    g_cpu.R[15] = 0x0806C34Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C34A = 1u;
    _cyc_0806C34A = 2u;
    uint32_t _base_0806C34A = g_cpu.R[5];
    uint32_t _off_0806C34A;
    _off_0806C34A = 0x00000000u;
    uint32_t _ea_0806C34A = _base_0806C34A + _off_0806C34A;
    uint32_t _post_0806C34A = _base_0806C34A + _off_0806C34A;
    _cyc_0806C34A += runtime_mem_cycles(_ea_0806C34A, 4u, 0u);
    uint32_t _v_0806C34A;
    { uint32_t _w = bus_read_u32(_ea_0806C34A & ~3u); uint32_t _rot = (_ea_0806C34A & 3u) * 8u; _v_0806C34A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_0806C34A;
    g_cpu.R[15] = 0x0806C34Cu;
    runtime_tick(_cyc_0806C34A);
    /* 0806C34C  0806c34c T ldr r3,[r5,#0x4] */
    g_cpu.R[15] = 0x0806C34Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C34C = 1u;
    _cyc_0806C34C = 2u;
    uint32_t _base_0806C34C = g_cpu.R[5];
    uint32_t _off_0806C34C;
    _off_0806C34C = 0x00000004u;
    uint32_t _ea_0806C34C = _base_0806C34C + _off_0806C34C;
    uint32_t _post_0806C34C = _base_0806C34C + _off_0806C34C;
    _cyc_0806C34C += runtime_mem_cycles(_ea_0806C34C, 4u, 0u);
    uint32_t _v_0806C34C;
    { uint32_t _w = bus_read_u32(_ea_0806C34C & ~3u); uint32_t _rot = (_ea_0806C34C & 3u) * 8u; _v_0806C34C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_0806C34C;
    g_cpu.R[15] = 0x0806C34Eu;
    runtime_tick(_cyc_0806C34C);
    /* 0806C34E  0806c34e T ldr r0,[r13] */
    g_cpu.R[15] = 0x0806C34Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C34E = 1u;
    _cyc_0806C34E = 2u;
    uint32_t _base_0806C34E = g_cpu.R[13];
    uint32_t _off_0806C34E;
    _off_0806C34E = 0x00000000u;
    uint32_t _ea_0806C34E = _base_0806C34E + _off_0806C34E;
    uint32_t _post_0806C34E = _base_0806C34E + _off_0806C34E;
    _cyc_0806C34E += runtime_mem_cycles(_ea_0806C34E, 4u, 0u);
    uint32_t _v_0806C34E;
    { uint32_t _w = bus_read_u32(_ea_0806C34E & ~3u); uint32_t _rot = (_ea_0806C34E & 3u) * 8u; _v_0806C34E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0806C34E;
    g_cpu.R[15] = 0x0806C350u;
    runtime_tick(_cyc_0806C34E);
    /* 0806C350  0806c350 T movs r1,#0x0 */
    g_cpu.R[15] = 0x0806C350u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C350 = 1u;
    _cyc_0806C350 = 1u;
    uint32_t _r_0806C350;
    _r_0806C350 = 0x00000000u;
    arm_set_nzc_logic(_r_0806C350, cpsr_c());
    g_cpu.R[1] = _r_0806C350;
    g_cpu.R[15] = 0x0806C352u;
    runtime_tick(_cyc_0806C350);
    /* 0806C352  0806c352 T bl.hi 0x0806d356 */
    g_cpu.R[15] = 0x0806C352u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C352 = 1u;
    _cyc_0806C352 = 1u;
    g_cpu.R[14] = 0x0806D356u;
    g_cpu.R[15] = 0x0806C354u;
    runtime_tick(_cyc_0806C352);
    /* 0806C354  0806c354 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0806C354u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C354 = 1u;
    _cyc_0806C354 = 3u;
    uint32_t _blt_0806C354 = (g_cpu.R[14] + 0x00000DBEu) & ~1u;
    g_cpu.R[14] = 0x0806C357u;
    g_cpu.R[15] = _blt_0806C354;
    runtime_call_push_return(0x0806C356u);
    runtime_tick(_cyc_0806C354);
    _cyc_0806C354 = 0u;
    runtime_dispatch(_blt_0806C354);
    if (g_cpu.R[15] != 0x0806C356u) { runtime_call_cancel_return(0x0806C356u); return; }
    g_cpu.R[15] = 0x0806C356u;
    runtime_tick(_cyc_0806C354);
    /* fall-through to 0x0806C356 */
    g_cpu.R[15] = 0x0806C356u;
    runtime_dispatch(0x0806C356u);
    return;
}

/* 0x0806C3C8  mode=thumb  end=0x0806C3D6  branches=1 */


/* 0x0806C370 thumb */
void gf_autojt_0806C330_01(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0806C370u);
    /* 0806C370  0806c370 T mov r3,r9 */
    g_cpu.R[15] = 0x0806C370u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C370 = 1u;
    _cyc_0806C370 = 1u;
    uint32_t _rm_0806C370 = g_cpu.R[9];
    uint32_t _op2_0806C370;
    uint32_t _co_0806C370;
    _op2_0806C370 = _rm_0806C370;
    _co_0806C370 = cpsr_c();
    uint32_t _r_0806C370;
    _r_0806C370 = _op2_0806C370;
    g_cpu.R[3] = _r_0806C370;
    g_cpu.R[15] = 0x0806C372u;
    runtime_tick(_cyc_0806C370);
    /* 0806C372  0806c372 T ldr r2,[r3] */
    g_cpu.R[15] = 0x0806C372u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C372 = 1u;
    _cyc_0806C372 = 2u;
    uint32_t _base_0806C372 = g_cpu.R[3];
    uint32_t _off_0806C372;
    _off_0806C372 = 0x00000000u;
    uint32_t _ea_0806C372 = _base_0806C372 + _off_0806C372;
    uint32_t _post_0806C372 = _base_0806C372 + _off_0806C372;
    _cyc_0806C372 += runtime_mem_cycles(_ea_0806C372, 4u, 0u);
    uint32_t _v_0806C372;
    { uint32_t _w = bus_read_u32(_ea_0806C372 & ~3u); uint32_t _rot = (_ea_0806C372 & 3u) * 8u; _v_0806C372 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_0806C372;
    g_cpu.R[15] = 0x0806C374u;
    runtime_tick(_cyc_0806C372);
    /* 0806C374  0806c374 T ldr r3,[r3,#0x4] */
    g_cpu.R[15] = 0x0806C374u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C374 = 1u;
    _cyc_0806C374 = 2u;
    uint32_t _base_0806C374 = g_cpu.R[3];
    uint32_t _off_0806C374;
    _off_0806C374 = 0x00000004u;
    uint32_t _ea_0806C374 = _base_0806C374 + _off_0806C374;
    uint32_t _post_0806C374 = _base_0806C374 + _off_0806C374;
    _cyc_0806C374 += runtime_mem_cycles(_ea_0806C374, 4u, 0u);
    uint32_t _v_0806C374;
    { uint32_t _w = bus_read_u32(_ea_0806C374 & ~3u); uint32_t _rot = (_ea_0806C374 & 3u) * 8u; _v_0806C374 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_0806C374;
    g_cpu.R[15] = 0x0806C376u;
    runtime_tick(_cyc_0806C374);
    /* 0806C376  0806c376 T ldr r0,[r13] */
    g_cpu.R[15] = 0x0806C376u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C376 = 1u;
    _cyc_0806C376 = 2u;
    uint32_t _base_0806C376 = g_cpu.R[13];
    uint32_t _off_0806C376;
    _off_0806C376 = 0x00000000u;
    uint32_t _ea_0806C376 = _base_0806C376 + _off_0806C376;
    uint32_t _post_0806C376 = _base_0806C376 + _off_0806C376;
    _cyc_0806C376 += runtime_mem_cycles(_ea_0806C376, 4u, 0u);
    uint32_t _v_0806C376;
    { uint32_t _w = bus_read_u32(_ea_0806C376 & ~3u); uint32_t _rot = (_ea_0806C376 & 3u) * 8u; _v_0806C376 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0806C376;
    g_cpu.R[15] = 0x0806C378u;
    runtime_tick(_cyc_0806C376);
    /* 0806C378  0806c378 T movs r1,#0x1 */
    g_cpu.R[15] = 0x0806C378u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C378 = 1u;
    _cyc_0806C378 = 1u;
    uint32_t _r_0806C378;
    _r_0806C378 = 0x00000001u;
    arm_set_nzc_logic(_r_0806C378, cpsr_c());
    g_cpu.R[1] = _r_0806C378;
    g_cpu.R[15] = 0x0806C37Au;
    runtime_tick(_cyc_0806C378);
    /* 0806C37A  0806c37a T bl.hi 0x0806d37e */
    g_cpu.R[15] = 0x0806C37Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C37A = 1u;
    _cyc_0806C37A = 1u;
    g_cpu.R[14] = 0x0806D37Eu;
    g_cpu.R[15] = 0x0806C37Cu;
    runtime_tick(_cyc_0806C37A);
    /* 0806C37C  0806c37c T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0806C37Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C37C = 1u;
    _cyc_0806C37C = 3u;
    uint32_t _blt_0806C37C = (g_cpu.R[14] + 0x00000D96u) & ~1u;
    g_cpu.R[14] = 0x0806C37Fu;
    g_cpu.R[15] = _blt_0806C37C;
    runtime_call_push_return(0x0806C37Eu);
    runtime_tick(_cyc_0806C37C);
    _cyc_0806C37C = 0u;
    runtime_dispatch(_blt_0806C37C);
    if (g_cpu.R[15] != 0x0806C37Eu) { runtime_call_cancel_return(0x0806C37Eu); return; }
    g_cpu.R[15] = 0x0806C37Eu;
    runtime_tick(_cyc_0806C37C);
    /* fall-through to 0x0806C37E */
    g_cpu.R[15] = 0x0806C37Eu;
    runtime_dispatch(0x0806C37Eu);
    return;
}

/* 0x0806C37E  mode=thumb  end=0x0806C38E  branches=1 */


/* 0x0806C39C thumb */
void gf_autojt_0806C330_02(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0806C39Cu);
    /* 0806C39C  0806c39c T mov r0,r9 */
    g_cpu.R[15] = 0x0806C39Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C39C = 1u;
    _cyc_0806C39C = 1u;
    uint32_t _rm_0806C39C = g_cpu.R[9];
    uint32_t _op2_0806C39C;
    uint32_t _co_0806C39C;
    _op2_0806C39C = _rm_0806C39C;
    _co_0806C39C = cpsr_c();
    uint32_t _r_0806C39C;
    _r_0806C39C = _op2_0806C39C;
    g_cpu.R[0] = _r_0806C39C;
    g_cpu.R[15] = 0x0806C39Eu;
    runtime_tick(_cyc_0806C39C);
    /* 0806C39E  0806c39e T ldr r2,[r0] */
    g_cpu.R[15] = 0x0806C39Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C39E = 1u;
    _cyc_0806C39E = 2u;
    uint32_t _base_0806C39E = g_cpu.R[0];
    uint32_t _off_0806C39E;
    _off_0806C39E = 0x00000000u;
    uint32_t _ea_0806C39E = _base_0806C39E + _off_0806C39E;
    uint32_t _post_0806C39E = _base_0806C39E + _off_0806C39E;
    _cyc_0806C39E += runtime_mem_cycles(_ea_0806C39E, 4u, 0u);
    uint32_t _v_0806C39E;
    { uint32_t _w = bus_read_u32(_ea_0806C39E & ~3u); uint32_t _rot = (_ea_0806C39E & 3u) * 8u; _v_0806C39E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_0806C39E;
    g_cpu.R[15] = 0x0806C3A0u;
    runtime_tick(_cyc_0806C39E);
    /* 0806C3A0  0806c3a0 T ldr r3,[r0,#0x4] */
    g_cpu.R[15] = 0x0806C3A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C3A0 = 1u;
    _cyc_0806C3A0 = 2u;
    uint32_t _base_0806C3A0 = g_cpu.R[0];
    uint32_t _off_0806C3A0;
    _off_0806C3A0 = 0x00000004u;
    uint32_t _ea_0806C3A0 = _base_0806C3A0 + _off_0806C3A0;
    uint32_t _post_0806C3A0 = _base_0806C3A0 + _off_0806C3A0;
    _cyc_0806C3A0 += runtime_mem_cycles(_ea_0806C3A0, 4u, 0u);
    uint32_t _v_0806C3A0;
    { uint32_t _w = bus_read_u32(_ea_0806C3A0 & ~3u); uint32_t _rot = (_ea_0806C3A0 & 3u) * 8u; _v_0806C3A0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_0806C3A0;
    g_cpu.R[15] = 0x0806C3A2u;
    runtime_tick(_cyc_0806C3A0);
    /* 0806C3A2  0806c3a2 T ldr r0,[r13] */
    g_cpu.R[15] = 0x0806C3A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C3A2 = 1u;
    _cyc_0806C3A2 = 2u;
    uint32_t _base_0806C3A2 = g_cpu.R[13];
    uint32_t _off_0806C3A2;
    _off_0806C3A2 = 0x00000000u;
    uint32_t _ea_0806C3A2 = _base_0806C3A2 + _off_0806C3A2;
    uint32_t _post_0806C3A2 = _base_0806C3A2 + _off_0806C3A2;
    _cyc_0806C3A2 += runtime_mem_cycles(_ea_0806C3A2, 4u, 0u);
    uint32_t _v_0806C3A2;
    { uint32_t _w = bus_read_u32(_ea_0806C3A2 & ~3u); uint32_t _rot = (_ea_0806C3A2 & 3u) * 8u; _v_0806C3A2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0806C3A2;
    g_cpu.R[15] = 0x0806C3A4u;
    runtime_tick(_cyc_0806C3A2);
    /* 0806C3A4  0806c3a4 T movs r1,#0x2 */
    g_cpu.R[15] = 0x0806C3A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C3A4 = 1u;
    _cyc_0806C3A4 = 1u;
    uint32_t _r_0806C3A4;
    _r_0806C3A4 = 0x00000002u;
    arm_set_nzc_logic(_r_0806C3A4, cpsr_c());
    g_cpu.R[1] = _r_0806C3A4;
    g_cpu.R[15] = 0x0806C3A6u;
    runtime_tick(_cyc_0806C3A4);
    /* 0806C3A6  0806c3a6 T bl.hi 0x0806d3aa */
    g_cpu.R[15] = 0x0806C3A6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C3A6 = 1u;
    _cyc_0806C3A6 = 1u;
    g_cpu.R[14] = 0x0806D3AAu;
    g_cpu.R[15] = 0x0806C3A8u;
    runtime_tick(_cyc_0806C3A6);
    /* 0806C3A8  0806c3a8 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0806C3A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C3A8 = 1u;
    _cyc_0806C3A8 = 3u;
    uint32_t _blt_0806C3A8 = (g_cpu.R[14] + 0x00000D6Au) & ~1u;
    g_cpu.R[14] = 0x0806C3ABu;
    g_cpu.R[15] = _blt_0806C3A8;
    runtime_call_push_return(0x0806C3AAu);
    runtime_tick(_cyc_0806C3A8);
    _cyc_0806C3A8 = 0u;
    runtime_dispatch(_blt_0806C3A8);
    if (g_cpu.R[15] != 0x0806C3AAu) { runtime_call_cancel_return(0x0806C3AAu); return; }
    g_cpu.R[15] = 0x0806C3AAu;
    runtime_tick(_cyc_0806C3A8);
    /* fall-through to 0x0806C3AA */
    g_cpu.R[15] = 0x0806C3AAu;
    runtime_dispatch(0x0806C3AAu);
    return;
}

/* 0x0806C3AA  mode=thumb  end=0x0806C3BA  branches=1 */


/* 0x0806C3C8 thumb */
void gf_autojt_0806C330_04(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0806C3C8u);
    /* 0806C3C8  0806c3c8 T ldr r1,[r15,#0x10] */
    g_cpu.R[15] = 0x0806C3C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C3C8 = 1u;
    _cyc_0806C3C8 = 2u;
    uint32_t _base_0806C3C8 = 0x0806C3CCu & ~3u;
    uint32_t _off_0806C3C8;
    _off_0806C3C8 = 0x00000010u;
    uint32_t _ea_0806C3C8 = _base_0806C3C8 + _off_0806C3C8;
    uint32_t _post_0806C3C8 = _base_0806C3C8 + _off_0806C3C8;
    _cyc_0806C3C8 += runtime_mem_cycles(_ea_0806C3C8, 4u, 0u);
    uint32_t _v_0806C3C8;
    { uint32_t _w = bus_read_u32(_ea_0806C3C8 & ~3u); uint32_t _rot = (_ea_0806C3C8 & 3u) * 8u; _v_0806C3C8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0806C3C8;
    g_cpu.R[15] = 0x0806C3CAu;
    runtime_tick(_cyc_0806C3C8);
    /* 0806C3CA  0806c3ca T ldr r5,[r15,#0x14] */
    g_cpu.R[15] = 0x0806C3CAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C3CA = 1u;
    _cyc_0806C3CA = 2u;
    uint32_t _base_0806C3CA = 0x0806C3CEu & ~3u;
    uint32_t _off_0806C3CA;
    _off_0806C3CA = 0x00000014u;
    uint32_t _ea_0806C3CA = _base_0806C3CA + _off_0806C3CA;
    uint32_t _post_0806C3CA = _base_0806C3CA + _off_0806C3CA;
    _cyc_0806C3CA += runtime_mem_cycles(_ea_0806C3CA, 4u, 0u);
    uint32_t _v_0806C3CA;
    { uint32_t _w = bus_read_u32(_ea_0806C3CA & ~3u); uint32_t _rot = (_ea_0806C3CA & 3u) * 8u; _v_0806C3CA = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[5] = _v_0806C3CA;
    g_cpu.R[15] = 0x0806C3CCu;
    runtime_tick(_cyc_0806C3CA);
    /* 0806C3CC  0806c3cc T adds r2,r1,r5 */
    g_cpu.R[15] = 0x0806C3CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C3CC = 1u;
    _cyc_0806C3CC = 1u;
    uint32_t _rm_0806C3CC = g_cpu.R[5];
    uint32_t _op2_0806C3CC;
    uint32_t _co_0806C3CC;
    _op2_0806C3CC = _rm_0806C3CC;
    _co_0806C3CC = cpsr_c();
    uint32_t _rn_0806C3CC = g_cpu.R[1];
    uint32_t _r_0806C3CC;
    _r_0806C3CC = _rn_0806C3CC + _op2_0806C3CC;
    arm_set_nzcv_add(_rn_0806C3CC, _op2_0806C3CC, _r_0806C3CC);
    g_cpu.R[2] = _r_0806C3CC;
    g_cpu.R[15] = 0x0806C3CEu;
    runtime_tick(_cyc_0806C3CC);
    /* 0806C3CE  0806c3ce T movs r0,#0x1 */
    g_cpu.R[15] = 0x0806C3CEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C3CE = 1u;
    _cyc_0806C3CE = 1u;
    uint32_t _r_0806C3CE;
    _r_0806C3CE = 0x00000001u;
    arm_set_nzc_logic(_r_0806C3CE, cpsr_c());
    g_cpu.R[0] = _r_0806C3CE;
    g_cpu.R[15] = 0x0806C3D0u;
    runtime_tick(_cyc_0806C3CE);
    /* 0806C3D0  0806c3d0 T str r0,[r2] */
    g_cpu.R[15] = 0x0806C3D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C3D0 = 1u;
    _cyc_0806C3D0 = 1u;
    uint32_t _base_0806C3D0 = g_cpu.R[2];
    uint32_t _off_0806C3D0;
    _off_0806C3D0 = 0x00000000u;
    uint32_t _ea_0806C3D0 = _base_0806C3D0 + _off_0806C3D0;
    uint32_t _post_0806C3D0 = _base_0806C3D0 + _off_0806C3D0;
    _cyc_0806C3D0 += runtime_mem_cycles(_ea_0806C3D0, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0806C3D0u, _ea_0806C3D0 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_0806C3D0 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0806C3D2u;
    runtime_tick(_cyc_0806C3D0);
    /* 0806C3D2  0806c3d2 T ldr r0,[r15,#0x10] */
    g_cpu.R[15] = 0x0806C3D2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C3D2 = 1u;
    _cyc_0806C3D2 = 2u;
    uint32_t _base_0806C3D2 = 0x0806C3D6u & ~3u;
    uint32_t _off_0806C3D2;
    _off_0806C3D2 = 0x00000010u;
    uint32_t _ea_0806C3D2 = _base_0806C3D2 + _off_0806C3D2;
    uint32_t _post_0806C3D2 = _base_0806C3D2 + _off_0806C3D2;
    _cyc_0806C3D2 += runtime_mem_cycles(_ea_0806C3D2, 4u, 0u);
    uint32_t _v_0806C3D2;
    { uint32_t _w = bus_read_u32(_ea_0806C3D2 & ~3u); uint32_t _rot = (_ea_0806C3D2 & 3u) * 8u; _v_0806C3D2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0806C3D2;
    g_cpu.R[15] = 0x0806C3D4u;
    runtime_tick(_cyc_0806C3D2);
    /* 0806C3D4  0806c3d4 T adds r1,r1,r0 */
    g_cpu.R[15] = 0x0806C3D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C3D4 = 1u;
    _cyc_0806C3D4 = 1u;
    uint32_t _rm_0806C3D4 = g_cpu.R[0];
    uint32_t _op2_0806C3D4;
    uint32_t _co_0806C3D4;
    _op2_0806C3D4 = _rm_0806C3D4;
    _co_0806C3D4 = cpsr_c();
    uint32_t _rn_0806C3D4 = g_cpu.R[1];
    uint32_t _r_0806C3D4;
    _r_0806C3D4 = _rn_0806C3D4 + _op2_0806C3D4;
    arm_set_nzcv_add(_rn_0806C3D4, _op2_0806C3D4, _r_0806C3D4);
    g_cpu.R[1] = _r_0806C3D4;
    g_cpu.R[15] = 0x0806C3D6u;
    runtime_tick(_cyc_0806C3D4);
    /* fall-through to 0x0806C3D6 */
    g_cpu.R[15] = 0x0806C3D6u;
    runtime_dispatch(0x0806C3D6u);
    return;
}

/* 0x0806C3D6  mode=thumb  end=0x0806C3DC  branches=1 */


/* 0x0806C3E8 thumb */
void gf_autojt_0806C330_03(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0806C3E8u);
    /* 0806C3E8  0806c3e8 T ldr r1,[r15,#0x14] */
    g_cpu.R[15] = 0x0806C3E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C3E8 = 1u;
    _cyc_0806C3E8 = 2u;
    uint32_t _base_0806C3E8 = 0x0806C3ECu & ~3u;
    uint32_t _off_0806C3E8;
    _off_0806C3E8 = 0x00000014u;
    uint32_t _ea_0806C3E8 = _base_0806C3E8 + _off_0806C3E8;
    uint32_t _post_0806C3E8 = _base_0806C3E8 + _off_0806C3E8;
    _cyc_0806C3E8 += runtime_mem_cycles(_ea_0806C3E8, 4u, 0u);
    uint32_t _v_0806C3E8;
    { uint32_t _w = bus_read_u32(_ea_0806C3E8 & ~3u); uint32_t _rot = (_ea_0806C3E8 & 3u) * 8u; _v_0806C3E8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0806C3E8;
    g_cpu.R[15] = 0x0806C3EAu;
    runtime_tick(_cyc_0806C3E8);
    /* 0806C3EA  0806c3ea T ldr r3,[r15,#0x18] */
    g_cpu.R[15] = 0x0806C3EAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C3EA = 1u;
    _cyc_0806C3EA = 2u;
    uint32_t _base_0806C3EA = 0x0806C3EEu & ~3u;
    uint32_t _off_0806C3EA;
    _off_0806C3EA = 0x00000018u;
    uint32_t _ea_0806C3EA = _base_0806C3EA + _off_0806C3EA;
    uint32_t _post_0806C3EA = _base_0806C3EA + _off_0806C3EA;
    _cyc_0806C3EA += runtime_mem_cycles(_ea_0806C3EA, 4u, 0u);
    uint32_t _v_0806C3EA;
    { uint32_t _w = bus_read_u32(_ea_0806C3EA & ~3u); uint32_t _rot = (_ea_0806C3EA & 3u) * 8u; _v_0806C3EA = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_0806C3EA;
    g_cpu.R[15] = 0x0806C3ECu;
    runtime_tick(_cyc_0806C3EA);
    /* 0806C3EC  0806c3ec T adds r2,r1,r3 */
    g_cpu.R[15] = 0x0806C3ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C3EC = 1u;
    _cyc_0806C3EC = 1u;
    uint32_t _rm_0806C3EC = g_cpu.R[3];
    uint32_t _op2_0806C3EC;
    uint32_t _co_0806C3EC;
    _op2_0806C3EC = _rm_0806C3EC;
    _co_0806C3EC = cpsr_c();
    uint32_t _rn_0806C3EC = g_cpu.R[1];
    uint32_t _r_0806C3EC;
    _r_0806C3EC = _rn_0806C3EC + _op2_0806C3EC;
    arm_set_nzcv_add(_rn_0806C3EC, _op2_0806C3EC, _r_0806C3EC);
    g_cpu.R[2] = _r_0806C3EC;
    g_cpu.R[15] = 0x0806C3EEu;
    runtime_tick(_cyc_0806C3EC);
    /* 0806C3EE  0806c3ee T movs r0,#0x1 */
    g_cpu.R[15] = 0x0806C3EEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C3EE = 1u;
    _cyc_0806C3EE = 1u;
    uint32_t _r_0806C3EE;
    _r_0806C3EE = 0x00000001u;
    arm_set_nzc_logic(_r_0806C3EE, cpsr_c());
    g_cpu.R[0] = _r_0806C3EE;
    g_cpu.R[15] = 0x0806C3F0u;
    runtime_tick(_cyc_0806C3EE);
    /* 0806C3F0  0806c3f0 T str r0,[r2] */
    g_cpu.R[15] = 0x0806C3F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C3F0 = 1u;
    _cyc_0806C3F0 = 1u;
    uint32_t _base_0806C3F0 = g_cpu.R[2];
    uint32_t _off_0806C3F0;
    _off_0806C3F0 = 0x00000000u;
    uint32_t _ea_0806C3F0 = _base_0806C3F0 + _off_0806C3F0;
    uint32_t _post_0806C3F0 = _base_0806C3F0 + _off_0806C3F0;
    _cyc_0806C3F0 += runtime_mem_cycles(_ea_0806C3F0, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0806C3F0u, _ea_0806C3F0 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_0806C3F0 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0806C3F2u;
    runtime_tick(_cyc_0806C3F0);
    /* 0806C3F2  0806c3f2 T ldr r4,[r15,#0x14] */
    g_cpu.R[15] = 0x0806C3F2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C3F2 = 1u;
    _cyc_0806C3F2 = 2u;
    uint32_t _base_0806C3F2 = 0x0806C3F6u & ~3u;
    uint32_t _off_0806C3F2;
    _off_0806C3F2 = 0x00000014u;
    uint32_t _ea_0806C3F2 = _base_0806C3F2 + _off_0806C3F2;
    uint32_t _post_0806C3F2 = _base_0806C3F2 + _off_0806C3F2;
    _cyc_0806C3F2 += runtime_mem_cycles(_ea_0806C3F2, 4u, 0u);
    uint32_t _v_0806C3F2;
    { uint32_t _w = bus_read_u32(_ea_0806C3F2 & ~3u); uint32_t _rot = (_ea_0806C3F2 & 3u) * 8u; _v_0806C3F2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[4] = _v_0806C3F2;
    g_cpu.R[15] = 0x0806C3F4u;
    runtime_tick(_cyc_0806C3F2);
    /* 0806C3F4  0806c3f4 T adds r0,r1,r4 */
    g_cpu.R[15] = 0x0806C3F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C3F4 = 1u;
    _cyc_0806C3F4 = 1u;
    uint32_t _rm_0806C3F4 = g_cpu.R[4];
    uint32_t _op2_0806C3F4;
    uint32_t _co_0806C3F4;
    _op2_0806C3F4 = _rm_0806C3F4;
    _co_0806C3F4 = cpsr_c();
    uint32_t _rn_0806C3F4 = g_cpu.R[1];
    uint32_t _r_0806C3F4;
    _r_0806C3F4 = _rn_0806C3F4 + _op2_0806C3F4;
    arm_set_nzcv_add(_rn_0806C3F4, _op2_0806C3F4, _r_0806C3F4);
    g_cpu.R[0] = _r_0806C3F4;
    g_cpu.R[15] = 0x0806C3F6u;
    runtime_tick(_cyc_0806C3F4);
    /* 0806C3F6  0806c3f6 T movs r2,#0x0 */
    g_cpu.R[15] = 0x0806C3F6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C3F6 = 1u;
    _cyc_0806C3F6 = 1u;
    uint32_t _r_0806C3F6;
    _r_0806C3F6 = 0x00000000u;
    arm_set_nzc_logic(_r_0806C3F6, cpsr_c());
    g_cpu.R[2] = _r_0806C3F6;
    g_cpu.R[15] = 0x0806C3F8u;
    runtime_tick(_cyc_0806C3F6);
    /* 0806C3F8  0806c3f8 T str r2,[r0] */
    g_cpu.R[15] = 0x0806C3F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C3F8 = 1u;
    _cyc_0806C3F8 = 1u;
    uint32_t _base_0806C3F8 = g_cpu.R[0];
    uint32_t _off_0806C3F8;
    _off_0806C3F8 = 0x00000000u;
    uint32_t _ea_0806C3F8 = _base_0806C3F8 + _off_0806C3F8;
    uint32_t _post_0806C3F8 = _base_0806C3F8 + _off_0806C3F8;
    _cyc_0806C3F8 += runtime_mem_cycles(_ea_0806C3F8, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0806C3F8u, _ea_0806C3F8 & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_0806C3F8 & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x0806C3FAu;
    runtime_tick(_cyc_0806C3F8);
    /* 0806C3FA  0806c3fa T ldr r5,[r15,#0x10] */
    g_cpu.R[15] = 0x0806C3FAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C3FA = 1u;
    _cyc_0806C3FA = 2u;
    uint32_t _base_0806C3FA = 0x0806C3FEu & ~3u;
    uint32_t _off_0806C3FA;
    _off_0806C3FA = 0x00000010u;
    uint32_t _ea_0806C3FA = _base_0806C3FA + _off_0806C3FA;
    uint32_t _post_0806C3FA = _base_0806C3FA + _off_0806C3FA;
    _cyc_0806C3FA += runtime_mem_cycles(_ea_0806C3FA, 4u, 0u);
    uint32_t _v_0806C3FA;
    { uint32_t _w = bus_read_u32(_ea_0806C3FA & ~3u); uint32_t _rot = (_ea_0806C3FA & 3u) * 8u; _v_0806C3FA = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[5] = _v_0806C3FA;
    g_cpu.R[15] = 0x0806C3FCu;
    runtime_tick(_cyc_0806C3FA);
    /* 0806C3FC  0806c3fc T adds r1,r1,r5 */
    g_cpu.R[15] = 0x0806C3FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C3FC = 1u;
    _cyc_0806C3FC = 1u;
    uint32_t _rm_0806C3FC = g_cpu.R[5];
    uint32_t _op2_0806C3FC;
    uint32_t _co_0806C3FC;
    _op2_0806C3FC = _rm_0806C3FC;
    _co_0806C3FC = cpsr_c();
    uint32_t _rn_0806C3FC = g_cpu.R[1];
    uint32_t _r_0806C3FC;
    _r_0806C3FC = _rn_0806C3FC + _op2_0806C3FC;
    arm_set_nzcv_add(_rn_0806C3FC, _op2_0806C3FC, _r_0806C3FC);
    g_cpu.R[1] = _r_0806C3FC;
    g_cpu.R[15] = 0x0806C3FEu;
    runtime_tick(_cyc_0806C3FC);
    /* 0806C3FE  0806c3fe T b 0x0806c426 */
    g_cpu.R[15] = 0x0806C3FEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C3FE = 1u;
    _cyc_0806C3FE = 3u;
    g_cpu.R[15] = 0x0806C426u;
    runtime_tick(_cyc_0806C3FE);
    GBARECOMP_TAIL_CALL(gf_tfunc_0806C426);
    g_cpu.R[15] = 0x0806C400u;
    runtime_tick(_cyc_0806C3FE);
    /* fall-through to 0x0806C400 */
    g_cpu.R[15] = 0x0806C400u;
    runtime_dispatch(0x0806C400u);
    return;
}

/* 0x0806C426  mode=thumb  end=0x0806C428  branches=4 */


/* 0x0806C410 thumb */
void gf_autojt_0806C330_05(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0806C410u);
    /* 0806C410  0806c410 T ldr r1,[r15,#0x24] */
    g_cpu.R[15] = 0x0806C410u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C410 = 1u;
    _cyc_0806C410 = 2u;
    uint32_t _base_0806C410 = 0x0806C414u & ~3u;
    uint32_t _off_0806C410;
    _off_0806C410 = 0x00000024u;
    uint32_t _ea_0806C410 = _base_0806C410 + _off_0806C410;
    uint32_t _post_0806C410 = _base_0806C410 + _off_0806C410;
    _cyc_0806C410 += runtime_mem_cycles(_ea_0806C410, 4u, 0u);
    uint32_t _v_0806C410;
    { uint32_t _w = bus_read_u32(_ea_0806C410 & ~3u); uint32_t _rot = (_ea_0806C410 & 3u) * 8u; _v_0806C410 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0806C410;
    g_cpu.R[15] = 0x0806C412u;
    runtime_tick(_cyc_0806C410);
    /* 0806C412  0806c412 T ldr r0,[r15,#0x28] */
    g_cpu.R[15] = 0x0806C412u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C412 = 1u;
    _cyc_0806C412 = 2u;
    uint32_t _base_0806C412 = 0x0806C416u & ~3u;
    uint32_t _off_0806C412;
    _off_0806C412 = 0x00000028u;
    uint32_t _ea_0806C412 = _base_0806C412 + _off_0806C412;
    uint32_t _post_0806C412 = _base_0806C412 + _off_0806C412;
    _cyc_0806C412 += runtime_mem_cycles(_ea_0806C412, 4u, 0u);
    uint32_t _v_0806C412;
    { uint32_t _w = bus_read_u32(_ea_0806C412 & ~3u); uint32_t _rot = (_ea_0806C412 & 3u) * 8u; _v_0806C412 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0806C412;
    g_cpu.R[15] = 0x0806C414u;
    runtime_tick(_cyc_0806C412);
    /* 0806C414  0806c414 T adds r2,r1,r0 */
    g_cpu.R[15] = 0x0806C414u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C414 = 1u;
    _cyc_0806C414 = 1u;
    uint32_t _rm_0806C414 = g_cpu.R[0];
    uint32_t _op2_0806C414;
    uint32_t _co_0806C414;
    _op2_0806C414 = _rm_0806C414;
    _co_0806C414 = cpsr_c();
    uint32_t _rn_0806C414 = g_cpu.R[1];
    uint32_t _r_0806C414;
    _r_0806C414 = _rn_0806C414 + _op2_0806C414;
    arm_set_nzcv_add(_rn_0806C414, _op2_0806C414, _r_0806C414);
    g_cpu.R[2] = _r_0806C414;
    g_cpu.R[15] = 0x0806C416u;
    runtime_tick(_cyc_0806C414);
    /* 0806C416  0806c416 T movs r0,#0x1 */
    g_cpu.R[15] = 0x0806C416u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C416 = 1u;
    _cyc_0806C416 = 1u;
    uint32_t _r_0806C416;
    _r_0806C416 = 0x00000001u;
    arm_set_nzc_logic(_r_0806C416, cpsr_c());
    g_cpu.R[0] = _r_0806C416;
    g_cpu.R[15] = 0x0806C418u;
    runtime_tick(_cyc_0806C416);
    /* 0806C418  0806c418 T str r0,[r2] */
    g_cpu.R[15] = 0x0806C418u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C418 = 1u;
    _cyc_0806C418 = 1u;
    uint32_t _base_0806C418 = g_cpu.R[2];
    uint32_t _off_0806C418;
    _off_0806C418 = 0x00000000u;
    uint32_t _ea_0806C418 = _base_0806C418 + _off_0806C418;
    uint32_t _post_0806C418 = _base_0806C418 + _off_0806C418;
    _cyc_0806C418 += runtime_mem_cycles(_ea_0806C418, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0806C418u, _ea_0806C418 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_0806C418 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0806C41Au;
    runtime_tick(_cyc_0806C418);
    /* 0806C41A  0806c41a T ldr r2,[r15,#0x24] */
    g_cpu.R[15] = 0x0806C41Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C41A = 1u;
    _cyc_0806C41A = 2u;
    uint32_t _base_0806C41A = 0x0806C41Eu & ~3u;
    uint32_t _off_0806C41A;
    _off_0806C41A = 0x00000024u;
    uint32_t _ea_0806C41A = _base_0806C41A + _off_0806C41A;
    uint32_t _post_0806C41A = _base_0806C41A + _off_0806C41A;
    _cyc_0806C41A += runtime_mem_cycles(_ea_0806C41A, 4u, 0u);
    uint32_t _v_0806C41A;
    { uint32_t _w = bus_read_u32(_ea_0806C41A & ~3u); uint32_t _rot = (_ea_0806C41A & 3u) * 8u; _v_0806C41A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_0806C41A;
    g_cpu.R[15] = 0x0806C41Cu;
    runtime_tick(_cyc_0806C41A);
    /* 0806C41C  0806c41c T adds r0,r1,r2 */
    g_cpu.R[15] = 0x0806C41Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C41C = 1u;
    _cyc_0806C41C = 1u;
    uint32_t _rm_0806C41C = g_cpu.R[2];
    uint32_t _op2_0806C41C;
    uint32_t _co_0806C41C;
    _op2_0806C41C = _rm_0806C41C;
    _co_0806C41C = cpsr_c();
    uint32_t _rn_0806C41C = g_cpu.R[1];
    uint32_t _r_0806C41C;
    _r_0806C41C = _rn_0806C41C + _op2_0806C41C;
    arm_set_nzcv_add(_rn_0806C41C, _op2_0806C41C, _r_0806C41C);
    g_cpu.R[0] = _r_0806C41C;
    g_cpu.R[15] = 0x0806C41Eu;
    runtime_tick(_cyc_0806C41C);
    /* 0806C41E  0806c41e T movs r2,#0x0 */
    g_cpu.R[15] = 0x0806C41Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C41E = 1u;
    _cyc_0806C41E = 1u;
    uint32_t _r_0806C41E;
    _r_0806C41E = 0x00000000u;
    arm_set_nzc_logic(_r_0806C41E, cpsr_c());
    g_cpu.R[2] = _r_0806C41E;
    g_cpu.R[15] = 0x0806C420u;
    runtime_tick(_cyc_0806C41E);
    /* 0806C420  0806c420 T str r2,[r0] */
    g_cpu.R[15] = 0x0806C420u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C420 = 1u;
    _cyc_0806C420 = 1u;
    uint32_t _base_0806C420 = g_cpu.R[0];
    uint32_t _off_0806C420;
    _off_0806C420 = 0x00000000u;
    uint32_t _ea_0806C420 = _base_0806C420 + _off_0806C420;
    uint32_t _post_0806C420 = _base_0806C420 + _off_0806C420;
    _cyc_0806C420 += runtime_mem_cycles(_ea_0806C420, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0806C420u, _ea_0806C420 & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_0806C420 & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x0806C422u;
    runtime_tick(_cyc_0806C420);
    /* 0806C422  0806c422 T ldr r3,[r15,#0x20] */
    g_cpu.R[15] = 0x0806C422u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C422 = 1u;
    _cyc_0806C422 = 2u;
    uint32_t _base_0806C422 = 0x0806C426u & ~3u;
    uint32_t _off_0806C422;
    _off_0806C422 = 0x00000020u;
    uint32_t _ea_0806C422 = _base_0806C422 + _off_0806C422;
    uint32_t _post_0806C422 = _base_0806C422 + _off_0806C422;
    _cyc_0806C422 += runtime_mem_cycles(_ea_0806C422, 4u, 0u);
    uint32_t _v_0806C422;
    { uint32_t _w = bus_read_u32(_ea_0806C422 & ~3u); uint32_t _rot = (_ea_0806C422 & 3u) * 8u; _v_0806C422 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_0806C422;
    g_cpu.R[15] = 0x0806C424u;
    runtime_tick(_cyc_0806C422);
    /* 0806C424  0806c424 T adds r1,r1,r3 */
    g_cpu.R[15] = 0x0806C424u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806C424 = 1u;
    _cyc_0806C424 = 1u;
    uint32_t _rm_0806C424 = g_cpu.R[3];
    uint32_t _op2_0806C424;
    uint32_t _co_0806C424;
    _op2_0806C424 = _rm_0806C424;
    _co_0806C424 = cpsr_c();
    uint32_t _rn_0806C424 = g_cpu.R[1];
    uint32_t _r_0806C424;
    _r_0806C424 = _rn_0806C424 + _op2_0806C424;
    arm_set_nzcv_add(_rn_0806C424, _op2_0806C424, _r_0806C424);
    g_cpu.R[1] = _r_0806C424;
    g_cpu.R[15] = 0x0806C426u;
    runtime_tick(_cyc_0806C424);
    /* fall-through to 0x0806C426 */
    g_cpu.R[15] = 0x0806C426u;
    runtime_dispatch(0x0806C426u);
    return;
}

/* 0x0806C428  mode=thumb  end=0x0806C438  branches=4 */


/* 0x08086398 thumb */
void gf_autojt_08086270_00(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08086398u);
    /* 08086398  08086398 T cmps r2,#0x9 */
    g_cpu.R[15] = 0x08086398u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086398 = 1u;
    _cyc_08086398 = 1u;
    uint32_t _rn_08086398 = g_cpu.R[2];
    uint32_t _r_08086398;
    _r_08086398 = _rn_08086398 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08086398, 0x00000009u, _r_08086398);
    g_cpu.R[15] = 0x0808639Au;
    runtime_tick(_cyc_08086398);
    /* 0808639A  0808639a T beq 0x080863a2 */
    g_cpu.R[15] = 0x0808639Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808639A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808639A = 3u;
        g_cpu.R[15] = 0x080863A2u;
        runtime_tick(_cyc_0808639A);
        GBARECOMP_TAIL_CALL(gf_tfunc_080863A2);
    }
    g_cpu.R[15] = 0x0808639Cu;
    runtime_tick(_cyc_0808639A);
    /* 0808639C  0808639c T cmps r2,#0xb */
    g_cpu.R[15] = 0x0808639Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808639C = 1u;
    _cyc_0808639C = 1u;
    uint32_t _rn_0808639C = g_cpu.R[2];
    uint32_t _r_0808639C;
    _r_0808639C = _rn_0808639C - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_0808639C, 0x0000000Bu, _r_0808639C);
    g_cpu.R[15] = 0x0808639Eu;
    runtime_tick(_cyc_0808639C);
    /* 0808639E  0808639e T beq 0x080863ac */
    g_cpu.R[15] = 0x0808639Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808639E = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808639E = 3u;
        g_cpu.R[15] = 0x080863ACu;
        runtime_tick(_cyc_0808639E);
        GBARECOMP_TAIL_CALL(gf_tfunc_080863AC);
    }
    g_cpu.R[15] = 0x080863A0u;
    runtime_tick(_cyc_0808639E);
    /* 080863A0  080863a0 T b 0x0808663c */
    g_cpu.R[15] = 0x080863A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080863A0 = 1u;
    _cyc_080863A0 = 3u;
    g_cpu.R[15] = 0x0808663Cu;
    runtime_tick(_cyc_080863A0);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808663C);
    g_cpu.R[15] = 0x080863A2u;
    runtime_tick(_cyc_080863A0);
    /* fall-through to 0x080863A2 */
    g_cpu.R[15] = 0x080863A2u;
    runtime_dispatch(0x080863A2u);
    return;
}

/* 0x080863AC  mode=thumb  end=0x080863B0  branches=1 */


/* 0x080863B4 thumb */
void gf_autojt_08086270_01(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080863B4u);
    /* 080863B4  080863b4 T cmps r2,#0x9 */
    g_cpu.R[15] = 0x080863B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080863B4 = 1u;
    _cyc_080863B4 = 1u;
    uint32_t _rn_080863B4 = g_cpu.R[2];
    uint32_t _r_080863B4;
    _r_080863B4 = _rn_080863B4 - 0x00000009u;
    arm_set_nzcv_sub(_rn_080863B4, 0x00000009u, _r_080863B4);
    g_cpu.R[15] = 0x080863B6u;
    runtime_tick(_cyc_080863B4);
    /* 080863B6  080863b6 T beq 0x080863be */
    g_cpu.R[15] = 0x080863B6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080863B6 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080863B6 = 3u;
        g_cpu.R[15] = 0x080863BEu;
        runtime_tick(_cyc_080863B6);
        GBARECOMP_TAIL_CALL(gf_tfunc_080863BE);
    }
    g_cpu.R[15] = 0x080863B8u;
    runtime_tick(_cyc_080863B6);
    /* 080863B8  080863b8 T cmps r2,#0xb */
    g_cpu.R[15] = 0x080863B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080863B8 = 1u;
    _cyc_080863B8 = 1u;
    uint32_t _rn_080863B8 = g_cpu.R[2];
    uint32_t _r_080863B8;
    _r_080863B8 = _rn_080863B8 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_080863B8, 0x0000000Bu, _r_080863B8);
    g_cpu.R[15] = 0x080863BAu;
    runtime_tick(_cyc_080863B8);
    /* 080863BA  080863ba T beq 0x080863c8 */
    g_cpu.R[15] = 0x080863BAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080863BA = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080863BA = 3u;
        g_cpu.R[15] = 0x080863C8u;
        runtime_tick(_cyc_080863BA);
        GBARECOMP_TAIL_CALL(gf_tfunc_080863C8);
    }
    g_cpu.R[15] = 0x080863BCu;
    runtime_tick(_cyc_080863BA);
    /* 080863BC  080863bc T b 0x0808663c */
    g_cpu.R[15] = 0x080863BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080863BC = 1u;
    _cyc_080863BC = 3u;
    g_cpu.R[15] = 0x0808663Cu;
    runtime_tick(_cyc_080863BC);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808663C);
    g_cpu.R[15] = 0x080863BEu;
    runtime_tick(_cyc_080863BC);
    /* fall-through to 0x080863BE */
    g_cpu.R[15] = 0x080863BEu;
    runtime_dispatch(0x080863BEu);
    return;
}

/* 0x080863D0  mode=thumb  end=0x080863DA  branches=3 */


/* 0x080863D0 thumb */
void gf_autojt_08086270_02(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080863D0u);
    /* 080863D0  080863d0 T cmps r2,#0x9 */
    g_cpu.R[15] = 0x080863D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080863D0 = 1u;
    _cyc_080863D0 = 1u;
    uint32_t _rn_080863D0 = g_cpu.R[2];
    uint32_t _r_080863D0;
    _r_080863D0 = _rn_080863D0 - 0x00000009u;
    arm_set_nzcv_sub(_rn_080863D0, 0x00000009u, _r_080863D0);
    g_cpu.R[15] = 0x080863D2u;
    runtime_tick(_cyc_080863D0);
    /* 080863D2  080863d2 T beq 0x080863da */
    g_cpu.R[15] = 0x080863D2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080863D2 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080863D2 = 3u;
        g_cpu.R[15] = 0x080863DAu;
        runtime_tick(_cyc_080863D2);
        GBARECOMP_TAIL_CALL(gf_tfunc_080863DA);
    }
    g_cpu.R[15] = 0x080863D4u;
    runtime_tick(_cyc_080863D2);
    /* 080863D4  080863d4 T cmps r2,#0xb */
    g_cpu.R[15] = 0x080863D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080863D4 = 1u;
    _cyc_080863D4 = 1u;
    uint32_t _rn_080863D4 = g_cpu.R[2];
    uint32_t _r_080863D4;
    _r_080863D4 = _rn_080863D4 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_080863D4, 0x0000000Bu, _r_080863D4);
    g_cpu.R[15] = 0x080863D6u;
    runtime_tick(_cyc_080863D4);
    /* 080863D6  080863d6 T beq 0x080863e4 */
    g_cpu.R[15] = 0x080863D6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080863D6 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080863D6 = 3u;
        g_cpu.R[15] = 0x080863E4u;
        runtime_tick(_cyc_080863D6);
        GBARECOMP_TAIL_CALL(gf_tfunc_080863E4);
    }
    g_cpu.R[15] = 0x080863D8u;
    runtime_tick(_cyc_080863D6);
    /* 080863D8  080863d8 T b 0x0808663c */
    g_cpu.R[15] = 0x080863D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080863D8 = 1u;
    _cyc_080863D8 = 3u;
    g_cpu.R[15] = 0x0808663Cu;
    runtime_tick(_cyc_080863D8);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808663C);
    g_cpu.R[15] = 0x080863DAu;
    runtime_tick(_cyc_080863D8);
    /* fall-through to 0x080863DA */
    g_cpu.R[15] = 0x080863DAu;
    runtime_dispatch(0x080863DAu);
    return;
}

/* 0x080863DA  mode=thumb  end=0x080863DE  branches=1 */


/* 0x080863EC thumb */
void gf_autojt_08086270_04(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080863ECu);
    /* 080863EC  080863ec T cmps r2,#0x9 */
    g_cpu.R[15] = 0x080863ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080863EC = 1u;
    _cyc_080863EC = 1u;
    uint32_t _rn_080863EC = g_cpu.R[2];
    uint32_t _r_080863EC;
    _r_080863EC = _rn_080863EC - 0x00000009u;
    arm_set_nzcv_sub(_rn_080863EC, 0x00000009u, _r_080863EC);
    g_cpu.R[15] = 0x080863EEu;
    runtime_tick(_cyc_080863EC);
    /* 080863EE  080863ee T beq 0x080863f6 */
    g_cpu.R[15] = 0x080863EEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080863EE = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080863EE = 3u;
        g_cpu.R[15] = 0x080863F6u;
        runtime_tick(_cyc_080863EE);
        GBARECOMP_TAIL_CALL(gf_tfunc_080863F6);
    }
    g_cpu.R[15] = 0x080863F0u;
    runtime_tick(_cyc_080863EE);
    /* 080863F0  080863f0 T cmps r2,#0xb */
    g_cpu.R[15] = 0x080863F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080863F0 = 1u;
    _cyc_080863F0 = 1u;
    uint32_t _rn_080863F0 = g_cpu.R[2];
    uint32_t _r_080863F0;
    _r_080863F0 = _rn_080863F0 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_080863F0, 0x0000000Bu, _r_080863F0);
    g_cpu.R[15] = 0x080863F2u;
    runtime_tick(_cyc_080863F0);
    /* 080863F2  080863f2 T beq 0x08086400 */
    g_cpu.R[15] = 0x080863F2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080863F2 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080863F2 = 3u;
        g_cpu.R[15] = 0x08086400u;
        runtime_tick(_cyc_080863F2);
        GBARECOMP_TAIL_CALL(gf_tfunc_08086400);
    }
    g_cpu.R[15] = 0x080863F4u;
    runtime_tick(_cyc_080863F2);
    /* 080863F4  080863f4 T b 0x0808663c */
    g_cpu.R[15] = 0x080863F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080863F4 = 1u;
    _cyc_080863F4 = 3u;
    g_cpu.R[15] = 0x0808663Cu;
    runtime_tick(_cyc_080863F4);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808663C);
    g_cpu.R[15] = 0x080863F6u;
    runtime_tick(_cyc_080863F4);
    /* fall-through to 0x080863F6 */
    g_cpu.R[15] = 0x080863F6u;
    runtime_dispatch(0x080863F6u);
    return;
}

/* 0x080863F6  mode=thumb  end=0x080863FA  branches=1 */


/* 0x08086408 thumb */
void gf_autojt_08086270_03(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08086408u);
    /* 08086408  08086408 T cmps r2,#0x9 */
    g_cpu.R[15] = 0x08086408u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086408 = 1u;
    _cyc_08086408 = 1u;
    uint32_t _rn_08086408 = g_cpu.R[2];
    uint32_t _r_08086408;
    _r_08086408 = _rn_08086408 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08086408, 0x00000009u, _r_08086408);
    g_cpu.R[15] = 0x0808640Au;
    runtime_tick(_cyc_08086408);
    /* 0808640A  0808640a T beq 0x08086412 */
    g_cpu.R[15] = 0x0808640Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808640A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808640A = 3u;
        g_cpu.R[15] = 0x08086412u;
        runtime_tick(_cyc_0808640A);
        GBARECOMP_TAIL_CALL(gf_tfunc_08086412);
    }
    g_cpu.R[15] = 0x0808640Cu;
    runtime_tick(_cyc_0808640A);
    /* 0808640C  0808640c T cmps r2,#0xb */
    g_cpu.R[15] = 0x0808640Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808640C = 1u;
    _cyc_0808640C = 1u;
    uint32_t _rn_0808640C = g_cpu.R[2];
    uint32_t _r_0808640C;
    _r_0808640C = _rn_0808640C - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_0808640C, 0x0000000Bu, _r_0808640C);
    g_cpu.R[15] = 0x0808640Eu;
    runtime_tick(_cyc_0808640C);
    /* 0808640E  0808640e T beq 0x0808641c */
    g_cpu.R[15] = 0x0808640Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808640E = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808640E = 3u;
        g_cpu.R[15] = 0x0808641Cu;
        runtime_tick(_cyc_0808640E);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808641C);
    }
    g_cpu.R[15] = 0x08086410u;
    runtime_tick(_cyc_0808640E);
    /* 08086410  08086410 T b 0x0808663c */
    g_cpu.R[15] = 0x08086410u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086410 = 1u;
    _cyc_08086410 = 3u;
    g_cpu.R[15] = 0x0808663Cu;
    runtime_tick(_cyc_08086410);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808663C);
    g_cpu.R[15] = 0x08086412u;
    runtime_tick(_cyc_08086410);
    /* fall-through to 0x08086412 */
    g_cpu.R[15] = 0x08086412u;
    runtime_dispatch(0x08086412u);
    return;
}

/* 0x08086440  mode=thumb  end=0x0808644A  branches=3 */


/* 0x08086424 thumb */
void gf_autojt_08086270_06(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08086424u);
    /* 08086424  08086424 T cmps r2,#0x9 */
    g_cpu.R[15] = 0x08086424u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086424 = 1u;
    _cyc_08086424 = 1u;
    uint32_t _rn_08086424 = g_cpu.R[2];
    uint32_t _r_08086424;
    _r_08086424 = _rn_08086424 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08086424, 0x00000009u, _r_08086424);
    g_cpu.R[15] = 0x08086426u;
    runtime_tick(_cyc_08086424);
    /* 08086426  08086426 T beq 0x0808642e */
    g_cpu.R[15] = 0x08086426u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086426 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08086426 = 3u;
        g_cpu.R[15] = 0x0808642Eu;
        runtime_tick(_cyc_08086426);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808642E);
    }
    g_cpu.R[15] = 0x08086428u;
    runtime_tick(_cyc_08086426);
    /* 08086428  08086428 T cmps r2,#0xb */
    g_cpu.R[15] = 0x08086428u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086428 = 1u;
    _cyc_08086428 = 1u;
    uint32_t _rn_08086428 = g_cpu.R[2];
    uint32_t _r_08086428;
    _r_08086428 = _rn_08086428 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_08086428, 0x0000000Bu, _r_08086428);
    g_cpu.R[15] = 0x0808642Au;
    runtime_tick(_cyc_08086428);
    /* 0808642A  0808642a T beq 0x08086438 */
    g_cpu.R[15] = 0x0808642Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808642A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808642A = 3u;
        g_cpu.R[15] = 0x08086438u;
        runtime_tick(_cyc_0808642A);
        GBARECOMP_TAIL_CALL(gf_tfunc_08086438);
    }
    g_cpu.R[15] = 0x0808642Cu;
    runtime_tick(_cyc_0808642A);
    /* 0808642C  0808642c T b 0x0808663c */
    g_cpu.R[15] = 0x0808642Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808642C = 1u;
    _cyc_0808642C = 3u;
    g_cpu.R[15] = 0x0808663Cu;
    runtime_tick(_cyc_0808642C);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808663C);
    g_cpu.R[15] = 0x0808642Eu;
    runtime_tick(_cyc_0808642C);
    /* fall-through to 0x0808642E */
    g_cpu.R[15] = 0x0808642Eu;
    runtime_dispatch(0x0808642Eu);
    return;
}

/* 0x0808642E  mode=thumb  end=0x08086432  branches=1 */


/* 0x08086440 thumb */
void gf_autojt_08086270_07(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08086440u);
    /* 08086440  08086440 T cmps r2,#0x9 */
    g_cpu.R[15] = 0x08086440u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086440 = 1u;
    _cyc_08086440 = 1u;
    uint32_t _rn_08086440 = g_cpu.R[2];
    uint32_t _r_08086440;
    _r_08086440 = _rn_08086440 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08086440, 0x00000009u, _r_08086440);
    g_cpu.R[15] = 0x08086442u;
    runtime_tick(_cyc_08086440);
    /* 08086442  08086442 T beq 0x0808644a */
    g_cpu.R[15] = 0x08086442u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086442 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08086442 = 3u;
        g_cpu.R[15] = 0x0808644Au;
        runtime_tick(_cyc_08086442);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808644A);
    }
    g_cpu.R[15] = 0x08086444u;
    runtime_tick(_cyc_08086442);
    /* 08086444  08086444 T cmps r2,#0xb */
    g_cpu.R[15] = 0x08086444u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086444 = 1u;
    _cyc_08086444 = 1u;
    uint32_t _rn_08086444 = g_cpu.R[2];
    uint32_t _r_08086444;
    _r_08086444 = _rn_08086444 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_08086444, 0x0000000Bu, _r_08086444);
    g_cpu.R[15] = 0x08086446u;
    runtime_tick(_cyc_08086444);
    /* 08086446  08086446 T beq 0x08086454 */
    g_cpu.R[15] = 0x08086446u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086446 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08086446 = 3u;
        g_cpu.R[15] = 0x08086454u;
        runtime_tick(_cyc_08086446);
        GBARECOMP_TAIL_CALL(gf_tfunc_08086454);
    }
    g_cpu.R[15] = 0x08086448u;
    runtime_tick(_cyc_08086446);
    /* 08086448  08086448 T b 0x0808663c */
    g_cpu.R[15] = 0x08086448u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086448 = 1u;
    _cyc_08086448 = 3u;
    g_cpu.R[15] = 0x0808663Cu;
    runtime_tick(_cyc_08086448);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808663C);
    g_cpu.R[15] = 0x0808644Au;
    runtime_tick(_cyc_08086448);
    /* fall-through to 0x0808644A */
    g_cpu.R[15] = 0x0808644Au;
    runtime_dispatch(0x0808644Au);
    return;
}

/* 0x0808644A  mode=thumb  end=0x0808644E  branches=1 */


/* 0x0808645C thumb */
void gf_autojt_08086270_08(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808645Cu);
    /* 0808645C  0808645c T cmps r2,#0x9 */
    g_cpu.R[15] = 0x0808645Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808645C = 1u;
    _cyc_0808645C = 1u;
    uint32_t _rn_0808645C = g_cpu.R[2];
    uint32_t _r_0808645C;
    _r_0808645C = _rn_0808645C - 0x00000009u;
    arm_set_nzcv_sub(_rn_0808645C, 0x00000009u, _r_0808645C);
    g_cpu.R[15] = 0x0808645Eu;
    runtime_tick(_cyc_0808645C);
    /* 0808645E  0808645e T beq 0x08086466 */
    g_cpu.R[15] = 0x0808645Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808645E = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808645E = 3u;
        g_cpu.R[15] = 0x08086466u;
        runtime_tick(_cyc_0808645E);
        GBARECOMP_TAIL_CALL(gf_tfunc_08086466);
    }
    g_cpu.R[15] = 0x08086460u;
    runtime_tick(_cyc_0808645E);
    /* 08086460  08086460 T cmps r2,#0xb */
    g_cpu.R[15] = 0x08086460u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086460 = 1u;
    _cyc_08086460 = 1u;
    uint32_t _rn_08086460 = g_cpu.R[2];
    uint32_t _r_08086460;
    _r_08086460 = _rn_08086460 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_08086460, 0x0000000Bu, _r_08086460);
    g_cpu.R[15] = 0x08086462u;
    runtime_tick(_cyc_08086460);
    /* 08086462  08086462 T beq 0x08086470 */
    g_cpu.R[15] = 0x08086462u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086462 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08086462 = 3u;
        g_cpu.R[15] = 0x08086470u;
        runtime_tick(_cyc_08086462);
        GBARECOMP_TAIL_CALL(gf_tfunc_08086470);
    }
    g_cpu.R[15] = 0x08086464u;
    runtime_tick(_cyc_08086462);
    /* 08086464  08086464 T b 0x0808663c */
    g_cpu.R[15] = 0x08086464u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086464 = 1u;
    _cyc_08086464 = 3u;
    g_cpu.R[15] = 0x0808663Cu;
    runtime_tick(_cyc_08086464);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808663C);
    g_cpu.R[15] = 0x08086466u;
    runtime_tick(_cyc_08086464);
    /* fall-through to 0x08086466 */
    g_cpu.R[15] = 0x08086466u;
    runtime_dispatch(0x08086466u);
    return;
}

/* 0x08086470  mode=thumb  end=0x08086474  branches=1 */


/* 0x08086478 thumb */
void gf_autojt_08086270_05(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08086478u);
    /* 08086478  08086478 T cmps r2,#0x9 */
    g_cpu.R[15] = 0x08086478u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086478 = 1u;
    _cyc_08086478 = 1u;
    uint32_t _rn_08086478 = g_cpu.R[2];
    uint32_t _r_08086478;
    _r_08086478 = _rn_08086478 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08086478, 0x00000009u, _r_08086478);
    g_cpu.R[15] = 0x0808647Au;
    runtime_tick(_cyc_08086478);
    /* 0808647A  0808647a T beq 0x08086482 */
    g_cpu.R[15] = 0x0808647Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808647A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808647A = 3u;
        g_cpu.R[15] = 0x08086482u;
        runtime_tick(_cyc_0808647A);
        GBARECOMP_TAIL_CALL(gf_tfunc_08086482);
    }
    g_cpu.R[15] = 0x0808647Cu;
    runtime_tick(_cyc_0808647A);
    /* 0808647C  0808647c T cmps r2,#0xb */
    g_cpu.R[15] = 0x0808647Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808647C = 1u;
    _cyc_0808647C = 1u;
    uint32_t _rn_0808647C = g_cpu.R[2];
    uint32_t _r_0808647C;
    _r_0808647C = _rn_0808647C - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_0808647C, 0x0000000Bu, _r_0808647C);
    g_cpu.R[15] = 0x0808647Eu;
    runtime_tick(_cyc_0808647C);
    /* 0808647E  0808647e T beq 0x0808648c */
    g_cpu.R[15] = 0x0808647Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808647E = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808647E = 3u;
        g_cpu.R[15] = 0x0808648Cu;
        runtime_tick(_cyc_0808647E);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808648C);
    }
    g_cpu.R[15] = 0x08086480u;
    runtime_tick(_cyc_0808647E);
    /* 08086480  08086480 T b 0x0808663c */
    g_cpu.R[15] = 0x08086480u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086480 = 1u;
    _cyc_08086480 = 3u;
    g_cpu.R[15] = 0x0808663Cu;
    runtime_tick(_cyc_08086480);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808663C);
    g_cpu.R[15] = 0x08086482u;
    runtime_tick(_cyc_08086480);
    /* fall-through to 0x08086482 */
    g_cpu.R[15] = 0x08086482u;
    runtime_dispatch(0x08086482u);
    return;
}

/* 0x0808648C  mode=thumb  end=0x08086490  branches=1 */


/* 0x08086494 thumb */
void gf_autojt_08086270_09(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08086494u);
    /* 08086494  08086494 T cmps r2,#0x9 */
    g_cpu.R[15] = 0x08086494u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086494 = 1u;
    _cyc_08086494 = 1u;
    uint32_t _rn_08086494 = g_cpu.R[2];
    uint32_t _r_08086494;
    _r_08086494 = _rn_08086494 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08086494, 0x00000009u, _r_08086494);
    g_cpu.R[15] = 0x08086496u;
    runtime_tick(_cyc_08086494);
    /* 08086496  08086496 T beq 0x0808649e */
    g_cpu.R[15] = 0x08086496u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086496 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08086496 = 3u;
        g_cpu.R[15] = 0x0808649Eu;
        runtime_tick(_cyc_08086496);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808649E);
    }
    g_cpu.R[15] = 0x08086498u;
    runtime_tick(_cyc_08086496);
    /* 08086498  08086498 T cmps r2,#0xb */
    g_cpu.R[15] = 0x08086498u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086498 = 1u;
    _cyc_08086498 = 1u;
    uint32_t _rn_08086498 = g_cpu.R[2];
    uint32_t _r_08086498;
    _r_08086498 = _rn_08086498 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_08086498, 0x0000000Bu, _r_08086498);
    g_cpu.R[15] = 0x0808649Au;
    runtime_tick(_cyc_08086498);
    /* 0808649A  0808649a T beq 0x080864a8 */
    g_cpu.R[15] = 0x0808649Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808649A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808649A = 3u;
        g_cpu.R[15] = 0x080864A8u;
        runtime_tick(_cyc_0808649A);
        GBARECOMP_TAIL_CALL(gf_tfunc_080864A8);
    }
    g_cpu.R[15] = 0x0808649Cu;
    runtime_tick(_cyc_0808649A);
    /* 0808649C  0808649c T b 0x0808663c */
    g_cpu.R[15] = 0x0808649Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808649C = 1u;
    _cyc_0808649C = 3u;
    g_cpu.R[15] = 0x0808663Cu;
    runtime_tick(_cyc_0808649C);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808663C);
    g_cpu.R[15] = 0x0808649Eu;
    runtime_tick(_cyc_0808649C);
    /* fall-through to 0x0808649E */
    g_cpu.R[15] = 0x0808649Eu;
    runtime_dispatch(0x0808649Eu);
    return;
}

/* 0x080864A8  mode=thumb  end=0x080864AC  branches=1 */


/* 0x080864B0 thumb */
void gf_autojt_08086270_48(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080864B0u);
    /* 080864B0  080864b0 T cmps r2,#0x9 */
    g_cpu.R[15] = 0x080864B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080864B0 = 1u;
    _cyc_080864B0 = 1u;
    uint32_t _rn_080864B0 = g_cpu.R[2];
    uint32_t _r_080864B0;
    _r_080864B0 = _rn_080864B0 - 0x00000009u;
    arm_set_nzcv_sub(_rn_080864B0, 0x00000009u, _r_080864B0);
    g_cpu.R[15] = 0x080864B2u;
    runtime_tick(_cyc_080864B0);
    /* 080864B2  080864b2 T beq 0x080864ba */
    g_cpu.R[15] = 0x080864B2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080864B2 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080864B2 = 3u;
        g_cpu.R[15] = 0x080864BAu;
        runtime_tick(_cyc_080864B2);
        GBARECOMP_TAIL_CALL(gf_tfunc_080864BA);
    }
    g_cpu.R[15] = 0x080864B4u;
    runtime_tick(_cyc_080864B2);
    /* 080864B4  080864b4 T cmps r2,#0xb */
    g_cpu.R[15] = 0x080864B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080864B4 = 1u;
    _cyc_080864B4 = 1u;
    uint32_t _rn_080864B4 = g_cpu.R[2];
    uint32_t _r_080864B4;
    _r_080864B4 = _rn_080864B4 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_080864B4, 0x0000000Bu, _r_080864B4);
    g_cpu.R[15] = 0x080864B6u;
    runtime_tick(_cyc_080864B4);
    /* 080864B6  080864b6 T beq 0x080864c4 */
    g_cpu.R[15] = 0x080864B6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080864B6 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080864B6 = 3u;
        g_cpu.R[15] = 0x080864C4u;
        runtime_tick(_cyc_080864B6);
        GBARECOMP_TAIL_CALL(gf_tfunc_080864C4);
    }
    g_cpu.R[15] = 0x080864B8u;
    runtime_tick(_cyc_080864B6);
    /* 080864B8  080864b8 T b 0x0808663c */
    g_cpu.R[15] = 0x080864B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080864B8 = 1u;
    _cyc_080864B8 = 3u;
    g_cpu.R[15] = 0x0808663Cu;
    runtime_tick(_cyc_080864B8);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808663C);
    g_cpu.R[15] = 0x080864BAu;
    runtime_tick(_cyc_080864B8);
    /* fall-through to 0x080864BA */
    g_cpu.R[15] = 0x080864BAu;
    runtime_dispatch(0x080864BAu);
    return;
}

/* 0x080864BA  mode=thumb  end=0x080864BE  branches=1 */


/* 0x080864CC thumb */
void gf_autojt_08086270_49(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080864CCu);
    /* 080864CC  080864cc T cmps r2,#0x9 */
    g_cpu.R[15] = 0x080864CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080864CC = 1u;
    _cyc_080864CC = 1u;
    uint32_t _rn_080864CC = g_cpu.R[2];
    uint32_t _r_080864CC;
    _r_080864CC = _rn_080864CC - 0x00000009u;
    arm_set_nzcv_sub(_rn_080864CC, 0x00000009u, _r_080864CC);
    g_cpu.R[15] = 0x080864CEu;
    runtime_tick(_cyc_080864CC);
    /* 080864CE  080864ce T beq 0x080864d6 */
    g_cpu.R[15] = 0x080864CEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080864CE = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080864CE = 3u;
        g_cpu.R[15] = 0x080864D6u;
        runtime_tick(_cyc_080864CE);
        GBARECOMP_TAIL_CALL(gf_tfunc_080864D6);
    }
    g_cpu.R[15] = 0x080864D0u;
    runtime_tick(_cyc_080864CE);
    /* 080864D0  080864d0 T cmps r2,#0xb */
    g_cpu.R[15] = 0x080864D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080864D0 = 1u;
    _cyc_080864D0 = 1u;
    uint32_t _rn_080864D0 = g_cpu.R[2];
    uint32_t _r_080864D0;
    _r_080864D0 = _rn_080864D0 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_080864D0, 0x0000000Bu, _r_080864D0);
    g_cpu.R[15] = 0x080864D2u;
    runtime_tick(_cyc_080864D0);
    /* 080864D2  080864d2 T beq 0x080864e0 */
    g_cpu.R[15] = 0x080864D2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080864D2 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080864D2 = 3u;
        g_cpu.R[15] = 0x080864E0u;
        runtime_tick(_cyc_080864D2);
        GBARECOMP_TAIL_CALL(gf_tfunc_080864E0);
    }
    g_cpu.R[15] = 0x080864D4u;
    runtime_tick(_cyc_080864D2);
    /* 080864D4  080864d4 T b 0x0808663c */
    g_cpu.R[15] = 0x080864D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080864D4 = 1u;
    _cyc_080864D4 = 3u;
    g_cpu.R[15] = 0x0808663Cu;
    runtime_tick(_cyc_080864D4);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808663C);
    g_cpu.R[15] = 0x080864D6u;
    runtime_tick(_cyc_080864D4);
    /* fall-through to 0x080864D6 */
    g_cpu.R[15] = 0x080864D6u;
    runtime_dispatch(0x080864D6u);
    return;
}

/* 0x080864E0  mode=thumb  end=0x080864E4  branches=1 */


/* 0x080864E8 thumb */
void gf_autojt_08086270_50(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080864E8u);
    /* 080864E8  080864e8 T cmps r2,#0x9 */
    g_cpu.R[15] = 0x080864E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080864E8 = 1u;
    _cyc_080864E8 = 1u;
    uint32_t _rn_080864E8 = g_cpu.R[2];
    uint32_t _r_080864E8;
    _r_080864E8 = _rn_080864E8 - 0x00000009u;
    arm_set_nzcv_sub(_rn_080864E8, 0x00000009u, _r_080864E8);
    g_cpu.R[15] = 0x080864EAu;
    runtime_tick(_cyc_080864E8);
    /* 080864EA  080864ea T beq 0x080864f2 */
    g_cpu.R[15] = 0x080864EAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080864EA = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080864EA = 3u;
        g_cpu.R[15] = 0x080864F2u;
        runtime_tick(_cyc_080864EA);
        GBARECOMP_TAIL_CALL(gf_tfunc_080864F2);
    }
    g_cpu.R[15] = 0x080864ECu;
    runtime_tick(_cyc_080864EA);
    /* 080864EC  080864ec T cmps r2,#0xb */
    g_cpu.R[15] = 0x080864ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080864EC = 1u;
    _cyc_080864EC = 1u;
    uint32_t _rn_080864EC = g_cpu.R[2];
    uint32_t _r_080864EC;
    _r_080864EC = _rn_080864EC - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_080864EC, 0x0000000Bu, _r_080864EC);
    g_cpu.R[15] = 0x080864EEu;
    runtime_tick(_cyc_080864EC);
    /* 080864EE  080864ee T beq 0x080864fc */
    g_cpu.R[15] = 0x080864EEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080864EE = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080864EE = 3u;
        g_cpu.R[15] = 0x080864FCu;
        runtime_tick(_cyc_080864EE);
        GBARECOMP_TAIL_CALL(gf_tfunc_080864FC);
    }
    g_cpu.R[15] = 0x080864F0u;
    runtime_tick(_cyc_080864EE);
    /* 080864F0  080864f0 T b 0x0808663c */
    g_cpu.R[15] = 0x080864F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080864F0 = 1u;
    _cyc_080864F0 = 3u;
    g_cpu.R[15] = 0x0808663Cu;
    runtime_tick(_cyc_080864F0);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808663C);
    g_cpu.R[15] = 0x080864F2u;
    runtime_tick(_cyc_080864F0);
    /* fall-through to 0x080864F2 */
    g_cpu.R[15] = 0x080864F2u;
    runtime_dispatch(0x080864F2u);
    return;
}

/* 0x080864FC  mode=thumb  end=0x08086500  branches=1 */


/* 0x08086504 thumb */
void gf_autojt_08086270_51(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08086504u);
    /* 08086504  08086504 T cmps r2,#0x9 */
    g_cpu.R[15] = 0x08086504u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086504 = 1u;
    _cyc_08086504 = 1u;
    uint32_t _rn_08086504 = g_cpu.R[2];
    uint32_t _r_08086504;
    _r_08086504 = _rn_08086504 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08086504, 0x00000009u, _r_08086504);
    g_cpu.R[15] = 0x08086506u;
    runtime_tick(_cyc_08086504);
    /* 08086506  08086506 T beq 0x0808650e */
    g_cpu.R[15] = 0x08086506u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086506 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08086506 = 3u;
        g_cpu.R[15] = 0x0808650Eu;
        runtime_tick(_cyc_08086506);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808650E);
    }
    g_cpu.R[15] = 0x08086508u;
    runtime_tick(_cyc_08086506);
    /* 08086508  08086508 T cmps r2,#0xb */
    g_cpu.R[15] = 0x08086508u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086508 = 1u;
    _cyc_08086508 = 1u;
    uint32_t _rn_08086508 = g_cpu.R[2];
    uint32_t _r_08086508;
    _r_08086508 = _rn_08086508 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_08086508, 0x0000000Bu, _r_08086508);
    g_cpu.R[15] = 0x0808650Au;
    runtime_tick(_cyc_08086508);
    /* 0808650A  0808650a T beq 0x08086518 */
    g_cpu.R[15] = 0x0808650Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808650A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808650A = 3u;
        g_cpu.R[15] = 0x08086518u;
        runtime_tick(_cyc_0808650A);
        GBARECOMP_TAIL_CALL(gf_tfunc_08086518);
    }
    g_cpu.R[15] = 0x0808650Cu;
    runtime_tick(_cyc_0808650A);
    /* 0808650C  0808650c T b 0x0808663c */
    g_cpu.R[15] = 0x0808650Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808650C = 1u;
    _cyc_0808650C = 3u;
    g_cpu.R[15] = 0x0808663Cu;
    runtime_tick(_cyc_0808650C);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808663C);
    g_cpu.R[15] = 0x0808650Eu;
    runtime_tick(_cyc_0808650C);
    /* fall-through to 0x0808650E */
    g_cpu.R[15] = 0x0808650Eu;
    runtime_dispatch(0x0808650Eu);
    return;
}

/* 0x0808650E  mode=thumb  end=0x08086512  branches=1 */


/* 0x08086520 thumb */
void gf_autojt_08086270_52(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08086520u);
    /* 08086520  08086520 T cmps r2,#0x9 */
    g_cpu.R[15] = 0x08086520u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086520 = 1u;
    _cyc_08086520 = 1u;
    uint32_t _rn_08086520 = g_cpu.R[2];
    uint32_t _r_08086520;
    _r_08086520 = _rn_08086520 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08086520, 0x00000009u, _r_08086520);
    g_cpu.R[15] = 0x08086522u;
    runtime_tick(_cyc_08086520);
    /* 08086522  08086522 T beq 0x0808652a */
    g_cpu.R[15] = 0x08086522u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086522 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08086522 = 3u;
        g_cpu.R[15] = 0x0808652Au;
        runtime_tick(_cyc_08086522);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808652A);
    }
    g_cpu.R[15] = 0x08086524u;
    runtime_tick(_cyc_08086522);
    /* 08086524  08086524 T cmps r2,#0xb */
    g_cpu.R[15] = 0x08086524u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086524 = 1u;
    _cyc_08086524 = 1u;
    uint32_t _rn_08086524 = g_cpu.R[2];
    uint32_t _r_08086524;
    _r_08086524 = _rn_08086524 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_08086524, 0x0000000Bu, _r_08086524);
    g_cpu.R[15] = 0x08086526u;
    runtime_tick(_cyc_08086524);
    /* 08086526  08086526 T beq 0x08086534 */
    g_cpu.R[15] = 0x08086526u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086526 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08086526 = 3u;
        g_cpu.R[15] = 0x08086534u;
        runtime_tick(_cyc_08086526);
        GBARECOMP_TAIL_CALL(gf_tfunc_08086534);
    }
    g_cpu.R[15] = 0x08086528u;
    runtime_tick(_cyc_08086526);
    /* 08086528  08086528 T b 0x0808663c */
    g_cpu.R[15] = 0x08086528u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086528 = 1u;
    _cyc_08086528 = 3u;
    g_cpu.R[15] = 0x0808663Cu;
    runtime_tick(_cyc_08086528);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808663C);
    g_cpu.R[15] = 0x0808652Au;
    runtime_tick(_cyc_08086528);
    /* fall-through to 0x0808652A */
    g_cpu.R[15] = 0x0808652Au;
    runtime_dispatch(0x0808652Au);
    return;
}

/* 0x0808652A  mode=thumb  end=0x0808652E  branches=1 */


/* 0x0808653C thumb */
void gf_autojt_08086270_53(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808653Cu);
    /* 0808653C  0808653c T cmps r2,#0x9 */
    g_cpu.R[15] = 0x0808653Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808653C = 1u;
    _cyc_0808653C = 1u;
    uint32_t _rn_0808653C = g_cpu.R[2];
    uint32_t _r_0808653C;
    _r_0808653C = _rn_0808653C - 0x00000009u;
    arm_set_nzcv_sub(_rn_0808653C, 0x00000009u, _r_0808653C);
    g_cpu.R[15] = 0x0808653Eu;
    runtime_tick(_cyc_0808653C);
    /* 0808653E  0808653e T beq 0x08086546 */
    g_cpu.R[15] = 0x0808653Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808653E = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808653E = 3u;
        g_cpu.R[15] = 0x08086546u;
        runtime_tick(_cyc_0808653E);
        GBARECOMP_TAIL_CALL(gf_tfunc_08086546);
    }
    g_cpu.R[15] = 0x08086540u;
    runtime_tick(_cyc_0808653E);
    /* 08086540  08086540 T cmps r2,#0xb */
    g_cpu.R[15] = 0x08086540u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086540 = 1u;
    _cyc_08086540 = 1u;
    uint32_t _rn_08086540 = g_cpu.R[2];
    uint32_t _r_08086540;
    _r_08086540 = _rn_08086540 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_08086540, 0x0000000Bu, _r_08086540);
    g_cpu.R[15] = 0x08086542u;
    runtime_tick(_cyc_08086540);
    /* 08086542  08086542 T beq 0x08086550 */
    g_cpu.R[15] = 0x08086542u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086542 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08086542 = 3u;
        g_cpu.R[15] = 0x08086550u;
        runtime_tick(_cyc_08086542);
        GBARECOMP_TAIL_CALL(gf_tfunc_08086550);
    }
    g_cpu.R[15] = 0x08086544u;
    runtime_tick(_cyc_08086542);
    /* 08086544  08086544 T b 0x0808663c */
    g_cpu.R[15] = 0x08086544u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086544 = 1u;
    _cyc_08086544 = 3u;
    g_cpu.R[15] = 0x0808663Cu;
    runtime_tick(_cyc_08086544);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808663C);
    g_cpu.R[15] = 0x08086546u;
    runtime_tick(_cyc_08086544);
    /* fall-through to 0x08086546 */
    g_cpu.R[15] = 0x08086546u;
    runtime_dispatch(0x08086546u);
    return;
}

/* 0x08086546  mode=thumb  end=0x0808654A  branches=1 */


/* 0x08086558 thumb */
void gf_autojt_08086270_54(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08086558u);
    /* 08086558  08086558 T cmps r2,#0x9 */
    g_cpu.R[15] = 0x08086558u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086558 = 1u;
    _cyc_08086558 = 1u;
    uint32_t _rn_08086558 = g_cpu.R[2];
    uint32_t _r_08086558;
    _r_08086558 = _rn_08086558 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08086558, 0x00000009u, _r_08086558);
    g_cpu.R[15] = 0x0808655Au;
    runtime_tick(_cyc_08086558);
    /* 0808655A  0808655a T beq 0x08086562 */
    g_cpu.R[15] = 0x0808655Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808655A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808655A = 3u;
        g_cpu.R[15] = 0x08086562u;
        runtime_tick(_cyc_0808655A);
        GBARECOMP_TAIL_CALL(gf_tfunc_08086562);
    }
    g_cpu.R[15] = 0x0808655Cu;
    runtime_tick(_cyc_0808655A);
    /* 0808655C  0808655c T cmps r2,#0xb */
    g_cpu.R[15] = 0x0808655Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808655C = 1u;
    _cyc_0808655C = 1u;
    uint32_t _rn_0808655C = g_cpu.R[2];
    uint32_t _r_0808655C;
    _r_0808655C = _rn_0808655C - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_0808655C, 0x0000000Bu, _r_0808655C);
    g_cpu.R[15] = 0x0808655Eu;
    runtime_tick(_cyc_0808655C);
    /* 0808655E  0808655e T beq 0x08086578 */
    g_cpu.R[15] = 0x0808655Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808655E = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808655E = 3u;
        g_cpu.R[15] = 0x08086578u;
        runtime_tick(_cyc_0808655E);
        GBARECOMP_TAIL_CALL(gf_tfunc_08086578);
    }
    g_cpu.R[15] = 0x08086560u;
    runtime_tick(_cyc_0808655E);
    /* 08086560  08086560 T b 0x0808663c */
    g_cpu.R[15] = 0x08086560u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086560 = 1u;
    _cyc_08086560 = 3u;
    g_cpu.R[15] = 0x0808663Cu;
    runtime_tick(_cyc_08086560);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808663C);
    g_cpu.R[15] = 0x08086562u;
    runtime_tick(_cyc_08086560);
    /* fall-through to 0x08086562 */
    g_cpu.R[15] = 0x08086562u;
    runtime_dispatch(0x08086562u);
    return;
}

/* 0x08086562  mode=thumb  end=0x08086570  branches=1 */


/* 0x0808658C thumb */
void gf_autojt_08086270_55(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808658Cu);
    /* 0808658C  0808658c T cmps r2,#0x9 */
    g_cpu.R[15] = 0x0808658Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808658C = 1u;
    _cyc_0808658C = 1u;
    uint32_t _rn_0808658C = g_cpu.R[2];
    uint32_t _r_0808658C;
    _r_0808658C = _rn_0808658C - 0x00000009u;
    arm_set_nzcv_sub(_rn_0808658C, 0x00000009u, _r_0808658C);
    g_cpu.R[15] = 0x0808658Eu;
    runtime_tick(_cyc_0808658C);
    /* 0808658E  0808658e T beq 0x08086596 */
    g_cpu.R[15] = 0x0808658Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808658E = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808658E = 3u;
        g_cpu.R[15] = 0x08086596u;
        runtime_tick(_cyc_0808658E);
        GBARECOMP_TAIL_CALL(gf_tfunc_08086596);
    }
    g_cpu.R[15] = 0x08086590u;
    runtime_tick(_cyc_0808658E);
    /* 08086590  08086590 T cmps r2,#0xb */
    g_cpu.R[15] = 0x08086590u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086590 = 1u;
    _cyc_08086590 = 1u;
    uint32_t _rn_08086590 = g_cpu.R[2];
    uint32_t _r_08086590;
    _r_08086590 = _rn_08086590 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_08086590, 0x0000000Bu, _r_08086590);
    g_cpu.R[15] = 0x08086592u;
    runtime_tick(_cyc_08086590);
    /* 08086592  08086592 T beq 0x080865a0 */
    g_cpu.R[15] = 0x08086592u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086592 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08086592 = 3u;
        g_cpu.R[15] = 0x080865A0u;
        runtime_tick(_cyc_08086592);
        GBARECOMP_TAIL_CALL(gf_tfunc_080865A0);
    }
    g_cpu.R[15] = 0x08086594u;
    runtime_tick(_cyc_08086592);
    /* 08086594  08086594 T b 0x0808663c */
    g_cpu.R[15] = 0x08086594u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086594 = 1u;
    _cyc_08086594 = 3u;
    g_cpu.R[15] = 0x0808663Cu;
    runtime_tick(_cyc_08086594);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808663C);
    g_cpu.R[15] = 0x08086596u;
    runtime_tick(_cyc_08086594);
    /* fall-through to 0x08086596 */
    g_cpu.R[15] = 0x08086596u;
    runtime_dispatch(0x08086596u);
    return;
}

/* 0x08086596  mode=thumb  end=0x0808659A  branches=1 */


/* 0x080865A8 thumb */
void gf_autojt_08086270_56(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080865A8u);
    /* 080865A8  080865a8 T cmps r2,#0x9 */
    g_cpu.R[15] = 0x080865A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080865A8 = 1u;
    _cyc_080865A8 = 1u;
    uint32_t _rn_080865A8 = g_cpu.R[2];
    uint32_t _r_080865A8;
    _r_080865A8 = _rn_080865A8 - 0x00000009u;
    arm_set_nzcv_sub(_rn_080865A8, 0x00000009u, _r_080865A8);
    g_cpu.R[15] = 0x080865AAu;
    runtime_tick(_cyc_080865A8);
    /* 080865AA  080865aa T beq 0x080865b2 */
    g_cpu.R[15] = 0x080865AAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080865AA = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080865AA = 3u;
        g_cpu.R[15] = 0x080865B2u;
        runtime_tick(_cyc_080865AA);
        GBARECOMP_TAIL_CALL(gf_tfunc_080865B2);
    }
    g_cpu.R[15] = 0x080865ACu;
    runtime_tick(_cyc_080865AA);
    /* 080865AC  080865ac T cmps r2,#0xb */
    g_cpu.R[15] = 0x080865ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080865AC = 1u;
    _cyc_080865AC = 1u;
    uint32_t _rn_080865AC = g_cpu.R[2];
    uint32_t _r_080865AC;
    _r_080865AC = _rn_080865AC - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_080865AC, 0x0000000Bu, _r_080865AC);
    g_cpu.R[15] = 0x080865AEu;
    runtime_tick(_cyc_080865AC);
    /* 080865AE  080865ae T beq 0x080865bc */
    g_cpu.R[15] = 0x080865AEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080865AE = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080865AE = 3u;
        g_cpu.R[15] = 0x080865BCu;
        runtime_tick(_cyc_080865AE);
        GBARECOMP_TAIL_CALL(gf_tfunc_080865BC);
    }
    g_cpu.R[15] = 0x080865B0u;
    runtime_tick(_cyc_080865AE);
    /* 080865B0  080865b0 T b 0x0808663c */
    g_cpu.R[15] = 0x080865B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080865B0 = 1u;
    _cyc_080865B0 = 3u;
    g_cpu.R[15] = 0x0808663Cu;
    runtime_tick(_cyc_080865B0);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808663C);
    g_cpu.R[15] = 0x080865B2u;
    runtime_tick(_cyc_080865B0);
    /* fall-through to 0x080865B2 */
    g_cpu.R[15] = 0x080865B2u;
    runtime_dispatch(0x080865B2u);
    return;
}

/* 0x080865BC  mode=thumb  end=0x080865C0  branches=1 */


/* 0x080865C4 thumb */
void gf_autojt_08086270_57(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080865C4u);
    /* 080865C4  080865c4 T cmps r2,#0x9 */
    g_cpu.R[15] = 0x080865C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080865C4 = 1u;
    _cyc_080865C4 = 1u;
    uint32_t _rn_080865C4 = g_cpu.R[2];
    uint32_t _r_080865C4;
    _r_080865C4 = _rn_080865C4 - 0x00000009u;
    arm_set_nzcv_sub(_rn_080865C4, 0x00000009u, _r_080865C4);
    g_cpu.R[15] = 0x080865C6u;
    runtime_tick(_cyc_080865C4);
    /* 080865C6  080865c6 T beq 0x080865ce */
    g_cpu.R[15] = 0x080865C6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080865C6 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080865C6 = 3u;
        g_cpu.R[15] = 0x080865CEu;
        runtime_tick(_cyc_080865C6);
        GBARECOMP_TAIL_CALL(gf_tfunc_080865CE);
    }
    g_cpu.R[15] = 0x080865C8u;
    runtime_tick(_cyc_080865C6);
    /* 080865C8  080865c8 T cmps r2,#0xb */
    g_cpu.R[15] = 0x080865C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080865C8 = 1u;
    _cyc_080865C8 = 1u;
    uint32_t _rn_080865C8 = g_cpu.R[2];
    uint32_t _r_080865C8;
    _r_080865C8 = _rn_080865C8 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_080865C8, 0x0000000Bu, _r_080865C8);
    g_cpu.R[15] = 0x080865CAu;
    runtime_tick(_cyc_080865C8);
    /* 080865CA  080865ca T beq 0x080865d8 */
    g_cpu.R[15] = 0x080865CAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080865CA = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080865CA = 3u;
        g_cpu.R[15] = 0x080865D8u;
        runtime_tick(_cyc_080865CA);
        GBARECOMP_TAIL_CALL(gf_tfunc_080865D8);
    }
    g_cpu.R[15] = 0x080865CCu;
    runtime_tick(_cyc_080865CA);
    /* 080865CC  080865cc T b 0x0808663c */
    g_cpu.R[15] = 0x080865CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080865CC = 1u;
    _cyc_080865CC = 3u;
    g_cpu.R[15] = 0x0808663Cu;
    runtime_tick(_cyc_080865CC);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808663C);
    g_cpu.R[15] = 0x080865CEu;
    runtime_tick(_cyc_080865CC);
    /* fall-through to 0x080865CE */
    g_cpu.R[15] = 0x080865CEu;
    runtime_dispatch(0x080865CEu);
    return;
}

/* 0x080865D8  mode=thumb  end=0x080865DC  branches=1 */


/* 0x080865E0 thumb */
void gf_autojt_08086270_69(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080865E0u);
    /* 080865E0  080865e0 T cmps r2,#0x9 */
    g_cpu.R[15] = 0x080865E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080865E0 = 1u;
    _cyc_080865E0 = 1u;
    uint32_t _rn_080865E0 = g_cpu.R[2];
    uint32_t _r_080865E0;
    _r_080865E0 = _rn_080865E0 - 0x00000009u;
    arm_set_nzcv_sub(_rn_080865E0, 0x00000009u, _r_080865E0);
    g_cpu.R[15] = 0x080865E2u;
    runtime_tick(_cyc_080865E0);
    /* 080865E2  080865e2 T beq 0x080865ea */
    g_cpu.R[15] = 0x080865E2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080865E2 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080865E2 = 3u;
        g_cpu.R[15] = 0x080865EAu;
        runtime_tick(_cyc_080865E2);
        GBARECOMP_TAIL_CALL(gf_tfunc_080865EA);
    }
    g_cpu.R[15] = 0x080865E4u;
    runtime_tick(_cyc_080865E2);
    /* 080865E4  080865e4 T cmps r2,#0xb */
    g_cpu.R[15] = 0x080865E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080865E4 = 1u;
    _cyc_080865E4 = 1u;
    uint32_t _rn_080865E4 = g_cpu.R[2];
    uint32_t _r_080865E4;
    _r_080865E4 = _rn_080865E4 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_080865E4, 0x0000000Bu, _r_080865E4);
    g_cpu.R[15] = 0x080865E6u;
    runtime_tick(_cyc_080865E4);
    /* 080865E6  080865e6 T beq 0x080865f4 */
    g_cpu.R[15] = 0x080865E6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080865E6 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080865E6 = 3u;
        g_cpu.R[15] = 0x080865F4u;
        runtime_tick(_cyc_080865E6);
        GBARECOMP_TAIL_CALL(gf_tfunc_080865F4);
    }
    g_cpu.R[15] = 0x080865E8u;
    runtime_tick(_cyc_080865E6);
    /* 080865E8  080865e8 T b 0x0808663c */
    g_cpu.R[15] = 0x080865E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080865E8 = 1u;
    _cyc_080865E8 = 3u;
    g_cpu.R[15] = 0x0808663Cu;
    runtime_tick(_cyc_080865E8);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808663C);
    g_cpu.R[15] = 0x080865EAu;
    runtime_tick(_cyc_080865E8);
    /* fall-through to 0x080865EA */
    g_cpu.R[15] = 0x080865EAu;
    runtime_dispatch(0x080865EAu);
    return;
}

/* 0x080865EA  mode=thumb  end=0x080865EE  branches=1 */


/* 0x080865FC thumb */
void gf_autojt_08086270_73(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080865FCu);
    /* 080865FC  080865fc T cmps r2,#0x9 */
    g_cpu.R[15] = 0x080865FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080865FC = 1u;
    _cyc_080865FC = 1u;
    uint32_t _rn_080865FC = g_cpu.R[2];
    uint32_t _r_080865FC;
    _r_080865FC = _rn_080865FC - 0x00000009u;
    arm_set_nzcv_sub(_rn_080865FC, 0x00000009u, _r_080865FC);
    g_cpu.R[15] = 0x080865FEu;
    runtime_tick(_cyc_080865FC);
    /* 080865FE  080865fe T beq 0x08086606 */
    g_cpu.R[15] = 0x080865FEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080865FE = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080865FE = 3u;
        g_cpu.R[15] = 0x08086606u;
        runtime_tick(_cyc_080865FE);
        GBARECOMP_TAIL_CALL(gf_tfunc_08086606);
    }
    g_cpu.R[15] = 0x08086600u;
    runtime_tick(_cyc_080865FE);
    /* 08086600  08086600 T cmps r2,#0xb */
    g_cpu.R[15] = 0x08086600u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086600 = 1u;
    _cyc_08086600 = 1u;
    uint32_t _rn_08086600 = g_cpu.R[2];
    uint32_t _r_08086600;
    _r_08086600 = _rn_08086600 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_08086600, 0x0000000Bu, _r_08086600);
    g_cpu.R[15] = 0x08086602u;
    runtime_tick(_cyc_08086600);
    /* 08086602  08086602 T beq 0x08086610 */
    g_cpu.R[15] = 0x08086602u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086602 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08086602 = 3u;
        g_cpu.R[15] = 0x08086610u;
        runtime_tick(_cyc_08086602);
        GBARECOMP_TAIL_CALL(gf_tfunc_08086610);
    }
    g_cpu.R[15] = 0x08086604u;
    runtime_tick(_cyc_08086602);
    /* 08086604  08086604 T b 0x0808663c */
    g_cpu.R[15] = 0x08086604u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086604 = 1u;
    _cyc_08086604 = 3u;
    g_cpu.R[15] = 0x0808663Cu;
    runtime_tick(_cyc_08086604);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808663C);
    g_cpu.R[15] = 0x08086606u;
    runtime_tick(_cyc_08086604);
    /* fall-through to 0x08086606 */
    g_cpu.R[15] = 0x08086606u;
    runtime_dispatch(0x08086606u);
    return;
}

/* 0x08086618  mode=thumb  end=0x08086622  branches=3 */


/* 0x0808C298 thumb */
void gf_autojt_0808C26C_00(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808C298u);
    /* 0808C298  0808c298 T ldr r1,[r15,#0xc] */
    g_cpu.R[15] = 0x0808C298u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808C298 = 1u;
    _cyc_0808C298 = 2u;
    uint32_t _base_0808C298 = 0x0808C29Cu & ~3u;
    uint32_t _off_0808C298;
    _off_0808C298 = 0x0000000Cu;
    uint32_t _ea_0808C298 = _base_0808C298 + _off_0808C298;
    uint32_t _post_0808C298 = _base_0808C298 + _off_0808C298;
    _cyc_0808C298 += runtime_mem_cycles(_ea_0808C298, 4u, 0u);
    uint32_t _v_0808C298;
    { uint32_t _w = bus_read_u32(_ea_0808C298 & ~3u); uint32_t _rot = (_ea_0808C298 & 3u) * 8u; _v_0808C298 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0808C298;
    g_cpu.R[15] = 0x0808C29Au;
    runtime_tick(_cyc_0808C298);
    /* 0808C29A  0808c29a T adds r0,r2,r1 */
    g_cpu.R[15] = 0x0808C29Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808C29A = 1u;
    _cyc_0808C29A = 1u;
    uint32_t _rm_0808C29A = g_cpu.R[1];
    uint32_t _op2_0808C29A;
    uint32_t _co_0808C29A;
    _op2_0808C29A = _rm_0808C29A;
    _co_0808C29A = cpsr_c();
    uint32_t _rn_0808C29A = g_cpu.R[2];
    uint32_t _r_0808C29A;
    _r_0808C29A = _rn_0808C29A + _op2_0808C29A;
    arm_set_nzcv_add(_rn_0808C29A, _op2_0808C29A, _r_0808C29A);
    g_cpu.R[0] = _r_0808C29A;
    g_cpu.R[15] = 0x0808C29Cu;
    runtime_tick(_cyc_0808C29A);
    /* 0808C29C  0808c29c T ldrb r0,[r0] */
    g_cpu.R[15] = 0x0808C29Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808C29C = 1u;
    _cyc_0808C29C = 2u;
    uint32_t _base_0808C29C = g_cpu.R[0];
    uint32_t _off_0808C29C;
    _off_0808C29C = 0x00000000u;
    uint32_t _ea_0808C29C = _base_0808C29C + _off_0808C29C;
    uint32_t _post_0808C29C = _base_0808C29C + _off_0808C29C;
    _cyc_0808C29C += runtime_mem_cycles(_ea_0808C29C, 1u, 0u);
    uint32_t _v_0808C29C;
    _v_0808C29C = bus_read_u8(_ea_0808C29C);
    g_cpu.R[0] = _v_0808C29C;
    g_cpu.R[15] = 0x0808C29Eu;
    runtime_tick(_cyc_0808C29C);
    /* 0808C29E  0808c29e T cmps r0,#0x3 */
    g_cpu.R[15] = 0x0808C29Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808C29E = 1u;
    _cyc_0808C29E = 1u;
    uint32_t _rn_0808C29E = g_cpu.R[0];
    uint32_t _r_0808C29E;
    _r_0808C29E = _rn_0808C29E - 0x00000003u;
    arm_set_nzcv_sub(_rn_0808C29E, 0x00000003u, _r_0808C29E);
    g_cpu.R[15] = 0x0808C2A0u;
    runtime_tick(_cyc_0808C29E);
    /* 0808C2A0  0808c2a0 T bne 0x0808c2b4 */
    g_cpu.R[15] = 0x0808C2A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808C2A0 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_0808C2A0 = 3u;
        g_cpu.R[15] = 0x0808C2B4u;
        runtime_tick(_cyc_0808C2A0);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808C2B4);
    }
    g_cpu.R[15] = 0x0808C2A2u;
    runtime_tick(_cyc_0808C2A0);
    /* 0808C2A2  0808c2a2 T ldr r0,[r15,#0x8] */
    g_cpu.R[15] = 0x0808C2A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808C2A2 = 1u;
    _cyc_0808C2A2 = 2u;
    uint32_t _base_0808C2A2 = 0x0808C2A6u & ~3u;
    uint32_t _off_0808C2A2;
    _off_0808C2A2 = 0x00000008u;
    uint32_t _ea_0808C2A2 = _base_0808C2A2 + _off_0808C2A2;
    uint32_t _post_0808C2A2 = _base_0808C2A2 + _off_0808C2A2;
    _cyc_0808C2A2 += runtime_mem_cycles(_ea_0808C2A2, 4u, 0u);
    uint32_t _v_0808C2A2;
    { uint32_t _w = bus_read_u32(_ea_0808C2A2 & ~3u); uint32_t _rot = (_ea_0808C2A2 & 3u) * 8u; _v_0808C2A2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0808C2A2;
    g_cpu.R[15] = 0x0808C2A4u;
    runtime_tick(_cyc_0808C2A2);
    /* 0808C2A4  0808c2a4 T ldr r3,[r15,#0x8] */
    g_cpu.R[15] = 0x0808C2A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808C2A4 = 1u;
    _cyc_0808C2A4 = 2u;
    uint32_t _base_0808C2A4 = 0x0808C2A8u & ~3u;
    uint32_t _off_0808C2A4;
    _off_0808C2A4 = 0x00000008u;
    uint32_t _ea_0808C2A4 = _base_0808C2A4 + _off_0808C2A4;
    uint32_t _post_0808C2A4 = _base_0808C2A4 + _off_0808C2A4;
    _cyc_0808C2A4 += runtime_mem_cycles(_ea_0808C2A4, 4u, 0u);
    uint32_t _v_0808C2A4;
    { uint32_t _w = bus_read_u32(_ea_0808C2A4 & ~3u); uint32_t _rot = (_ea_0808C2A4 & 3u) * 8u; _v_0808C2A4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_0808C2A4;
    g_cpu.R[15] = 0x0808C2A6u;
    runtime_tick(_cyc_0808C2A4);
    /* 0808C2A6  0808c2a6 T b 0x0808c2b8 */
    g_cpu.R[15] = 0x0808C2A6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808C2A6 = 1u;
    _cyc_0808C2A6 = 3u;
    g_cpu.R[15] = 0x0808C2B8u;
    runtime_tick(_cyc_0808C2A6);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808C2B8);
    g_cpu.R[15] = 0x0808C2A8u;
    runtime_tick(_cyc_0808C2A6);
    /* fall-through to 0x0808C2A8 */
    g_cpu.R[15] = 0x0808C2A8u;
    runtime_dispatch(0x0808C2A8u);
    return;
}

/* 0x0808C2B4  mode=thumb  end=0x0808C2B8  branches=0  indirect */


/* 0x08090FCC thumb */
void gf_autojt_08090F94_00(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08090FCCu);
    /* 08090FCC  08090fcc T ldr r0,[r2,#0x4] */
    g_cpu.R[15] = 0x08090FCCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08090FCC = 1u;
    _cyc_08090FCC = 2u;
    uint32_t _base_08090FCC = g_cpu.R[2];
    uint32_t _off_08090FCC;
    _off_08090FCC = 0x00000004u;
    uint32_t _ea_08090FCC = _base_08090FCC + _off_08090FCC;
    uint32_t _post_08090FCC = _base_08090FCC + _off_08090FCC;
    _cyc_08090FCC += runtime_mem_cycles(_ea_08090FCC, 4u, 0u);
    uint32_t _v_08090FCC;
    { uint32_t _w = bus_read_u32(_ea_08090FCC & ~3u); uint32_t _rot = (_ea_08090FCC & 3u) * 8u; _v_08090FCC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08090FCC;
    g_cpu.R[15] = 0x08090FCEu;
    runtime_tick(_cyc_08090FCC);
    /* 08090FCE  08090fce T ldrh r0,[r0,#0x6] */
    g_cpu.R[15] = 0x08090FCEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08090FCE = 1u;
    _cyc_08090FCE = 2u;
    uint32_t _base_08090FCE = g_cpu.R[0];
    uint32_t _off_08090FCE;
    _off_08090FCE = 0x00000006u;
    uint32_t _ea_08090FCE = _base_08090FCE + _off_08090FCE;
    uint32_t _post_08090FCE = _base_08090FCE + _off_08090FCE;
    _cyc_08090FCE += runtime_mem_cycles(_ea_08090FCE, 2u, 0u);
    uint32_t _v_08090FCE;
    { uint32_t _h = bus_read_u16(_ea_08090FCE & ~1u); if (_ea_08090FCE & 1u) _v_08090FCE = ((_h >> 8) | (_h << 24)); else _v_08090FCE = _h; }
    g_cpu.R[0] = _v_08090FCE;
    g_cpu.R[15] = 0x08090FD0u;
    runtime_tick(_cyc_08090FCE);
    /* 08090FD0  08090fd0 T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x08090FD0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08090FD0 = 1u;
    _cyc_08090FD0 = 1u;
    uint32_t _rm_08090FD0 = g_cpu.R[0];
    uint32_t _op2_08090FD0;
    uint32_t _co_08090FD0;
    _op2_08090FD0 = _rm_08090FD0 << 3;
    _co_08090FD0 = (_rm_08090FD0 >> 29) & 1u;
    uint32_t _r_08090FD0;
    _r_08090FD0 = _op2_08090FD0;
    arm_set_nzc_logic(_r_08090FD0, _co_08090FD0);
    g_cpu.R[0] = _r_08090FD0;
    g_cpu.R[15] = 0x08090FD2u;
    runtime_tick(_cyc_08090FD0);
    /* 08090FD2  08090fd2 T ldr r1,[r15,#0x4] */
    g_cpu.R[15] = 0x08090FD2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08090FD2 = 1u;
    _cyc_08090FD2 = 2u;
    uint32_t _base_08090FD2 = 0x08090FD6u & ~3u;
    uint32_t _off_08090FD2;
    _off_08090FD2 = 0x00000004u;
    uint32_t _ea_08090FD2 = _base_08090FD2 + _off_08090FD2;
    uint32_t _post_08090FD2 = _base_08090FD2 + _off_08090FD2;
    _cyc_08090FD2 += runtime_mem_cycles(_ea_08090FD2, 4u, 0u);
    uint32_t _v_08090FD2;
    { uint32_t _w = bus_read_u32(_ea_08090FD2 & ~3u); uint32_t _rot = (_ea_08090FD2 & 3u) * 8u; _v_08090FD2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08090FD2;
    g_cpu.R[15] = 0x08090FD4u;
    runtime_tick(_cyc_08090FD2);
    /* 08090FD4  08090fd4 T b 0x080910a4 */
    g_cpu.R[15] = 0x08090FD4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08090FD4 = 1u;
    _cyc_08090FD4 = 3u;
    g_cpu.R[15] = 0x080910A4u;
    runtime_tick(_cyc_08090FD4);
    GBARECOMP_TAIL_CALL(gf_tfunc_080910A4);
    g_cpu.R[15] = 0x08090FD6u;
    runtime_tick(_cyc_08090FD4);
    /* fall-through to 0x08090FD6 */
    g_cpu.R[15] = 0x08090FD6u;
    runtime_dispatch(0x08090FD6u);
    return;
}

/* 0x08090FDC  mode=thumb  end=0x08090FE6  branches=1 */


/* 0x08090FDC thumb */
void gf_autojt_08090F94_01(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08090FDCu);
    /* 08090FDC  08090fdc T ldr r0,[r2,#0x4] */
    g_cpu.R[15] = 0x08090FDCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08090FDC = 1u;
    _cyc_08090FDC = 2u;
    uint32_t _base_08090FDC = g_cpu.R[2];
    uint32_t _off_08090FDC;
    _off_08090FDC = 0x00000004u;
    uint32_t _ea_08090FDC = _base_08090FDC + _off_08090FDC;
    uint32_t _post_08090FDC = _base_08090FDC + _off_08090FDC;
    _cyc_08090FDC += runtime_mem_cycles(_ea_08090FDC, 4u, 0u);
    uint32_t _v_08090FDC;
    { uint32_t _w = bus_read_u32(_ea_08090FDC & ~3u); uint32_t _rot = (_ea_08090FDC & 3u) * 8u; _v_08090FDC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08090FDC;
    g_cpu.R[15] = 0x08090FDEu;
    runtime_tick(_cyc_08090FDC);
    /* 08090FDE  08090fde T ldrh r0,[r0,#0x6] */
    g_cpu.R[15] = 0x08090FDEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08090FDE = 1u;
    _cyc_08090FDE = 2u;
    uint32_t _base_08090FDE = g_cpu.R[0];
    uint32_t _off_08090FDE;
    _off_08090FDE = 0x00000006u;
    uint32_t _ea_08090FDE = _base_08090FDE + _off_08090FDE;
    uint32_t _post_08090FDE = _base_08090FDE + _off_08090FDE;
    _cyc_08090FDE += runtime_mem_cycles(_ea_08090FDE, 2u, 0u);
    uint32_t _v_08090FDE;
    { uint32_t _h = bus_read_u16(_ea_08090FDE & ~1u); if (_ea_08090FDE & 1u) _v_08090FDE = ((_h >> 8) | (_h << 24)); else _v_08090FDE = _h; }
    g_cpu.R[0] = _v_08090FDE;
    g_cpu.R[15] = 0x08090FE0u;
    runtime_tick(_cyc_08090FDE);
    /* 08090FE0  08090fe0 T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x08090FE0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08090FE0 = 1u;
    _cyc_08090FE0 = 1u;
    uint32_t _rm_08090FE0 = g_cpu.R[0];
    uint32_t _op2_08090FE0;
    uint32_t _co_08090FE0;
    _op2_08090FE0 = _rm_08090FE0 << 3;
    _co_08090FE0 = (_rm_08090FE0 >> 29) & 1u;
    uint32_t _r_08090FE0;
    _r_08090FE0 = _op2_08090FE0;
    arm_set_nzc_logic(_r_08090FE0, _co_08090FE0);
    g_cpu.R[0] = _r_08090FE0;
    g_cpu.R[15] = 0x08090FE2u;
    runtime_tick(_cyc_08090FE0);
    /* 08090FE2  08090fe2 T ldr r1,[r15,#0x4] */
    g_cpu.R[15] = 0x08090FE2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08090FE2 = 1u;
    _cyc_08090FE2 = 2u;
    uint32_t _base_08090FE2 = 0x08090FE6u & ~3u;
    uint32_t _off_08090FE2;
    _off_08090FE2 = 0x00000004u;
    uint32_t _ea_08090FE2 = _base_08090FE2 + _off_08090FE2;
    uint32_t _post_08090FE2 = _base_08090FE2 + _off_08090FE2;
    _cyc_08090FE2 += runtime_mem_cycles(_ea_08090FE2, 4u, 0u);
    uint32_t _v_08090FE2;
    { uint32_t _w = bus_read_u32(_ea_08090FE2 & ~3u); uint32_t _rot = (_ea_08090FE2 & 3u) * 8u; _v_08090FE2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08090FE2;
    g_cpu.R[15] = 0x08090FE4u;
    runtime_tick(_cyc_08090FE2);
    /* 08090FE4  08090fe4 T b 0x080910a4 */
    g_cpu.R[15] = 0x08090FE4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08090FE4 = 1u;
    _cyc_08090FE4 = 3u;
    g_cpu.R[15] = 0x080910A4u;
    runtime_tick(_cyc_08090FE4);
    GBARECOMP_TAIL_CALL(gf_tfunc_080910A4);
    g_cpu.R[15] = 0x08090FE6u;
    runtime_tick(_cyc_08090FE4);
    /* fall-through to 0x08090FE6 */
    g_cpu.R[15] = 0x08090FE6u;
    runtime_dispatch(0x08090FE6u);
    return;
}

/* 0x08090FEC  mode=thumb  end=0x08090FF6  branches=1 */


/* 0x08090FEC thumb */
void gf_autojt_08090F94_02(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08090FECu);
    /* 08090FEC  08090fec T ldr r0,[r2,#0x4] */
    g_cpu.R[15] = 0x08090FECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08090FEC = 1u;
    _cyc_08090FEC = 2u;
    uint32_t _base_08090FEC = g_cpu.R[2];
    uint32_t _off_08090FEC;
    _off_08090FEC = 0x00000004u;
    uint32_t _ea_08090FEC = _base_08090FEC + _off_08090FEC;
    uint32_t _post_08090FEC = _base_08090FEC + _off_08090FEC;
    _cyc_08090FEC += runtime_mem_cycles(_ea_08090FEC, 4u, 0u);
    uint32_t _v_08090FEC;
    { uint32_t _w = bus_read_u32(_ea_08090FEC & ~3u); uint32_t _rot = (_ea_08090FEC & 3u) * 8u; _v_08090FEC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08090FEC;
    g_cpu.R[15] = 0x08090FEEu;
    runtime_tick(_cyc_08090FEC);
    /* 08090FEE  08090fee T ldrh r0,[r0,#0x6] */
    g_cpu.R[15] = 0x08090FEEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08090FEE = 1u;
    _cyc_08090FEE = 2u;
    uint32_t _base_08090FEE = g_cpu.R[0];
    uint32_t _off_08090FEE;
    _off_08090FEE = 0x00000006u;
    uint32_t _ea_08090FEE = _base_08090FEE + _off_08090FEE;
    uint32_t _post_08090FEE = _base_08090FEE + _off_08090FEE;
    _cyc_08090FEE += runtime_mem_cycles(_ea_08090FEE, 2u, 0u);
    uint32_t _v_08090FEE;
    { uint32_t _h = bus_read_u16(_ea_08090FEE & ~1u); if (_ea_08090FEE & 1u) _v_08090FEE = ((_h >> 8) | (_h << 24)); else _v_08090FEE = _h; }
    g_cpu.R[0] = _v_08090FEE;
    g_cpu.R[15] = 0x08090FF0u;
    runtime_tick(_cyc_08090FEE);
    /* 08090FF0  08090ff0 T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x08090FF0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08090FF0 = 1u;
    _cyc_08090FF0 = 1u;
    uint32_t _rm_08090FF0 = g_cpu.R[0];
    uint32_t _op2_08090FF0;
    uint32_t _co_08090FF0;
    _op2_08090FF0 = _rm_08090FF0 << 3;
    _co_08090FF0 = (_rm_08090FF0 >> 29) & 1u;
    uint32_t _r_08090FF0;
    _r_08090FF0 = _op2_08090FF0;
    arm_set_nzc_logic(_r_08090FF0, _co_08090FF0);
    g_cpu.R[0] = _r_08090FF0;
    g_cpu.R[15] = 0x08090FF2u;
    runtime_tick(_cyc_08090FF0);
    /* 08090FF2  08090ff2 T ldr r1,[r15,#0x4] */
    g_cpu.R[15] = 0x08090FF2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08090FF2 = 1u;
    _cyc_08090FF2 = 2u;
    uint32_t _base_08090FF2 = 0x08090FF6u & ~3u;
    uint32_t _off_08090FF2;
    _off_08090FF2 = 0x00000004u;
    uint32_t _ea_08090FF2 = _base_08090FF2 + _off_08090FF2;
    uint32_t _post_08090FF2 = _base_08090FF2 + _off_08090FF2;
    _cyc_08090FF2 += runtime_mem_cycles(_ea_08090FF2, 4u, 0u);
    uint32_t _v_08090FF2;
    { uint32_t _w = bus_read_u32(_ea_08090FF2 & ~3u); uint32_t _rot = (_ea_08090FF2 & 3u) * 8u; _v_08090FF2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08090FF2;
    g_cpu.R[15] = 0x08090FF4u;
    runtime_tick(_cyc_08090FF2);
    /* 08090FF4  08090ff4 T b 0x080910a4 */
    g_cpu.R[15] = 0x08090FF4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08090FF4 = 1u;
    _cyc_08090FF4 = 3u;
    g_cpu.R[15] = 0x080910A4u;
    runtime_tick(_cyc_08090FF4);
    GBARECOMP_TAIL_CALL(gf_tfunc_080910A4);
    g_cpu.R[15] = 0x08090FF6u;
    runtime_tick(_cyc_08090FF4);
    /* fall-through to 0x08090FF6 */
    g_cpu.R[15] = 0x08090FF6u;
    runtime_dispatch(0x08090FF6u);
    return;
}

/* 0x08090FFC  mode=thumb  end=0x08091006  branches=1 */


/* 0x08090FFC thumb */
void gf_autojt_08090F94_03(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08090FFCu);
    /* 08090FFC  08090ffc T ldr r0,[r2,#0x4] */
    g_cpu.R[15] = 0x08090FFCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08090FFC = 1u;
    _cyc_08090FFC = 2u;
    uint32_t _base_08090FFC = g_cpu.R[2];
    uint32_t _off_08090FFC;
    _off_08090FFC = 0x00000004u;
    uint32_t _ea_08090FFC = _base_08090FFC + _off_08090FFC;
    uint32_t _post_08090FFC = _base_08090FFC + _off_08090FFC;
    _cyc_08090FFC += runtime_mem_cycles(_ea_08090FFC, 4u, 0u);
    uint32_t _v_08090FFC;
    { uint32_t _w = bus_read_u32(_ea_08090FFC & ~3u); uint32_t _rot = (_ea_08090FFC & 3u) * 8u; _v_08090FFC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08090FFC;
    g_cpu.R[15] = 0x08090FFEu;
    runtime_tick(_cyc_08090FFC);
    /* 08090FFE  08090ffe T ldrh r0,[r0,#0x6] */
    g_cpu.R[15] = 0x08090FFEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08090FFE = 1u;
    _cyc_08090FFE = 2u;
    uint32_t _base_08090FFE = g_cpu.R[0];
    uint32_t _off_08090FFE;
    _off_08090FFE = 0x00000006u;
    uint32_t _ea_08090FFE = _base_08090FFE + _off_08090FFE;
    uint32_t _post_08090FFE = _base_08090FFE + _off_08090FFE;
    _cyc_08090FFE += runtime_mem_cycles(_ea_08090FFE, 2u, 0u);
    uint32_t _v_08090FFE;
    { uint32_t _h = bus_read_u16(_ea_08090FFE & ~1u); if (_ea_08090FFE & 1u) _v_08090FFE = ((_h >> 8) | (_h << 24)); else _v_08090FFE = _h; }
    g_cpu.R[0] = _v_08090FFE;
    g_cpu.R[15] = 0x08091000u;
    runtime_tick(_cyc_08090FFE);
    /* 08091000  08091000 T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x08091000u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091000 = 1u;
    _cyc_08091000 = 1u;
    uint32_t _rm_08091000 = g_cpu.R[0];
    uint32_t _op2_08091000;
    uint32_t _co_08091000;
    _op2_08091000 = _rm_08091000 << 3;
    _co_08091000 = (_rm_08091000 >> 29) & 1u;
    uint32_t _r_08091000;
    _r_08091000 = _op2_08091000;
    arm_set_nzc_logic(_r_08091000, _co_08091000);
    g_cpu.R[0] = _r_08091000;
    g_cpu.R[15] = 0x08091002u;
    runtime_tick(_cyc_08091000);
    /* 08091002  08091002 T ldr r1,[r15,#0x4] */
    g_cpu.R[15] = 0x08091002u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091002 = 1u;
    _cyc_08091002 = 2u;
    uint32_t _base_08091002 = 0x08091006u & ~3u;
    uint32_t _off_08091002;
    _off_08091002 = 0x00000004u;
    uint32_t _ea_08091002 = _base_08091002 + _off_08091002;
    uint32_t _post_08091002 = _base_08091002 + _off_08091002;
    _cyc_08091002 += runtime_mem_cycles(_ea_08091002, 4u, 0u);
    uint32_t _v_08091002;
    { uint32_t _w = bus_read_u32(_ea_08091002 & ~3u); uint32_t _rot = (_ea_08091002 & 3u) * 8u; _v_08091002 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08091002;
    g_cpu.R[15] = 0x08091004u;
    runtime_tick(_cyc_08091002);
    /* 08091004  08091004 T b 0x080910a4 */
    g_cpu.R[15] = 0x08091004u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091004 = 1u;
    _cyc_08091004 = 3u;
    g_cpu.R[15] = 0x080910A4u;
    runtime_tick(_cyc_08091004);
    GBARECOMP_TAIL_CALL(gf_tfunc_080910A4);
    g_cpu.R[15] = 0x08091006u;
    runtime_tick(_cyc_08091004);
    /* fall-through to 0x08091006 */
    g_cpu.R[15] = 0x08091006u;
    runtime_dispatch(0x08091006u);
    return;
}

/* 0x0809104C  mode=thumb  end=0x08091056  branches=1 */


/* 0x0809100C thumb */
void gf_autojt_08090F94_04(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0809100Cu);
    /* 0809100C  0809100c T ldr r0,[r2,#0x4] */
    g_cpu.R[15] = 0x0809100Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809100C = 1u;
    _cyc_0809100C = 2u;
    uint32_t _base_0809100C = g_cpu.R[2];
    uint32_t _off_0809100C;
    _off_0809100C = 0x00000004u;
    uint32_t _ea_0809100C = _base_0809100C + _off_0809100C;
    uint32_t _post_0809100C = _base_0809100C + _off_0809100C;
    _cyc_0809100C += runtime_mem_cycles(_ea_0809100C, 4u, 0u);
    uint32_t _v_0809100C;
    { uint32_t _w = bus_read_u32(_ea_0809100C & ~3u); uint32_t _rot = (_ea_0809100C & 3u) * 8u; _v_0809100C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0809100C;
    g_cpu.R[15] = 0x0809100Eu;
    runtime_tick(_cyc_0809100C);
    /* 0809100E  0809100e T ldrh r0,[r0,#0x6] */
    g_cpu.R[15] = 0x0809100Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809100E = 1u;
    _cyc_0809100E = 2u;
    uint32_t _base_0809100E = g_cpu.R[0];
    uint32_t _off_0809100E;
    _off_0809100E = 0x00000006u;
    uint32_t _ea_0809100E = _base_0809100E + _off_0809100E;
    uint32_t _post_0809100E = _base_0809100E + _off_0809100E;
    _cyc_0809100E += runtime_mem_cycles(_ea_0809100E, 2u, 0u);
    uint32_t _v_0809100E;
    { uint32_t _h = bus_read_u16(_ea_0809100E & ~1u); if (_ea_0809100E & 1u) _v_0809100E = ((_h >> 8) | (_h << 24)); else _v_0809100E = _h; }
    g_cpu.R[0] = _v_0809100E;
    g_cpu.R[15] = 0x08091010u;
    runtime_tick(_cyc_0809100E);
    /* 08091010  08091010 T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x08091010u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091010 = 1u;
    _cyc_08091010 = 1u;
    uint32_t _rm_08091010 = g_cpu.R[0];
    uint32_t _op2_08091010;
    uint32_t _co_08091010;
    _op2_08091010 = _rm_08091010 << 3;
    _co_08091010 = (_rm_08091010 >> 29) & 1u;
    uint32_t _r_08091010;
    _r_08091010 = _op2_08091010;
    arm_set_nzc_logic(_r_08091010, _co_08091010);
    g_cpu.R[0] = _r_08091010;
    g_cpu.R[15] = 0x08091012u;
    runtime_tick(_cyc_08091010);
    /* 08091012  08091012 T ldr r1,[r15,#0x4] */
    g_cpu.R[15] = 0x08091012u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091012 = 1u;
    _cyc_08091012 = 2u;
    uint32_t _base_08091012 = 0x08091016u & ~3u;
    uint32_t _off_08091012;
    _off_08091012 = 0x00000004u;
    uint32_t _ea_08091012 = _base_08091012 + _off_08091012;
    uint32_t _post_08091012 = _base_08091012 + _off_08091012;
    _cyc_08091012 += runtime_mem_cycles(_ea_08091012, 4u, 0u);
    uint32_t _v_08091012;
    { uint32_t _w = bus_read_u32(_ea_08091012 & ~3u); uint32_t _rot = (_ea_08091012 & 3u) * 8u; _v_08091012 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08091012;
    g_cpu.R[15] = 0x08091014u;
    runtime_tick(_cyc_08091012);
    /* 08091014  08091014 T b 0x080910a4 */
    g_cpu.R[15] = 0x08091014u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091014 = 1u;
    _cyc_08091014 = 3u;
    g_cpu.R[15] = 0x080910A4u;
    runtime_tick(_cyc_08091014);
    GBARECOMP_TAIL_CALL(gf_tfunc_080910A4);
    g_cpu.R[15] = 0x08091016u;
    runtime_tick(_cyc_08091014);
    /* fall-through to 0x08091016 */
    g_cpu.R[15] = 0x08091016u;
    runtime_dispatch(0x08091016u);
    return;
}

/* 0x0809101C  mode=thumb  end=0x08091026  branches=1 */


/* 0x0809101C thumb */
void gf_autojt_08090F94_05(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0809101Cu);
    /* 0809101C  0809101c T ldr r0,[r2,#0x4] */
    g_cpu.R[15] = 0x0809101Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809101C = 1u;
    _cyc_0809101C = 2u;
    uint32_t _base_0809101C = g_cpu.R[2];
    uint32_t _off_0809101C;
    _off_0809101C = 0x00000004u;
    uint32_t _ea_0809101C = _base_0809101C + _off_0809101C;
    uint32_t _post_0809101C = _base_0809101C + _off_0809101C;
    _cyc_0809101C += runtime_mem_cycles(_ea_0809101C, 4u, 0u);
    uint32_t _v_0809101C;
    { uint32_t _w = bus_read_u32(_ea_0809101C & ~3u); uint32_t _rot = (_ea_0809101C & 3u) * 8u; _v_0809101C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0809101C;
    g_cpu.R[15] = 0x0809101Eu;
    runtime_tick(_cyc_0809101C);
    /* 0809101E  0809101e T ldrh r0,[r0,#0x6] */
    g_cpu.R[15] = 0x0809101Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809101E = 1u;
    _cyc_0809101E = 2u;
    uint32_t _base_0809101E = g_cpu.R[0];
    uint32_t _off_0809101E;
    _off_0809101E = 0x00000006u;
    uint32_t _ea_0809101E = _base_0809101E + _off_0809101E;
    uint32_t _post_0809101E = _base_0809101E + _off_0809101E;
    _cyc_0809101E += runtime_mem_cycles(_ea_0809101E, 2u, 0u);
    uint32_t _v_0809101E;
    { uint32_t _h = bus_read_u16(_ea_0809101E & ~1u); if (_ea_0809101E & 1u) _v_0809101E = ((_h >> 8) | (_h << 24)); else _v_0809101E = _h; }
    g_cpu.R[0] = _v_0809101E;
    g_cpu.R[15] = 0x08091020u;
    runtime_tick(_cyc_0809101E);
    /* 08091020  08091020 T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x08091020u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091020 = 1u;
    _cyc_08091020 = 1u;
    uint32_t _rm_08091020 = g_cpu.R[0];
    uint32_t _op2_08091020;
    uint32_t _co_08091020;
    _op2_08091020 = _rm_08091020 << 3;
    _co_08091020 = (_rm_08091020 >> 29) & 1u;
    uint32_t _r_08091020;
    _r_08091020 = _op2_08091020;
    arm_set_nzc_logic(_r_08091020, _co_08091020);
    g_cpu.R[0] = _r_08091020;
    g_cpu.R[15] = 0x08091022u;
    runtime_tick(_cyc_08091020);
    /* 08091022  08091022 T ldr r1,[r15,#0x4] */
    g_cpu.R[15] = 0x08091022u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091022 = 1u;
    _cyc_08091022 = 2u;
    uint32_t _base_08091022 = 0x08091026u & ~3u;
    uint32_t _off_08091022;
    _off_08091022 = 0x00000004u;
    uint32_t _ea_08091022 = _base_08091022 + _off_08091022;
    uint32_t _post_08091022 = _base_08091022 + _off_08091022;
    _cyc_08091022 += runtime_mem_cycles(_ea_08091022, 4u, 0u);
    uint32_t _v_08091022;
    { uint32_t _w = bus_read_u32(_ea_08091022 & ~3u); uint32_t _rot = (_ea_08091022 & 3u) * 8u; _v_08091022 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08091022;
    g_cpu.R[15] = 0x08091024u;
    runtime_tick(_cyc_08091022);
    /* 08091024  08091024 T b 0x080910a4 */
    g_cpu.R[15] = 0x08091024u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091024 = 1u;
    _cyc_08091024 = 3u;
    g_cpu.R[15] = 0x080910A4u;
    runtime_tick(_cyc_08091024);
    GBARECOMP_TAIL_CALL(gf_tfunc_080910A4);
    g_cpu.R[15] = 0x08091026u;
    runtime_tick(_cyc_08091024);
    /* fall-through to 0x08091026 */
    g_cpu.R[15] = 0x08091026u;
    runtime_dispatch(0x08091026u);
    return;
}

/* 0x0809102C  mode=thumb  end=0x08091036  branches=1 */


/* 0x0809102C thumb */
void gf_autojt_08090F94_06(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0809102Cu);
    /* 0809102C  0809102c T ldr r0,[r2,#0x4] */
    g_cpu.R[15] = 0x0809102Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809102C = 1u;
    _cyc_0809102C = 2u;
    uint32_t _base_0809102C = g_cpu.R[2];
    uint32_t _off_0809102C;
    _off_0809102C = 0x00000004u;
    uint32_t _ea_0809102C = _base_0809102C + _off_0809102C;
    uint32_t _post_0809102C = _base_0809102C + _off_0809102C;
    _cyc_0809102C += runtime_mem_cycles(_ea_0809102C, 4u, 0u);
    uint32_t _v_0809102C;
    { uint32_t _w = bus_read_u32(_ea_0809102C & ~3u); uint32_t _rot = (_ea_0809102C & 3u) * 8u; _v_0809102C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0809102C;
    g_cpu.R[15] = 0x0809102Eu;
    runtime_tick(_cyc_0809102C);
    /* 0809102E  0809102e T ldrh r0,[r0,#0x6] */
    g_cpu.R[15] = 0x0809102Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809102E = 1u;
    _cyc_0809102E = 2u;
    uint32_t _base_0809102E = g_cpu.R[0];
    uint32_t _off_0809102E;
    _off_0809102E = 0x00000006u;
    uint32_t _ea_0809102E = _base_0809102E + _off_0809102E;
    uint32_t _post_0809102E = _base_0809102E + _off_0809102E;
    _cyc_0809102E += runtime_mem_cycles(_ea_0809102E, 2u, 0u);
    uint32_t _v_0809102E;
    { uint32_t _h = bus_read_u16(_ea_0809102E & ~1u); if (_ea_0809102E & 1u) _v_0809102E = ((_h >> 8) | (_h << 24)); else _v_0809102E = _h; }
    g_cpu.R[0] = _v_0809102E;
    g_cpu.R[15] = 0x08091030u;
    runtime_tick(_cyc_0809102E);
    /* 08091030  08091030 T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x08091030u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091030 = 1u;
    _cyc_08091030 = 1u;
    uint32_t _rm_08091030 = g_cpu.R[0];
    uint32_t _op2_08091030;
    uint32_t _co_08091030;
    _op2_08091030 = _rm_08091030 << 3;
    _co_08091030 = (_rm_08091030 >> 29) & 1u;
    uint32_t _r_08091030;
    _r_08091030 = _op2_08091030;
    arm_set_nzc_logic(_r_08091030, _co_08091030);
    g_cpu.R[0] = _r_08091030;
    g_cpu.R[15] = 0x08091032u;
    runtime_tick(_cyc_08091030);
    /* 08091032  08091032 T ldr r1,[r15,#0x4] */
    g_cpu.R[15] = 0x08091032u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091032 = 1u;
    _cyc_08091032 = 2u;
    uint32_t _base_08091032 = 0x08091036u & ~3u;
    uint32_t _off_08091032;
    _off_08091032 = 0x00000004u;
    uint32_t _ea_08091032 = _base_08091032 + _off_08091032;
    uint32_t _post_08091032 = _base_08091032 + _off_08091032;
    _cyc_08091032 += runtime_mem_cycles(_ea_08091032, 4u, 0u);
    uint32_t _v_08091032;
    { uint32_t _w = bus_read_u32(_ea_08091032 & ~3u); uint32_t _rot = (_ea_08091032 & 3u) * 8u; _v_08091032 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08091032;
    g_cpu.R[15] = 0x08091034u;
    runtime_tick(_cyc_08091032);
    /* 08091034  08091034 T b 0x080910a4 */
    g_cpu.R[15] = 0x08091034u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091034 = 1u;
    _cyc_08091034 = 3u;
    g_cpu.R[15] = 0x080910A4u;
    runtime_tick(_cyc_08091034);
    GBARECOMP_TAIL_CALL(gf_tfunc_080910A4);
    g_cpu.R[15] = 0x08091036u;
    runtime_tick(_cyc_08091034);
    /* fall-through to 0x08091036 */
    g_cpu.R[15] = 0x08091036u;
    runtime_dispatch(0x08091036u);
    return;
}

/* 0x0809103C  mode=thumb  end=0x08091046  branches=1 */


/* 0x0809103C thumb */
void gf_autojt_08090F94_07(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0809103Cu);
    /* 0809103C  0809103c T ldr r0,[r2,#0x4] */
    g_cpu.R[15] = 0x0809103Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809103C = 1u;
    _cyc_0809103C = 2u;
    uint32_t _base_0809103C = g_cpu.R[2];
    uint32_t _off_0809103C;
    _off_0809103C = 0x00000004u;
    uint32_t _ea_0809103C = _base_0809103C + _off_0809103C;
    uint32_t _post_0809103C = _base_0809103C + _off_0809103C;
    _cyc_0809103C += runtime_mem_cycles(_ea_0809103C, 4u, 0u);
    uint32_t _v_0809103C;
    { uint32_t _w = bus_read_u32(_ea_0809103C & ~3u); uint32_t _rot = (_ea_0809103C & 3u) * 8u; _v_0809103C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0809103C;
    g_cpu.R[15] = 0x0809103Eu;
    runtime_tick(_cyc_0809103C);
    /* 0809103E  0809103e T ldrh r0,[r0,#0x6] */
    g_cpu.R[15] = 0x0809103Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809103E = 1u;
    _cyc_0809103E = 2u;
    uint32_t _base_0809103E = g_cpu.R[0];
    uint32_t _off_0809103E;
    _off_0809103E = 0x00000006u;
    uint32_t _ea_0809103E = _base_0809103E + _off_0809103E;
    uint32_t _post_0809103E = _base_0809103E + _off_0809103E;
    _cyc_0809103E += runtime_mem_cycles(_ea_0809103E, 2u, 0u);
    uint32_t _v_0809103E;
    { uint32_t _h = bus_read_u16(_ea_0809103E & ~1u); if (_ea_0809103E & 1u) _v_0809103E = ((_h >> 8) | (_h << 24)); else _v_0809103E = _h; }
    g_cpu.R[0] = _v_0809103E;
    g_cpu.R[15] = 0x08091040u;
    runtime_tick(_cyc_0809103E);
    /* 08091040  08091040 T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x08091040u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091040 = 1u;
    _cyc_08091040 = 1u;
    uint32_t _rm_08091040 = g_cpu.R[0];
    uint32_t _op2_08091040;
    uint32_t _co_08091040;
    _op2_08091040 = _rm_08091040 << 3;
    _co_08091040 = (_rm_08091040 >> 29) & 1u;
    uint32_t _r_08091040;
    _r_08091040 = _op2_08091040;
    arm_set_nzc_logic(_r_08091040, _co_08091040);
    g_cpu.R[0] = _r_08091040;
    g_cpu.R[15] = 0x08091042u;
    runtime_tick(_cyc_08091040);
    /* 08091042  08091042 T ldr r1,[r15,#0x4] */
    g_cpu.R[15] = 0x08091042u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091042 = 1u;
    _cyc_08091042 = 2u;
    uint32_t _base_08091042 = 0x08091046u & ~3u;
    uint32_t _off_08091042;
    _off_08091042 = 0x00000004u;
    uint32_t _ea_08091042 = _base_08091042 + _off_08091042;
    uint32_t _post_08091042 = _base_08091042 + _off_08091042;
    _cyc_08091042 += runtime_mem_cycles(_ea_08091042, 4u, 0u);
    uint32_t _v_08091042;
    { uint32_t _w = bus_read_u32(_ea_08091042 & ~3u); uint32_t _rot = (_ea_08091042 & 3u) * 8u; _v_08091042 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08091042;
    g_cpu.R[15] = 0x08091044u;
    runtime_tick(_cyc_08091042);
    /* 08091044  08091044 T b 0x080910a4 */
    g_cpu.R[15] = 0x08091044u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091044 = 1u;
    _cyc_08091044 = 3u;
    g_cpu.R[15] = 0x080910A4u;
    runtime_tick(_cyc_08091044);
    GBARECOMP_TAIL_CALL(gf_tfunc_080910A4);
    g_cpu.R[15] = 0x08091046u;
    runtime_tick(_cyc_08091044);
    /* fall-through to 0x08091046 */
    g_cpu.R[15] = 0x08091046u;
    runtime_dispatch(0x08091046u);
    return;
}

/* 0x080910A4  mode=thumb  end=0x080910A6  branches=0  indirect */


/* 0x0809104C thumb */
void gf_autojt_08090F94_08(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0809104Cu);
    /* 0809104C  0809104c T ldr r0,[r2,#0x4] */
    g_cpu.R[15] = 0x0809104Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809104C = 1u;
    _cyc_0809104C = 2u;
    uint32_t _base_0809104C = g_cpu.R[2];
    uint32_t _off_0809104C;
    _off_0809104C = 0x00000004u;
    uint32_t _ea_0809104C = _base_0809104C + _off_0809104C;
    uint32_t _post_0809104C = _base_0809104C + _off_0809104C;
    _cyc_0809104C += runtime_mem_cycles(_ea_0809104C, 4u, 0u);
    uint32_t _v_0809104C;
    { uint32_t _w = bus_read_u32(_ea_0809104C & ~3u); uint32_t _rot = (_ea_0809104C & 3u) * 8u; _v_0809104C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0809104C;
    g_cpu.R[15] = 0x0809104Eu;
    runtime_tick(_cyc_0809104C);
    /* 0809104E  0809104e T ldrh r0,[r0,#0x6] */
    g_cpu.R[15] = 0x0809104Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809104E = 1u;
    _cyc_0809104E = 2u;
    uint32_t _base_0809104E = g_cpu.R[0];
    uint32_t _off_0809104E;
    _off_0809104E = 0x00000006u;
    uint32_t _ea_0809104E = _base_0809104E + _off_0809104E;
    uint32_t _post_0809104E = _base_0809104E + _off_0809104E;
    _cyc_0809104E += runtime_mem_cycles(_ea_0809104E, 2u, 0u);
    uint32_t _v_0809104E;
    { uint32_t _h = bus_read_u16(_ea_0809104E & ~1u); if (_ea_0809104E & 1u) _v_0809104E = ((_h >> 8) | (_h << 24)); else _v_0809104E = _h; }
    g_cpu.R[0] = _v_0809104E;
    g_cpu.R[15] = 0x08091050u;
    runtime_tick(_cyc_0809104E);
    /* 08091050  08091050 T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x08091050u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091050 = 1u;
    _cyc_08091050 = 1u;
    uint32_t _rm_08091050 = g_cpu.R[0];
    uint32_t _op2_08091050;
    uint32_t _co_08091050;
    _op2_08091050 = _rm_08091050 << 3;
    _co_08091050 = (_rm_08091050 >> 29) & 1u;
    uint32_t _r_08091050;
    _r_08091050 = _op2_08091050;
    arm_set_nzc_logic(_r_08091050, _co_08091050);
    g_cpu.R[0] = _r_08091050;
    g_cpu.R[15] = 0x08091052u;
    runtime_tick(_cyc_08091050);
    /* 08091052  08091052 T ldr r1,[r15,#0x4] */
    g_cpu.R[15] = 0x08091052u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091052 = 1u;
    _cyc_08091052 = 2u;
    uint32_t _base_08091052 = 0x08091056u & ~3u;
    uint32_t _off_08091052;
    _off_08091052 = 0x00000004u;
    uint32_t _ea_08091052 = _base_08091052 + _off_08091052;
    uint32_t _post_08091052 = _base_08091052 + _off_08091052;
    _cyc_08091052 += runtime_mem_cycles(_ea_08091052, 4u, 0u);
    uint32_t _v_08091052;
    { uint32_t _w = bus_read_u32(_ea_08091052 & ~3u); uint32_t _rot = (_ea_08091052 & 3u) * 8u; _v_08091052 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08091052;
    g_cpu.R[15] = 0x08091054u;
    runtime_tick(_cyc_08091052);
    /* 08091054  08091054 T b 0x080910a4 */
    g_cpu.R[15] = 0x08091054u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091054 = 1u;
    _cyc_08091054 = 3u;
    g_cpu.R[15] = 0x080910A4u;
    runtime_tick(_cyc_08091054);
    GBARECOMP_TAIL_CALL(gf_tfunc_080910A4);
    g_cpu.R[15] = 0x08091056u;
    runtime_tick(_cyc_08091054);
    /* fall-through to 0x08091056 */
    g_cpu.R[15] = 0x08091056u;
    runtime_dispatch(0x08091056u);
    return;
}

/* 0x0809105C  mode=thumb  end=0x08091066  branches=1 */


/* 0x0809105C thumb */
void gf_autojt_08090F94_09(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0809105Cu);
    /* 0809105C  0809105c T ldr r0,[r2,#0x4] */
    g_cpu.R[15] = 0x0809105Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809105C = 1u;
    _cyc_0809105C = 2u;
    uint32_t _base_0809105C = g_cpu.R[2];
    uint32_t _off_0809105C;
    _off_0809105C = 0x00000004u;
    uint32_t _ea_0809105C = _base_0809105C + _off_0809105C;
    uint32_t _post_0809105C = _base_0809105C + _off_0809105C;
    _cyc_0809105C += runtime_mem_cycles(_ea_0809105C, 4u, 0u);
    uint32_t _v_0809105C;
    { uint32_t _w = bus_read_u32(_ea_0809105C & ~3u); uint32_t _rot = (_ea_0809105C & 3u) * 8u; _v_0809105C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0809105C;
    g_cpu.R[15] = 0x0809105Eu;
    runtime_tick(_cyc_0809105C);
    /* 0809105E  0809105e T ldrh r0,[r0,#0x6] */
    g_cpu.R[15] = 0x0809105Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809105E = 1u;
    _cyc_0809105E = 2u;
    uint32_t _base_0809105E = g_cpu.R[0];
    uint32_t _off_0809105E;
    _off_0809105E = 0x00000006u;
    uint32_t _ea_0809105E = _base_0809105E + _off_0809105E;
    uint32_t _post_0809105E = _base_0809105E + _off_0809105E;
    _cyc_0809105E += runtime_mem_cycles(_ea_0809105E, 2u, 0u);
    uint32_t _v_0809105E;
    { uint32_t _h = bus_read_u16(_ea_0809105E & ~1u); if (_ea_0809105E & 1u) _v_0809105E = ((_h >> 8) | (_h << 24)); else _v_0809105E = _h; }
    g_cpu.R[0] = _v_0809105E;
    g_cpu.R[15] = 0x08091060u;
    runtime_tick(_cyc_0809105E);
    /* 08091060  08091060 T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x08091060u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091060 = 1u;
    _cyc_08091060 = 1u;
    uint32_t _rm_08091060 = g_cpu.R[0];
    uint32_t _op2_08091060;
    uint32_t _co_08091060;
    _op2_08091060 = _rm_08091060 << 3;
    _co_08091060 = (_rm_08091060 >> 29) & 1u;
    uint32_t _r_08091060;
    _r_08091060 = _op2_08091060;
    arm_set_nzc_logic(_r_08091060, _co_08091060);
    g_cpu.R[0] = _r_08091060;
    g_cpu.R[15] = 0x08091062u;
    runtime_tick(_cyc_08091060);
    /* 08091062  08091062 T ldr r1,[r15,#0x4] */
    g_cpu.R[15] = 0x08091062u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091062 = 1u;
    _cyc_08091062 = 2u;
    uint32_t _base_08091062 = 0x08091066u & ~3u;
    uint32_t _off_08091062;
    _off_08091062 = 0x00000004u;
    uint32_t _ea_08091062 = _base_08091062 + _off_08091062;
    uint32_t _post_08091062 = _base_08091062 + _off_08091062;
    _cyc_08091062 += runtime_mem_cycles(_ea_08091062, 4u, 0u);
    uint32_t _v_08091062;
    { uint32_t _w = bus_read_u32(_ea_08091062 & ~3u); uint32_t _rot = (_ea_08091062 & 3u) * 8u; _v_08091062 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08091062;
    g_cpu.R[15] = 0x08091064u;
    runtime_tick(_cyc_08091062);
    /* 08091064  08091064 T b 0x080910a4 */
    g_cpu.R[15] = 0x08091064u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091064 = 1u;
    _cyc_08091064 = 3u;
    g_cpu.R[15] = 0x080910A4u;
    runtime_tick(_cyc_08091064);
    GBARECOMP_TAIL_CALL(gf_tfunc_080910A4);
    g_cpu.R[15] = 0x08091066u;
    runtime_tick(_cyc_08091064);
    /* fall-through to 0x08091066 */
    g_cpu.R[15] = 0x08091066u;
    runtime_dispatch(0x08091066u);
    return;
}

/* 0x0809106C  mode=thumb  end=0x08091076  branches=1 */


/* 0x0809106C thumb */
void gf_autojt_08090F94_10(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0809106Cu);
    /* 0809106C  0809106c T ldr r0,[r2,#0x4] */
    g_cpu.R[15] = 0x0809106Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809106C = 1u;
    _cyc_0809106C = 2u;
    uint32_t _base_0809106C = g_cpu.R[2];
    uint32_t _off_0809106C;
    _off_0809106C = 0x00000004u;
    uint32_t _ea_0809106C = _base_0809106C + _off_0809106C;
    uint32_t _post_0809106C = _base_0809106C + _off_0809106C;
    _cyc_0809106C += runtime_mem_cycles(_ea_0809106C, 4u, 0u);
    uint32_t _v_0809106C;
    { uint32_t _w = bus_read_u32(_ea_0809106C & ~3u); uint32_t _rot = (_ea_0809106C & 3u) * 8u; _v_0809106C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0809106C;
    g_cpu.R[15] = 0x0809106Eu;
    runtime_tick(_cyc_0809106C);
    /* 0809106E  0809106e T ldrh r0,[r0,#0x6] */
    g_cpu.R[15] = 0x0809106Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809106E = 1u;
    _cyc_0809106E = 2u;
    uint32_t _base_0809106E = g_cpu.R[0];
    uint32_t _off_0809106E;
    _off_0809106E = 0x00000006u;
    uint32_t _ea_0809106E = _base_0809106E + _off_0809106E;
    uint32_t _post_0809106E = _base_0809106E + _off_0809106E;
    _cyc_0809106E += runtime_mem_cycles(_ea_0809106E, 2u, 0u);
    uint32_t _v_0809106E;
    { uint32_t _h = bus_read_u16(_ea_0809106E & ~1u); if (_ea_0809106E & 1u) _v_0809106E = ((_h >> 8) | (_h << 24)); else _v_0809106E = _h; }
    g_cpu.R[0] = _v_0809106E;
    g_cpu.R[15] = 0x08091070u;
    runtime_tick(_cyc_0809106E);
    /* 08091070  08091070 T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x08091070u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091070 = 1u;
    _cyc_08091070 = 1u;
    uint32_t _rm_08091070 = g_cpu.R[0];
    uint32_t _op2_08091070;
    uint32_t _co_08091070;
    _op2_08091070 = _rm_08091070 << 3;
    _co_08091070 = (_rm_08091070 >> 29) & 1u;
    uint32_t _r_08091070;
    _r_08091070 = _op2_08091070;
    arm_set_nzc_logic(_r_08091070, _co_08091070);
    g_cpu.R[0] = _r_08091070;
    g_cpu.R[15] = 0x08091072u;
    runtime_tick(_cyc_08091070);
    /* 08091072  08091072 T ldr r1,[r15,#0x4] */
    g_cpu.R[15] = 0x08091072u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091072 = 1u;
    _cyc_08091072 = 2u;
    uint32_t _base_08091072 = 0x08091076u & ~3u;
    uint32_t _off_08091072;
    _off_08091072 = 0x00000004u;
    uint32_t _ea_08091072 = _base_08091072 + _off_08091072;
    uint32_t _post_08091072 = _base_08091072 + _off_08091072;
    _cyc_08091072 += runtime_mem_cycles(_ea_08091072, 4u, 0u);
    uint32_t _v_08091072;
    { uint32_t _w = bus_read_u32(_ea_08091072 & ~3u); uint32_t _rot = (_ea_08091072 & 3u) * 8u; _v_08091072 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08091072;
    g_cpu.R[15] = 0x08091074u;
    runtime_tick(_cyc_08091072);
    /* 08091074  08091074 T b 0x080910a4 */
    g_cpu.R[15] = 0x08091074u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091074 = 1u;
    _cyc_08091074 = 3u;
    g_cpu.R[15] = 0x080910A4u;
    runtime_tick(_cyc_08091074);
    GBARECOMP_TAIL_CALL(gf_tfunc_080910A4);
    g_cpu.R[15] = 0x08091076u;
    runtime_tick(_cyc_08091074);
    /* fall-through to 0x08091076 */
    g_cpu.R[15] = 0x08091076u;
    runtime_dispatch(0x08091076u);
    return;
}

/* 0x0809107C  mode=thumb  end=0x08091086  branches=1 */


/* 0x0809107C thumb */
void gf_autojt_08090F94_11(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0809107Cu);
    /* 0809107C  0809107c T ldr r0,[r2,#0x4] */
    g_cpu.R[15] = 0x0809107Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809107C = 1u;
    _cyc_0809107C = 2u;
    uint32_t _base_0809107C = g_cpu.R[2];
    uint32_t _off_0809107C;
    _off_0809107C = 0x00000004u;
    uint32_t _ea_0809107C = _base_0809107C + _off_0809107C;
    uint32_t _post_0809107C = _base_0809107C + _off_0809107C;
    _cyc_0809107C += runtime_mem_cycles(_ea_0809107C, 4u, 0u);
    uint32_t _v_0809107C;
    { uint32_t _w = bus_read_u32(_ea_0809107C & ~3u); uint32_t _rot = (_ea_0809107C & 3u) * 8u; _v_0809107C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0809107C;
    g_cpu.R[15] = 0x0809107Eu;
    runtime_tick(_cyc_0809107C);
    /* 0809107E  0809107e T ldrh r0,[r0,#0x6] */
    g_cpu.R[15] = 0x0809107Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809107E = 1u;
    _cyc_0809107E = 2u;
    uint32_t _base_0809107E = g_cpu.R[0];
    uint32_t _off_0809107E;
    _off_0809107E = 0x00000006u;
    uint32_t _ea_0809107E = _base_0809107E + _off_0809107E;
    uint32_t _post_0809107E = _base_0809107E + _off_0809107E;
    _cyc_0809107E += runtime_mem_cycles(_ea_0809107E, 2u, 0u);
    uint32_t _v_0809107E;
    { uint32_t _h = bus_read_u16(_ea_0809107E & ~1u); if (_ea_0809107E & 1u) _v_0809107E = ((_h >> 8) | (_h << 24)); else _v_0809107E = _h; }
    g_cpu.R[0] = _v_0809107E;
    g_cpu.R[15] = 0x08091080u;
    runtime_tick(_cyc_0809107E);
    /* 08091080  08091080 T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x08091080u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091080 = 1u;
    _cyc_08091080 = 1u;
    uint32_t _rm_08091080 = g_cpu.R[0];
    uint32_t _op2_08091080;
    uint32_t _co_08091080;
    _op2_08091080 = _rm_08091080 << 3;
    _co_08091080 = (_rm_08091080 >> 29) & 1u;
    uint32_t _r_08091080;
    _r_08091080 = _op2_08091080;
    arm_set_nzc_logic(_r_08091080, _co_08091080);
    g_cpu.R[0] = _r_08091080;
    g_cpu.R[15] = 0x08091082u;
    runtime_tick(_cyc_08091080);
    /* 08091082  08091082 T ldr r1,[r15,#0x4] */
    g_cpu.R[15] = 0x08091082u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091082 = 1u;
    _cyc_08091082 = 2u;
    uint32_t _base_08091082 = 0x08091086u & ~3u;
    uint32_t _off_08091082;
    _off_08091082 = 0x00000004u;
    uint32_t _ea_08091082 = _base_08091082 + _off_08091082;
    uint32_t _post_08091082 = _base_08091082 + _off_08091082;
    _cyc_08091082 += runtime_mem_cycles(_ea_08091082, 4u, 0u);
    uint32_t _v_08091082;
    { uint32_t _w = bus_read_u32(_ea_08091082 & ~3u); uint32_t _rot = (_ea_08091082 & 3u) * 8u; _v_08091082 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08091082;
    g_cpu.R[15] = 0x08091084u;
    runtime_tick(_cyc_08091082);
    /* 08091084  08091084 T b 0x080910a4 */
    g_cpu.R[15] = 0x08091084u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091084 = 1u;
    _cyc_08091084 = 3u;
    g_cpu.R[15] = 0x080910A4u;
    runtime_tick(_cyc_08091084);
    GBARECOMP_TAIL_CALL(gf_tfunc_080910A4);
    g_cpu.R[15] = 0x08091086u;
    runtime_tick(_cyc_08091084);
    /* fall-through to 0x08091086 */
    g_cpu.R[15] = 0x08091086u;
    runtime_dispatch(0x08091086u);
    return;
}

/* 0x0809108C  mode=thumb  end=0x08091096  branches=1 */


/* 0x0809108C thumb */
void gf_autojt_08090F94_12(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0809108Cu);
    /* 0809108C  0809108c T ldr r0,[r2,#0x4] */
    g_cpu.R[15] = 0x0809108Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809108C = 1u;
    _cyc_0809108C = 2u;
    uint32_t _base_0809108C = g_cpu.R[2];
    uint32_t _off_0809108C;
    _off_0809108C = 0x00000004u;
    uint32_t _ea_0809108C = _base_0809108C + _off_0809108C;
    uint32_t _post_0809108C = _base_0809108C + _off_0809108C;
    _cyc_0809108C += runtime_mem_cycles(_ea_0809108C, 4u, 0u);
    uint32_t _v_0809108C;
    { uint32_t _w = bus_read_u32(_ea_0809108C & ~3u); uint32_t _rot = (_ea_0809108C & 3u) * 8u; _v_0809108C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0809108C;
    g_cpu.R[15] = 0x0809108Eu;
    runtime_tick(_cyc_0809108C);
    /* 0809108E  0809108e T ldrh r0,[r0,#0x6] */
    g_cpu.R[15] = 0x0809108Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809108E = 1u;
    _cyc_0809108E = 2u;
    uint32_t _base_0809108E = g_cpu.R[0];
    uint32_t _off_0809108E;
    _off_0809108E = 0x00000006u;
    uint32_t _ea_0809108E = _base_0809108E + _off_0809108E;
    uint32_t _post_0809108E = _base_0809108E + _off_0809108E;
    _cyc_0809108E += runtime_mem_cycles(_ea_0809108E, 2u, 0u);
    uint32_t _v_0809108E;
    { uint32_t _h = bus_read_u16(_ea_0809108E & ~1u); if (_ea_0809108E & 1u) _v_0809108E = ((_h >> 8) | (_h << 24)); else _v_0809108E = _h; }
    g_cpu.R[0] = _v_0809108E;
    g_cpu.R[15] = 0x08091090u;
    runtime_tick(_cyc_0809108E);
    /* 08091090  08091090 T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x08091090u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091090 = 1u;
    _cyc_08091090 = 1u;
    uint32_t _rm_08091090 = g_cpu.R[0];
    uint32_t _op2_08091090;
    uint32_t _co_08091090;
    _op2_08091090 = _rm_08091090 << 3;
    _co_08091090 = (_rm_08091090 >> 29) & 1u;
    uint32_t _r_08091090;
    _r_08091090 = _op2_08091090;
    arm_set_nzc_logic(_r_08091090, _co_08091090);
    g_cpu.R[0] = _r_08091090;
    g_cpu.R[15] = 0x08091092u;
    runtime_tick(_cyc_08091090);
    /* 08091092  08091092 T ldr r1,[r15,#0x4] */
    g_cpu.R[15] = 0x08091092u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091092 = 1u;
    _cyc_08091092 = 2u;
    uint32_t _base_08091092 = 0x08091096u & ~3u;
    uint32_t _off_08091092;
    _off_08091092 = 0x00000004u;
    uint32_t _ea_08091092 = _base_08091092 + _off_08091092;
    uint32_t _post_08091092 = _base_08091092 + _off_08091092;
    _cyc_08091092 += runtime_mem_cycles(_ea_08091092, 4u, 0u);
    uint32_t _v_08091092;
    { uint32_t _w = bus_read_u32(_ea_08091092 & ~3u); uint32_t _rot = (_ea_08091092 & 3u) * 8u; _v_08091092 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08091092;
    g_cpu.R[15] = 0x08091094u;
    runtime_tick(_cyc_08091092);
    /* 08091094  08091094 T b 0x080910a4 */
    g_cpu.R[15] = 0x08091094u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08091094 = 1u;
    _cyc_08091094 = 3u;
    g_cpu.R[15] = 0x080910A4u;
    runtime_tick(_cyc_08091094);
    GBARECOMP_TAIL_CALL(gf_tfunc_080910A4);
    g_cpu.R[15] = 0x08091096u;
    runtime_tick(_cyc_08091094);
    /* fall-through to 0x08091096 */
    g_cpu.R[15] = 0x08091096u;
    runtime_dispatch(0x08091096u);
    return;
}

/* 0x0809109C  mode=thumb  end=0x080910A4  branches=0  indirect */


/* 0x0809109C thumb */
void gf_autojt_08090F94_13(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0809109Cu);
    /* 0809109C  0809109c T ldr r0,[r2,#0x4] */
    g_cpu.R[15] = 0x0809109Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809109C = 1u;
    _cyc_0809109C = 2u;
    uint32_t _base_0809109C = g_cpu.R[2];
    uint32_t _off_0809109C;
    _off_0809109C = 0x00000004u;
    uint32_t _ea_0809109C = _base_0809109C + _off_0809109C;
    uint32_t _post_0809109C = _base_0809109C + _off_0809109C;
    _cyc_0809109C += runtime_mem_cycles(_ea_0809109C, 4u, 0u);
    uint32_t _v_0809109C;
    { uint32_t _w = bus_read_u32(_ea_0809109C & ~3u); uint32_t _rot = (_ea_0809109C & 3u) * 8u; _v_0809109C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0809109C;
    g_cpu.R[15] = 0x0809109Eu;
    runtime_tick(_cyc_0809109C);
    /* 0809109E  0809109e T ldrh r0,[r0,#0x6] */
    g_cpu.R[15] = 0x0809109Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809109E = 1u;
    _cyc_0809109E = 2u;
    uint32_t _base_0809109E = g_cpu.R[0];
    uint32_t _off_0809109E;
    _off_0809109E = 0x00000006u;
    uint32_t _ea_0809109E = _base_0809109E + _off_0809109E;
    uint32_t _post_0809109E = _base_0809109E + _off_0809109E;
    _cyc_0809109E += runtime_mem_cycles(_ea_0809109E, 2u, 0u);
    uint32_t _v_0809109E;
    { uint32_t _h = bus_read_u16(_ea_0809109E & ~1u); if (_ea_0809109E & 1u) _v_0809109E = ((_h >> 8) | (_h << 24)); else _v_0809109E = _h; }
    g_cpu.R[0] = _v_0809109E;
    g_cpu.R[15] = 0x080910A0u;
    runtime_tick(_cyc_0809109E);
    /* 080910A0  080910a0 T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x080910A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080910A0 = 1u;
    _cyc_080910A0 = 1u;
    uint32_t _rm_080910A0 = g_cpu.R[0];
    uint32_t _op2_080910A0;
    uint32_t _co_080910A0;
    _op2_080910A0 = _rm_080910A0 << 3;
    _co_080910A0 = (_rm_080910A0 >> 29) & 1u;
    uint32_t _r_080910A0;
    _r_080910A0 = _op2_080910A0;
    arm_set_nzc_logic(_r_080910A0, _co_080910A0);
    g_cpu.R[0] = _r_080910A0;
    g_cpu.R[15] = 0x080910A2u;
    runtime_tick(_cyc_080910A0);
    /* 080910A2  080910a2 T ldr r1,[r15,#0x8] */
    g_cpu.R[15] = 0x080910A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080910A2 = 1u;
    _cyc_080910A2 = 2u;
    uint32_t _base_080910A2 = 0x080910A6u & ~3u;
    uint32_t _off_080910A2;
    _off_080910A2 = 0x00000008u;
    uint32_t _ea_080910A2 = _base_080910A2 + _off_080910A2;
    uint32_t _post_080910A2 = _base_080910A2 + _off_080910A2;
    _cyc_080910A2 += runtime_mem_cycles(_ea_080910A2, 4u, 0u);
    uint32_t _v_080910A2;
    { uint32_t _w = bus_read_u32(_ea_080910A2 & ~3u); uint32_t _rot = (_ea_080910A2 & 3u) * 8u; _v_080910A2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_080910A2;
    g_cpu.R[15] = 0x080910A4u;
    runtime_tick(_cyc_080910A2);
    /* fall-through to 0x080910A4 */
    g_cpu.R[15] = 0x080910A4u;
    runtime_dispatch(0x080910A4u);
    return;
}

/* 0x080910A6  mode=thumb  end=0x080910AA  branches=0  indirect */


/* 0x080C1564 thumb */
void gf_autojt_080C151C_00(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080C1564u);
    /* 080C1564  080c1564 T strb r2,[r3] */
    g_cpu.R[15] = 0x080C1564u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1564 = 1u;
    _cyc_080C1564 = 1u;
    uint32_t _base_080C1564 = g_cpu.R[3];
    uint32_t _off_080C1564;
    _off_080C1564 = 0x00000000u;
    uint32_t _ea_080C1564 = _base_080C1564 + _off_080C1564;
    uint32_t _post_080C1564 = _base_080C1564 + _off_080C1564;
    _cyc_080C1564 += runtime_mem_cycles(_ea_080C1564, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080C1564u, _ea_080C1564, (uint32_t)(g_cpu.R[2] & 0xFFu), 1u);
    bus_write_u8(_ea_080C1564, (uint8_t)(g_cpu.R[2] & 0xFFu));
    g_cpu.R[15] = 0x080C1566u;
    runtime_tick(_cyc_080C1564);
    /* 080C1566  080c1566 T b 0x080c163a */
    g_cpu.R[15] = 0x080C1566u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1566 = 1u;
    _cyc_080C1566 = 3u;
    g_cpu.R[15] = 0x080C163Au;
    runtime_tick(_cyc_080C1566);
    GBARECOMP_TAIL_CALL(gf_tfunc_080C163A);
    g_cpu.R[15] = 0x080C1568u;
    runtime_tick(_cyc_080C1566);
    /* fall-through to 0x080C1568 */
    g_cpu.R[15] = 0x080C1568u;
    runtime_dispatch(0x080C1568u);
    return;
}

/* 0x080C1570  mode=thumb  end=0x080C1578  branches=1 */


/* 0x080C1568 thumb */
void gf_autojt_080C151C_01(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080C1568u);
    /* 080C1568  080c1568 T ldrb r1,[r3] */
    g_cpu.R[15] = 0x080C1568u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1568 = 1u;
    _cyc_080C1568 = 2u;
    uint32_t _base_080C1568 = g_cpu.R[3];
    uint32_t _off_080C1568;
    _off_080C1568 = 0x00000000u;
    uint32_t _ea_080C1568 = _base_080C1568 + _off_080C1568;
    uint32_t _post_080C1568 = _base_080C1568 + _off_080C1568;
    _cyc_080C1568 += runtime_mem_cycles(_ea_080C1568, 1u, 0u);
    uint32_t _v_080C1568;
    _v_080C1568 = bus_read_u8(_ea_080C1568);
    g_cpu.R[1] = _v_080C1568;
    g_cpu.R[15] = 0x080C156Au;
    runtime_tick(_cyc_080C1568);
    /* 080C156A  080c156a T adds r0,r1,r2 */
    g_cpu.R[15] = 0x080C156Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C156A = 1u;
    _cyc_080C156A = 1u;
    uint32_t _rm_080C156A = g_cpu.R[2];
    uint32_t _op2_080C156A;
    uint32_t _co_080C156A;
    _op2_080C156A = _rm_080C156A;
    _co_080C156A = cpsr_c();
    uint32_t _rn_080C156A = g_cpu.R[1];
    uint32_t _r_080C156A;
    _r_080C156A = _rn_080C156A + _op2_080C156A;
    arm_set_nzcv_add(_rn_080C156A, _op2_080C156A, _r_080C156A);
    g_cpu.R[0] = _r_080C156A;
    g_cpu.R[15] = 0x080C156Cu;
    runtime_tick(_cyc_080C156A);
    /* 080C156C  080c156c T strb r0,[r3] */
    g_cpu.R[15] = 0x080C156Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C156C = 1u;
    _cyc_080C156C = 1u;
    uint32_t _base_080C156C = g_cpu.R[3];
    uint32_t _off_080C156C;
    _off_080C156C = 0x00000000u;
    uint32_t _ea_080C156C = _base_080C156C + _off_080C156C;
    uint32_t _post_080C156C = _base_080C156C + _off_080C156C;
    _cyc_080C156C += runtime_mem_cycles(_ea_080C156C, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080C156Cu, _ea_080C156C, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_080C156C, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x080C156Eu;
    runtime_tick(_cyc_080C156C);
    /* 080C156E  080c156e T b 0x080c163a */
    g_cpu.R[15] = 0x080C156Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C156E = 1u;
    _cyc_080C156E = 3u;
    g_cpu.R[15] = 0x080C163Au;
    runtime_tick(_cyc_080C156E);
    GBARECOMP_TAIL_CALL(gf_tfunc_080C163A);
    g_cpu.R[15] = 0x080C1570u;
    runtime_tick(_cyc_080C156E);
    /* fall-through to 0x080C1570 */
    g_cpu.R[15] = 0x080C1570u;
    runtime_dispatch(0x080C1570u);
    return;
}

/* 0x080C1578  mode=thumb  end=0x080C1582  branches=1 */


/* 0x080C1570 thumb */
void gf_autojt_080C151C_02(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080C1570u);
    /* 080C1570  080c1570 T ldrb r1,[r3] */
    g_cpu.R[15] = 0x080C1570u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1570 = 1u;
    _cyc_080C1570 = 2u;
    uint32_t _base_080C1570 = g_cpu.R[3];
    uint32_t _off_080C1570;
    _off_080C1570 = 0x00000000u;
    uint32_t _ea_080C1570 = _base_080C1570 + _off_080C1570;
    uint32_t _post_080C1570 = _base_080C1570 + _off_080C1570;
    _cyc_080C1570 += runtime_mem_cycles(_ea_080C1570, 1u, 0u);
    uint32_t _v_080C1570;
    _v_080C1570 = bus_read_u8(_ea_080C1570);
    g_cpu.R[1] = _v_080C1570;
    g_cpu.R[15] = 0x080C1572u;
    runtime_tick(_cyc_080C1570);
    /* 080C1572  080c1572 T subs r0,r1,r2 */
    g_cpu.R[15] = 0x080C1572u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1572 = 1u;
    _cyc_080C1572 = 1u;
    uint32_t _rm_080C1572 = g_cpu.R[2];
    uint32_t _op2_080C1572;
    uint32_t _co_080C1572;
    _op2_080C1572 = _rm_080C1572;
    _co_080C1572 = cpsr_c();
    uint32_t _rn_080C1572 = g_cpu.R[1];
    uint32_t _r_080C1572;
    _r_080C1572 = _rn_080C1572 - _op2_080C1572;
    arm_set_nzcv_sub(_rn_080C1572, _op2_080C1572, _r_080C1572);
    g_cpu.R[0] = _r_080C1572;
    g_cpu.R[15] = 0x080C1574u;
    runtime_tick(_cyc_080C1572);
    /* 080C1574  080c1574 T strb r0,[r3] */
    g_cpu.R[15] = 0x080C1574u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1574 = 1u;
    _cyc_080C1574 = 1u;
    uint32_t _base_080C1574 = g_cpu.R[3];
    uint32_t _off_080C1574;
    _off_080C1574 = 0x00000000u;
    uint32_t _ea_080C1574 = _base_080C1574 + _off_080C1574;
    uint32_t _post_080C1574 = _base_080C1574 + _off_080C1574;
    _cyc_080C1574 += runtime_mem_cycles(_ea_080C1574, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080C1574u, _ea_080C1574, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_080C1574, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x080C1576u;
    runtime_tick(_cyc_080C1574);
    /* 080C1576  080c1576 T b 0x080c163a */
    g_cpu.R[15] = 0x080C1576u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1576 = 1u;
    _cyc_080C1576 = 3u;
    g_cpu.R[15] = 0x080C163Au;
    runtime_tick(_cyc_080C1576);
    GBARECOMP_TAIL_CALL(gf_tfunc_080C163A);
    g_cpu.R[15] = 0x080C1578u;
    runtime_tick(_cyc_080C1576);
    /* fall-through to 0x080C1578 */
    g_cpu.R[15] = 0x080C1578u;
    runtime_dispatch(0x080C1578u);
    return;
}

/* 0x080C1582  mode=thumb  end=0x080C1590  branches=1 */


/* 0x080C1578 thumb */
void gf_autojt_080C151C_03(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080C1578u);
    /* 080C1578  080c1578 T ldr r0,[r4,#0x18] */
    g_cpu.R[15] = 0x080C1578u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1578 = 1u;
    _cyc_080C1578 = 2u;
    uint32_t _base_080C1578 = g_cpu.R[4];
    uint32_t _off_080C1578;
    _off_080C1578 = 0x00000018u;
    uint32_t _ea_080C1578 = _base_080C1578 + _off_080C1578;
    uint32_t _post_080C1578 = _base_080C1578 + _off_080C1578;
    _cyc_080C1578 += runtime_mem_cycles(_ea_080C1578, 4u, 0u);
    uint32_t _v_080C1578;
    { uint32_t _w = bus_read_u32(_ea_080C1578 & ~3u); uint32_t _rot = (_ea_080C1578 & 3u) * 8u; _v_080C1578 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080C1578;
    g_cpu.R[15] = 0x080C157Au;
    runtime_tick(_cyc_080C1578);
    /* 080C157A  080c157a T adds r0,r0,r2 */
    g_cpu.R[15] = 0x080C157Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C157A = 1u;
    _cyc_080C157A = 1u;
    uint32_t _rm_080C157A = g_cpu.R[2];
    uint32_t _op2_080C157A;
    uint32_t _co_080C157A;
    _op2_080C157A = _rm_080C157A;
    _co_080C157A = cpsr_c();
    uint32_t _rn_080C157A = g_cpu.R[0];
    uint32_t _r_080C157A;
    _r_080C157A = _rn_080C157A + _op2_080C157A;
    arm_set_nzcv_add(_rn_080C157A, _op2_080C157A, _r_080C157A);
    g_cpu.R[0] = _r_080C157A;
    g_cpu.R[15] = 0x080C157Cu;
    runtime_tick(_cyc_080C157A);
    /* 080C157C  080c157c T ldrb r0,[r0] */
    g_cpu.R[15] = 0x080C157Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C157C = 1u;
    _cyc_080C157C = 2u;
    uint32_t _base_080C157C = g_cpu.R[0];
    uint32_t _off_080C157C;
    _off_080C157C = 0x00000000u;
    uint32_t _ea_080C157C = _base_080C157C + _off_080C157C;
    uint32_t _post_080C157C = _base_080C157C + _off_080C157C;
    _cyc_080C157C += runtime_mem_cycles(_ea_080C157C, 1u, 0u);
    uint32_t _v_080C157C;
    _v_080C157C = bus_read_u8(_ea_080C157C);
    g_cpu.R[0] = _v_080C157C;
    g_cpu.R[15] = 0x080C157Eu;
    runtime_tick(_cyc_080C157C);
    /* 080C157E  080c157e T strb r0,[r3] */
    g_cpu.R[15] = 0x080C157Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C157E = 1u;
    _cyc_080C157E = 1u;
    uint32_t _base_080C157E = g_cpu.R[3];
    uint32_t _off_080C157E;
    _off_080C157E = 0x00000000u;
    uint32_t _ea_080C157E = _base_080C157E + _off_080C157E;
    uint32_t _post_080C157E = _base_080C157E + _off_080C157E;
    _cyc_080C157E += runtime_mem_cycles(_ea_080C157E, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080C157Eu, _ea_080C157E, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_080C157E, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x080C1580u;
    runtime_tick(_cyc_080C157E);
    /* 080C1580  080c1580 T b 0x080c163a */
    g_cpu.R[15] = 0x080C1580u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1580 = 1u;
    _cyc_080C1580 = 3u;
    g_cpu.R[15] = 0x080C163Au;
    runtime_tick(_cyc_080C1580);
    GBARECOMP_TAIL_CALL(gf_tfunc_080C163A);
    g_cpu.R[15] = 0x080C1582u;
    runtime_tick(_cyc_080C1580);
    /* fall-through to 0x080C1582 */
    g_cpu.R[15] = 0x080C1582u;
    runtime_dispatch(0x080C1582u);
    return;
}

/* 0x080C1590  mode=thumb  end=0x080C159E  branches=1 */


/* 0x080C1582 thumb */
void gf_autojt_080C151C_04(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080C1582u);
    /* 080C1582  080c1582 T ldr r0,[r4,#0x18] */
    g_cpu.R[15] = 0x080C1582u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1582 = 1u;
    _cyc_080C1582 = 2u;
    uint32_t _base_080C1582 = g_cpu.R[4];
    uint32_t _off_080C1582;
    _off_080C1582 = 0x00000018u;
    uint32_t _ea_080C1582 = _base_080C1582 + _off_080C1582;
    uint32_t _post_080C1582 = _base_080C1582 + _off_080C1582;
    _cyc_080C1582 += runtime_mem_cycles(_ea_080C1582, 4u, 0u);
    uint32_t _v_080C1582;
    { uint32_t _w = bus_read_u32(_ea_080C1582 & ~3u); uint32_t _rot = (_ea_080C1582 & 3u) * 8u; _v_080C1582 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080C1582;
    g_cpu.R[15] = 0x080C1584u;
    runtime_tick(_cyc_080C1582);
    /* 080C1584  080c1584 T adds r0,r0,r2 */
    g_cpu.R[15] = 0x080C1584u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1584 = 1u;
    _cyc_080C1584 = 1u;
    uint32_t _rm_080C1584 = g_cpu.R[2];
    uint32_t _op2_080C1584;
    uint32_t _co_080C1584;
    _op2_080C1584 = _rm_080C1584;
    _co_080C1584 = cpsr_c();
    uint32_t _rn_080C1584 = g_cpu.R[0];
    uint32_t _r_080C1584;
    _r_080C1584 = _rn_080C1584 + _op2_080C1584;
    arm_set_nzcv_add(_rn_080C1584, _op2_080C1584, _r_080C1584);
    g_cpu.R[0] = _r_080C1584;
    g_cpu.R[15] = 0x080C1586u;
    runtime_tick(_cyc_080C1584);
    /* 080C1586  080c1586 T ldrb r1,[r3] */
    g_cpu.R[15] = 0x080C1586u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1586 = 1u;
    _cyc_080C1586 = 2u;
    uint32_t _base_080C1586 = g_cpu.R[3];
    uint32_t _off_080C1586;
    _off_080C1586 = 0x00000000u;
    uint32_t _ea_080C1586 = _base_080C1586 + _off_080C1586;
    uint32_t _post_080C1586 = _base_080C1586 + _off_080C1586;
    _cyc_080C1586 += runtime_mem_cycles(_ea_080C1586, 1u, 0u);
    uint32_t _v_080C1586;
    _v_080C1586 = bus_read_u8(_ea_080C1586);
    g_cpu.R[1] = _v_080C1586;
    g_cpu.R[15] = 0x080C1588u;
    runtime_tick(_cyc_080C1586);
    /* 080C1588  080c1588 T ldrb r0,[r0] */
    g_cpu.R[15] = 0x080C1588u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1588 = 1u;
    _cyc_080C1588 = 2u;
    uint32_t _base_080C1588 = g_cpu.R[0];
    uint32_t _off_080C1588;
    _off_080C1588 = 0x00000000u;
    uint32_t _ea_080C1588 = _base_080C1588 + _off_080C1588;
    uint32_t _post_080C1588 = _base_080C1588 + _off_080C1588;
    _cyc_080C1588 += runtime_mem_cycles(_ea_080C1588, 1u, 0u);
    uint32_t _v_080C1588;
    _v_080C1588 = bus_read_u8(_ea_080C1588);
    g_cpu.R[0] = _v_080C1588;
    g_cpu.R[15] = 0x080C158Au;
    runtime_tick(_cyc_080C1588);
    /* 080C158A  080c158a T adds r0,r1,r0 */
    g_cpu.R[15] = 0x080C158Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C158A = 1u;
    _cyc_080C158A = 1u;
    uint32_t _rm_080C158A = g_cpu.R[0];
    uint32_t _op2_080C158A;
    uint32_t _co_080C158A;
    _op2_080C158A = _rm_080C158A;
    _co_080C158A = cpsr_c();
    uint32_t _rn_080C158A = g_cpu.R[1];
    uint32_t _r_080C158A;
    _r_080C158A = _rn_080C158A + _op2_080C158A;
    arm_set_nzcv_add(_rn_080C158A, _op2_080C158A, _r_080C158A);
    g_cpu.R[0] = _r_080C158A;
    g_cpu.R[15] = 0x080C158Cu;
    runtime_tick(_cyc_080C158A);
    /* 080C158C  080c158c T strb r0,[r3] */
    g_cpu.R[15] = 0x080C158Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C158C = 1u;
    _cyc_080C158C = 1u;
    uint32_t _base_080C158C = g_cpu.R[3];
    uint32_t _off_080C158C;
    _off_080C158C = 0x00000000u;
    uint32_t _ea_080C158C = _base_080C158C + _off_080C158C;
    uint32_t _post_080C158C = _base_080C158C + _off_080C158C;
    _cyc_080C158C += runtime_mem_cycles(_ea_080C158C, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080C158Cu, _ea_080C158C, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_080C158C, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x080C158Eu;
    runtime_tick(_cyc_080C158C);
    /* 080C158E  080c158e T b 0x080c163a */
    g_cpu.R[15] = 0x080C158Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C158E = 1u;
    _cyc_080C158E = 3u;
    g_cpu.R[15] = 0x080C163Au;
    runtime_tick(_cyc_080C158E);
    GBARECOMP_TAIL_CALL(gf_tfunc_080C163A);
    g_cpu.R[15] = 0x080C1590u;
    runtime_tick(_cyc_080C158E);
    /* fall-through to 0x080C1590 */
    g_cpu.R[15] = 0x080C1590u;
    runtime_dispatch(0x080C1590u);
    return;
}

/* 0x080C15C6  mode=thumb  end=0x080C15CE  branches=2 */


/* 0x080C1590 thumb */
void gf_autojt_080C151C_05(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080C1590u);
    /* 080C1590  080c1590 T ldr r0,[r4,#0x18] */
    g_cpu.R[15] = 0x080C1590u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1590 = 1u;
    _cyc_080C1590 = 2u;
    uint32_t _base_080C1590 = g_cpu.R[4];
    uint32_t _off_080C1590;
    _off_080C1590 = 0x00000018u;
    uint32_t _ea_080C1590 = _base_080C1590 + _off_080C1590;
    uint32_t _post_080C1590 = _base_080C1590 + _off_080C1590;
    _cyc_080C1590 += runtime_mem_cycles(_ea_080C1590, 4u, 0u);
    uint32_t _v_080C1590;
    { uint32_t _w = bus_read_u32(_ea_080C1590 & ~3u); uint32_t _rot = (_ea_080C1590 & 3u) * 8u; _v_080C1590 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080C1590;
    g_cpu.R[15] = 0x080C1592u;
    runtime_tick(_cyc_080C1590);
    /* 080C1592  080c1592 T adds r0,r0,r2 */
    g_cpu.R[15] = 0x080C1592u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1592 = 1u;
    _cyc_080C1592 = 1u;
    uint32_t _rm_080C1592 = g_cpu.R[2];
    uint32_t _op2_080C1592;
    uint32_t _co_080C1592;
    _op2_080C1592 = _rm_080C1592;
    _co_080C1592 = cpsr_c();
    uint32_t _rn_080C1592 = g_cpu.R[0];
    uint32_t _r_080C1592;
    _r_080C1592 = _rn_080C1592 + _op2_080C1592;
    arm_set_nzcv_add(_rn_080C1592, _op2_080C1592, _r_080C1592);
    g_cpu.R[0] = _r_080C1592;
    g_cpu.R[15] = 0x080C1594u;
    runtime_tick(_cyc_080C1592);
    /* 080C1594  080c1594 T ldrb r1,[r3] */
    g_cpu.R[15] = 0x080C1594u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1594 = 1u;
    _cyc_080C1594 = 2u;
    uint32_t _base_080C1594 = g_cpu.R[3];
    uint32_t _off_080C1594;
    _off_080C1594 = 0x00000000u;
    uint32_t _ea_080C1594 = _base_080C1594 + _off_080C1594;
    uint32_t _post_080C1594 = _base_080C1594 + _off_080C1594;
    _cyc_080C1594 += runtime_mem_cycles(_ea_080C1594, 1u, 0u);
    uint32_t _v_080C1594;
    _v_080C1594 = bus_read_u8(_ea_080C1594);
    g_cpu.R[1] = _v_080C1594;
    g_cpu.R[15] = 0x080C1596u;
    runtime_tick(_cyc_080C1594);
    /* 080C1596  080c1596 T ldrb r0,[r0] */
    g_cpu.R[15] = 0x080C1596u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1596 = 1u;
    _cyc_080C1596 = 2u;
    uint32_t _base_080C1596 = g_cpu.R[0];
    uint32_t _off_080C1596;
    _off_080C1596 = 0x00000000u;
    uint32_t _ea_080C1596 = _base_080C1596 + _off_080C1596;
    uint32_t _post_080C1596 = _base_080C1596 + _off_080C1596;
    _cyc_080C1596 += runtime_mem_cycles(_ea_080C1596, 1u, 0u);
    uint32_t _v_080C1596;
    _v_080C1596 = bus_read_u8(_ea_080C1596);
    g_cpu.R[0] = _v_080C1596;
    g_cpu.R[15] = 0x080C1598u;
    runtime_tick(_cyc_080C1596);
    /* 080C1598  080c1598 T subs r0,r1,r0 */
    g_cpu.R[15] = 0x080C1598u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1598 = 1u;
    _cyc_080C1598 = 1u;
    uint32_t _rm_080C1598 = g_cpu.R[0];
    uint32_t _op2_080C1598;
    uint32_t _co_080C1598;
    _op2_080C1598 = _rm_080C1598;
    _co_080C1598 = cpsr_c();
    uint32_t _rn_080C1598 = g_cpu.R[1];
    uint32_t _r_080C1598;
    _r_080C1598 = _rn_080C1598 - _op2_080C1598;
    arm_set_nzcv_sub(_rn_080C1598, _op2_080C1598, _r_080C1598);
    g_cpu.R[0] = _r_080C1598;
    g_cpu.R[15] = 0x080C159Au;
    runtime_tick(_cyc_080C1598);
    /* 080C159A  080c159a T strb r0,[r3] */
    g_cpu.R[15] = 0x080C159Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C159A = 1u;
    _cyc_080C159A = 1u;
    uint32_t _base_080C159A = g_cpu.R[3];
    uint32_t _off_080C159A;
    _off_080C159A = 0x00000000u;
    uint32_t _ea_080C159A = _base_080C159A + _off_080C159A;
    uint32_t _post_080C159A = _base_080C159A + _off_080C159A;
    _cyc_080C159A += runtime_mem_cycles(_ea_080C159A, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080C159Au, _ea_080C159A, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_080C159A, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x080C159Cu;
    runtime_tick(_cyc_080C159A);
    /* 080C159C  080c159c T b 0x080c163a */
    g_cpu.R[15] = 0x080C159Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C159C = 1u;
    _cyc_080C159C = 3u;
    g_cpu.R[15] = 0x080C163Au;
    runtime_tick(_cyc_080C159C);
    GBARECOMP_TAIL_CALL(gf_tfunc_080C163A);
    g_cpu.R[15] = 0x080C159Eu;
    runtime_tick(_cyc_080C159C);
    /* fall-through to 0x080C159E */
    g_cpu.R[15] = 0x080C159Eu;
    runtime_dispatch(0x080C159Eu);
    return;
}

/* 0x080C159E  mode=thumb  end=0x080C15A6  branches=2 */


/* 0x080C159E thumb */
void gf_autojt_080C151C_06(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080C159Eu);
    /* 080C159E  080c159e T ldrb r3,[r3] */
    g_cpu.R[15] = 0x080C159Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C159E = 1u;
    _cyc_080C159E = 2u;
    uint32_t _base_080C159E = g_cpu.R[3];
    uint32_t _off_080C159E;
    _off_080C159E = 0x00000000u;
    uint32_t _ea_080C159E = _base_080C159E + _off_080C159E;
    uint32_t _post_080C159E = _base_080C159E + _off_080C159E;
    _cyc_080C159E += runtime_mem_cycles(_ea_080C159E, 1u, 0u);
    uint32_t _v_080C159E;
    _v_080C159E = bus_read_u8(_ea_080C159E);
    g_cpu.R[3] = _v_080C159E;
    g_cpu.R[15] = 0x080C15A0u;
    runtime_tick(_cyc_080C159E);
    /* 080C15A0  080c15a0 T cmps r3,r2 */
    g_cpu.R[15] = 0x080C15A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15A0 = 1u;
    _cyc_080C15A0 = 1u;
    uint32_t _rm_080C15A0 = g_cpu.R[2];
    uint32_t _op2_080C15A0;
    uint32_t _co_080C15A0;
    _op2_080C15A0 = _rm_080C15A0;
    _co_080C15A0 = cpsr_c();
    uint32_t _rn_080C15A0 = g_cpu.R[3];
    uint32_t _r_080C15A0;
    _r_080C15A0 = _rn_080C15A0 - _op2_080C15A0;
    arm_set_nzcv_sub(_rn_080C15A0, _op2_080C15A0, _r_080C15A0);
    g_cpu.R[15] = 0x080C15A2u;
    runtime_tick(_cyc_080C15A0);
    /* 080C15A2  080c15a2 T beq 0x080c1620 */
    g_cpu.R[15] = 0x080C15A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15A2 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080C15A2 = 3u;
        g_cpu.R[15] = 0x080C1620u;
        runtime_tick(_cyc_080C15A2);
        GBARECOMP_TAIL_CALL(gf_tfunc_080C1620);
    }
    g_cpu.R[15] = 0x080C15A4u;
    runtime_tick(_cyc_080C15A2);
    /* 080C15A4  080c15a4 T b 0x080c1634 */
    g_cpu.R[15] = 0x080C15A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15A4 = 1u;
    _cyc_080C15A4 = 3u;
    g_cpu.R[15] = 0x080C1634u;
    runtime_tick(_cyc_080C15A4);
    GBARECOMP_TAIL_CALL(gf_tfunc_080C1634);
    g_cpu.R[15] = 0x080C15A6u;
    runtime_tick(_cyc_080C15A4);
    /* fall-through to 0x080C15A6 */
    g_cpu.R[15] = 0x080C15A6u;
    runtime_dispatch(0x080C15A6u);
    return;
}

/* 0x080C15A6  mode=thumb  end=0x080C15AE  branches=2 */


/* 0x080C15A6 thumb */
void gf_autojt_080C151C_07(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080C15A6u);
    /* 080C15A6  080c15a6 T ldrb r3,[r3] */
    g_cpu.R[15] = 0x080C15A6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15A6 = 1u;
    _cyc_080C15A6 = 2u;
    uint32_t _base_080C15A6 = g_cpu.R[3];
    uint32_t _off_080C15A6;
    _off_080C15A6 = 0x00000000u;
    uint32_t _ea_080C15A6 = _base_080C15A6 + _off_080C15A6;
    uint32_t _post_080C15A6 = _base_080C15A6 + _off_080C15A6;
    _cyc_080C15A6 += runtime_mem_cycles(_ea_080C15A6, 1u, 0u);
    uint32_t _v_080C15A6;
    _v_080C15A6 = bus_read_u8(_ea_080C15A6);
    g_cpu.R[3] = _v_080C15A6;
    g_cpu.R[15] = 0x080C15A8u;
    runtime_tick(_cyc_080C15A6);
    /* 080C15A8  080c15a8 T cmps r3,r2 */
    g_cpu.R[15] = 0x080C15A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15A8 = 1u;
    _cyc_080C15A8 = 1u;
    uint32_t _rm_080C15A8 = g_cpu.R[2];
    uint32_t _op2_080C15A8;
    uint32_t _co_080C15A8;
    _op2_080C15A8 = _rm_080C15A8;
    _co_080C15A8 = cpsr_c();
    uint32_t _rn_080C15A8 = g_cpu.R[3];
    uint32_t _r_080C15A8;
    _r_080C15A8 = _rn_080C15A8 - _op2_080C15A8;
    arm_set_nzcv_sub(_rn_080C15A8, _op2_080C15A8, _r_080C15A8);
    g_cpu.R[15] = 0x080C15AAu;
    runtime_tick(_cyc_080C15A8);
    /* 080C15AA  080c15aa T bne 0x080c1620 */
    g_cpu.R[15] = 0x080C15AAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15AA = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_080C15AA = 3u;
        g_cpu.R[15] = 0x080C1620u;
        runtime_tick(_cyc_080C15AA);
        GBARECOMP_TAIL_CALL(gf_tfunc_080C1620);
    }
    g_cpu.R[15] = 0x080C15ACu;
    runtime_tick(_cyc_080C15AA);
    /* 080C15AC  080c15ac T b 0x080c1634 */
    g_cpu.R[15] = 0x080C15ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15AC = 1u;
    _cyc_080C15AC = 3u;
    g_cpu.R[15] = 0x080C1634u;
    runtime_tick(_cyc_080C15AC);
    GBARECOMP_TAIL_CALL(gf_tfunc_080C1634);
    g_cpu.R[15] = 0x080C15AEu;
    runtime_tick(_cyc_080C15AC);
    /* fall-through to 0x080C15AE */
    g_cpu.R[15] = 0x080C15AEu;
    runtime_dispatch(0x080C15AEu);
    return;
}

/* 0x080C15AE  mode=thumb  end=0x080C15B6  branches=2 */


/* 0x080C15AE thumb */
void gf_autojt_080C151C_08(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080C15AEu);
    /* 080C15AE  080c15ae T ldrb r3,[r3] */
    g_cpu.R[15] = 0x080C15AEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15AE = 1u;
    _cyc_080C15AE = 2u;
    uint32_t _base_080C15AE = g_cpu.R[3];
    uint32_t _off_080C15AE;
    _off_080C15AE = 0x00000000u;
    uint32_t _ea_080C15AE = _base_080C15AE + _off_080C15AE;
    uint32_t _post_080C15AE = _base_080C15AE + _off_080C15AE;
    _cyc_080C15AE += runtime_mem_cycles(_ea_080C15AE, 1u, 0u);
    uint32_t _v_080C15AE;
    _v_080C15AE = bus_read_u8(_ea_080C15AE);
    g_cpu.R[3] = _v_080C15AE;
    g_cpu.R[15] = 0x080C15B0u;
    runtime_tick(_cyc_080C15AE);
    /* 080C15B0  080c15b0 T cmps r3,r2 */
    g_cpu.R[15] = 0x080C15B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15B0 = 1u;
    _cyc_080C15B0 = 1u;
    uint32_t _rm_080C15B0 = g_cpu.R[2];
    uint32_t _op2_080C15B0;
    uint32_t _co_080C15B0;
    _op2_080C15B0 = _rm_080C15B0;
    _co_080C15B0 = cpsr_c();
    uint32_t _rn_080C15B0 = g_cpu.R[3];
    uint32_t _r_080C15B0;
    _r_080C15B0 = _rn_080C15B0 - _op2_080C15B0;
    arm_set_nzcv_sub(_rn_080C15B0, _op2_080C15B0, _r_080C15B0);
    g_cpu.R[15] = 0x080C15B2u;
    runtime_tick(_cyc_080C15B0);
    /* 080C15B2  080c15b2 T bhi 0x080c1620 */
    g_cpu.R[15] = 0x080C15B2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15B2 = 1u;
    if (arm_cond_passes(0x8u)) {
        _cyc_080C15B2 = 3u;
        g_cpu.R[15] = 0x080C1620u;
        runtime_tick(_cyc_080C15B2);
        GBARECOMP_TAIL_CALL(gf_tfunc_080C1620);
    }
    g_cpu.R[15] = 0x080C15B4u;
    runtime_tick(_cyc_080C15B2);
    /* 080C15B4  080c15b4 T b 0x080c1634 */
    g_cpu.R[15] = 0x080C15B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15B4 = 1u;
    _cyc_080C15B4 = 3u;
    g_cpu.R[15] = 0x080C1634u;
    runtime_tick(_cyc_080C15B4);
    GBARECOMP_TAIL_CALL(gf_tfunc_080C1634);
    g_cpu.R[15] = 0x080C15B6u;
    runtime_tick(_cyc_080C15B4);
    /* fall-through to 0x080C15B6 */
    g_cpu.R[15] = 0x080C15B6u;
    runtime_dispatch(0x080C15B6u);
    return;
}

/* 0x080C15B6  mode=thumb  end=0x080C15BE  branches=2 */


/* 0x080C15B6 thumb */
void gf_autojt_080C151C_09(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080C15B6u);
    /* 080C15B6  080c15b6 T ldrb r3,[r3] */
    g_cpu.R[15] = 0x080C15B6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15B6 = 1u;
    _cyc_080C15B6 = 2u;
    uint32_t _base_080C15B6 = g_cpu.R[3];
    uint32_t _off_080C15B6;
    _off_080C15B6 = 0x00000000u;
    uint32_t _ea_080C15B6 = _base_080C15B6 + _off_080C15B6;
    uint32_t _post_080C15B6 = _base_080C15B6 + _off_080C15B6;
    _cyc_080C15B6 += runtime_mem_cycles(_ea_080C15B6, 1u, 0u);
    uint32_t _v_080C15B6;
    _v_080C15B6 = bus_read_u8(_ea_080C15B6);
    g_cpu.R[3] = _v_080C15B6;
    g_cpu.R[15] = 0x080C15B8u;
    runtime_tick(_cyc_080C15B6);
    /* 080C15B8  080c15b8 T cmps r3,r2 */
    g_cpu.R[15] = 0x080C15B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15B8 = 1u;
    _cyc_080C15B8 = 1u;
    uint32_t _rm_080C15B8 = g_cpu.R[2];
    uint32_t _op2_080C15B8;
    uint32_t _co_080C15B8;
    _op2_080C15B8 = _rm_080C15B8;
    _co_080C15B8 = cpsr_c();
    uint32_t _rn_080C15B8 = g_cpu.R[3];
    uint32_t _r_080C15B8;
    _r_080C15B8 = _rn_080C15B8 - _op2_080C15B8;
    arm_set_nzcv_sub(_rn_080C15B8, _op2_080C15B8, _r_080C15B8);
    g_cpu.R[15] = 0x080C15BAu;
    runtime_tick(_cyc_080C15B8);
    /* 080C15BA  080c15ba T bcs 0x080c1620 */
    g_cpu.R[15] = 0x080C15BAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15BA = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_080C15BA = 3u;
        g_cpu.R[15] = 0x080C1620u;
        runtime_tick(_cyc_080C15BA);
        GBARECOMP_TAIL_CALL(gf_tfunc_080C1620);
    }
    g_cpu.R[15] = 0x080C15BCu;
    runtime_tick(_cyc_080C15BA);
    /* 080C15BC  080c15bc T b 0x080c1634 */
    g_cpu.R[15] = 0x080C15BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15BC = 1u;
    _cyc_080C15BC = 3u;
    g_cpu.R[15] = 0x080C1634u;
    runtime_tick(_cyc_080C15BC);
    GBARECOMP_TAIL_CALL(gf_tfunc_080C1634);
    g_cpu.R[15] = 0x080C15BEu;
    runtime_tick(_cyc_080C15BC);
    /* fall-through to 0x080C15BE */
    g_cpu.R[15] = 0x080C15BEu;
    runtime_dispatch(0x080C15BEu);
    return;
}

/* 0x080C15BE  mode=thumb  end=0x080C15C6  branches=2 */


/* 0x080C15BE thumb */
void gf_autojt_080C151C_10(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080C15BEu);
    /* 080C15BE  080c15be T ldrb r3,[r3] */
    g_cpu.R[15] = 0x080C15BEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15BE = 1u;
    _cyc_080C15BE = 2u;
    uint32_t _base_080C15BE = g_cpu.R[3];
    uint32_t _off_080C15BE;
    _off_080C15BE = 0x00000000u;
    uint32_t _ea_080C15BE = _base_080C15BE + _off_080C15BE;
    uint32_t _post_080C15BE = _base_080C15BE + _off_080C15BE;
    _cyc_080C15BE += runtime_mem_cycles(_ea_080C15BE, 1u, 0u);
    uint32_t _v_080C15BE;
    _v_080C15BE = bus_read_u8(_ea_080C15BE);
    g_cpu.R[3] = _v_080C15BE;
    g_cpu.R[15] = 0x080C15C0u;
    runtime_tick(_cyc_080C15BE);
    /* 080C15C0  080c15c0 T cmps r3,r2 */
    g_cpu.R[15] = 0x080C15C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15C0 = 1u;
    _cyc_080C15C0 = 1u;
    uint32_t _rm_080C15C0 = g_cpu.R[2];
    uint32_t _op2_080C15C0;
    uint32_t _co_080C15C0;
    _op2_080C15C0 = _rm_080C15C0;
    _co_080C15C0 = cpsr_c();
    uint32_t _rn_080C15C0 = g_cpu.R[3];
    uint32_t _r_080C15C0;
    _r_080C15C0 = _rn_080C15C0 - _op2_080C15C0;
    arm_set_nzcv_sub(_rn_080C15C0, _op2_080C15C0, _r_080C15C0);
    g_cpu.R[15] = 0x080C15C2u;
    runtime_tick(_cyc_080C15C0);
    /* 080C15C2  080c15c2 T bls 0x080c1620 */
    g_cpu.R[15] = 0x080C15C2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15C2 = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_080C15C2 = 3u;
        g_cpu.R[15] = 0x080C1620u;
        runtime_tick(_cyc_080C15C2);
        GBARECOMP_TAIL_CALL(gf_tfunc_080C1620);
    }
    g_cpu.R[15] = 0x080C15C4u;
    runtime_tick(_cyc_080C15C2);
    /* 080C15C4  080c15c4 T b 0x080c1634 */
    g_cpu.R[15] = 0x080C15C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15C4 = 1u;
    _cyc_080C15C4 = 3u;
    g_cpu.R[15] = 0x080C1634u;
    runtime_tick(_cyc_080C15C4);
    GBARECOMP_TAIL_CALL(gf_tfunc_080C1634);
    g_cpu.R[15] = 0x080C15C6u;
    runtime_tick(_cyc_080C15C4);
    /* fall-through to 0x080C15C6 */
    g_cpu.R[15] = 0x080C15C6u;
    runtime_dispatch(0x080C15C6u);
    return;
}

/* 0x080C15CE  mode=thumb  end=0x080C15DC  branches=2 */


/* 0x080C15C6 thumb */
void gf_autojt_080C151C_11(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080C15C6u);
    /* 080C15C6  080c15c6 T ldrb r3,[r3] */
    g_cpu.R[15] = 0x080C15C6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15C6 = 1u;
    _cyc_080C15C6 = 2u;
    uint32_t _base_080C15C6 = g_cpu.R[3];
    uint32_t _off_080C15C6;
    _off_080C15C6 = 0x00000000u;
    uint32_t _ea_080C15C6 = _base_080C15C6 + _off_080C15C6;
    uint32_t _post_080C15C6 = _base_080C15C6 + _off_080C15C6;
    _cyc_080C15C6 += runtime_mem_cycles(_ea_080C15C6, 1u, 0u);
    uint32_t _v_080C15C6;
    _v_080C15C6 = bus_read_u8(_ea_080C15C6);
    g_cpu.R[3] = _v_080C15C6;
    g_cpu.R[15] = 0x080C15C8u;
    runtime_tick(_cyc_080C15C6);
    /* 080C15C8  080c15c8 T cmps r3,r2 */
    g_cpu.R[15] = 0x080C15C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15C8 = 1u;
    _cyc_080C15C8 = 1u;
    uint32_t _rm_080C15C8 = g_cpu.R[2];
    uint32_t _op2_080C15C8;
    uint32_t _co_080C15C8;
    _op2_080C15C8 = _rm_080C15C8;
    _co_080C15C8 = cpsr_c();
    uint32_t _rn_080C15C8 = g_cpu.R[3];
    uint32_t _r_080C15C8;
    _r_080C15C8 = _rn_080C15C8 - _op2_080C15C8;
    arm_set_nzcv_sub(_rn_080C15C8, _op2_080C15C8, _r_080C15C8);
    g_cpu.R[15] = 0x080C15CAu;
    runtime_tick(_cyc_080C15C8);
    /* 080C15CA  080c15ca T bcc 0x080c1620 */
    g_cpu.R[15] = 0x080C15CAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15CA = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_080C15CA = 3u;
        g_cpu.R[15] = 0x080C1620u;
        runtime_tick(_cyc_080C15CA);
        GBARECOMP_TAIL_CALL(gf_tfunc_080C1620);
    }
    g_cpu.R[15] = 0x080C15CCu;
    runtime_tick(_cyc_080C15CA);
    /* 080C15CC  080c15cc T b 0x080c1634 */
    g_cpu.R[15] = 0x080C15CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15CC = 1u;
    _cyc_080C15CC = 3u;
    g_cpu.R[15] = 0x080C1634u;
    runtime_tick(_cyc_080C15CC);
    GBARECOMP_TAIL_CALL(gf_tfunc_080C1634);
    g_cpu.R[15] = 0x080C15CEu;
    runtime_tick(_cyc_080C15CC);
    /* fall-through to 0x080C15CE */
    g_cpu.R[15] = 0x080C15CEu;
    runtime_dispatch(0x080C15CEu);
    return;
}

/* 0x080C1614  mode=thumb  end=0x080C1620  branches=4 */


/* 0x080C15CE thumb */
void gf_autojt_080C151C_12(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080C15CEu);
    /* 080C15CE  080c15ce T ldr r0,[r4,#0x18] */
    g_cpu.R[15] = 0x080C15CEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15CE = 1u;
    _cyc_080C15CE = 2u;
    uint32_t _base_080C15CE = g_cpu.R[4];
    uint32_t _off_080C15CE;
    _off_080C15CE = 0x00000018u;
    uint32_t _ea_080C15CE = _base_080C15CE + _off_080C15CE;
    uint32_t _post_080C15CE = _base_080C15CE + _off_080C15CE;
    _cyc_080C15CE += runtime_mem_cycles(_ea_080C15CE, 4u, 0u);
    uint32_t _v_080C15CE;
    { uint32_t _w = bus_read_u32(_ea_080C15CE & ~3u); uint32_t _rot = (_ea_080C15CE & 3u) * 8u; _v_080C15CE = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080C15CE;
    g_cpu.R[15] = 0x080C15D0u;
    runtime_tick(_cyc_080C15CE);
    /* 080C15D0  080c15d0 T adds r0,r0,r2 */
    g_cpu.R[15] = 0x080C15D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15D0 = 1u;
    _cyc_080C15D0 = 1u;
    uint32_t _rm_080C15D0 = g_cpu.R[2];
    uint32_t _op2_080C15D0;
    uint32_t _co_080C15D0;
    _op2_080C15D0 = _rm_080C15D0;
    _co_080C15D0 = cpsr_c();
    uint32_t _rn_080C15D0 = g_cpu.R[0];
    uint32_t _r_080C15D0;
    _r_080C15D0 = _rn_080C15D0 + _op2_080C15D0;
    arm_set_nzcv_add(_rn_080C15D0, _op2_080C15D0, _r_080C15D0);
    g_cpu.R[0] = _r_080C15D0;
    g_cpu.R[15] = 0x080C15D2u;
    runtime_tick(_cyc_080C15D0);
    /* 080C15D2  080c15d2 T ldrb r3,[r3] */
    g_cpu.R[15] = 0x080C15D2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15D2 = 1u;
    _cyc_080C15D2 = 2u;
    uint32_t _base_080C15D2 = g_cpu.R[3];
    uint32_t _off_080C15D2;
    _off_080C15D2 = 0x00000000u;
    uint32_t _ea_080C15D2 = _base_080C15D2 + _off_080C15D2;
    uint32_t _post_080C15D2 = _base_080C15D2 + _off_080C15D2;
    _cyc_080C15D2 += runtime_mem_cycles(_ea_080C15D2, 1u, 0u);
    uint32_t _v_080C15D2;
    _v_080C15D2 = bus_read_u8(_ea_080C15D2);
    g_cpu.R[3] = _v_080C15D2;
    g_cpu.R[15] = 0x080C15D4u;
    runtime_tick(_cyc_080C15D2);
    /* 080C15D4  080c15d4 T ldrb r0,[r0] */
    g_cpu.R[15] = 0x080C15D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15D4 = 1u;
    _cyc_080C15D4 = 2u;
    uint32_t _base_080C15D4 = g_cpu.R[0];
    uint32_t _off_080C15D4;
    _off_080C15D4 = 0x00000000u;
    uint32_t _ea_080C15D4 = _base_080C15D4 + _off_080C15D4;
    uint32_t _post_080C15D4 = _base_080C15D4 + _off_080C15D4;
    _cyc_080C15D4 += runtime_mem_cycles(_ea_080C15D4, 1u, 0u);
    uint32_t _v_080C15D4;
    _v_080C15D4 = bus_read_u8(_ea_080C15D4);
    g_cpu.R[0] = _v_080C15D4;
    g_cpu.R[15] = 0x080C15D6u;
    runtime_tick(_cyc_080C15D4);
    /* 080C15D6  080c15d6 T cmps r3,r0 */
    g_cpu.R[15] = 0x080C15D6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15D6 = 1u;
    _cyc_080C15D6 = 1u;
    uint32_t _rm_080C15D6 = g_cpu.R[0];
    uint32_t _op2_080C15D6;
    uint32_t _co_080C15D6;
    _op2_080C15D6 = _rm_080C15D6;
    _co_080C15D6 = cpsr_c();
    uint32_t _rn_080C15D6 = g_cpu.R[3];
    uint32_t _r_080C15D6;
    _r_080C15D6 = _rn_080C15D6 - _op2_080C15D6;
    arm_set_nzcv_sub(_rn_080C15D6, _op2_080C15D6, _r_080C15D6);
    g_cpu.R[15] = 0x080C15D8u;
    runtime_tick(_cyc_080C15D6);
    /* 080C15D8  080c15d8 T beq 0x080c1620 */
    g_cpu.R[15] = 0x080C15D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15D8 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080C15D8 = 3u;
        g_cpu.R[15] = 0x080C1620u;
        runtime_tick(_cyc_080C15D8);
        GBARECOMP_TAIL_CALL(gf_tfunc_080C1620);
    }
    g_cpu.R[15] = 0x080C15DAu;
    runtime_tick(_cyc_080C15D8);
    /* 080C15DA  080c15da T b 0x080c1634 */
    g_cpu.R[15] = 0x080C15DAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15DA = 1u;
    _cyc_080C15DA = 3u;
    g_cpu.R[15] = 0x080C1634u;
    runtime_tick(_cyc_080C15DA);
    GBARECOMP_TAIL_CALL(gf_tfunc_080C1634);
    g_cpu.R[15] = 0x080C15DCu;
    runtime_tick(_cyc_080C15DA);
    /* fall-through to 0x080C15DC */
    g_cpu.R[15] = 0x080C15DCu;
    runtime_dispatch(0x080C15DCu);
    return;
}

/* 0x080C15DC  mode=thumb  end=0x080C15EA  branches=2 */


/* 0x080C15DC thumb */
void gf_autojt_080C151C_13(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080C15DCu);
    /* 080C15DC  080c15dc T ldr r0,[r4,#0x18] */
    g_cpu.R[15] = 0x080C15DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15DC = 1u;
    _cyc_080C15DC = 2u;
    uint32_t _base_080C15DC = g_cpu.R[4];
    uint32_t _off_080C15DC;
    _off_080C15DC = 0x00000018u;
    uint32_t _ea_080C15DC = _base_080C15DC + _off_080C15DC;
    uint32_t _post_080C15DC = _base_080C15DC + _off_080C15DC;
    _cyc_080C15DC += runtime_mem_cycles(_ea_080C15DC, 4u, 0u);
    uint32_t _v_080C15DC;
    { uint32_t _w = bus_read_u32(_ea_080C15DC & ~3u); uint32_t _rot = (_ea_080C15DC & 3u) * 8u; _v_080C15DC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080C15DC;
    g_cpu.R[15] = 0x080C15DEu;
    runtime_tick(_cyc_080C15DC);
    /* 080C15DE  080c15de T adds r0,r0,r2 */
    g_cpu.R[15] = 0x080C15DEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15DE = 1u;
    _cyc_080C15DE = 1u;
    uint32_t _rm_080C15DE = g_cpu.R[2];
    uint32_t _op2_080C15DE;
    uint32_t _co_080C15DE;
    _op2_080C15DE = _rm_080C15DE;
    _co_080C15DE = cpsr_c();
    uint32_t _rn_080C15DE = g_cpu.R[0];
    uint32_t _r_080C15DE;
    _r_080C15DE = _rn_080C15DE + _op2_080C15DE;
    arm_set_nzcv_add(_rn_080C15DE, _op2_080C15DE, _r_080C15DE);
    g_cpu.R[0] = _r_080C15DE;
    g_cpu.R[15] = 0x080C15E0u;
    runtime_tick(_cyc_080C15DE);
    /* 080C15E0  080c15e0 T ldrb r3,[r3] */
    g_cpu.R[15] = 0x080C15E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15E0 = 1u;
    _cyc_080C15E0 = 2u;
    uint32_t _base_080C15E0 = g_cpu.R[3];
    uint32_t _off_080C15E0;
    _off_080C15E0 = 0x00000000u;
    uint32_t _ea_080C15E0 = _base_080C15E0 + _off_080C15E0;
    uint32_t _post_080C15E0 = _base_080C15E0 + _off_080C15E0;
    _cyc_080C15E0 += runtime_mem_cycles(_ea_080C15E0, 1u, 0u);
    uint32_t _v_080C15E0;
    _v_080C15E0 = bus_read_u8(_ea_080C15E0);
    g_cpu.R[3] = _v_080C15E0;
    g_cpu.R[15] = 0x080C15E2u;
    runtime_tick(_cyc_080C15E0);
    /* 080C15E2  080c15e2 T ldrb r0,[r0] */
    g_cpu.R[15] = 0x080C15E2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15E2 = 1u;
    _cyc_080C15E2 = 2u;
    uint32_t _base_080C15E2 = g_cpu.R[0];
    uint32_t _off_080C15E2;
    _off_080C15E2 = 0x00000000u;
    uint32_t _ea_080C15E2 = _base_080C15E2 + _off_080C15E2;
    uint32_t _post_080C15E2 = _base_080C15E2 + _off_080C15E2;
    _cyc_080C15E2 += runtime_mem_cycles(_ea_080C15E2, 1u, 0u);
    uint32_t _v_080C15E2;
    _v_080C15E2 = bus_read_u8(_ea_080C15E2);
    g_cpu.R[0] = _v_080C15E2;
    g_cpu.R[15] = 0x080C15E4u;
    runtime_tick(_cyc_080C15E2);
    /* 080C15E4  080c15e4 T cmps r3,r0 */
    g_cpu.R[15] = 0x080C15E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15E4 = 1u;
    _cyc_080C15E4 = 1u;
    uint32_t _rm_080C15E4 = g_cpu.R[0];
    uint32_t _op2_080C15E4;
    uint32_t _co_080C15E4;
    _op2_080C15E4 = _rm_080C15E4;
    _co_080C15E4 = cpsr_c();
    uint32_t _rn_080C15E4 = g_cpu.R[3];
    uint32_t _r_080C15E4;
    _r_080C15E4 = _rn_080C15E4 - _op2_080C15E4;
    arm_set_nzcv_sub(_rn_080C15E4, _op2_080C15E4, _r_080C15E4);
    g_cpu.R[15] = 0x080C15E6u;
    runtime_tick(_cyc_080C15E4);
    /* 080C15E6  080c15e6 T bne 0x080c1620 */
    g_cpu.R[15] = 0x080C15E6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15E6 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_080C15E6 = 3u;
        g_cpu.R[15] = 0x080C1620u;
        runtime_tick(_cyc_080C15E6);
        GBARECOMP_TAIL_CALL(gf_tfunc_080C1620);
    }
    g_cpu.R[15] = 0x080C15E8u;
    runtime_tick(_cyc_080C15E6);
    /* 080C15E8  080c15e8 T b 0x080c1634 */
    g_cpu.R[15] = 0x080C15E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15E8 = 1u;
    _cyc_080C15E8 = 3u;
    g_cpu.R[15] = 0x080C1634u;
    runtime_tick(_cyc_080C15E8);
    GBARECOMP_TAIL_CALL(gf_tfunc_080C1634);
    g_cpu.R[15] = 0x080C15EAu;
    runtime_tick(_cyc_080C15E8);
    /* fall-through to 0x080C15EA */
    g_cpu.R[15] = 0x080C15EAu;
    runtime_dispatch(0x080C15EAu);
    return;
}

/* 0x080C15EA  mode=thumb  end=0x080C15F8  branches=2 */


/* 0x080C15EA thumb */
void gf_autojt_080C151C_14(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080C15EAu);
    /* 080C15EA  080c15ea T ldr r0,[r4,#0x18] */
    g_cpu.R[15] = 0x080C15EAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15EA = 1u;
    _cyc_080C15EA = 2u;
    uint32_t _base_080C15EA = g_cpu.R[4];
    uint32_t _off_080C15EA;
    _off_080C15EA = 0x00000018u;
    uint32_t _ea_080C15EA = _base_080C15EA + _off_080C15EA;
    uint32_t _post_080C15EA = _base_080C15EA + _off_080C15EA;
    _cyc_080C15EA += runtime_mem_cycles(_ea_080C15EA, 4u, 0u);
    uint32_t _v_080C15EA;
    { uint32_t _w = bus_read_u32(_ea_080C15EA & ~3u); uint32_t _rot = (_ea_080C15EA & 3u) * 8u; _v_080C15EA = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080C15EA;
    g_cpu.R[15] = 0x080C15ECu;
    runtime_tick(_cyc_080C15EA);
    /* 080C15EC  080c15ec T adds r0,r0,r2 */
    g_cpu.R[15] = 0x080C15ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15EC = 1u;
    _cyc_080C15EC = 1u;
    uint32_t _rm_080C15EC = g_cpu.R[2];
    uint32_t _op2_080C15EC;
    uint32_t _co_080C15EC;
    _op2_080C15EC = _rm_080C15EC;
    _co_080C15EC = cpsr_c();
    uint32_t _rn_080C15EC = g_cpu.R[0];
    uint32_t _r_080C15EC;
    _r_080C15EC = _rn_080C15EC + _op2_080C15EC;
    arm_set_nzcv_add(_rn_080C15EC, _op2_080C15EC, _r_080C15EC);
    g_cpu.R[0] = _r_080C15EC;
    g_cpu.R[15] = 0x080C15EEu;
    runtime_tick(_cyc_080C15EC);
    /* 080C15EE  080c15ee T ldrb r3,[r3] */
    g_cpu.R[15] = 0x080C15EEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15EE = 1u;
    _cyc_080C15EE = 2u;
    uint32_t _base_080C15EE = g_cpu.R[3];
    uint32_t _off_080C15EE;
    _off_080C15EE = 0x00000000u;
    uint32_t _ea_080C15EE = _base_080C15EE + _off_080C15EE;
    uint32_t _post_080C15EE = _base_080C15EE + _off_080C15EE;
    _cyc_080C15EE += runtime_mem_cycles(_ea_080C15EE, 1u, 0u);
    uint32_t _v_080C15EE;
    _v_080C15EE = bus_read_u8(_ea_080C15EE);
    g_cpu.R[3] = _v_080C15EE;
    g_cpu.R[15] = 0x080C15F0u;
    runtime_tick(_cyc_080C15EE);
    /* 080C15F0  080c15f0 T ldrb r0,[r0] */
    g_cpu.R[15] = 0x080C15F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15F0 = 1u;
    _cyc_080C15F0 = 2u;
    uint32_t _base_080C15F0 = g_cpu.R[0];
    uint32_t _off_080C15F0;
    _off_080C15F0 = 0x00000000u;
    uint32_t _ea_080C15F0 = _base_080C15F0 + _off_080C15F0;
    uint32_t _post_080C15F0 = _base_080C15F0 + _off_080C15F0;
    _cyc_080C15F0 += runtime_mem_cycles(_ea_080C15F0, 1u, 0u);
    uint32_t _v_080C15F0;
    _v_080C15F0 = bus_read_u8(_ea_080C15F0);
    g_cpu.R[0] = _v_080C15F0;
    g_cpu.R[15] = 0x080C15F2u;
    runtime_tick(_cyc_080C15F0);
    /* 080C15F2  080c15f2 T cmps r3,r0 */
    g_cpu.R[15] = 0x080C15F2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15F2 = 1u;
    _cyc_080C15F2 = 1u;
    uint32_t _rm_080C15F2 = g_cpu.R[0];
    uint32_t _op2_080C15F2;
    uint32_t _co_080C15F2;
    _op2_080C15F2 = _rm_080C15F2;
    _co_080C15F2 = cpsr_c();
    uint32_t _rn_080C15F2 = g_cpu.R[3];
    uint32_t _r_080C15F2;
    _r_080C15F2 = _rn_080C15F2 - _op2_080C15F2;
    arm_set_nzcv_sub(_rn_080C15F2, _op2_080C15F2, _r_080C15F2);
    g_cpu.R[15] = 0x080C15F4u;
    runtime_tick(_cyc_080C15F2);
    /* 080C15F4  080c15f4 T bhi 0x080c1620 */
    g_cpu.R[15] = 0x080C15F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15F4 = 1u;
    if (arm_cond_passes(0x8u)) {
        _cyc_080C15F4 = 3u;
        g_cpu.R[15] = 0x080C1620u;
        runtime_tick(_cyc_080C15F4);
        GBARECOMP_TAIL_CALL(gf_tfunc_080C1620);
    }
    g_cpu.R[15] = 0x080C15F6u;
    runtime_tick(_cyc_080C15F4);
    /* 080C15F6  080c15f6 T b 0x080c1634 */
    g_cpu.R[15] = 0x080C15F6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15F6 = 1u;
    _cyc_080C15F6 = 3u;
    g_cpu.R[15] = 0x080C1634u;
    runtime_tick(_cyc_080C15F6);
    GBARECOMP_TAIL_CALL(gf_tfunc_080C1634);
    g_cpu.R[15] = 0x080C15F8u;
    runtime_tick(_cyc_080C15F6);
    /* fall-through to 0x080C15F8 */
    g_cpu.R[15] = 0x080C15F8u;
    runtime_dispatch(0x080C15F8u);
    return;
}

/* 0x080C15F8  mode=thumb  end=0x080C1606  branches=2 */


/* 0x080C15F8 thumb */
void gf_autojt_080C151C_15(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080C15F8u);
    /* 080C15F8  080c15f8 T ldr r0,[r4,#0x18] */
    g_cpu.R[15] = 0x080C15F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15F8 = 1u;
    _cyc_080C15F8 = 2u;
    uint32_t _base_080C15F8 = g_cpu.R[4];
    uint32_t _off_080C15F8;
    _off_080C15F8 = 0x00000018u;
    uint32_t _ea_080C15F8 = _base_080C15F8 + _off_080C15F8;
    uint32_t _post_080C15F8 = _base_080C15F8 + _off_080C15F8;
    _cyc_080C15F8 += runtime_mem_cycles(_ea_080C15F8, 4u, 0u);
    uint32_t _v_080C15F8;
    { uint32_t _w = bus_read_u32(_ea_080C15F8 & ~3u); uint32_t _rot = (_ea_080C15F8 & 3u) * 8u; _v_080C15F8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080C15F8;
    g_cpu.R[15] = 0x080C15FAu;
    runtime_tick(_cyc_080C15F8);
    /* 080C15FA  080c15fa T adds r0,r0,r2 */
    g_cpu.R[15] = 0x080C15FAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15FA = 1u;
    _cyc_080C15FA = 1u;
    uint32_t _rm_080C15FA = g_cpu.R[2];
    uint32_t _op2_080C15FA;
    uint32_t _co_080C15FA;
    _op2_080C15FA = _rm_080C15FA;
    _co_080C15FA = cpsr_c();
    uint32_t _rn_080C15FA = g_cpu.R[0];
    uint32_t _r_080C15FA;
    _r_080C15FA = _rn_080C15FA + _op2_080C15FA;
    arm_set_nzcv_add(_rn_080C15FA, _op2_080C15FA, _r_080C15FA);
    g_cpu.R[0] = _r_080C15FA;
    g_cpu.R[15] = 0x080C15FCu;
    runtime_tick(_cyc_080C15FA);
    /* 080C15FC  080c15fc T ldrb r3,[r3] */
    g_cpu.R[15] = 0x080C15FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15FC = 1u;
    _cyc_080C15FC = 2u;
    uint32_t _base_080C15FC = g_cpu.R[3];
    uint32_t _off_080C15FC;
    _off_080C15FC = 0x00000000u;
    uint32_t _ea_080C15FC = _base_080C15FC + _off_080C15FC;
    uint32_t _post_080C15FC = _base_080C15FC + _off_080C15FC;
    _cyc_080C15FC += runtime_mem_cycles(_ea_080C15FC, 1u, 0u);
    uint32_t _v_080C15FC;
    _v_080C15FC = bus_read_u8(_ea_080C15FC);
    g_cpu.R[3] = _v_080C15FC;
    g_cpu.R[15] = 0x080C15FEu;
    runtime_tick(_cyc_080C15FC);
    /* 080C15FE  080c15fe T ldrb r0,[r0] */
    g_cpu.R[15] = 0x080C15FEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C15FE = 1u;
    _cyc_080C15FE = 2u;
    uint32_t _base_080C15FE = g_cpu.R[0];
    uint32_t _off_080C15FE;
    _off_080C15FE = 0x00000000u;
    uint32_t _ea_080C15FE = _base_080C15FE + _off_080C15FE;
    uint32_t _post_080C15FE = _base_080C15FE + _off_080C15FE;
    _cyc_080C15FE += runtime_mem_cycles(_ea_080C15FE, 1u, 0u);
    uint32_t _v_080C15FE;
    _v_080C15FE = bus_read_u8(_ea_080C15FE);
    g_cpu.R[0] = _v_080C15FE;
    g_cpu.R[15] = 0x080C1600u;
    runtime_tick(_cyc_080C15FE);
    /* 080C1600  080c1600 T cmps r3,r0 */
    g_cpu.R[15] = 0x080C1600u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1600 = 1u;
    _cyc_080C1600 = 1u;
    uint32_t _rm_080C1600 = g_cpu.R[0];
    uint32_t _op2_080C1600;
    uint32_t _co_080C1600;
    _op2_080C1600 = _rm_080C1600;
    _co_080C1600 = cpsr_c();
    uint32_t _rn_080C1600 = g_cpu.R[3];
    uint32_t _r_080C1600;
    _r_080C1600 = _rn_080C1600 - _op2_080C1600;
    arm_set_nzcv_sub(_rn_080C1600, _op2_080C1600, _r_080C1600);
    g_cpu.R[15] = 0x080C1602u;
    runtime_tick(_cyc_080C1600);
    /* 080C1602  080c1602 T bcs 0x080c1620 */
    g_cpu.R[15] = 0x080C1602u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1602 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_080C1602 = 3u;
        g_cpu.R[15] = 0x080C1620u;
        runtime_tick(_cyc_080C1602);
        GBARECOMP_TAIL_CALL(gf_tfunc_080C1620);
    }
    g_cpu.R[15] = 0x080C1604u;
    runtime_tick(_cyc_080C1602);
    /* 080C1604  080c1604 T b 0x080c1634 */
    g_cpu.R[15] = 0x080C1604u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1604 = 1u;
    _cyc_080C1604 = 3u;
    g_cpu.R[15] = 0x080C1634u;
    runtime_tick(_cyc_080C1604);
    GBARECOMP_TAIL_CALL(gf_tfunc_080C1634);
    g_cpu.R[15] = 0x080C1606u;
    runtime_tick(_cyc_080C1604);
    /* fall-through to 0x080C1606 */
    g_cpu.R[15] = 0x080C1606u;
    runtime_dispatch(0x080C1606u);
    return;
}

/* 0x080C1606  mode=thumb  end=0x080C1614  branches=2 */


/* 0x080C1606 thumb */
void gf_autojt_080C151C_16(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080C1606u);
    /* 080C1606  080c1606 T ldr r0,[r4,#0x18] */
    g_cpu.R[15] = 0x080C1606u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1606 = 1u;
    _cyc_080C1606 = 2u;
    uint32_t _base_080C1606 = g_cpu.R[4];
    uint32_t _off_080C1606;
    _off_080C1606 = 0x00000018u;
    uint32_t _ea_080C1606 = _base_080C1606 + _off_080C1606;
    uint32_t _post_080C1606 = _base_080C1606 + _off_080C1606;
    _cyc_080C1606 += runtime_mem_cycles(_ea_080C1606, 4u, 0u);
    uint32_t _v_080C1606;
    { uint32_t _w = bus_read_u32(_ea_080C1606 & ~3u); uint32_t _rot = (_ea_080C1606 & 3u) * 8u; _v_080C1606 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080C1606;
    g_cpu.R[15] = 0x080C1608u;
    runtime_tick(_cyc_080C1606);
    /* 080C1608  080c1608 T adds r0,r0,r2 */
    g_cpu.R[15] = 0x080C1608u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1608 = 1u;
    _cyc_080C1608 = 1u;
    uint32_t _rm_080C1608 = g_cpu.R[2];
    uint32_t _op2_080C1608;
    uint32_t _co_080C1608;
    _op2_080C1608 = _rm_080C1608;
    _co_080C1608 = cpsr_c();
    uint32_t _rn_080C1608 = g_cpu.R[0];
    uint32_t _r_080C1608;
    _r_080C1608 = _rn_080C1608 + _op2_080C1608;
    arm_set_nzcv_add(_rn_080C1608, _op2_080C1608, _r_080C1608);
    g_cpu.R[0] = _r_080C1608;
    g_cpu.R[15] = 0x080C160Au;
    runtime_tick(_cyc_080C1608);
    /* 080C160A  080c160a T ldrb r3,[r3] */
    g_cpu.R[15] = 0x080C160Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C160A = 1u;
    _cyc_080C160A = 2u;
    uint32_t _base_080C160A = g_cpu.R[3];
    uint32_t _off_080C160A;
    _off_080C160A = 0x00000000u;
    uint32_t _ea_080C160A = _base_080C160A + _off_080C160A;
    uint32_t _post_080C160A = _base_080C160A + _off_080C160A;
    _cyc_080C160A += runtime_mem_cycles(_ea_080C160A, 1u, 0u);
    uint32_t _v_080C160A;
    _v_080C160A = bus_read_u8(_ea_080C160A);
    g_cpu.R[3] = _v_080C160A;
    g_cpu.R[15] = 0x080C160Cu;
    runtime_tick(_cyc_080C160A);
    /* 080C160C  080c160c T ldrb r0,[r0] */
    g_cpu.R[15] = 0x080C160Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C160C = 1u;
    _cyc_080C160C = 2u;
    uint32_t _base_080C160C = g_cpu.R[0];
    uint32_t _off_080C160C;
    _off_080C160C = 0x00000000u;
    uint32_t _ea_080C160C = _base_080C160C + _off_080C160C;
    uint32_t _post_080C160C = _base_080C160C + _off_080C160C;
    _cyc_080C160C += runtime_mem_cycles(_ea_080C160C, 1u, 0u);
    uint32_t _v_080C160C;
    _v_080C160C = bus_read_u8(_ea_080C160C);
    g_cpu.R[0] = _v_080C160C;
    g_cpu.R[15] = 0x080C160Eu;
    runtime_tick(_cyc_080C160C);
    /* 080C160E  080c160e T cmps r3,r0 */
    g_cpu.R[15] = 0x080C160Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C160E = 1u;
    _cyc_080C160E = 1u;
    uint32_t _rm_080C160E = g_cpu.R[0];
    uint32_t _op2_080C160E;
    uint32_t _co_080C160E;
    _op2_080C160E = _rm_080C160E;
    _co_080C160E = cpsr_c();
    uint32_t _rn_080C160E = g_cpu.R[3];
    uint32_t _r_080C160E;
    _r_080C160E = _rn_080C160E - _op2_080C160E;
    arm_set_nzcv_sub(_rn_080C160E, _op2_080C160E, _r_080C160E);
    g_cpu.R[15] = 0x080C1610u;
    runtime_tick(_cyc_080C160E);
    /* 080C1610  080c1610 T bls 0x080c1620 */
    g_cpu.R[15] = 0x080C1610u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1610 = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_080C1610 = 3u;
        g_cpu.R[15] = 0x080C1620u;
        runtime_tick(_cyc_080C1610);
        GBARECOMP_TAIL_CALL(gf_tfunc_080C1620);
    }
    g_cpu.R[15] = 0x080C1612u;
    runtime_tick(_cyc_080C1610);
    /* 080C1612  080c1612 T b 0x080c1634 */
    g_cpu.R[15] = 0x080C1612u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1612 = 1u;
    _cyc_080C1612 = 3u;
    g_cpu.R[15] = 0x080C1634u;
    runtime_tick(_cyc_080C1612);
    GBARECOMP_TAIL_CALL(gf_tfunc_080C1634);
    g_cpu.R[15] = 0x080C1614u;
    runtime_tick(_cyc_080C1612);
    /* fall-through to 0x080C1614 */
    g_cpu.R[15] = 0x080C1614u;
    runtime_dispatch(0x080C1614u);
    return;
}

/* 0x080C162C  mode=thumb  end=0x080C162E  branches=1 */


/* 0x080C1614 thumb */
void gf_autojt_080C151C_17(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080C1614u);
    /* 080C1614  080c1614 T ldr r0,[r4,#0x18] */
    g_cpu.R[15] = 0x080C1614u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1614 = 1u;
    _cyc_080C1614 = 2u;
    uint32_t _base_080C1614 = g_cpu.R[4];
    uint32_t _off_080C1614;
    _off_080C1614 = 0x00000018u;
    uint32_t _ea_080C1614 = _base_080C1614 + _off_080C1614;
    uint32_t _post_080C1614 = _base_080C1614 + _off_080C1614;
    _cyc_080C1614 += runtime_mem_cycles(_ea_080C1614, 4u, 0u);
    uint32_t _v_080C1614;
    { uint32_t _w = bus_read_u32(_ea_080C1614 & ~3u); uint32_t _rot = (_ea_080C1614 & 3u) * 8u; _v_080C1614 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080C1614;
    g_cpu.R[15] = 0x080C1616u;
    runtime_tick(_cyc_080C1614);
    /* 080C1616  080c1616 T adds r0,r0,r2 */
    g_cpu.R[15] = 0x080C1616u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1616 = 1u;
    _cyc_080C1616 = 1u;
    uint32_t _rm_080C1616 = g_cpu.R[2];
    uint32_t _op2_080C1616;
    uint32_t _co_080C1616;
    _op2_080C1616 = _rm_080C1616;
    _co_080C1616 = cpsr_c();
    uint32_t _rn_080C1616 = g_cpu.R[0];
    uint32_t _r_080C1616;
    _r_080C1616 = _rn_080C1616 + _op2_080C1616;
    arm_set_nzcv_add(_rn_080C1616, _op2_080C1616, _r_080C1616);
    g_cpu.R[0] = _r_080C1616;
    g_cpu.R[15] = 0x080C1618u;
    runtime_tick(_cyc_080C1616);
    /* 080C1618  080c1618 T ldrb r3,[r3] */
    g_cpu.R[15] = 0x080C1618u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C1618 = 1u;
    _cyc_080C1618 = 2u;
    uint32_t _base_080C1618 = g_cpu.R[3];
    uint32_t _off_080C1618;
    _off_080C1618 = 0x00000000u;
    uint32_t _ea_080C1618 = _base_080C1618 + _off_080C1618;
    uint32_t _post_080C1618 = _base_080C1618 + _off_080C1618;
    _cyc_080C1618 += runtime_mem_cycles(_ea_080C1618, 1u, 0u);
    uint32_t _v_080C1618;
    _v_080C1618 = bus_read_u8(_ea_080C1618);
    g_cpu.R[3] = _v_080C1618;
    g_cpu.R[15] = 0x080C161Au;
    runtime_tick(_cyc_080C1618);
    /* 080C161A  080c161a T ldrb r0,[r0] */
    g_cpu.R[15] = 0x080C161Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C161A = 1u;
    _cyc_080C161A = 2u;
    uint32_t _base_080C161A = g_cpu.R[0];
    uint32_t _off_080C161A;
    _off_080C161A = 0x00000000u;
    uint32_t _ea_080C161A = _base_080C161A + _off_080C161A;
    uint32_t _post_080C161A = _base_080C161A + _off_080C161A;
    _cyc_080C161A += runtime_mem_cycles(_ea_080C161A, 1u, 0u);
    uint32_t _v_080C161A;
    _v_080C161A = bus_read_u8(_ea_080C161A);
    g_cpu.R[0] = _v_080C161A;
    g_cpu.R[15] = 0x080C161Cu;
    runtime_tick(_cyc_080C161A);
    /* 080C161C  080c161c T cmps r3,r0 */
    g_cpu.R[15] = 0x080C161Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C161C = 1u;
    _cyc_080C161C = 1u;
    uint32_t _rm_080C161C = g_cpu.R[0];
    uint32_t _op2_080C161C;
    uint32_t _co_080C161C;
    _op2_080C161C = _rm_080C161C;
    _co_080C161C = cpsr_c();
    uint32_t _rn_080C161C = g_cpu.R[3];
    uint32_t _r_080C161C;
    _r_080C161C = _rn_080C161C - _op2_080C161C;
    arm_set_nzcv_sub(_rn_080C161C, _op2_080C161C, _r_080C161C);
    g_cpu.R[15] = 0x080C161Eu;
    runtime_tick(_cyc_080C161C);
    /* 080C161E  080c161e T bcs 0x080c1634 */
    g_cpu.R[15] = 0x080C161Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080C161E = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_080C161E = 3u;
        g_cpu.R[15] = 0x080C1634u;
        runtime_tick(_cyc_080C161E);
        GBARECOMP_TAIL_CALL(gf_tfunc_080C1634);
    }
    g_cpu.R[15] = 0x080C1620u;
    runtime_tick(_cyc_080C161E);
    /* fall-through to 0x080C1620 */
    g_cpu.R[15] = 0x080C1620u;
    runtime_dispatch(0x080C1620u);
    return;
}

/* 0x080C1620  mode=thumb  end=0x080C162C  branches=3 */



