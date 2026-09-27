/* Auto-split from gbarecomp shards. Module: jump_tables
 * 118 guest functions. Do not hand-edit function bodies.
 */

#include "runtime_arm.h"
#include "recompiled.h"

/* 0x0805F258 thumb */
void gf_autojt_0805F204_00(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0805F258u);
    /* 0805F258  0805f258 T movs r0,#0x2b */
    g_cpu.R[15] = 0x0805F258u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F258 = 1u;
    _cyc_0805F258 = 1u;
    uint32_t _r_0805F258;
    _r_0805F258 = 0x0000002Bu;
    arm_set_nzc_logic(_r_0805F258, cpsr_c());
    g_cpu.R[0] = _r_0805F258;
    g_cpu.R[15] = 0x0805F25Au;
    runtime_tick(_cyc_0805F258);
    /* 0805F25A  0805f25a T bl.hi 0x0800725e */
    g_cpu.R[15] = 0x0805F25Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F25A = 1u;
    _cyc_0805F25A = 1u;
    g_cpu.R[14] = 0x0800725Eu;
    g_cpu.R[15] = 0x0805F25Cu;
    runtime_tick(_cyc_0805F25A);
    /* 0805F25C  0805f25c T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0805F25Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F25C = 1u;
    _cyc_0805F25C = 3u;
    uint32_t _blt_0805F25C = (g_cpu.R[14] + 0x00000C4Au) & ~1u;
    g_cpu.R[14] = 0x0805F25Fu;
    g_cpu.R[15] = _blt_0805F25C;
    runtime_call_push_return(0x0805F25Eu);
    runtime_tick(_cyc_0805F25C);
    _cyc_0805F25C = 0u;
    runtime_dispatch(_blt_0805F25C);
    if (g_cpu.R[15] != 0x0805F25Eu) { runtime_call_cancel_return(0x0805F25Eu); return; }
    g_cpu.R[15] = 0x0805F25Eu;
    runtime_tick(_cyc_0805F25C);
    /* fall-through to 0x0805F25E */
    g_cpu.R[15] = 0x0805F25Eu;
    runtime_dispatch(0x0805F25Eu);
    return;
}

/* 0x0805F25E  mode=thumb  end=0x0805F268  branches=4 */


/* 0x0805F26A thumb */
void gf_autojt_0805F204_01(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0805F26Au);
    /* 0805F26A  0805f26a T movs r0,#0x2c */
    g_cpu.R[15] = 0x0805F26Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F26A = 1u;
    _cyc_0805F26A = 1u;
    uint32_t _r_0805F26A;
    _r_0805F26A = 0x0000002Cu;
    arm_set_nzc_logic(_r_0805F26A, cpsr_c());
    g_cpu.R[0] = _r_0805F26A;
    g_cpu.R[15] = 0x0805F26Cu;
    runtime_tick(_cyc_0805F26A);
    /* 0805F26C  0805f26c T bl.hi 0x08007270 */
    g_cpu.R[15] = 0x0805F26Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F26C = 1u;
    _cyc_0805F26C = 1u;
    g_cpu.R[14] = 0x08007270u;
    g_cpu.R[15] = 0x0805F26Eu;
    runtime_tick(_cyc_0805F26C);
    /* 0805F26E  0805f26e T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0805F26Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F26E = 1u;
    _cyc_0805F26E = 3u;
    uint32_t _blt_0805F26E = (g_cpu.R[14] + 0x00000C38u) & ~1u;
    g_cpu.R[14] = 0x0805F271u;
    g_cpu.R[15] = _blt_0805F26E;
    runtime_call_push_return(0x0805F270u);
    runtime_tick(_cyc_0805F26E);
    _cyc_0805F26E = 0u;
    runtime_dispatch(_blt_0805F26E);
    if (g_cpu.R[15] != 0x0805F270u) { runtime_call_cancel_return(0x0805F270u); return; }
    g_cpu.R[15] = 0x0805F270u;
    runtime_tick(_cyc_0805F26E);
    /* fall-through to 0x0805F270 */
    g_cpu.R[15] = 0x0805F270u;
    runtime_dispatch(0x0805F270u);
    return;
}

/* 0x0805F270  mode=thumb  end=0x0805F27A  branches=4 */


/* 0x0805F27C thumb */
void gf_autojt_0805F204_04(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0805F27Cu);
    /* 0805F27C  0805f27c T movs r0,#0x2d */
    g_cpu.R[15] = 0x0805F27Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F27C = 1u;
    _cyc_0805F27C = 1u;
    uint32_t _r_0805F27C;
    _r_0805F27C = 0x0000002Du;
    arm_set_nzc_logic(_r_0805F27C, cpsr_c());
    g_cpu.R[0] = _r_0805F27C;
    g_cpu.R[15] = 0x0805F27Eu;
    runtime_tick(_cyc_0805F27C);
    /* 0805F27E  0805f27e T bl.hi 0x08007282 */
    g_cpu.R[15] = 0x0805F27Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F27E = 1u;
    _cyc_0805F27E = 1u;
    g_cpu.R[14] = 0x08007282u;
    g_cpu.R[15] = 0x0805F280u;
    runtime_tick(_cyc_0805F27E);
    /* 0805F280  0805f280 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0805F280u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F280 = 1u;
    _cyc_0805F280 = 3u;
    uint32_t _blt_0805F280 = (g_cpu.R[14] + 0x00000C26u) & ~1u;
    g_cpu.R[14] = 0x0805F283u;
    g_cpu.R[15] = _blt_0805F280;
    runtime_call_push_return(0x0805F282u);
    runtime_tick(_cyc_0805F280);
    _cyc_0805F280 = 0u;
    runtime_dispatch(_blt_0805F280);
    if (g_cpu.R[15] != 0x0805F282u) { runtime_call_cancel_return(0x0805F282u); return; }
    g_cpu.R[15] = 0x0805F282u;
    runtime_tick(_cyc_0805F280);
    /* fall-through to 0x0805F282 */
    g_cpu.R[15] = 0x0805F282u;
    runtime_dispatch(0x0805F282u);
    return;
}

/* 0x0805F28C  mode=thumb  end=0x0805F28E  branches=1 */


/* 0x0805F28E thumb */
void gf_autojt_0805F204_06(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0805F28Eu);
    /* 0805F28E  0805f28e T movs r0,#0x2e */
    g_cpu.R[15] = 0x0805F28Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F28E = 1u;
    _cyc_0805F28E = 1u;
    uint32_t _r_0805F28E;
    _r_0805F28E = 0x0000002Eu;
    arm_set_nzc_logic(_r_0805F28E, cpsr_c());
    g_cpu.R[0] = _r_0805F28E;
    g_cpu.R[15] = 0x0805F290u;
    runtime_tick(_cyc_0805F28E);
    /* 0805F290  0805f290 T bl.hi 0x08007294 */
    g_cpu.R[15] = 0x0805F290u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F290 = 1u;
    _cyc_0805F290 = 1u;
    g_cpu.R[14] = 0x08007294u;
    g_cpu.R[15] = 0x0805F292u;
    runtime_tick(_cyc_0805F290);
    /* 0805F292  0805f292 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0805F292u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F292 = 1u;
    _cyc_0805F292 = 3u;
    uint32_t _blt_0805F292 = (g_cpu.R[14] + 0x00000C14u) & ~1u;
    g_cpu.R[14] = 0x0805F295u;
    g_cpu.R[15] = _blt_0805F292;
    runtime_call_push_return(0x0805F294u);
    runtime_tick(_cyc_0805F292);
    _cyc_0805F292 = 0u;
    runtime_dispatch(_blt_0805F292);
    if (g_cpu.R[15] != 0x0805F294u) { runtime_call_cancel_return(0x0805F294u); return; }
    g_cpu.R[15] = 0x0805F294u;
    runtime_tick(_cyc_0805F292);
    /* fall-through to 0x0805F294 */
    g_cpu.R[15] = 0x0805F294u;
    runtime_dispatch(0x0805F294u);
    return;
}

/* 0x0805F29E  mode=thumb  end=0x0805F2A0  branches=1 */


/* 0x0805F2A0 thumb */
void gf_autojt_0805F204_15(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0805F2A0u);
    /* 0805F2A0  0805f2a0 T movs r0,#0x30 */
    g_cpu.R[15] = 0x0805F2A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F2A0 = 1u;
    _cyc_0805F2A0 = 1u;
    uint32_t _r_0805F2A0;
    _r_0805F2A0 = 0x00000030u;
    arm_set_nzc_logic(_r_0805F2A0, cpsr_c());
    g_cpu.R[0] = _r_0805F2A0;
    g_cpu.R[15] = 0x0805F2A2u;
    runtime_tick(_cyc_0805F2A0);
    /* 0805F2A2  0805f2a2 T bl.hi 0x080072a6 */
    g_cpu.R[15] = 0x0805F2A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F2A2 = 1u;
    _cyc_0805F2A2 = 1u;
    g_cpu.R[14] = 0x080072A6u;
    g_cpu.R[15] = 0x0805F2A4u;
    runtime_tick(_cyc_0805F2A2);
    /* 0805F2A4  0805f2a4 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0805F2A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F2A4 = 1u;
    _cyc_0805F2A4 = 3u;
    uint32_t _blt_0805F2A4 = (g_cpu.R[14] + 0x00000C02u) & ~1u;
    g_cpu.R[14] = 0x0805F2A7u;
    g_cpu.R[15] = _blt_0805F2A4;
    runtime_call_push_return(0x0805F2A6u);
    runtime_tick(_cyc_0805F2A4);
    _cyc_0805F2A4 = 0u;
    runtime_dispatch(_blt_0805F2A4);
    if (g_cpu.R[15] != 0x0805F2A6u) { runtime_call_cancel_return(0x0805F2A6u); return; }
    g_cpu.R[15] = 0x0805F2A6u;
    runtime_tick(_cyc_0805F2A4);
    /* fall-through to 0x0805F2A6 */
    g_cpu.R[15] = 0x0805F2A6u;
    runtime_dispatch(0x0805F2A6u);
    return;
}

/* 0x0805F2B8  mode=thumb  end=0x0805F2C2  branches=7  indirect */


/* 0x0805F2B2 thumb */
void gf_autojt_0805F204_20(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0805F2B2u);
    /* 0805F2B2  0805f2b2 T movs r0,#0x2f */
    g_cpu.R[15] = 0x0805F2B2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F2B2 = 1u;
    _cyc_0805F2B2 = 1u;
    uint32_t _r_0805F2B2;
    _r_0805F2B2 = 0x0000002Fu;
    arm_set_nzc_logic(_r_0805F2B2, cpsr_c());
    g_cpu.R[0] = _r_0805F2B2;
    g_cpu.R[15] = 0x0805F2B4u;
    runtime_tick(_cyc_0805F2B2);
    /* 0805F2B4  0805f2b4 T bl.hi 0x080072b8 */
    g_cpu.R[15] = 0x0805F2B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F2B4 = 1u;
    _cyc_0805F2B4 = 1u;
    g_cpu.R[14] = 0x080072B8u;
    g_cpu.R[15] = 0x0805F2B6u;
    runtime_tick(_cyc_0805F2B4);
    /* 0805F2B6  0805f2b6 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0805F2B6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F2B6 = 1u;
    _cyc_0805F2B6 = 3u;
    uint32_t _blt_0805F2B6 = (g_cpu.R[14] + 0x00000BF0u) & ~1u;
    g_cpu.R[14] = 0x0805F2B9u;
    g_cpu.R[15] = _blt_0805F2B6;
    runtime_call_push_return(0x0805F2B8u);
    runtime_tick(_cyc_0805F2B6);
    _cyc_0805F2B6 = 0u;
    runtime_dispatch(_blt_0805F2B6);
    if (g_cpu.R[15] != 0x0805F2B8u) { runtime_call_cancel_return(0x0805F2B8u); return; }
    g_cpu.R[15] = 0x0805F2B8u;
    runtime_tick(_cyc_0805F2B6);
    /* fall-through to 0x0805F2B8 */
    g_cpu.R[15] = 0x0805F2B8u;
    runtime_dispatch(0x0805F2B8u);
    return;
}

/* 0x0805F2C2  mode=thumb  end=0x0805F2EC  branches=4  indirect */


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


/* 0x08084750 thumb */
void gf_autojt_0808454C_00(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08084750u);
    /* 08084750  08084750 T adds r0,r4,#0x0 */
    g_cpu.R[15] = 0x08084750u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084750 = 1u;
    _cyc_08084750 = 1u;
    uint32_t _rn_08084750 = g_cpu.R[4];
    uint32_t _r_08084750;
    _r_08084750 = _rn_08084750 + 0x00000000u;
    arm_set_nzcv_add(_rn_08084750, 0x00000000u, _r_08084750);
    g_cpu.R[0] = _r_08084750;
    g_cpu.R[15] = 0x08084752u;
    runtime_tick(_cyc_08084750);
    /* 08084752  08084752 T movs r1,#0x34 */
    g_cpu.R[15] = 0x08084752u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084752 = 1u;
    _cyc_08084752 = 1u;
    uint32_t _r_08084752;
    _r_08084752 = 0x00000034u;
    arm_set_nzc_logic(_r_08084752, cpsr_c());
    g_cpu.R[1] = _r_08084752;
    g_cpu.R[15] = 0x08084754u;
    runtime_tick(_cyc_08084752);
    /* 08084754  08084754 T movs r2,#0xa */
    g_cpu.R[15] = 0x08084754u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084754 = 1u;
    _cyc_08084754 = 1u;
    uint32_t _r_08084754;
    _r_08084754 = 0x0000000Au;
    arm_set_nzc_logic(_r_08084754, cpsr_c());
    g_cpu.R[2] = _r_08084754;
    g_cpu.R[15] = 0x08084756u;
    runtime_tick(_cyc_08084754);
    /* 08084756  08084756 T movs r3,#0x12 */
    g_cpu.R[15] = 0x08084756u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084756 = 1u;
    _cyc_08084756 = 1u;
    uint32_t _r_08084756;
    _r_08084756 = 0x00000012u;
    arm_set_nzc_logic(_r_08084756, cpsr_c());
    g_cpu.R[3] = _r_08084756;
    g_cpu.R[15] = 0x08084758u;
    runtime_tick(_cyc_08084756);
    /* 08084758  08084758 T bl.hi 0x0806c75c */
    g_cpu.R[15] = 0x08084758u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084758 = 1u;
    _cyc_08084758 = 1u;
    g_cpu.R[14] = 0x0806C75Cu;
    g_cpu.R[15] = 0x0808475Au;
    runtime_tick(_cyc_08084758);
    /* 0808475A  0808475a T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0808475Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808475A = 1u;
    _cyc_0808475A = 3u;
    uint32_t _blt_0808475A = (g_cpu.R[14] + 0x00000B44u) & ~1u;
    g_cpu.R[14] = 0x0808475Du;
    g_cpu.R[15] = _blt_0808475A;
    runtime_call_push_return(0x0808475Cu);
    runtime_tick(_cyc_0808475A);
    _cyc_0808475A = 0u;
    runtime_dispatch(_blt_0808475A);
    if (g_cpu.R[15] != 0x0808475Cu) { runtime_call_cancel_return(0x0808475Cu); return; }
    g_cpu.R[15] = 0x0808475Cu;
    runtime_tick(_cyc_0808475A);
    /* fall-through to 0x0808475C */
    g_cpu.R[15] = 0x0808475Cu;
    runtime_dispatch(0x0808475Cu);
    return;
}

/* 0x0808475C  mode=thumb  end=0x08084768  branches=4 */


/* 0x0808476E thumb */
void gf_autojt_0808454C_08(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808476Eu);
    /* 0808476E  0808476e T adds r0,r4,#0x0 */
    g_cpu.R[15] = 0x0808476Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808476E = 1u;
    _cyc_0808476E = 1u;
    uint32_t _rn_0808476E = g_cpu.R[4];
    uint32_t _r_0808476E;
    _r_0808476E = _rn_0808476E + 0x00000000u;
    arm_set_nzcv_add(_rn_0808476E, 0x00000000u, _r_0808476E);
    g_cpu.R[0] = _r_0808476E;
    g_cpu.R[15] = 0x08084770u;
    runtime_tick(_cyc_0808476E);
    /* 08084770  08084770 T movs r1,#0x34 */
    g_cpu.R[15] = 0x08084770u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084770 = 1u;
    _cyc_08084770 = 1u;
    uint32_t _r_08084770;
    _r_08084770 = 0x00000034u;
    arm_set_nzc_logic(_r_08084770, cpsr_c());
    g_cpu.R[1] = _r_08084770;
    g_cpu.R[15] = 0x08084772u;
    runtime_tick(_cyc_08084770);
    /* 08084772  08084772 T movs r2,#0xa */
    g_cpu.R[15] = 0x08084772u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084772 = 1u;
    _cyc_08084772 = 1u;
    uint32_t _r_08084772;
    _r_08084772 = 0x0000000Au;
    arm_set_nzc_logic(_r_08084772, cpsr_c());
    g_cpu.R[2] = _r_08084772;
    g_cpu.R[15] = 0x08084774u;
    runtime_tick(_cyc_08084772);
    /* 08084774  08084774 T movs r3,#0x12 */
    g_cpu.R[15] = 0x08084774u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084774 = 1u;
    _cyc_08084774 = 1u;
    uint32_t _r_08084774;
    _r_08084774 = 0x00000012u;
    arm_set_nzc_logic(_r_08084774, cpsr_c());
    g_cpu.R[3] = _r_08084774;
    g_cpu.R[15] = 0x08084776u;
    runtime_tick(_cyc_08084774);
    /* 08084776  08084776 T bl.hi 0x0806c77a */
    g_cpu.R[15] = 0x08084776u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084776 = 1u;
    _cyc_08084776 = 1u;
    g_cpu.R[14] = 0x0806C77Au;
    g_cpu.R[15] = 0x08084778u;
    runtime_tick(_cyc_08084776);
    /* 08084778  08084778 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08084778u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084778 = 1u;
    _cyc_08084778 = 3u;
    uint32_t _blt_08084778 = (g_cpu.R[14] + 0x00000B26u) & ~1u;
    g_cpu.R[14] = 0x0808477Bu;
    g_cpu.R[15] = _blt_08084778;
    runtime_call_push_return(0x0808477Au);
    runtime_tick(_cyc_08084778);
    _cyc_08084778 = 0u;
    runtime_dispatch(_blt_08084778);
    if (g_cpu.R[15] != 0x0808477Au) { runtime_call_cancel_return(0x0808477Au); return; }
    g_cpu.R[15] = 0x0808477Au;
    runtime_tick(_cyc_08084778);
    /* fall-through to 0x0808477A */
    g_cpu.R[15] = 0x0808477Au;
    runtime_dispatch(0x0808477Au);
    return;
}

/* 0x0808478C  mode=thumb  end=0x080847B6  branches=5 */


/* 0x0808478C thumb */
void gf_autojt_0808454C_64(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808478Cu);
    /* 0808478C  0808478c T adds r0,r7,#0x0 */
    g_cpu.R[15] = 0x0808478Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808478C = 1u;
    _cyc_0808478C = 1u;
    uint32_t _rn_0808478C = g_cpu.R[7];
    uint32_t _r_0808478C;
    _r_0808478C = _rn_0808478C + 0x00000000u;
    arm_set_nzcv_add(_rn_0808478C, 0x00000000u, _r_0808478C);
    g_cpu.R[0] = _r_0808478C;
    g_cpu.R[15] = 0x0808478Eu;
    runtime_tick(_cyc_0808478C);
    /* 0808478E  0808478e T adds r0,r0,#0xd0 */
    g_cpu.R[15] = 0x0808478Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808478E = 1u;
    _cyc_0808478E = 1u;
    uint32_t _rn_0808478E = g_cpu.R[0];
    uint32_t _r_0808478E;
    _r_0808478E = _rn_0808478E + 0x000000D0u;
    arm_set_nzcv_add(_rn_0808478E, 0x000000D0u, _r_0808478E);
    g_cpu.R[0] = _r_0808478E;
    g_cpu.R[15] = 0x08084790u;
    runtime_tick(_cyc_0808478E);
    /* 08084790  08084790 T ldr r0,[r0] */
    g_cpu.R[15] = 0x08084790u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084790 = 1u;
    _cyc_08084790 = 2u;
    uint32_t _base_08084790 = g_cpu.R[0];
    uint32_t _off_08084790;
    _off_08084790 = 0x00000000u;
    uint32_t _ea_08084790 = _base_08084790 + _off_08084790;
    uint32_t _post_08084790 = _base_08084790 + _off_08084790;
    _cyc_08084790 += runtime_mem_cycles(_ea_08084790, 4u, 0u);
    uint32_t _v_08084790;
    { uint32_t _w = bus_read_u32(_ea_08084790 & ~3u); uint32_t _rot = (_ea_08084790 & 3u) * 8u; _v_08084790 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08084790;
    g_cpu.R[15] = 0x08084792u;
    runtime_tick(_cyc_08084790);
    /* 08084792  08084792 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x08084792u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084792 = 1u;
    _cyc_08084792 = 1u;
    uint32_t _rn_08084792 = g_cpu.R[0];
    uint32_t _r_08084792;
    _r_08084792 = _rn_08084792 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08084792, 0x00000000u, _r_08084792);
    g_cpu.R[15] = 0x08084794u;
    runtime_tick(_cyc_08084792);
    /* 08084794  08084794 T bne 0x080847b6 */
    g_cpu.R[15] = 0x08084794u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084794 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08084794 = 3u;
        g_cpu.R[15] = 0x080847B6u;
        runtime_tick(_cyc_08084794);
        GBARECOMP_TAIL_CALL(gf_tfunc_080847B6);
    }
    g_cpu.R[15] = 0x08084796u;
    runtime_tick(_cyc_08084794);
    /* 08084796  08084796 T adds r0,r7,#0x0 */
    g_cpu.R[15] = 0x08084796u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084796 = 1u;
    _cyc_08084796 = 1u;
    uint32_t _rn_08084796 = g_cpu.R[7];
    uint32_t _r_08084796;
    _r_08084796 = _rn_08084796 + 0x00000000u;
    arm_set_nzcv_add(_rn_08084796, 0x00000000u, _r_08084796);
    g_cpu.R[0] = _r_08084796;
    g_cpu.R[15] = 0x08084798u;
    runtime_tick(_cyc_08084796);
    /* 08084798  08084798 T adds r0,r0,#0xd4 */
    g_cpu.R[15] = 0x08084798u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084798 = 1u;
    _cyc_08084798 = 1u;
    uint32_t _rn_08084798 = g_cpu.R[0];
    uint32_t _r_08084798;
    _r_08084798 = _rn_08084798 + 0x000000D4u;
    arm_set_nzcv_add(_rn_08084798, 0x000000D4u, _r_08084798);
    g_cpu.R[0] = _r_08084798;
    g_cpu.R[15] = 0x0808479Au;
    runtime_tick(_cyc_08084798);
    /* 0808479A  0808479a T ldr r0,[r0] */
    g_cpu.R[15] = 0x0808479Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808479A = 1u;
    _cyc_0808479A = 2u;
    uint32_t _base_0808479A = g_cpu.R[0];
    uint32_t _off_0808479A;
    _off_0808479A = 0x00000000u;
    uint32_t _ea_0808479A = _base_0808479A + _off_0808479A;
    uint32_t _post_0808479A = _base_0808479A + _off_0808479A;
    _cyc_0808479A += runtime_mem_cycles(_ea_0808479A, 4u, 0u);
    uint32_t _v_0808479A;
    { uint32_t _w = bus_read_u32(_ea_0808479A & ~3u); uint32_t _rot = (_ea_0808479A & 3u) * 8u; _v_0808479A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0808479A;
    g_cpu.R[15] = 0x0808479Cu;
    runtime_tick(_cyc_0808479A);
    /* 0808479C  0808479c T cmps r0,#0x0 */
    g_cpu.R[15] = 0x0808479Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808479C = 1u;
    _cyc_0808479C = 1u;
    uint32_t _rn_0808479C = g_cpu.R[0];
    uint32_t _r_0808479C;
    _r_0808479C = _rn_0808479C - 0x00000000u;
    arm_set_nzcv_sub(_rn_0808479C, 0x00000000u, _r_0808479C);
    g_cpu.R[15] = 0x0808479Eu;
    runtime_tick(_cyc_0808479C);
    /* 0808479E  0808479e T bne 0x080847b6 */
    g_cpu.R[15] = 0x0808479Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808479E = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_0808479E = 3u;
        g_cpu.R[15] = 0x080847B6u;
        runtime_tick(_cyc_0808479E);
        GBARECOMP_TAIL_CALL(gf_tfunc_080847B6);
    }
    g_cpu.R[15] = 0x080847A0u;
    runtime_tick(_cyc_0808479E);
    /* 080847A0  080847a0 T adds r0,r7,#0x0 */
    g_cpu.R[15] = 0x080847A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080847A0 = 1u;
    _cyc_080847A0 = 1u;
    uint32_t _rn_080847A0 = g_cpu.R[7];
    uint32_t _r_080847A0;
    _r_080847A0 = _rn_080847A0 + 0x00000000u;
    arm_set_nzcv_add(_rn_080847A0, 0x00000000u, _r_080847A0);
    g_cpu.R[0] = _r_080847A0;
    g_cpu.R[15] = 0x080847A2u;
    runtime_tick(_cyc_080847A0);
    /* 080847A2  080847a2 T adds r0,r0,#0xd8 */
    g_cpu.R[15] = 0x080847A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080847A2 = 1u;
    _cyc_080847A2 = 1u;
    uint32_t _rn_080847A2 = g_cpu.R[0];
    uint32_t _r_080847A2;
    _r_080847A2 = _rn_080847A2 + 0x000000D8u;
    arm_set_nzcv_add(_rn_080847A2, 0x000000D8u, _r_080847A2);
    g_cpu.R[0] = _r_080847A2;
    g_cpu.R[15] = 0x080847A4u;
    runtime_tick(_cyc_080847A2);
    /* 080847A4  080847a4 T ldr r0,[r0] */
    g_cpu.R[15] = 0x080847A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080847A4 = 1u;
    _cyc_080847A4 = 2u;
    uint32_t _base_080847A4 = g_cpu.R[0];
    uint32_t _off_080847A4;
    _off_080847A4 = 0x00000000u;
    uint32_t _ea_080847A4 = _base_080847A4 + _off_080847A4;
    uint32_t _post_080847A4 = _base_080847A4 + _off_080847A4;
    _cyc_080847A4 += runtime_mem_cycles(_ea_080847A4, 4u, 0u);
    uint32_t _v_080847A4;
    { uint32_t _w = bus_read_u32(_ea_080847A4 & ~3u); uint32_t _rot = (_ea_080847A4 & 3u) * 8u; _v_080847A4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080847A4;
    g_cpu.R[15] = 0x080847A6u;
    runtime_tick(_cyc_080847A4);
    /* 080847A6  080847a6 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x080847A6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080847A6 = 1u;
    _cyc_080847A6 = 1u;
    uint32_t _rn_080847A6 = g_cpu.R[0];
    uint32_t _r_080847A6;
    _r_080847A6 = _rn_080847A6 - 0x00000000u;
    arm_set_nzcv_sub(_rn_080847A6, 0x00000000u, _r_080847A6);
    g_cpu.R[15] = 0x080847A8u;
    runtime_tick(_cyc_080847A6);
    /* 080847A8  080847a8 T bne 0x080847b6 */
    g_cpu.R[15] = 0x080847A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080847A8 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_080847A8 = 3u;
        g_cpu.R[15] = 0x080847B6u;
        runtime_tick(_cyc_080847A8);
        GBARECOMP_TAIL_CALL(gf_tfunc_080847B6);
    }
    g_cpu.R[15] = 0x080847AAu;
    runtime_tick(_cyc_080847A8);
    /* 080847AA  080847aa T adds r0,r7,#0x0 */
    g_cpu.R[15] = 0x080847AAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080847AA = 1u;
    _cyc_080847AA = 1u;
    uint32_t _rn_080847AA = g_cpu.R[7];
    uint32_t _r_080847AA;
    _r_080847AA = _rn_080847AA + 0x00000000u;
    arm_set_nzcv_add(_rn_080847AA, 0x00000000u, _r_080847AA);
    g_cpu.R[0] = _r_080847AA;
    g_cpu.R[15] = 0x080847ACu;
    runtime_tick(_cyc_080847AA);
    /* 080847AC  080847ac T adds r0,r0,#0xdc */
    g_cpu.R[15] = 0x080847ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080847AC = 1u;
    _cyc_080847AC = 1u;
    uint32_t _rn_080847AC = g_cpu.R[0];
    uint32_t _r_080847AC;
    _r_080847AC = _rn_080847AC + 0x000000DCu;
    arm_set_nzcv_add(_rn_080847AC, 0x000000DCu, _r_080847AC);
    g_cpu.R[0] = _r_080847AC;
    g_cpu.R[15] = 0x080847AEu;
    runtime_tick(_cyc_080847AC);
    /* 080847AE  080847ae T ldr r0,[r0] */
    g_cpu.R[15] = 0x080847AEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080847AE = 1u;
    _cyc_080847AE = 2u;
    uint32_t _base_080847AE = g_cpu.R[0];
    uint32_t _off_080847AE;
    _off_080847AE = 0x00000000u;
    uint32_t _ea_080847AE = _base_080847AE + _off_080847AE;
    uint32_t _post_080847AE = _base_080847AE + _off_080847AE;
    _cyc_080847AE += runtime_mem_cycles(_ea_080847AE, 4u, 0u);
    uint32_t _v_080847AE;
    { uint32_t _w = bus_read_u32(_ea_080847AE & ~3u); uint32_t _rot = (_ea_080847AE & 3u) * 8u; _v_080847AE = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080847AE;
    g_cpu.R[15] = 0x080847B0u;
    runtime_tick(_cyc_080847AE);
    /* 080847B0  080847b0 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x080847B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080847B0 = 1u;
    _cyc_080847B0 = 1u;
    uint32_t _rn_080847B0 = g_cpu.R[0];
    uint32_t _r_080847B0;
    _r_080847B0 = _rn_080847B0 - 0x00000000u;
    arm_set_nzcv_sub(_rn_080847B0, 0x00000000u, _r_080847B0);
    g_cpu.R[15] = 0x080847B2u;
    runtime_tick(_cyc_080847B0);
    /* 080847B2  080847b2 T bne 0x080847b6 */
    g_cpu.R[15] = 0x080847B2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080847B2 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_080847B2 = 3u;
        g_cpu.R[15] = 0x080847B6u;
        runtime_tick(_cyc_080847B2);
        GBARECOMP_TAIL_CALL(gf_tfunc_080847B6);
    }
    g_cpu.R[15] = 0x080847B4u;
    runtime_tick(_cyc_080847B2);
    /* 080847B4  080847b4 T b 0x08084994 */
    g_cpu.R[15] = 0x080847B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080847B4 = 1u;
    _cyc_080847B4 = 3u;
    g_cpu.R[15] = 0x08084994u;
    runtime_tick(_cyc_080847B4);
    GBARECOMP_TAIL_CALL(gf_tfunc_08084994);
    g_cpu.R[15] = 0x080847B6u;
    runtime_tick(_cyc_080847B4);
    /* fall-through to 0x080847B6 */
    g_cpu.R[15] = 0x080847B6u;
    runtime_dispatch(0x080847B6u);
    return;
}

/* 0x080847BA  mode=thumb  end=0x08084800  branches=4 */


/* 0x0808481C thumb */
void gf_autojt_0808454C_67(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808481Cu);
    /* 0808481C  0808481c T adds r0,r7,#0x0 */
    g_cpu.R[15] = 0x0808481Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808481C = 1u;
    _cyc_0808481C = 1u;
    uint32_t _rn_0808481C = g_cpu.R[7];
    uint32_t _r_0808481C;
    _r_0808481C = _rn_0808481C + 0x00000000u;
    arm_set_nzcv_add(_rn_0808481C, 0x00000000u, _r_0808481C);
    g_cpu.R[0] = _r_0808481C;
    g_cpu.R[15] = 0x0808481Eu;
    runtime_tick(_cyc_0808481C);
    /* 0808481E  0808481e T adds r0,r0,#0xd0 */
    g_cpu.R[15] = 0x0808481Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808481E = 1u;
    _cyc_0808481E = 1u;
    uint32_t _rn_0808481E = g_cpu.R[0];
    uint32_t _r_0808481E;
    _r_0808481E = _rn_0808481E + 0x000000D0u;
    arm_set_nzcv_add(_rn_0808481E, 0x000000D0u, _r_0808481E);
    g_cpu.R[0] = _r_0808481E;
    g_cpu.R[15] = 0x08084820u;
    runtime_tick(_cyc_0808481E);
    /* 08084820  08084820 T ldr r0,[r0] */
    g_cpu.R[15] = 0x08084820u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084820 = 1u;
    _cyc_08084820 = 2u;
    uint32_t _base_08084820 = g_cpu.R[0];
    uint32_t _off_08084820;
    _off_08084820 = 0x00000000u;
    uint32_t _ea_08084820 = _base_08084820 + _off_08084820;
    uint32_t _post_08084820 = _base_08084820 + _off_08084820;
    _cyc_08084820 += runtime_mem_cycles(_ea_08084820, 4u, 0u);
    uint32_t _v_08084820;
    { uint32_t _w = bus_read_u32(_ea_08084820 & ~3u); uint32_t _rot = (_ea_08084820 & 3u) * 8u; _v_08084820 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08084820;
    g_cpu.R[15] = 0x08084822u;
    runtime_tick(_cyc_08084820);
    /* 08084822  08084822 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x08084822u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084822 = 1u;
    _cyc_08084822 = 1u;
    uint32_t _rn_08084822 = g_cpu.R[0];
    uint32_t _r_08084822;
    _r_08084822 = _rn_08084822 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08084822, 0x00000000u, _r_08084822);
    g_cpu.R[15] = 0x08084824u;
    runtime_tick(_cyc_08084822);
    /* 08084824  08084824 T bne 0x08084846 */
    g_cpu.R[15] = 0x08084824u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084824 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08084824 = 3u;
        g_cpu.R[15] = 0x08084846u;
        runtime_tick(_cyc_08084824);
        GBARECOMP_TAIL_CALL(gf_tfunc_08084846);
    }
    g_cpu.R[15] = 0x08084826u;
    runtime_tick(_cyc_08084824);
    /* 08084826  08084826 T adds r0,r7,#0x0 */
    g_cpu.R[15] = 0x08084826u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084826 = 1u;
    _cyc_08084826 = 1u;
    uint32_t _rn_08084826 = g_cpu.R[7];
    uint32_t _r_08084826;
    _r_08084826 = _rn_08084826 + 0x00000000u;
    arm_set_nzcv_add(_rn_08084826, 0x00000000u, _r_08084826);
    g_cpu.R[0] = _r_08084826;
    g_cpu.R[15] = 0x08084828u;
    runtime_tick(_cyc_08084826);
    /* 08084828  08084828 T adds r0,r0,#0xd4 */
    g_cpu.R[15] = 0x08084828u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084828 = 1u;
    _cyc_08084828 = 1u;
    uint32_t _rn_08084828 = g_cpu.R[0];
    uint32_t _r_08084828;
    _r_08084828 = _rn_08084828 + 0x000000D4u;
    arm_set_nzcv_add(_rn_08084828, 0x000000D4u, _r_08084828);
    g_cpu.R[0] = _r_08084828;
    g_cpu.R[15] = 0x0808482Au;
    runtime_tick(_cyc_08084828);
    /* 0808482A  0808482a T ldr r0,[r0] */
    g_cpu.R[15] = 0x0808482Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808482A = 1u;
    _cyc_0808482A = 2u;
    uint32_t _base_0808482A = g_cpu.R[0];
    uint32_t _off_0808482A;
    _off_0808482A = 0x00000000u;
    uint32_t _ea_0808482A = _base_0808482A + _off_0808482A;
    uint32_t _post_0808482A = _base_0808482A + _off_0808482A;
    _cyc_0808482A += runtime_mem_cycles(_ea_0808482A, 4u, 0u);
    uint32_t _v_0808482A;
    { uint32_t _w = bus_read_u32(_ea_0808482A & ~3u); uint32_t _rot = (_ea_0808482A & 3u) * 8u; _v_0808482A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0808482A;
    g_cpu.R[15] = 0x0808482Cu;
    runtime_tick(_cyc_0808482A);
    /* 0808482C  0808482c T cmps r0,#0x0 */
    g_cpu.R[15] = 0x0808482Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808482C = 1u;
    _cyc_0808482C = 1u;
    uint32_t _rn_0808482C = g_cpu.R[0];
    uint32_t _r_0808482C;
    _r_0808482C = _rn_0808482C - 0x00000000u;
    arm_set_nzcv_sub(_rn_0808482C, 0x00000000u, _r_0808482C);
    g_cpu.R[15] = 0x0808482Eu;
    runtime_tick(_cyc_0808482C);
    /* 0808482E  0808482e T bne 0x08084846 */
    g_cpu.R[15] = 0x0808482Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808482E = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_0808482E = 3u;
        g_cpu.R[15] = 0x08084846u;
        runtime_tick(_cyc_0808482E);
        GBARECOMP_TAIL_CALL(gf_tfunc_08084846);
    }
    g_cpu.R[15] = 0x08084830u;
    runtime_tick(_cyc_0808482E);
    /* 08084830  08084830 T adds r0,r7,#0x0 */
    g_cpu.R[15] = 0x08084830u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084830 = 1u;
    _cyc_08084830 = 1u;
    uint32_t _rn_08084830 = g_cpu.R[7];
    uint32_t _r_08084830;
    _r_08084830 = _rn_08084830 + 0x00000000u;
    arm_set_nzcv_add(_rn_08084830, 0x00000000u, _r_08084830);
    g_cpu.R[0] = _r_08084830;
    g_cpu.R[15] = 0x08084832u;
    runtime_tick(_cyc_08084830);
    /* 08084832  08084832 T adds r0,r0,#0xd8 */
    g_cpu.R[15] = 0x08084832u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084832 = 1u;
    _cyc_08084832 = 1u;
    uint32_t _rn_08084832 = g_cpu.R[0];
    uint32_t _r_08084832;
    _r_08084832 = _rn_08084832 + 0x000000D8u;
    arm_set_nzcv_add(_rn_08084832, 0x000000D8u, _r_08084832);
    g_cpu.R[0] = _r_08084832;
    g_cpu.R[15] = 0x08084834u;
    runtime_tick(_cyc_08084832);
    /* 08084834  08084834 T ldr r0,[r0] */
    g_cpu.R[15] = 0x08084834u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084834 = 1u;
    _cyc_08084834 = 2u;
    uint32_t _base_08084834 = g_cpu.R[0];
    uint32_t _off_08084834;
    _off_08084834 = 0x00000000u;
    uint32_t _ea_08084834 = _base_08084834 + _off_08084834;
    uint32_t _post_08084834 = _base_08084834 + _off_08084834;
    _cyc_08084834 += runtime_mem_cycles(_ea_08084834, 4u, 0u);
    uint32_t _v_08084834;
    { uint32_t _w = bus_read_u32(_ea_08084834 & ~3u); uint32_t _rot = (_ea_08084834 & 3u) * 8u; _v_08084834 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08084834;
    g_cpu.R[15] = 0x08084836u;
    runtime_tick(_cyc_08084834);
    /* 08084836  08084836 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x08084836u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084836 = 1u;
    _cyc_08084836 = 1u;
    uint32_t _rn_08084836 = g_cpu.R[0];
    uint32_t _r_08084836;
    _r_08084836 = _rn_08084836 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08084836, 0x00000000u, _r_08084836);
    g_cpu.R[15] = 0x08084838u;
    runtime_tick(_cyc_08084836);
    /* 08084838  08084838 T bne 0x08084846 */
    g_cpu.R[15] = 0x08084838u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084838 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08084838 = 3u;
        g_cpu.R[15] = 0x08084846u;
        runtime_tick(_cyc_08084838);
        GBARECOMP_TAIL_CALL(gf_tfunc_08084846);
    }
    g_cpu.R[15] = 0x0808483Au;
    runtime_tick(_cyc_08084838);
    /* 0808483A  0808483a T adds r0,r7,#0x0 */
    g_cpu.R[15] = 0x0808483Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808483A = 1u;
    _cyc_0808483A = 1u;
    uint32_t _rn_0808483A = g_cpu.R[7];
    uint32_t _r_0808483A;
    _r_0808483A = _rn_0808483A + 0x00000000u;
    arm_set_nzcv_add(_rn_0808483A, 0x00000000u, _r_0808483A);
    g_cpu.R[0] = _r_0808483A;
    g_cpu.R[15] = 0x0808483Cu;
    runtime_tick(_cyc_0808483A);
    /* 0808483C  0808483c T adds r0,r0,#0xdc */
    g_cpu.R[15] = 0x0808483Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808483C = 1u;
    _cyc_0808483C = 1u;
    uint32_t _rn_0808483C = g_cpu.R[0];
    uint32_t _r_0808483C;
    _r_0808483C = _rn_0808483C + 0x000000DCu;
    arm_set_nzcv_add(_rn_0808483C, 0x000000DCu, _r_0808483C);
    g_cpu.R[0] = _r_0808483C;
    g_cpu.R[15] = 0x0808483Eu;
    runtime_tick(_cyc_0808483C);
    /* 0808483E  0808483e T ldr r0,[r0] */
    g_cpu.R[15] = 0x0808483Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808483E = 1u;
    _cyc_0808483E = 2u;
    uint32_t _base_0808483E = g_cpu.R[0];
    uint32_t _off_0808483E;
    _off_0808483E = 0x00000000u;
    uint32_t _ea_0808483E = _base_0808483E + _off_0808483E;
    uint32_t _post_0808483E = _base_0808483E + _off_0808483E;
    _cyc_0808483E += runtime_mem_cycles(_ea_0808483E, 4u, 0u);
    uint32_t _v_0808483E;
    { uint32_t _w = bus_read_u32(_ea_0808483E & ~3u); uint32_t _rot = (_ea_0808483E & 3u) * 8u; _v_0808483E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0808483E;
    g_cpu.R[15] = 0x08084840u;
    runtime_tick(_cyc_0808483E);
    /* 08084840  08084840 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x08084840u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084840 = 1u;
    _cyc_08084840 = 1u;
    uint32_t _rn_08084840 = g_cpu.R[0];
    uint32_t _r_08084840;
    _r_08084840 = _rn_08084840 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08084840, 0x00000000u, _r_08084840);
    g_cpu.R[15] = 0x08084842u;
    runtime_tick(_cyc_08084840);
    /* 08084842  08084842 T bne 0x08084846 */
    g_cpu.R[15] = 0x08084842u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084842 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08084842 = 3u;
        g_cpu.R[15] = 0x08084846u;
        runtime_tick(_cyc_08084842);
        GBARECOMP_TAIL_CALL(gf_tfunc_08084846);
    }
    g_cpu.R[15] = 0x08084844u;
    runtime_tick(_cyc_08084842);
    /* 08084844  08084844 T b 0x08084994 */
    g_cpu.R[15] = 0x08084844u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08084844 = 1u;
    _cyc_08084844 = 3u;
    g_cpu.R[15] = 0x08084994u;
    runtime_tick(_cyc_08084844);
    GBARECOMP_TAIL_CALL(gf_tfunc_08084994);
    g_cpu.R[15] = 0x08084846u;
    runtime_tick(_cyc_08084844);
    /* fall-through to 0x08084846 */
    g_cpu.R[15] = 0x08084846u;
    runtime_dispatch(0x08084846u);
    return;
}

/* 0x0808489C  mode=thumb  end=0x080848FA  branches=12 */


/* 0x0808489C thumb */
void gf_autojt_0808454C_128(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808489Cu);
    /* 0808489C  0808489c T ldr r0,[r7,#0x40] */
    g_cpu.R[15] = 0x0808489Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808489C = 1u;
    _cyc_0808489C = 2u;
    uint32_t _base_0808489C = g_cpu.R[7];
    uint32_t _off_0808489C;
    _off_0808489C = 0x00000040u;
    uint32_t _ea_0808489C = _base_0808489C + _off_0808489C;
    uint32_t _post_0808489C = _base_0808489C + _off_0808489C;
    _cyc_0808489C += runtime_mem_cycles(_ea_0808489C, 4u, 0u);
    uint32_t _v_0808489C;
    { uint32_t _w = bus_read_u32(_ea_0808489C & ~3u); uint32_t _rot = (_ea_0808489C & 3u) * 8u; _v_0808489C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0808489C;
    g_cpu.R[15] = 0x0808489Eu;
    runtime_tick(_cyc_0808489C);
    /* 0808489E  0808489e T cmps r0,#0x1 */
    g_cpu.R[15] = 0x0808489Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808489E = 1u;
    _cyc_0808489E = 1u;
    uint32_t _rn_0808489E = g_cpu.R[0];
    uint32_t _r_0808489E;
    _r_0808489E = _rn_0808489E - 0x00000001u;
    arm_set_nzcv_sub(_rn_0808489E, 0x00000001u, _r_0808489E);
    g_cpu.R[15] = 0x080848A0u;
    runtime_tick(_cyc_0808489E);
    /* 080848A0  080848a0 T bne 0x08084994 */
    g_cpu.R[15] = 0x080848A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848A0 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_080848A0 = 3u;
        g_cpu.R[15] = 0x08084994u;
        runtime_tick(_cyc_080848A0);
        GBARECOMP_TAIL_CALL(gf_tfunc_08084994);
    }
    g_cpu.R[15] = 0x080848A2u;
    runtime_tick(_cyc_080848A0);
    /* 080848A2  080848a2 T movs r0,#0xb5 */
    g_cpu.R[15] = 0x080848A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848A2 = 1u;
    _cyc_080848A2 = 1u;
    uint32_t _r_080848A2;
    _r_080848A2 = 0x000000B5u;
    arm_set_nzc_logic(_r_080848A2, cpsr_c());
    g_cpu.R[0] = _r_080848A2;
    g_cpu.R[15] = 0x080848A4u;
    runtime_tick(_cyc_080848A2);
    /* 080848A4  080848a4 T movs r0,r0,lsl #2 */
    g_cpu.R[15] = 0x080848A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848A4 = 1u;
    _cyc_080848A4 = 1u;
    uint32_t _rm_080848A4 = g_cpu.R[0];
    uint32_t _op2_080848A4;
    uint32_t _co_080848A4;
    _op2_080848A4 = _rm_080848A4 << 2;
    _co_080848A4 = (_rm_080848A4 >> 30) & 1u;
    uint32_t _r_080848A4;
    _r_080848A4 = _op2_080848A4;
    arm_set_nzc_logic(_r_080848A4, _co_080848A4);
    g_cpu.R[0] = _r_080848A4;
    g_cpu.R[15] = 0x080848A6u;
    runtime_tick(_cyc_080848A4);
    /* 080848A6  080848a6 T add r0,r0,r8 */
    g_cpu.R[15] = 0x080848A6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848A6 = 1u;
    _cyc_080848A6 = 1u;
    uint32_t _rm_080848A6 = g_cpu.R[8];
    uint32_t _op2_080848A6;
    uint32_t _co_080848A6;
    _op2_080848A6 = _rm_080848A6;
    _co_080848A6 = cpsr_c();
    uint32_t _rn_080848A6 = g_cpu.R[0];
    uint32_t _r_080848A6;
    _r_080848A6 = _rn_080848A6 + _op2_080848A6;
    g_cpu.R[0] = _r_080848A6;
    g_cpu.R[15] = 0x080848A8u;
    runtime_tick(_cyc_080848A6);
    /* 080848A8  080848a8 T movs r2,#0x0 */
    g_cpu.R[15] = 0x080848A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848A8 = 1u;
    _cyc_080848A8 = 1u;
    uint32_t _r_080848A8;
    _r_080848A8 = 0x00000000u;
    arm_set_nzc_logic(_r_080848A8, cpsr_c());
    g_cpu.R[2] = _r_080848A8;
    g_cpu.R[15] = 0x080848AAu;
    runtime_tick(_cyc_080848A8);
    /* 080848AA  080848aa T ldrsh r5,[r0,+r2] */
    g_cpu.R[15] = 0x080848AAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848AA = 1u;
    _cyc_080848AA = 2u;
    uint32_t _base_080848AA = g_cpu.R[0];
    uint32_t _off_080848AA;
    uint32_t _morm_080848AA = g_cpu.R[2];
    _off_080848AA = _morm_080848AA;
    uint32_t _ea_080848AA = _base_080848AA + _off_080848AA;
    uint32_t _post_080848AA = _base_080848AA + _off_080848AA;
    _cyc_080848AA += runtime_mem_cycles(_ea_080848AA, 2u, 0u);
    uint32_t _v_080848AA;
    if (_ea_080848AA & 1u) _v_080848AA = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_080848AA);
    else _v_080848AA = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_080848AA);
    g_cpu.R[5] = _v_080848AA;
    g_cpu.R[15] = 0x080848ACu;
    runtime_tick(_cyc_080848AA);
    /* 080848AC  080848ac T ldr r4,[r15,#0xa8] */
    g_cpu.R[15] = 0x080848ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848AC = 1u;
    _cyc_080848AC = 2u;
    uint32_t _base_080848AC = 0x080848B0u & ~3u;
    uint32_t _off_080848AC;
    _off_080848AC = 0x000000A8u;
    uint32_t _ea_080848AC = _base_080848AC + _off_080848AC;
    uint32_t _post_080848AC = _base_080848AC + _off_080848AC;
    _cyc_080848AC += runtime_mem_cycles(_ea_080848AC, 4u, 0u);
    uint32_t _v_080848AC;
    { uint32_t _w = bus_read_u32(_ea_080848AC & ~3u); uint32_t _rot = (_ea_080848AC & 3u) * 8u; _v_080848AC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[4] = _v_080848AC;
    g_cpu.R[15] = 0x080848AEu;
    runtime_tick(_cyc_080848AC);
    /* 080848AE  080848ae T movs r0,#0xb6 */
    g_cpu.R[15] = 0x080848AEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848AE = 1u;
    _cyc_080848AE = 1u;
    uint32_t _r_080848AE;
    _r_080848AE = 0x000000B6u;
    arm_set_nzc_logic(_r_080848AE, cpsr_c());
    g_cpu.R[0] = _r_080848AE;
    g_cpu.R[15] = 0x080848B0u;
    runtime_tick(_cyc_080848AE);
    /* 080848B0  080848b0 T movs r0,r0,lsl #2 */
    g_cpu.R[15] = 0x080848B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848B0 = 1u;
    _cyc_080848B0 = 1u;
    uint32_t _rm_080848B0 = g_cpu.R[0];
    uint32_t _op2_080848B0;
    uint32_t _co_080848B0;
    _op2_080848B0 = _rm_080848B0 << 2;
    _co_080848B0 = (_rm_080848B0 >> 30) & 1u;
    uint32_t _r_080848B0;
    _r_080848B0 = _op2_080848B0;
    arm_set_nzc_logic(_r_080848B0, _co_080848B0);
    g_cpu.R[0] = _r_080848B0;
    g_cpu.R[15] = 0x080848B2u;
    runtime_tick(_cyc_080848B0);
    /* 080848B2  080848b2 T add r0,r0,r8 */
    g_cpu.R[15] = 0x080848B2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848B2 = 1u;
    _cyc_080848B2 = 1u;
    uint32_t _rm_080848B2 = g_cpu.R[8];
    uint32_t _op2_080848B2;
    uint32_t _co_080848B2;
    _op2_080848B2 = _rm_080848B2;
    _co_080848B2 = cpsr_c();
    uint32_t _rn_080848B2 = g_cpu.R[0];
    uint32_t _r_080848B2;
    _r_080848B2 = _rn_080848B2 + _op2_080848B2;
    g_cpu.R[0] = _r_080848B2;
    g_cpu.R[15] = 0x080848B4u;
    runtime_tick(_cyc_080848B2);
    /* 080848B4  080848b4 T ldrb r1,[r0] */
    g_cpu.R[15] = 0x080848B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848B4 = 1u;
    _cyc_080848B4 = 2u;
    uint32_t _base_080848B4 = g_cpu.R[0];
    uint32_t _off_080848B4;
    _off_080848B4 = 0x00000000u;
    uint32_t _ea_080848B4 = _base_080848B4 + _off_080848B4;
    uint32_t _post_080848B4 = _base_080848B4 + _off_080848B4;
    _cyc_080848B4 += runtime_mem_cycles(_ea_080848B4, 1u, 0u);
    uint32_t _v_080848B4;
    _v_080848B4 = bus_read_u8(_ea_080848B4);
    g_cpu.R[1] = _v_080848B4;
    g_cpu.R[15] = 0x080848B6u;
    runtime_tick(_cyc_080848B4);
    /* 080848B6  080848b6 T movs r1,r1,lsl #2 */
    g_cpu.R[15] = 0x080848B6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848B6 = 1u;
    _cyc_080848B6 = 1u;
    uint32_t _rm_080848B6 = g_cpu.R[1];
    uint32_t _op2_080848B6;
    uint32_t _co_080848B6;
    _op2_080848B6 = _rm_080848B6 << 2;
    _co_080848B6 = (_rm_080848B6 >> 30) & 1u;
    uint32_t _r_080848B6;
    _r_080848B6 = _op2_080848B6;
    arm_set_nzc_logic(_r_080848B6, _co_080848B6);
    g_cpu.R[1] = _r_080848B6;
    g_cpu.R[15] = 0x080848B8u;
    runtime_tick(_cyc_080848B6);
    /* 080848B8  080848b8 T mov r3,r8 */
    g_cpu.R[15] = 0x080848B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848B8 = 1u;
    _cyc_080848B8 = 1u;
    uint32_t _rm_080848B8 = g_cpu.R[8];
    uint32_t _op2_080848B8;
    uint32_t _co_080848B8;
    _op2_080848B8 = _rm_080848B8;
    _co_080848B8 = cpsr_c();
    uint32_t _r_080848B8;
    _r_080848B8 = _op2_080848B8;
    g_cpu.R[3] = _r_080848B8;
    g_cpu.R[15] = 0x080848BAu;
    runtime_tick(_cyc_080848B8);
    /* 080848BA  080848ba T adds r3,r3,#0x8c */
    g_cpu.R[15] = 0x080848BAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848BA = 1u;
    _cyc_080848BA = 1u;
    uint32_t _rn_080848BA = g_cpu.R[3];
    uint32_t _r_080848BA;
    _r_080848BA = _rn_080848BA + 0x0000008Cu;
    arm_set_nzcv_add(_rn_080848BA, 0x0000008Cu, _r_080848BA);
    g_cpu.R[3] = _r_080848BA;
    g_cpu.R[15] = 0x080848BCu;
    runtime_tick(_cyc_080848BA);
    /* 080848BC  080848bc T movs r0,#0x0 */
    g_cpu.R[15] = 0x080848BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848BC = 1u;
    _cyc_080848BC = 1u;
    uint32_t _r_080848BC;
    _r_080848BC = 0x00000000u;
    arm_set_nzc_logic(_r_080848BC, cpsr_c());
    g_cpu.R[0] = _r_080848BC;
    g_cpu.R[15] = 0x080848BEu;
    runtime_tick(_cyc_080848BC);
    /* 080848BE  080848be T ldrsh r2,[r3,+r0] */
    g_cpu.R[15] = 0x080848BEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848BE = 1u;
    _cyc_080848BE = 2u;
    uint32_t _base_080848BE = g_cpu.R[3];
    uint32_t _off_080848BE;
    uint32_t _morm_080848BE = g_cpu.R[0];
    _off_080848BE = _morm_080848BE;
    uint32_t _ea_080848BE = _base_080848BE + _off_080848BE;
    uint32_t _post_080848BE = _base_080848BE + _off_080848BE;
    _cyc_080848BE += runtime_mem_cycles(_ea_080848BE, 2u, 0u);
    uint32_t _v_080848BE;
    if (_ea_080848BE & 1u) _v_080848BE = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_080848BE);
    else _v_080848BE = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_080848BE);
    g_cpu.R[2] = _v_080848BE;
    g_cpu.R[15] = 0x080848C0u;
    runtime_tick(_cyc_080848BE);
    /* 080848C0  080848c0 T movs r0,r2,lsl #1 */
    g_cpu.R[15] = 0x080848C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848C0 = 1u;
    _cyc_080848C0 = 1u;
    uint32_t _rm_080848C0 = g_cpu.R[2];
    uint32_t _op2_080848C0;
    uint32_t _co_080848C0;
    _op2_080848C0 = _rm_080848C0 << 1;
    _co_080848C0 = (_rm_080848C0 >> 31) & 1u;
    uint32_t _r_080848C0;
    _r_080848C0 = _op2_080848C0;
    arm_set_nzc_logic(_r_080848C0, _co_080848C0);
    g_cpu.R[0] = _r_080848C0;
    g_cpu.R[15] = 0x080848C2u;
    runtime_tick(_cyc_080848C0);
    /* 080848C2  080848c2 T adds r0,r0,r2 */
    g_cpu.R[15] = 0x080848C2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848C2 = 1u;
    _cyc_080848C2 = 1u;
    uint32_t _rm_080848C2 = g_cpu.R[2];
    uint32_t _op2_080848C2;
    uint32_t _co_080848C2;
    _op2_080848C2 = _rm_080848C2;
    _co_080848C2 = cpsr_c();
    uint32_t _rn_080848C2 = g_cpu.R[0];
    uint32_t _r_080848C2;
    _r_080848C2 = _rn_080848C2 + _op2_080848C2;
    arm_set_nzcv_add(_rn_080848C2, _op2_080848C2, _r_080848C2);
    g_cpu.R[0] = _r_080848C2;
    g_cpu.R[15] = 0x080848C4u;
    runtime_tick(_cyc_080848C2);
    /* 080848C4  080848c4 T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x080848C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848C4 = 1u;
    _cyc_080848C4 = 1u;
    uint32_t _rm_080848C4 = g_cpu.R[0];
    uint32_t _op2_080848C4;
    uint32_t _co_080848C4;
    _op2_080848C4 = _rm_080848C4 << 3;
    _co_080848C4 = (_rm_080848C4 >> 29) & 1u;
    uint32_t _r_080848C4;
    _r_080848C4 = _op2_080848C4;
    arm_set_nzc_logic(_r_080848C4, _co_080848C4);
    g_cpu.R[0] = _r_080848C4;
    g_cpu.R[15] = 0x080848C6u;
    runtime_tick(_cyc_080848C4);
    /* 080848C6  080848c6 T adds r1,r1,r0 */
    g_cpu.R[15] = 0x080848C6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848C6 = 1u;
    _cyc_080848C6 = 1u;
    uint32_t _rm_080848C6 = g_cpu.R[0];
    uint32_t _op2_080848C6;
    uint32_t _co_080848C6;
    _op2_080848C6 = _rm_080848C6;
    _co_080848C6 = cpsr_c();
    uint32_t _rn_080848C6 = g_cpu.R[1];
    uint32_t _r_080848C6;
    _r_080848C6 = _rn_080848C6 + _op2_080848C6;
    arm_set_nzcv_add(_rn_080848C6, _op2_080848C6, _r_080848C6);
    g_cpu.R[1] = _r_080848C6;
    g_cpu.R[15] = 0x080848C8u;
    runtime_tick(_cyc_080848C6);
    /* 080848C8  080848c8 T adds r1,r1,r4 */
    g_cpu.R[15] = 0x080848C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848C8 = 1u;
    _cyc_080848C8 = 1u;
    uint32_t _rm_080848C8 = g_cpu.R[4];
    uint32_t _op2_080848C8;
    uint32_t _co_080848C8;
    _op2_080848C8 = _rm_080848C8;
    _co_080848C8 = cpsr_c();
    uint32_t _rn_080848C8 = g_cpu.R[1];
    uint32_t _r_080848C8;
    _r_080848C8 = _rn_080848C8 + _op2_080848C8;
    arm_set_nzcv_add(_rn_080848C8, _op2_080848C8, _r_080848C8);
    g_cpu.R[1] = _r_080848C8;
    g_cpu.R[15] = 0x080848CAu;
    runtime_tick(_cyc_080848C8);
    /* 080848CA  080848ca T ldr r0,[r1] */
    g_cpu.R[15] = 0x080848CAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848CA = 1u;
    _cyc_080848CA = 2u;
    uint32_t _base_080848CA = g_cpu.R[1];
    uint32_t _off_080848CA;
    _off_080848CA = 0x00000000u;
    uint32_t _ea_080848CA = _base_080848CA + _off_080848CA;
    uint32_t _post_080848CA = _base_080848CA + _off_080848CA;
    _cyc_080848CA += runtime_mem_cycles(_ea_080848CA, 4u, 0u);
    uint32_t _v_080848CA;
    { uint32_t _w = bus_read_u32(_ea_080848CA & ~3u); uint32_t _rot = (_ea_080848CA & 3u) * 8u; _v_080848CA = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080848CA;
    g_cpu.R[15] = 0x080848CCu;
    runtime_tick(_cyc_080848CA);
    /* 080848CC  080848cc T mov r10,r3 */
    g_cpu.R[15] = 0x080848CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848CC = 1u;
    _cyc_080848CC = 1u;
    uint32_t _rm_080848CC = g_cpu.R[3];
    uint32_t _op2_080848CC;
    uint32_t _co_080848CC;
    _op2_080848CC = _rm_080848CC;
    _co_080848CC = cpsr_c();
    uint32_t _r_080848CC;
    _r_080848CC = _op2_080848CC;
    g_cpu.R[10] = _r_080848CC;
    g_cpu.R[15] = 0x080848CEu;
    runtime_tick(_cyc_080848CC);
    /* 080848CE  080848ce T cmps r5,r0 */
    g_cpu.R[15] = 0x080848CEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848CE = 1u;
    _cyc_080848CE = 1u;
    uint32_t _rm_080848CE = g_cpu.R[0];
    uint32_t _op2_080848CE;
    uint32_t _co_080848CE;
    _op2_080848CE = _rm_080848CE;
    _co_080848CE = cpsr_c();
    uint32_t _rn_080848CE = g_cpu.R[5];
    uint32_t _r_080848CE;
    _r_080848CE = _rn_080848CE - _op2_080848CE;
    arm_set_nzcv_sub(_rn_080848CE, _op2_080848CE, _r_080848CE);
    g_cpu.R[15] = 0x080848D0u;
    runtime_tick(_cyc_080848CE);
    /* 080848D0  080848d0 T blt 0x08084994 */
    g_cpu.R[15] = 0x080848D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848D0 = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_080848D0 = 3u;
        g_cpu.R[15] = 0x08084994u;
        runtime_tick(_cyc_080848D0);
        GBARECOMP_TAIL_CALL(gf_tfunc_08084994);
    }
    g_cpu.R[15] = 0x080848D2u;
    runtime_tick(_cyc_080848D0);
    /* 080848D2  080848d2 T adds r0,r7,#0x0 */
    g_cpu.R[15] = 0x080848D2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848D2 = 1u;
    _cyc_080848D2 = 1u;
    uint32_t _rn_080848D2 = g_cpu.R[7];
    uint32_t _r_080848D2;
    _r_080848D2 = _rn_080848D2 + 0x00000000u;
    arm_set_nzcv_add(_rn_080848D2, 0x00000000u, _r_080848D2);
    g_cpu.R[0] = _r_080848D2;
    g_cpu.R[15] = 0x080848D4u;
    runtime_tick(_cyc_080848D2);
    /* 080848D4  080848d4 T adds r0,r0,#0xd0 */
    g_cpu.R[15] = 0x080848D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848D4 = 1u;
    _cyc_080848D4 = 1u;
    uint32_t _rn_080848D4 = g_cpu.R[0];
    uint32_t _r_080848D4;
    _r_080848D4 = _rn_080848D4 + 0x000000D0u;
    arm_set_nzcv_add(_rn_080848D4, 0x000000D0u, _r_080848D4);
    g_cpu.R[0] = _r_080848D4;
    g_cpu.R[15] = 0x080848D6u;
    runtime_tick(_cyc_080848D4);
    /* 080848D6  080848d6 T ldr r0,[r0] */
    g_cpu.R[15] = 0x080848D6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848D6 = 1u;
    _cyc_080848D6 = 2u;
    uint32_t _base_080848D6 = g_cpu.R[0];
    uint32_t _off_080848D6;
    _off_080848D6 = 0x00000000u;
    uint32_t _ea_080848D6 = _base_080848D6 + _off_080848D6;
    uint32_t _post_080848D6 = _base_080848D6 + _off_080848D6;
    _cyc_080848D6 += runtime_mem_cycles(_ea_080848D6, 4u, 0u);
    uint32_t _v_080848D6;
    { uint32_t _w = bus_read_u32(_ea_080848D6 & ~3u); uint32_t _rot = (_ea_080848D6 & 3u) * 8u; _v_080848D6 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080848D6;
    g_cpu.R[15] = 0x080848D8u;
    runtime_tick(_cyc_080848D6);
    /* 080848D8  080848d8 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x080848D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848D8 = 1u;
    _cyc_080848D8 = 1u;
    uint32_t _rn_080848D8 = g_cpu.R[0];
    uint32_t _r_080848D8;
    _r_080848D8 = _rn_080848D8 - 0x00000000u;
    arm_set_nzcv_sub(_rn_080848D8, 0x00000000u, _r_080848D8);
    g_cpu.R[15] = 0x080848DAu;
    runtime_tick(_cyc_080848D8);
    /* 080848DA  080848da T bne 0x080848fa */
    g_cpu.R[15] = 0x080848DAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848DA = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_080848DA = 3u;
        g_cpu.R[15] = 0x080848FAu;
        runtime_tick(_cyc_080848DA);
        GBARECOMP_TAIL_CALL(gf_tfunc_080848FA);
    }
    g_cpu.R[15] = 0x080848DCu;
    runtime_tick(_cyc_080848DA);
    /* 080848DC  080848dc T adds r0,r7,#0x0 */
    g_cpu.R[15] = 0x080848DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848DC = 1u;
    _cyc_080848DC = 1u;
    uint32_t _rn_080848DC = g_cpu.R[7];
    uint32_t _r_080848DC;
    _r_080848DC = _rn_080848DC + 0x00000000u;
    arm_set_nzcv_add(_rn_080848DC, 0x00000000u, _r_080848DC);
    g_cpu.R[0] = _r_080848DC;
    g_cpu.R[15] = 0x080848DEu;
    runtime_tick(_cyc_080848DC);
    /* 080848DE  080848de T adds r0,r0,#0xd4 */
    g_cpu.R[15] = 0x080848DEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848DE = 1u;
    _cyc_080848DE = 1u;
    uint32_t _rn_080848DE = g_cpu.R[0];
    uint32_t _r_080848DE;
    _r_080848DE = _rn_080848DE + 0x000000D4u;
    arm_set_nzcv_add(_rn_080848DE, 0x000000D4u, _r_080848DE);
    g_cpu.R[0] = _r_080848DE;
    g_cpu.R[15] = 0x080848E0u;
    runtime_tick(_cyc_080848DE);
    /* 080848E0  080848e0 T ldr r0,[r0] */
    g_cpu.R[15] = 0x080848E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848E0 = 1u;
    _cyc_080848E0 = 2u;
    uint32_t _base_080848E0 = g_cpu.R[0];
    uint32_t _off_080848E0;
    _off_080848E0 = 0x00000000u;
    uint32_t _ea_080848E0 = _base_080848E0 + _off_080848E0;
    uint32_t _post_080848E0 = _base_080848E0 + _off_080848E0;
    _cyc_080848E0 += runtime_mem_cycles(_ea_080848E0, 4u, 0u);
    uint32_t _v_080848E0;
    { uint32_t _w = bus_read_u32(_ea_080848E0 & ~3u); uint32_t _rot = (_ea_080848E0 & 3u) * 8u; _v_080848E0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080848E0;
    g_cpu.R[15] = 0x080848E2u;
    runtime_tick(_cyc_080848E0);
    /* 080848E2  080848e2 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x080848E2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848E2 = 1u;
    _cyc_080848E2 = 1u;
    uint32_t _rn_080848E2 = g_cpu.R[0];
    uint32_t _r_080848E2;
    _r_080848E2 = _rn_080848E2 - 0x00000000u;
    arm_set_nzcv_sub(_rn_080848E2, 0x00000000u, _r_080848E2);
    g_cpu.R[15] = 0x080848E4u;
    runtime_tick(_cyc_080848E2);
    /* 080848E4  080848e4 T bne 0x080848fa */
    g_cpu.R[15] = 0x080848E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848E4 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_080848E4 = 3u;
        g_cpu.R[15] = 0x080848FAu;
        runtime_tick(_cyc_080848E4);
        GBARECOMP_TAIL_CALL(gf_tfunc_080848FA);
    }
    g_cpu.R[15] = 0x080848E6u;
    runtime_tick(_cyc_080848E4);
    /* 080848E6  080848e6 T adds r0,r7,#0x0 */
    g_cpu.R[15] = 0x080848E6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848E6 = 1u;
    _cyc_080848E6 = 1u;
    uint32_t _rn_080848E6 = g_cpu.R[7];
    uint32_t _r_080848E6;
    _r_080848E6 = _rn_080848E6 + 0x00000000u;
    arm_set_nzcv_add(_rn_080848E6, 0x00000000u, _r_080848E6);
    g_cpu.R[0] = _r_080848E6;
    g_cpu.R[15] = 0x080848E8u;
    runtime_tick(_cyc_080848E6);
    /* 080848E8  080848e8 T adds r0,r0,#0xd8 */
    g_cpu.R[15] = 0x080848E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848E8 = 1u;
    _cyc_080848E8 = 1u;
    uint32_t _rn_080848E8 = g_cpu.R[0];
    uint32_t _r_080848E8;
    _r_080848E8 = _rn_080848E8 + 0x000000D8u;
    arm_set_nzcv_add(_rn_080848E8, 0x000000D8u, _r_080848E8);
    g_cpu.R[0] = _r_080848E8;
    g_cpu.R[15] = 0x080848EAu;
    runtime_tick(_cyc_080848E8);
    /* 080848EA  080848ea T ldr r0,[r0] */
    g_cpu.R[15] = 0x080848EAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848EA = 1u;
    _cyc_080848EA = 2u;
    uint32_t _base_080848EA = g_cpu.R[0];
    uint32_t _off_080848EA;
    _off_080848EA = 0x00000000u;
    uint32_t _ea_080848EA = _base_080848EA + _off_080848EA;
    uint32_t _post_080848EA = _base_080848EA + _off_080848EA;
    _cyc_080848EA += runtime_mem_cycles(_ea_080848EA, 4u, 0u);
    uint32_t _v_080848EA;
    { uint32_t _w = bus_read_u32(_ea_080848EA & ~3u); uint32_t _rot = (_ea_080848EA & 3u) * 8u; _v_080848EA = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080848EA;
    g_cpu.R[15] = 0x080848ECu;
    runtime_tick(_cyc_080848EA);
    /* 080848EC  080848ec T cmps r0,#0x0 */
    g_cpu.R[15] = 0x080848ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848EC = 1u;
    _cyc_080848EC = 1u;
    uint32_t _rn_080848EC = g_cpu.R[0];
    uint32_t _r_080848EC;
    _r_080848EC = _rn_080848EC - 0x00000000u;
    arm_set_nzcv_sub(_rn_080848EC, 0x00000000u, _r_080848EC);
    g_cpu.R[15] = 0x080848EEu;
    runtime_tick(_cyc_080848EC);
    /* 080848EE  080848ee T bne 0x080848fa */
    g_cpu.R[15] = 0x080848EEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848EE = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_080848EE = 3u;
        g_cpu.R[15] = 0x080848FAu;
        runtime_tick(_cyc_080848EE);
        GBARECOMP_TAIL_CALL(gf_tfunc_080848FA);
    }
    g_cpu.R[15] = 0x080848F0u;
    runtime_tick(_cyc_080848EE);
    /* 080848F0  080848f0 T adds r0,r7,#0x0 */
    g_cpu.R[15] = 0x080848F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848F0 = 1u;
    _cyc_080848F0 = 1u;
    uint32_t _rn_080848F0 = g_cpu.R[7];
    uint32_t _r_080848F0;
    _r_080848F0 = _rn_080848F0 + 0x00000000u;
    arm_set_nzcv_add(_rn_080848F0, 0x00000000u, _r_080848F0);
    g_cpu.R[0] = _r_080848F0;
    g_cpu.R[15] = 0x080848F2u;
    runtime_tick(_cyc_080848F0);
    /* 080848F2  080848f2 T adds r0,r0,#0xdc */
    g_cpu.R[15] = 0x080848F2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848F2 = 1u;
    _cyc_080848F2 = 1u;
    uint32_t _rn_080848F2 = g_cpu.R[0];
    uint32_t _r_080848F2;
    _r_080848F2 = _rn_080848F2 + 0x000000DCu;
    arm_set_nzcv_add(_rn_080848F2, 0x000000DCu, _r_080848F2);
    g_cpu.R[0] = _r_080848F2;
    g_cpu.R[15] = 0x080848F4u;
    runtime_tick(_cyc_080848F2);
    /* 080848F4  080848f4 T ldr r0,[r0] */
    g_cpu.R[15] = 0x080848F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848F4 = 1u;
    _cyc_080848F4 = 2u;
    uint32_t _base_080848F4 = g_cpu.R[0];
    uint32_t _off_080848F4;
    _off_080848F4 = 0x00000000u;
    uint32_t _ea_080848F4 = _base_080848F4 + _off_080848F4;
    uint32_t _post_080848F4 = _base_080848F4 + _off_080848F4;
    _cyc_080848F4 += runtime_mem_cycles(_ea_080848F4, 4u, 0u);
    uint32_t _v_080848F4;
    { uint32_t _w = bus_read_u32(_ea_080848F4 & ~3u); uint32_t _rot = (_ea_080848F4 & 3u) * 8u; _v_080848F4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080848F4;
    g_cpu.R[15] = 0x080848F6u;
    runtime_tick(_cyc_080848F4);
    /* 080848F6  080848f6 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x080848F6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848F6 = 1u;
    _cyc_080848F6 = 1u;
    uint32_t _rn_080848F6 = g_cpu.R[0];
    uint32_t _r_080848F6;
    _r_080848F6 = _rn_080848F6 - 0x00000000u;
    arm_set_nzcv_sub(_rn_080848F6, 0x00000000u, _r_080848F6);
    g_cpu.R[15] = 0x080848F8u;
    runtime_tick(_cyc_080848F6);
    /* 080848F8  080848f8 T beq 0x08084994 */
    g_cpu.R[15] = 0x080848F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080848F8 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080848F8 = 3u;
        g_cpu.R[15] = 0x08084994u;
        runtime_tick(_cyc_080848F8);
        GBARECOMP_TAIL_CALL(gf_tfunc_08084994);
    }
    g_cpu.R[15] = 0x080848FAu;
    runtime_tick(_cyc_080848F8);
    /* fall-through to 0x080848FA */
    g_cpu.R[15] = 0x080848FAu;
    runtime_dispatch(0x080848FAu);
    return;
}

/* 0x080848FA  mode=thumb  end=0x080848FE  branches=6 */


/* 0x080855A8 thumb */
void gf_autojt_08085480_00(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080855A8u);
    /* 080855A8  080855a8 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x080855A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080855A8 = 1u;
    _cyc_080855A8 = 1u;
    uint32_t _rn_080855A8 = g_cpu.R[5];
    uint32_t _r_080855A8;
    _r_080855A8 = _rn_080855A8 - 0x00000009u;
    arm_set_nzcv_sub(_rn_080855A8, 0x00000009u, _r_080855A8);
    g_cpu.R[15] = 0x080855AAu;
    runtime_tick(_cyc_080855A8);
    /* 080855AA  080855aa T beq 0x080855be */
    g_cpu.R[15] = 0x080855AAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080855AA = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080855AA = 3u;
        g_cpu.R[15] = 0x080855BEu;
        runtime_tick(_cyc_080855AA);
        GBARECOMP_TAIL_CALL(gf_tfunc_080855BE);
    }
    g_cpu.R[15] = 0x080855ACu;
    runtime_tick(_cyc_080855AA);
    /* 080855AC  080855ac T cmps r5,#0x9 */
    g_cpu.R[15] = 0x080855ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080855AC = 1u;
    _cyc_080855AC = 1u;
    uint32_t _rn_080855AC = g_cpu.R[5];
    uint32_t _r_080855AC;
    _r_080855AC = _rn_080855AC - 0x00000009u;
    arm_set_nzcv_sub(_rn_080855AC, 0x00000009u, _r_080855AC);
    g_cpu.R[15] = 0x080855AEu;
    runtime_tick(_cyc_080855AC);
    /* 080855AE  080855ae T blt 0x080855e0 */
    g_cpu.R[15] = 0x080855AEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080855AE = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_080855AE = 3u;
        g_cpu.R[15] = 0x080855E0u;
        runtime_tick(_cyc_080855AE);
        GBARECOMP_TAIL_CALL(gf_tfunc_080855E0);
    }
    g_cpu.R[15] = 0x080855B0u;
    runtime_tick(_cyc_080855AE);
    /* 080855B0  080855b0 T cmps r5,#0xa */
    g_cpu.R[15] = 0x080855B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080855B0 = 1u;
    _cyc_080855B0 = 1u;
    uint32_t _rn_080855B0 = g_cpu.R[5];
    uint32_t _r_080855B0;
    _r_080855B0 = _rn_080855B0 - 0x0000000Au;
    arm_set_nzcv_sub(_rn_080855B0, 0x0000000Au, _r_080855B0);
    g_cpu.R[15] = 0x080855B2u;
    runtime_tick(_cyc_080855B0);
    /* 080855B2  080855b2 T beq 0x080855ca */
    g_cpu.R[15] = 0x080855B2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080855B2 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080855B2 = 3u;
        g_cpu.R[15] = 0x080855CAu;
        runtime_tick(_cyc_080855B2);
        GBARECOMP_TAIL_CALL(gf_tfunc_080855CA);
    }
    g_cpu.R[15] = 0x080855B4u;
    runtime_tick(_cyc_080855B2);
    /* 080855B4  080855b4 T cmps r5,#0xb */
    g_cpu.R[15] = 0x080855B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080855B4 = 1u;
    _cyc_080855B4 = 1u;
    uint32_t _rn_080855B4 = g_cpu.R[5];
    uint32_t _r_080855B4;
    _r_080855B4 = _rn_080855B4 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_080855B4, 0x0000000Bu, _r_080855B4);
    g_cpu.R[15] = 0x080855B6u;
    runtime_tick(_cyc_080855B4);
    /* 080855B6  080855b6 T beq 0x080855d6 */
    g_cpu.R[15] = 0x080855B6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080855B6 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080855B6 = 3u;
        g_cpu.R[15] = 0x080855D6u;
        runtime_tick(_cyc_080855B6);
        GBARECOMP_TAIL_CALL(gf_tfunc_080855D6);
    }
    g_cpu.R[15] = 0x080855B8u;
    runtime_tick(_cyc_080855B6);
    /* 080855B8  080855b8 T cmps r5,#0xc */
    g_cpu.R[15] = 0x080855B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080855B8 = 1u;
    _cyc_080855B8 = 1u;
    uint32_t _rn_080855B8 = g_cpu.R[5];
    uint32_t _r_080855B8;
    _r_080855B8 = _rn_080855B8 - 0x0000000Cu;
    arm_set_nzcv_sub(_rn_080855B8, 0x0000000Cu, _r_080855B8);
    g_cpu.R[15] = 0x080855BAu;
    runtime_tick(_cyc_080855B8);
    /* 080855BA  080855ba T beq 0x080855ca */
    g_cpu.R[15] = 0x080855BAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080855BA = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080855BA = 3u;
        g_cpu.R[15] = 0x080855CAu;
        runtime_tick(_cyc_080855BA);
        GBARECOMP_TAIL_CALL(gf_tfunc_080855CA);
    }
    g_cpu.R[15] = 0x080855BCu;
    runtime_tick(_cyc_080855BA);
    /* 080855BC  080855bc T b 0x080855e0 */
    g_cpu.R[15] = 0x080855BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080855BC = 1u;
    _cyc_080855BC = 3u;
    g_cpu.R[15] = 0x080855E0u;
    runtime_tick(_cyc_080855BC);
    GBARECOMP_TAIL_CALL(gf_tfunc_080855E0);
    g_cpu.R[15] = 0x080855BEu;
    runtime_tick(_cyc_080855BC);
    /* fall-through to 0x080855BE */
    g_cpu.R[15] = 0x080855BEu;
    runtime_dispatch(0x080855BEu);
    return;
}

/* 0x080855C8  mode=thumb  end=0x080855CA  branches=1 */


/* 0x08085634 thumb */
void gf_autojt_08085480_01(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08085634u);
    /* 08085634  08085634 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085634u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085634 = 1u;
    _cyc_08085634 = 1u;
    uint32_t _rn_08085634 = g_cpu.R[5];
    uint32_t _r_08085634;
    _r_08085634 = _rn_08085634 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085634, 0x00000009u, _r_08085634);
    g_cpu.R[15] = 0x08085636u;
    runtime_tick(_cyc_08085634);
    /* 08085636  08085636 T beq 0x0808564a */
    g_cpu.R[15] = 0x08085636u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085636 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085636 = 3u;
        g_cpu.R[15] = 0x0808564Au;
        runtime_tick(_cyc_08085636);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808564A);
    }
    g_cpu.R[15] = 0x08085638u;
    runtime_tick(_cyc_08085636);
    /* 08085638  08085638 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085638u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085638 = 1u;
    _cyc_08085638 = 1u;
    uint32_t _rn_08085638 = g_cpu.R[5];
    uint32_t _r_08085638;
    _r_08085638 = _rn_08085638 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085638, 0x00000009u, _r_08085638);
    g_cpu.R[15] = 0x0808563Au;
    runtime_tick(_cyc_08085638);
    /* 0808563A  0808563a T blt 0x0808566c */
    g_cpu.R[15] = 0x0808563Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808563A = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_0808563A = 3u;
        g_cpu.R[15] = 0x0808566Cu;
        runtime_tick(_cyc_0808563A);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808566C);
    }
    g_cpu.R[15] = 0x0808563Cu;
    runtime_tick(_cyc_0808563A);
    /* 0808563C  0808563c T cmps r5,#0xa */
    g_cpu.R[15] = 0x0808563Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808563C = 1u;
    _cyc_0808563C = 1u;
    uint32_t _rn_0808563C = g_cpu.R[5];
    uint32_t _r_0808563C;
    _r_0808563C = _rn_0808563C - 0x0000000Au;
    arm_set_nzcv_sub(_rn_0808563C, 0x0000000Au, _r_0808563C);
    g_cpu.R[15] = 0x0808563Eu;
    runtime_tick(_cyc_0808563C);
    /* 0808563E  0808563e T beq 0x08085656 */
    g_cpu.R[15] = 0x0808563Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808563E = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808563E = 3u;
        g_cpu.R[15] = 0x08085656u;
        runtime_tick(_cyc_0808563E);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085656);
    }
    g_cpu.R[15] = 0x08085640u;
    runtime_tick(_cyc_0808563E);
    /* 08085640  08085640 T cmps r5,#0xb */
    g_cpu.R[15] = 0x08085640u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085640 = 1u;
    _cyc_08085640 = 1u;
    uint32_t _rn_08085640 = g_cpu.R[5];
    uint32_t _r_08085640;
    _r_08085640 = _rn_08085640 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_08085640, 0x0000000Bu, _r_08085640);
    g_cpu.R[15] = 0x08085642u;
    runtime_tick(_cyc_08085640);
    /* 08085642  08085642 T beq 0x08085662 */
    g_cpu.R[15] = 0x08085642u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085642 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085642 = 3u;
        g_cpu.R[15] = 0x08085662u;
        runtime_tick(_cyc_08085642);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085662);
    }
    g_cpu.R[15] = 0x08085644u;
    runtime_tick(_cyc_08085642);
    /* 08085644  08085644 T cmps r5,#0xc */
    g_cpu.R[15] = 0x08085644u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085644 = 1u;
    _cyc_08085644 = 1u;
    uint32_t _rn_08085644 = g_cpu.R[5];
    uint32_t _r_08085644;
    _r_08085644 = _rn_08085644 - 0x0000000Cu;
    arm_set_nzcv_sub(_rn_08085644, 0x0000000Cu, _r_08085644);
    g_cpu.R[15] = 0x08085646u;
    runtime_tick(_cyc_08085644);
    /* 08085646  08085646 T beq 0x08085656 */
    g_cpu.R[15] = 0x08085646u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085646 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085646 = 3u;
        g_cpu.R[15] = 0x08085656u;
        runtime_tick(_cyc_08085646);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085656);
    }
    g_cpu.R[15] = 0x08085648u;
    runtime_tick(_cyc_08085646);
    /* 08085648  08085648 T b 0x0808566c */
    g_cpu.R[15] = 0x08085648u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085648 = 1u;
    _cyc_08085648 = 3u;
    g_cpu.R[15] = 0x0808566Cu;
    runtime_tick(_cyc_08085648);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808566C);
    g_cpu.R[15] = 0x0808564Au;
    runtime_tick(_cyc_08085648);
    /* fall-through to 0x0808564A */
    g_cpu.R[15] = 0x0808564Au;
    runtime_dispatch(0x0808564Au);
    return;
}

/* 0x0808564A  mode=thumb  end=0x08085654  branches=3 */


/* 0x080856C0 thumb */
void gf_autojt_08085480_02(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080856C0u);
    /* 080856C0  080856c0 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x080856C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080856C0 = 1u;
    _cyc_080856C0 = 1u;
    uint32_t _rn_080856C0 = g_cpu.R[5];
    uint32_t _r_080856C0;
    _r_080856C0 = _rn_080856C0 - 0x00000009u;
    arm_set_nzcv_sub(_rn_080856C0, 0x00000009u, _r_080856C0);
    g_cpu.R[15] = 0x080856C2u;
    runtime_tick(_cyc_080856C0);
    /* 080856C2  080856c2 T beq 0x080856d6 */
    g_cpu.R[15] = 0x080856C2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080856C2 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080856C2 = 3u;
        g_cpu.R[15] = 0x080856D6u;
        runtime_tick(_cyc_080856C2);
        GBARECOMP_TAIL_CALL(gf_tfunc_080856D6);
    }
    g_cpu.R[15] = 0x080856C4u;
    runtime_tick(_cyc_080856C2);
    /* 080856C4  080856c4 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x080856C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080856C4 = 1u;
    _cyc_080856C4 = 1u;
    uint32_t _rn_080856C4 = g_cpu.R[5];
    uint32_t _r_080856C4;
    _r_080856C4 = _rn_080856C4 - 0x00000009u;
    arm_set_nzcv_sub(_rn_080856C4, 0x00000009u, _r_080856C4);
    g_cpu.R[15] = 0x080856C6u;
    runtime_tick(_cyc_080856C4);
    /* 080856C6  080856c6 T blt 0x080856f8 */
    g_cpu.R[15] = 0x080856C6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080856C6 = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_080856C6 = 3u;
        g_cpu.R[15] = 0x080856F8u;
        runtime_tick(_cyc_080856C6);
        GBARECOMP_TAIL_CALL(gf_tfunc_080856F8);
    }
    g_cpu.R[15] = 0x080856C8u;
    runtime_tick(_cyc_080856C6);
    /* 080856C8  080856c8 T cmps r5,#0xa */
    g_cpu.R[15] = 0x080856C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080856C8 = 1u;
    _cyc_080856C8 = 1u;
    uint32_t _rn_080856C8 = g_cpu.R[5];
    uint32_t _r_080856C8;
    _r_080856C8 = _rn_080856C8 - 0x0000000Au;
    arm_set_nzcv_sub(_rn_080856C8, 0x0000000Au, _r_080856C8);
    g_cpu.R[15] = 0x080856CAu;
    runtime_tick(_cyc_080856C8);
    /* 080856CA  080856ca T beq 0x080856e2 */
    g_cpu.R[15] = 0x080856CAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080856CA = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080856CA = 3u;
        g_cpu.R[15] = 0x080856E2u;
        runtime_tick(_cyc_080856CA);
        GBARECOMP_TAIL_CALL(gf_tfunc_080856E2);
    }
    g_cpu.R[15] = 0x080856CCu;
    runtime_tick(_cyc_080856CA);
    /* 080856CC  080856cc T cmps r5,#0xb */
    g_cpu.R[15] = 0x080856CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080856CC = 1u;
    _cyc_080856CC = 1u;
    uint32_t _rn_080856CC = g_cpu.R[5];
    uint32_t _r_080856CC;
    _r_080856CC = _rn_080856CC - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_080856CC, 0x0000000Bu, _r_080856CC);
    g_cpu.R[15] = 0x080856CEu;
    runtime_tick(_cyc_080856CC);
    /* 080856CE  080856ce T beq 0x080856ee */
    g_cpu.R[15] = 0x080856CEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080856CE = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080856CE = 3u;
        g_cpu.R[15] = 0x080856EEu;
        runtime_tick(_cyc_080856CE);
        GBARECOMP_TAIL_CALL(gf_tfunc_080856EE);
    }
    g_cpu.R[15] = 0x080856D0u;
    runtime_tick(_cyc_080856CE);
    /* 080856D0  080856d0 T cmps r5,#0xc */
    g_cpu.R[15] = 0x080856D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080856D0 = 1u;
    _cyc_080856D0 = 1u;
    uint32_t _rn_080856D0 = g_cpu.R[5];
    uint32_t _r_080856D0;
    _r_080856D0 = _rn_080856D0 - 0x0000000Cu;
    arm_set_nzcv_sub(_rn_080856D0, 0x0000000Cu, _r_080856D0);
    g_cpu.R[15] = 0x080856D2u;
    runtime_tick(_cyc_080856D0);
    /* 080856D2  080856d2 T beq 0x080856e2 */
    g_cpu.R[15] = 0x080856D2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080856D2 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080856D2 = 3u;
        g_cpu.R[15] = 0x080856E2u;
        runtime_tick(_cyc_080856D2);
        GBARECOMP_TAIL_CALL(gf_tfunc_080856E2);
    }
    g_cpu.R[15] = 0x080856D4u;
    runtime_tick(_cyc_080856D2);
    /* 080856D4  080856d4 T b 0x080856f8 */
    g_cpu.R[15] = 0x080856D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080856D4 = 1u;
    _cyc_080856D4 = 3u;
    g_cpu.R[15] = 0x080856F8u;
    runtime_tick(_cyc_080856D4);
    GBARECOMP_TAIL_CALL(gf_tfunc_080856F8);
    g_cpu.R[15] = 0x080856D6u;
    runtime_tick(_cyc_080856D4);
    /* fall-through to 0x080856D6 */
    g_cpu.R[15] = 0x080856D6u;
    runtime_dispatch(0x080856D6u);
    return;
}

/* 0x080856E2  mode=thumb  end=0x080856EC  branches=3 */


/* 0x0808574C thumb */
void gf_autojt_08085480_04(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808574Cu);
    /* 0808574C  0808574c T cmps r5,#0x9 */
    g_cpu.R[15] = 0x0808574Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808574C = 1u;
    _cyc_0808574C = 1u;
    uint32_t _rn_0808574C = g_cpu.R[5];
    uint32_t _r_0808574C;
    _r_0808574C = _rn_0808574C - 0x00000009u;
    arm_set_nzcv_sub(_rn_0808574C, 0x00000009u, _r_0808574C);
    g_cpu.R[15] = 0x0808574Eu;
    runtime_tick(_cyc_0808574C);
    /* 0808574E  0808574e T beq 0x08085762 */
    g_cpu.R[15] = 0x0808574Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808574E = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808574E = 3u;
        g_cpu.R[15] = 0x08085762u;
        runtime_tick(_cyc_0808574E);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085762);
    }
    g_cpu.R[15] = 0x08085750u;
    runtime_tick(_cyc_0808574E);
    /* 08085750  08085750 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085750u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085750 = 1u;
    _cyc_08085750 = 1u;
    uint32_t _rn_08085750 = g_cpu.R[5];
    uint32_t _r_08085750;
    _r_08085750 = _rn_08085750 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085750, 0x00000009u, _r_08085750);
    g_cpu.R[15] = 0x08085752u;
    runtime_tick(_cyc_08085750);
    /* 08085752  08085752 T blt 0x08085784 */
    g_cpu.R[15] = 0x08085752u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085752 = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_08085752 = 3u;
        g_cpu.R[15] = 0x08085784u;
        runtime_tick(_cyc_08085752);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085784);
    }
    g_cpu.R[15] = 0x08085754u;
    runtime_tick(_cyc_08085752);
    /* 08085754  08085754 T cmps r5,#0xa */
    g_cpu.R[15] = 0x08085754u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085754 = 1u;
    _cyc_08085754 = 1u;
    uint32_t _rn_08085754 = g_cpu.R[5];
    uint32_t _r_08085754;
    _r_08085754 = _rn_08085754 - 0x0000000Au;
    arm_set_nzcv_sub(_rn_08085754, 0x0000000Au, _r_08085754);
    g_cpu.R[15] = 0x08085756u;
    runtime_tick(_cyc_08085754);
    /* 08085756  08085756 T beq 0x0808576e */
    g_cpu.R[15] = 0x08085756u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085756 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085756 = 3u;
        g_cpu.R[15] = 0x0808576Eu;
        runtime_tick(_cyc_08085756);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808576E);
    }
    g_cpu.R[15] = 0x08085758u;
    runtime_tick(_cyc_08085756);
    /* 08085758  08085758 T cmps r5,#0xb */
    g_cpu.R[15] = 0x08085758u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085758 = 1u;
    _cyc_08085758 = 1u;
    uint32_t _rn_08085758 = g_cpu.R[5];
    uint32_t _r_08085758;
    _r_08085758 = _rn_08085758 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_08085758, 0x0000000Bu, _r_08085758);
    g_cpu.R[15] = 0x0808575Au;
    runtime_tick(_cyc_08085758);
    /* 0808575A  0808575a T beq 0x0808577a */
    g_cpu.R[15] = 0x0808575Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808575A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808575A = 3u;
        g_cpu.R[15] = 0x0808577Au;
        runtime_tick(_cyc_0808575A);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808577A);
    }
    g_cpu.R[15] = 0x0808575Cu;
    runtime_tick(_cyc_0808575A);
    /* 0808575C  0808575c T cmps r5,#0xc */
    g_cpu.R[15] = 0x0808575Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808575C = 1u;
    _cyc_0808575C = 1u;
    uint32_t _rn_0808575C = g_cpu.R[5];
    uint32_t _r_0808575C;
    _r_0808575C = _rn_0808575C - 0x0000000Cu;
    arm_set_nzcv_sub(_rn_0808575C, 0x0000000Cu, _r_0808575C);
    g_cpu.R[15] = 0x0808575Eu;
    runtime_tick(_cyc_0808575C);
    /* 0808575E  0808575e T beq 0x0808576e */
    g_cpu.R[15] = 0x0808575Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808575E = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808575E = 3u;
        g_cpu.R[15] = 0x0808576Eu;
        runtime_tick(_cyc_0808575E);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808576E);
    }
    g_cpu.R[15] = 0x08085760u;
    runtime_tick(_cyc_0808575E);
    /* 08085760  08085760 T b 0x08085784 */
    g_cpu.R[15] = 0x08085760u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085760 = 1u;
    _cyc_08085760 = 3u;
    g_cpu.R[15] = 0x08085784u;
    runtime_tick(_cyc_08085760);
    GBARECOMP_TAIL_CALL(gf_tfunc_08085784);
    g_cpu.R[15] = 0x08085762u;
    runtime_tick(_cyc_08085760);
    /* fall-through to 0x08085762 */
    g_cpu.R[15] = 0x08085762u;
    runtime_dispatch(0x08085762u);
    return;
}

/* 0x0808576C  mode=thumb  end=0x0808576E  branches=1 */


/* 0x080857D4 thumb */
void gf_autojt_08085480_03(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080857D4u);
    /* 080857D4  080857d4 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x080857D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080857D4 = 1u;
    _cyc_080857D4 = 1u;
    uint32_t _rn_080857D4 = g_cpu.R[5];
    uint32_t _r_080857D4;
    _r_080857D4 = _rn_080857D4 - 0x00000009u;
    arm_set_nzcv_sub(_rn_080857D4, 0x00000009u, _r_080857D4);
    g_cpu.R[15] = 0x080857D6u;
    runtime_tick(_cyc_080857D4);
    /* 080857D6  080857d6 T beq 0x080857ea */
    g_cpu.R[15] = 0x080857D6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080857D6 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080857D6 = 3u;
        g_cpu.R[15] = 0x080857EAu;
        runtime_tick(_cyc_080857D6);
        GBARECOMP_TAIL_CALL(gf_tfunc_080857EA);
    }
    g_cpu.R[15] = 0x080857D8u;
    runtime_tick(_cyc_080857D6);
    /* 080857D8  080857d8 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x080857D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080857D8 = 1u;
    _cyc_080857D8 = 1u;
    uint32_t _rn_080857D8 = g_cpu.R[5];
    uint32_t _r_080857D8;
    _r_080857D8 = _rn_080857D8 - 0x00000009u;
    arm_set_nzcv_sub(_rn_080857D8, 0x00000009u, _r_080857D8);
    g_cpu.R[15] = 0x080857DAu;
    runtime_tick(_cyc_080857D8);
    /* 080857DA  080857da T blt 0x0808580c */
    g_cpu.R[15] = 0x080857DAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080857DA = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_080857DA = 3u;
        g_cpu.R[15] = 0x0808580Cu;
        runtime_tick(_cyc_080857DA);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808580C);
    }
    g_cpu.R[15] = 0x080857DCu;
    runtime_tick(_cyc_080857DA);
    /* 080857DC  080857dc T cmps r5,#0xa */
    g_cpu.R[15] = 0x080857DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080857DC = 1u;
    _cyc_080857DC = 1u;
    uint32_t _rn_080857DC = g_cpu.R[5];
    uint32_t _r_080857DC;
    _r_080857DC = _rn_080857DC - 0x0000000Au;
    arm_set_nzcv_sub(_rn_080857DC, 0x0000000Au, _r_080857DC);
    g_cpu.R[15] = 0x080857DEu;
    runtime_tick(_cyc_080857DC);
    /* 080857DE  080857de T beq 0x080857f6 */
    g_cpu.R[15] = 0x080857DEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080857DE = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080857DE = 3u;
        g_cpu.R[15] = 0x080857F6u;
        runtime_tick(_cyc_080857DE);
        GBARECOMP_TAIL_CALL(gf_tfunc_080857F6);
    }
    g_cpu.R[15] = 0x080857E0u;
    runtime_tick(_cyc_080857DE);
    /* 080857E0  080857e0 T cmps r5,#0xb */
    g_cpu.R[15] = 0x080857E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080857E0 = 1u;
    _cyc_080857E0 = 1u;
    uint32_t _rn_080857E0 = g_cpu.R[5];
    uint32_t _r_080857E0;
    _r_080857E0 = _rn_080857E0 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_080857E0, 0x0000000Bu, _r_080857E0);
    g_cpu.R[15] = 0x080857E2u;
    runtime_tick(_cyc_080857E0);
    /* 080857E2  080857e2 T beq 0x08085802 */
    g_cpu.R[15] = 0x080857E2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080857E2 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080857E2 = 3u;
        g_cpu.R[15] = 0x08085802u;
        runtime_tick(_cyc_080857E2);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085802);
    }
    g_cpu.R[15] = 0x080857E4u;
    runtime_tick(_cyc_080857E2);
    /* 080857E4  080857e4 T cmps r5,#0xc */
    g_cpu.R[15] = 0x080857E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080857E4 = 1u;
    _cyc_080857E4 = 1u;
    uint32_t _rn_080857E4 = g_cpu.R[5];
    uint32_t _r_080857E4;
    _r_080857E4 = _rn_080857E4 - 0x0000000Cu;
    arm_set_nzcv_sub(_rn_080857E4, 0x0000000Cu, _r_080857E4);
    g_cpu.R[15] = 0x080857E6u;
    runtime_tick(_cyc_080857E4);
    /* 080857E6  080857e6 T beq 0x080857f6 */
    g_cpu.R[15] = 0x080857E6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080857E6 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080857E6 = 3u;
        g_cpu.R[15] = 0x080857F6u;
        runtime_tick(_cyc_080857E6);
        GBARECOMP_TAIL_CALL(gf_tfunc_080857F6);
    }
    g_cpu.R[15] = 0x080857E8u;
    runtime_tick(_cyc_080857E6);
    /* 080857E8  080857e8 T b 0x0808580c */
    g_cpu.R[15] = 0x080857E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080857E8 = 1u;
    _cyc_080857E8 = 3u;
    g_cpu.R[15] = 0x0808580Cu;
    runtime_tick(_cyc_080857E8);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808580C);
    g_cpu.R[15] = 0x080857EAu;
    runtime_tick(_cyc_080857E8);
    /* fall-through to 0x080857EA */
    g_cpu.R[15] = 0x080857EAu;
    runtime_dispatch(0x080857EAu);
    return;
}

/* 0x080857EA  mode=thumb  end=0x080857F4  branches=3 */


/* 0x0808585C thumb */
void gf_autojt_08085480_06(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808585Cu);
    /* 0808585C  0808585c T cmps r5,#0x9 */
    g_cpu.R[15] = 0x0808585Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808585C = 1u;
    _cyc_0808585C = 1u;
    uint32_t _rn_0808585C = g_cpu.R[5];
    uint32_t _r_0808585C;
    _r_0808585C = _rn_0808585C - 0x00000009u;
    arm_set_nzcv_sub(_rn_0808585C, 0x00000009u, _r_0808585C);
    g_cpu.R[15] = 0x0808585Eu;
    runtime_tick(_cyc_0808585C);
    /* 0808585E  0808585e T beq 0x08085872 */
    g_cpu.R[15] = 0x0808585Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808585E = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808585E = 3u;
        g_cpu.R[15] = 0x08085872u;
        runtime_tick(_cyc_0808585E);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085872);
    }
    g_cpu.R[15] = 0x08085860u;
    runtime_tick(_cyc_0808585E);
    /* 08085860  08085860 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085860u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085860 = 1u;
    _cyc_08085860 = 1u;
    uint32_t _rn_08085860 = g_cpu.R[5];
    uint32_t _r_08085860;
    _r_08085860 = _rn_08085860 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085860, 0x00000009u, _r_08085860);
    g_cpu.R[15] = 0x08085862u;
    runtime_tick(_cyc_08085860);
    /* 08085862  08085862 T blt 0x08085894 */
    g_cpu.R[15] = 0x08085862u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085862 = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_08085862 = 3u;
        g_cpu.R[15] = 0x08085894u;
        runtime_tick(_cyc_08085862);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085894);
    }
    g_cpu.R[15] = 0x08085864u;
    runtime_tick(_cyc_08085862);
    /* 08085864  08085864 T cmps r5,#0xa */
    g_cpu.R[15] = 0x08085864u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085864 = 1u;
    _cyc_08085864 = 1u;
    uint32_t _rn_08085864 = g_cpu.R[5];
    uint32_t _r_08085864;
    _r_08085864 = _rn_08085864 - 0x0000000Au;
    arm_set_nzcv_sub(_rn_08085864, 0x0000000Au, _r_08085864);
    g_cpu.R[15] = 0x08085866u;
    runtime_tick(_cyc_08085864);
    /* 08085866  08085866 T beq 0x0808587e */
    g_cpu.R[15] = 0x08085866u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085866 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085866 = 3u;
        g_cpu.R[15] = 0x0808587Eu;
        runtime_tick(_cyc_08085866);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808587E);
    }
    g_cpu.R[15] = 0x08085868u;
    runtime_tick(_cyc_08085866);
    /* 08085868  08085868 T cmps r5,#0xb */
    g_cpu.R[15] = 0x08085868u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085868 = 1u;
    _cyc_08085868 = 1u;
    uint32_t _rn_08085868 = g_cpu.R[5];
    uint32_t _r_08085868;
    _r_08085868 = _rn_08085868 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_08085868, 0x0000000Bu, _r_08085868);
    g_cpu.R[15] = 0x0808586Au;
    runtime_tick(_cyc_08085868);
    /* 0808586A  0808586a T beq 0x0808588a */
    g_cpu.R[15] = 0x0808586Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808586A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808586A = 3u;
        g_cpu.R[15] = 0x0808588Au;
        runtime_tick(_cyc_0808586A);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808588A);
    }
    g_cpu.R[15] = 0x0808586Cu;
    runtime_tick(_cyc_0808586A);
    /* 0808586C  0808586c T cmps r5,#0xc */
    g_cpu.R[15] = 0x0808586Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808586C = 1u;
    _cyc_0808586C = 1u;
    uint32_t _rn_0808586C = g_cpu.R[5];
    uint32_t _r_0808586C;
    _r_0808586C = _rn_0808586C - 0x0000000Cu;
    arm_set_nzcv_sub(_rn_0808586C, 0x0000000Cu, _r_0808586C);
    g_cpu.R[15] = 0x0808586Eu;
    runtime_tick(_cyc_0808586C);
    /* 0808586E  0808586e T beq 0x0808587e */
    g_cpu.R[15] = 0x0808586Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808586E = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808586E = 3u;
        g_cpu.R[15] = 0x0808587Eu;
        runtime_tick(_cyc_0808586E);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808587E);
    }
    g_cpu.R[15] = 0x08085870u;
    runtime_tick(_cyc_0808586E);
    /* 08085870  08085870 T b 0x08085894 */
    g_cpu.R[15] = 0x08085870u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085870 = 1u;
    _cyc_08085870 = 3u;
    g_cpu.R[15] = 0x08085894u;
    runtime_tick(_cyc_08085870);
    GBARECOMP_TAIL_CALL(gf_tfunc_08085894);
    g_cpu.R[15] = 0x08085872u;
    runtime_tick(_cyc_08085870);
    /* fall-through to 0x08085872 */
    g_cpu.R[15] = 0x08085872u;
    runtime_dispatch(0x08085872u);
    return;
}

/* 0x08085872  mode=thumb  end=0x0808587C  branches=3 */


/* 0x080858E4 thumb */
void gf_autojt_08085480_07(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080858E4u);
    /* 080858E4  080858e4 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x080858E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080858E4 = 1u;
    _cyc_080858E4 = 1u;
    uint32_t _rn_080858E4 = g_cpu.R[5];
    uint32_t _r_080858E4;
    _r_080858E4 = _rn_080858E4 - 0x00000009u;
    arm_set_nzcv_sub(_rn_080858E4, 0x00000009u, _r_080858E4);
    g_cpu.R[15] = 0x080858E6u;
    runtime_tick(_cyc_080858E4);
    /* 080858E6  080858e6 T beq 0x080858fa */
    g_cpu.R[15] = 0x080858E6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080858E6 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080858E6 = 3u;
        g_cpu.R[15] = 0x080858FAu;
        runtime_tick(_cyc_080858E6);
        GBARECOMP_TAIL_CALL(gf_tfunc_080858FA);
    }
    g_cpu.R[15] = 0x080858E8u;
    runtime_tick(_cyc_080858E6);
    /* 080858E8  080858e8 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x080858E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080858E8 = 1u;
    _cyc_080858E8 = 1u;
    uint32_t _rn_080858E8 = g_cpu.R[5];
    uint32_t _r_080858E8;
    _r_080858E8 = _rn_080858E8 - 0x00000009u;
    arm_set_nzcv_sub(_rn_080858E8, 0x00000009u, _r_080858E8);
    g_cpu.R[15] = 0x080858EAu;
    runtime_tick(_cyc_080858E8);
    /* 080858EA  080858ea T blt 0x0808591c */
    g_cpu.R[15] = 0x080858EAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080858EA = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_080858EA = 3u;
        g_cpu.R[15] = 0x0808591Cu;
        runtime_tick(_cyc_080858EA);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808591C);
    }
    g_cpu.R[15] = 0x080858ECu;
    runtime_tick(_cyc_080858EA);
    /* 080858EC  080858ec T cmps r5,#0xa */
    g_cpu.R[15] = 0x080858ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080858EC = 1u;
    _cyc_080858EC = 1u;
    uint32_t _rn_080858EC = g_cpu.R[5];
    uint32_t _r_080858EC;
    _r_080858EC = _rn_080858EC - 0x0000000Au;
    arm_set_nzcv_sub(_rn_080858EC, 0x0000000Au, _r_080858EC);
    g_cpu.R[15] = 0x080858EEu;
    runtime_tick(_cyc_080858EC);
    /* 080858EE  080858ee T beq 0x08085906 */
    g_cpu.R[15] = 0x080858EEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080858EE = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080858EE = 3u;
        g_cpu.R[15] = 0x08085906u;
        runtime_tick(_cyc_080858EE);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085906);
    }
    g_cpu.R[15] = 0x080858F0u;
    runtime_tick(_cyc_080858EE);
    /* 080858F0  080858f0 T cmps r5,#0xb */
    g_cpu.R[15] = 0x080858F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080858F0 = 1u;
    _cyc_080858F0 = 1u;
    uint32_t _rn_080858F0 = g_cpu.R[5];
    uint32_t _r_080858F0;
    _r_080858F0 = _rn_080858F0 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_080858F0, 0x0000000Bu, _r_080858F0);
    g_cpu.R[15] = 0x080858F2u;
    runtime_tick(_cyc_080858F0);
    /* 080858F2  080858f2 T beq 0x08085912 */
    g_cpu.R[15] = 0x080858F2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080858F2 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080858F2 = 3u;
        g_cpu.R[15] = 0x08085912u;
        runtime_tick(_cyc_080858F2);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085912);
    }
    g_cpu.R[15] = 0x080858F4u;
    runtime_tick(_cyc_080858F2);
    /* 080858F4  080858f4 T cmps r5,#0xc */
    g_cpu.R[15] = 0x080858F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080858F4 = 1u;
    _cyc_080858F4 = 1u;
    uint32_t _rn_080858F4 = g_cpu.R[5];
    uint32_t _r_080858F4;
    _r_080858F4 = _rn_080858F4 - 0x0000000Cu;
    arm_set_nzcv_sub(_rn_080858F4, 0x0000000Cu, _r_080858F4);
    g_cpu.R[15] = 0x080858F6u;
    runtime_tick(_cyc_080858F4);
    /* 080858F6  080858f6 T beq 0x08085906 */
    g_cpu.R[15] = 0x080858F6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080858F6 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080858F6 = 3u;
        g_cpu.R[15] = 0x08085906u;
        runtime_tick(_cyc_080858F6);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085906);
    }
    g_cpu.R[15] = 0x080858F8u;
    runtime_tick(_cyc_080858F6);
    /* 080858F8  080858f8 T b 0x0808591c */
    g_cpu.R[15] = 0x080858F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080858F8 = 1u;
    _cyc_080858F8 = 3u;
    g_cpu.R[15] = 0x0808591Cu;
    runtime_tick(_cyc_080858F8);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808591C);
    g_cpu.R[15] = 0x080858FAu;
    runtime_tick(_cyc_080858F8);
    /* fall-through to 0x080858FA */
    g_cpu.R[15] = 0x080858FAu;
    runtime_dispatch(0x080858FAu);
    return;
}

/* 0x08085906  mode=thumb  end=0x08085910  branches=3 */


/* 0x0808596C thumb */
void gf_autojt_08085480_08(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808596Cu);
    /* 0808596C  0808596c T ldr r0,[r15,#0x1c] */
    g_cpu.R[15] = 0x0808596Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808596C = 1u;
    _cyc_0808596C = 2u;
    uint32_t _base_0808596C = 0x08085970u & ~3u;
    uint32_t _off_0808596C;
    _off_0808596C = 0x0000001Cu;
    uint32_t _ea_0808596C = _base_0808596C + _off_0808596C;
    uint32_t _post_0808596C = _base_0808596C + _off_0808596C;
    _cyc_0808596C += runtime_mem_cycles(_ea_0808596C, 4u, 0u);
    uint32_t _v_0808596C;
    { uint32_t _w = bus_read_u32(_ea_0808596C & ~3u); uint32_t _rot = (_ea_0808596C & 3u) * 8u; _v_0808596C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0808596C;
    g_cpu.R[15] = 0x0808596Eu;
    runtime_tick(_cyc_0808596C);
    /* 0808596E  0808596e T adds r1,r2,r0 */
    g_cpu.R[15] = 0x0808596Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808596E = 1u;
    _cyc_0808596E = 1u;
    uint32_t _rm_0808596E = g_cpu.R[0];
    uint32_t _op2_0808596E;
    uint32_t _co_0808596E;
    _op2_0808596E = _rm_0808596E;
    _co_0808596E = cpsr_c();
    uint32_t _rn_0808596E = g_cpu.R[2];
    uint32_t _r_0808596E;
    _r_0808596E = _rn_0808596E + _op2_0808596E;
    arm_set_nzcv_add(_rn_0808596E, _op2_0808596E, _r_0808596E);
    g_cpu.R[1] = _r_0808596E;
    g_cpu.R[15] = 0x08085970u;
    runtime_tick(_cyc_0808596E);
    /* 08085970  08085970 T movs r0,#0x0 */
    g_cpu.R[15] = 0x08085970u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085970 = 1u;
    _cyc_08085970 = 1u;
    uint32_t _r_08085970;
    _r_08085970 = 0x00000000u;
    arm_set_nzc_logic(_r_08085970, cpsr_c());
    g_cpu.R[0] = _r_08085970;
    g_cpu.R[15] = 0x08085972u;
    runtime_tick(_cyc_08085970);
    /* 08085972  08085972 T str r0,[r1] */
    g_cpu.R[15] = 0x08085972u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085972 = 1u;
    _cyc_08085972 = 1u;
    uint32_t _base_08085972 = g_cpu.R[1];
    uint32_t _off_08085972;
    _off_08085972 = 0x00000000u;
    uint32_t _ea_08085972 = _base_08085972 + _off_08085972;
    uint32_t _post_08085972 = _base_08085972 + _off_08085972;
    _cyc_08085972 += runtime_mem_cycles(_ea_08085972, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08085972u, _ea_08085972 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08085972 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08085974u;
    runtime_tick(_cyc_08085972);
    /* 08085974  08085974 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085974u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085974 = 1u;
    _cyc_08085974 = 1u;
    uint32_t _rn_08085974 = g_cpu.R[5];
    uint32_t _r_08085974;
    _r_08085974 = _rn_08085974 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085974, 0x00000009u, _r_08085974);
    g_cpu.R[15] = 0x08085976u;
    runtime_tick(_cyc_08085974);
    /* 08085976  08085976 T beq 0x08085990 */
    g_cpu.R[15] = 0x08085976u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085976 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085976 = 3u;
        g_cpu.R[15] = 0x08085990u;
        runtime_tick(_cyc_08085976);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085990);
    }
    g_cpu.R[15] = 0x08085978u;
    runtime_tick(_cyc_08085976);
    /* 08085978  08085978 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085978u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085978 = 1u;
    _cyc_08085978 = 1u;
    uint32_t _rn_08085978 = g_cpu.R[5];
    uint32_t _r_08085978;
    _r_08085978 = _rn_08085978 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085978, 0x00000009u, _r_08085978);
    g_cpu.R[15] = 0x0808597Au;
    runtime_tick(_cyc_08085978);
    /* 0808597A  0808597a T blt 0x080859b2 */
    g_cpu.R[15] = 0x0808597Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808597A = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_0808597A = 3u;
        g_cpu.R[15] = 0x080859B2u;
        runtime_tick(_cyc_0808597A);
        GBARECOMP_TAIL_CALL(gf_tfunc_080859B2);
    }
    g_cpu.R[15] = 0x0808597Cu;
    runtime_tick(_cyc_0808597A);
    /* 0808597C  0808597c T cmps r5,#0xa */
    g_cpu.R[15] = 0x0808597Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808597C = 1u;
    _cyc_0808597C = 1u;
    uint32_t _rn_0808597C = g_cpu.R[5];
    uint32_t _r_0808597C;
    _r_0808597C = _rn_0808597C - 0x0000000Au;
    arm_set_nzcv_sub(_rn_0808597C, 0x0000000Au, _r_0808597C);
    g_cpu.R[15] = 0x0808597Eu;
    runtime_tick(_cyc_0808597C);
    /* 0808597E  0808597e T beq 0x0808599c */
    g_cpu.R[15] = 0x0808597Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808597E = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808597E = 3u;
        g_cpu.R[15] = 0x0808599Cu;
        runtime_tick(_cyc_0808597E);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808599C);
    }
    g_cpu.R[15] = 0x08085980u;
    runtime_tick(_cyc_0808597E);
    /* 08085980  08085980 T cmps r5,#0xb */
    g_cpu.R[15] = 0x08085980u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085980 = 1u;
    _cyc_08085980 = 1u;
    uint32_t _rn_08085980 = g_cpu.R[5];
    uint32_t _r_08085980;
    _r_08085980 = _rn_08085980 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_08085980, 0x0000000Bu, _r_08085980);
    g_cpu.R[15] = 0x08085982u;
    runtime_tick(_cyc_08085980);
    /* 08085982  08085982 T beq 0x080859a8 */
    g_cpu.R[15] = 0x08085982u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085982 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085982 = 3u;
        g_cpu.R[15] = 0x080859A8u;
        runtime_tick(_cyc_08085982);
        GBARECOMP_TAIL_CALL(gf_tfunc_080859A8);
    }
    g_cpu.R[15] = 0x08085984u;
    runtime_tick(_cyc_08085982);
    /* 08085984  08085984 T cmps r5,#0xc */
    g_cpu.R[15] = 0x08085984u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085984 = 1u;
    _cyc_08085984 = 1u;
    uint32_t _rn_08085984 = g_cpu.R[5];
    uint32_t _r_08085984;
    _r_08085984 = _rn_08085984 - 0x0000000Cu;
    arm_set_nzcv_sub(_rn_08085984, 0x0000000Cu, _r_08085984);
    g_cpu.R[15] = 0x08085986u;
    runtime_tick(_cyc_08085984);
    /* 08085986  08085986 T beq 0x0808599c */
    g_cpu.R[15] = 0x08085986u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085986 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085986 = 3u;
        g_cpu.R[15] = 0x0808599Cu;
        runtime_tick(_cyc_08085986);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808599C);
    }
    g_cpu.R[15] = 0x08085988u;
    runtime_tick(_cyc_08085986);
    /* 08085988  08085988 T b 0x080859b2 */
    g_cpu.R[15] = 0x08085988u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085988 = 1u;
    _cyc_08085988 = 3u;
    g_cpu.R[15] = 0x080859B2u;
    runtime_tick(_cyc_08085988);
    GBARECOMP_TAIL_CALL(gf_tfunc_080859B2);
    g_cpu.R[15] = 0x0808598Au;
    runtime_tick(_cyc_08085988);
    /* fall-through to 0x0808598A */
    g_cpu.R[15] = 0x0808598Au;
    runtime_dispatch(0x0808598Au);
    return;
}

/* 0x0808599C  mode=thumb  end=0x080859A6  branches=3 */


/* 0x08085A04 thumb */
void gf_autojt_08085480_05(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08085A04u);
    /* 08085A04  08085a04 T ldr r0,[r15,#0x1c] */
    g_cpu.R[15] = 0x08085A04u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085A04 = 1u;
    _cyc_08085A04 = 2u;
    uint32_t _base_08085A04 = 0x08085A08u & ~3u;
    uint32_t _off_08085A04;
    _off_08085A04 = 0x0000001Cu;
    uint32_t _ea_08085A04 = _base_08085A04 + _off_08085A04;
    uint32_t _post_08085A04 = _base_08085A04 + _off_08085A04;
    _cyc_08085A04 += runtime_mem_cycles(_ea_08085A04, 4u, 0u);
    uint32_t _v_08085A04;
    { uint32_t _w = bus_read_u32(_ea_08085A04 & ~3u); uint32_t _rot = (_ea_08085A04 & 3u) * 8u; _v_08085A04 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08085A04;
    g_cpu.R[15] = 0x08085A06u;
    runtime_tick(_cyc_08085A04);
    /* 08085A06  08085a06 T adds r1,r2,r0 */
    g_cpu.R[15] = 0x08085A06u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085A06 = 1u;
    _cyc_08085A06 = 1u;
    uint32_t _rm_08085A06 = g_cpu.R[0];
    uint32_t _op2_08085A06;
    uint32_t _co_08085A06;
    _op2_08085A06 = _rm_08085A06;
    _co_08085A06 = cpsr_c();
    uint32_t _rn_08085A06 = g_cpu.R[2];
    uint32_t _r_08085A06;
    _r_08085A06 = _rn_08085A06 + _op2_08085A06;
    arm_set_nzcv_add(_rn_08085A06, _op2_08085A06, _r_08085A06);
    g_cpu.R[1] = _r_08085A06;
    g_cpu.R[15] = 0x08085A08u;
    runtime_tick(_cyc_08085A06);
    /* 08085A08  08085a08 T movs r0,#0x0 */
    g_cpu.R[15] = 0x08085A08u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085A08 = 1u;
    _cyc_08085A08 = 1u;
    uint32_t _r_08085A08;
    _r_08085A08 = 0x00000000u;
    arm_set_nzc_logic(_r_08085A08, cpsr_c());
    g_cpu.R[0] = _r_08085A08;
    g_cpu.R[15] = 0x08085A0Au;
    runtime_tick(_cyc_08085A08);
    /* 08085A0A  08085a0a T str r0,[r1] */
    g_cpu.R[15] = 0x08085A0Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085A0A = 1u;
    _cyc_08085A0A = 1u;
    uint32_t _base_08085A0A = g_cpu.R[1];
    uint32_t _off_08085A0A;
    _off_08085A0A = 0x00000000u;
    uint32_t _ea_08085A0A = _base_08085A0A + _off_08085A0A;
    uint32_t _post_08085A0A = _base_08085A0A + _off_08085A0A;
    _cyc_08085A0A += runtime_mem_cycles(_ea_08085A0A, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08085A0Au, _ea_08085A0A & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08085A0A & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08085A0Cu;
    runtime_tick(_cyc_08085A0A);
    /* 08085A0C  08085a0c T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085A0Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085A0C = 1u;
    _cyc_08085A0C = 1u;
    uint32_t _rn_08085A0C = g_cpu.R[5];
    uint32_t _r_08085A0C;
    _r_08085A0C = _rn_08085A0C - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085A0C, 0x00000009u, _r_08085A0C);
    g_cpu.R[15] = 0x08085A0Eu;
    runtime_tick(_cyc_08085A0C);
    /* 08085A0E  08085a0e T beq 0x08085a28 */
    g_cpu.R[15] = 0x08085A0Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085A0E = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085A0E = 3u;
        g_cpu.R[15] = 0x08085A28u;
        runtime_tick(_cyc_08085A0E);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085A28);
    }
    g_cpu.R[15] = 0x08085A10u;
    runtime_tick(_cyc_08085A0E);
    /* 08085A10  08085a10 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085A10u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085A10 = 1u;
    _cyc_08085A10 = 1u;
    uint32_t _rn_08085A10 = g_cpu.R[5];
    uint32_t _r_08085A10;
    _r_08085A10 = _rn_08085A10 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085A10, 0x00000009u, _r_08085A10);
    g_cpu.R[15] = 0x08085A12u;
    runtime_tick(_cyc_08085A10);
    /* 08085A12  08085a12 T blt 0x08085a4a */
    g_cpu.R[15] = 0x08085A12u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085A12 = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_08085A12 = 3u;
        g_cpu.R[15] = 0x08085A4Au;
        runtime_tick(_cyc_08085A12);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085A4A);
    }
    g_cpu.R[15] = 0x08085A14u;
    runtime_tick(_cyc_08085A12);
    /* 08085A14  08085a14 T cmps r5,#0xa */
    g_cpu.R[15] = 0x08085A14u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085A14 = 1u;
    _cyc_08085A14 = 1u;
    uint32_t _rn_08085A14 = g_cpu.R[5];
    uint32_t _r_08085A14;
    _r_08085A14 = _rn_08085A14 - 0x0000000Au;
    arm_set_nzcv_sub(_rn_08085A14, 0x0000000Au, _r_08085A14);
    g_cpu.R[15] = 0x08085A16u;
    runtime_tick(_cyc_08085A14);
    /* 08085A16  08085a16 T beq 0x08085a34 */
    g_cpu.R[15] = 0x08085A16u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085A16 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085A16 = 3u;
        g_cpu.R[15] = 0x08085A34u;
        runtime_tick(_cyc_08085A16);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085A34);
    }
    g_cpu.R[15] = 0x08085A18u;
    runtime_tick(_cyc_08085A16);
    /* 08085A18  08085a18 T cmps r5,#0xb */
    g_cpu.R[15] = 0x08085A18u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085A18 = 1u;
    _cyc_08085A18 = 1u;
    uint32_t _rn_08085A18 = g_cpu.R[5];
    uint32_t _r_08085A18;
    _r_08085A18 = _rn_08085A18 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_08085A18, 0x0000000Bu, _r_08085A18);
    g_cpu.R[15] = 0x08085A1Au;
    runtime_tick(_cyc_08085A18);
    /* 08085A1A  08085a1a T beq 0x08085a40 */
    g_cpu.R[15] = 0x08085A1Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085A1A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085A1A = 3u;
        g_cpu.R[15] = 0x08085A40u;
        runtime_tick(_cyc_08085A1A);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085A40);
    }
    g_cpu.R[15] = 0x08085A1Cu;
    runtime_tick(_cyc_08085A1A);
    /* 08085A1C  08085a1c T cmps r5,#0xc */
    g_cpu.R[15] = 0x08085A1Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085A1C = 1u;
    _cyc_08085A1C = 1u;
    uint32_t _rn_08085A1C = g_cpu.R[5];
    uint32_t _r_08085A1C;
    _r_08085A1C = _rn_08085A1C - 0x0000000Cu;
    arm_set_nzcv_sub(_rn_08085A1C, 0x0000000Cu, _r_08085A1C);
    g_cpu.R[15] = 0x08085A1Eu;
    runtime_tick(_cyc_08085A1C);
    /* 08085A1E  08085a1e T beq 0x08085a34 */
    g_cpu.R[15] = 0x08085A1Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085A1E = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085A1E = 3u;
        g_cpu.R[15] = 0x08085A34u;
        runtime_tick(_cyc_08085A1E);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085A34);
    }
    g_cpu.R[15] = 0x08085A20u;
    runtime_tick(_cyc_08085A1E);
    /* 08085A20  08085a20 T b 0x08085a4a */
    g_cpu.R[15] = 0x08085A20u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085A20 = 1u;
    _cyc_08085A20 = 3u;
    g_cpu.R[15] = 0x08085A4Au;
    runtime_tick(_cyc_08085A20);
    GBARECOMP_TAIL_CALL(gf_tfunc_08085A4A);
    g_cpu.R[15] = 0x08085A22u;
    runtime_tick(_cyc_08085A20);
    /* fall-through to 0x08085A22 */
    g_cpu.R[15] = 0x08085A22u;
    runtime_dispatch(0x08085A22u);
    return;
}

/* 0x08085A28  mode=thumb  end=0x08085A32  branches=3 */


/* 0x08085A9C thumb */
void gf_autojt_08085480_09(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08085A9Cu);
    /* 08085A9C  08085a9c T ldr r0,[r15,#0x1c] */
    g_cpu.R[15] = 0x08085A9Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085A9C = 1u;
    _cyc_08085A9C = 2u;
    uint32_t _base_08085A9C = 0x08085AA0u & ~3u;
    uint32_t _off_08085A9C;
    _off_08085A9C = 0x0000001Cu;
    uint32_t _ea_08085A9C = _base_08085A9C + _off_08085A9C;
    uint32_t _post_08085A9C = _base_08085A9C + _off_08085A9C;
    _cyc_08085A9C += runtime_mem_cycles(_ea_08085A9C, 4u, 0u);
    uint32_t _v_08085A9C;
    { uint32_t _w = bus_read_u32(_ea_08085A9C & ~3u); uint32_t _rot = (_ea_08085A9C & 3u) * 8u; _v_08085A9C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08085A9C;
    g_cpu.R[15] = 0x08085A9Eu;
    runtime_tick(_cyc_08085A9C);
    /* 08085A9E  08085a9e T adds r1,r2,r0 */
    g_cpu.R[15] = 0x08085A9Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085A9E = 1u;
    _cyc_08085A9E = 1u;
    uint32_t _rm_08085A9E = g_cpu.R[0];
    uint32_t _op2_08085A9E;
    uint32_t _co_08085A9E;
    _op2_08085A9E = _rm_08085A9E;
    _co_08085A9E = cpsr_c();
    uint32_t _rn_08085A9E = g_cpu.R[2];
    uint32_t _r_08085A9E;
    _r_08085A9E = _rn_08085A9E + _op2_08085A9E;
    arm_set_nzcv_add(_rn_08085A9E, _op2_08085A9E, _r_08085A9E);
    g_cpu.R[1] = _r_08085A9E;
    g_cpu.R[15] = 0x08085AA0u;
    runtime_tick(_cyc_08085A9E);
    /* 08085AA0  08085aa0 T movs r0,#0x0 */
    g_cpu.R[15] = 0x08085AA0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085AA0 = 1u;
    _cyc_08085AA0 = 1u;
    uint32_t _r_08085AA0;
    _r_08085AA0 = 0x00000000u;
    arm_set_nzc_logic(_r_08085AA0, cpsr_c());
    g_cpu.R[0] = _r_08085AA0;
    g_cpu.R[15] = 0x08085AA2u;
    runtime_tick(_cyc_08085AA0);
    /* 08085AA2  08085aa2 T str r0,[r1] */
    g_cpu.R[15] = 0x08085AA2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085AA2 = 1u;
    _cyc_08085AA2 = 1u;
    uint32_t _base_08085AA2 = g_cpu.R[1];
    uint32_t _off_08085AA2;
    _off_08085AA2 = 0x00000000u;
    uint32_t _ea_08085AA2 = _base_08085AA2 + _off_08085AA2;
    uint32_t _post_08085AA2 = _base_08085AA2 + _off_08085AA2;
    _cyc_08085AA2 += runtime_mem_cycles(_ea_08085AA2, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08085AA2u, _ea_08085AA2 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08085AA2 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08085AA4u;
    runtime_tick(_cyc_08085AA2);
    /* 08085AA4  08085aa4 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085AA4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085AA4 = 1u;
    _cyc_08085AA4 = 1u;
    uint32_t _rn_08085AA4 = g_cpu.R[5];
    uint32_t _r_08085AA4;
    _r_08085AA4 = _rn_08085AA4 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085AA4, 0x00000009u, _r_08085AA4);
    g_cpu.R[15] = 0x08085AA6u;
    runtime_tick(_cyc_08085AA4);
    /* 08085AA6  08085aa6 T beq 0x08085ac0 */
    g_cpu.R[15] = 0x08085AA6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085AA6 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085AA6 = 3u;
        g_cpu.R[15] = 0x08085AC0u;
        runtime_tick(_cyc_08085AA6);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085AC0);
    }
    g_cpu.R[15] = 0x08085AA8u;
    runtime_tick(_cyc_08085AA6);
    /* 08085AA8  08085aa8 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085AA8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085AA8 = 1u;
    _cyc_08085AA8 = 1u;
    uint32_t _rn_08085AA8 = g_cpu.R[5];
    uint32_t _r_08085AA8;
    _r_08085AA8 = _rn_08085AA8 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085AA8, 0x00000009u, _r_08085AA8);
    g_cpu.R[15] = 0x08085AAAu;
    runtime_tick(_cyc_08085AA8);
    /* 08085AAA  08085aaa T blt 0x08085ae2 */
    g_cpu.R[15] = 0x08085AAAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085AAA = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_08085AAA = 3u;
        g_cpu.R[15] = 0x08085AE2u;
        runtime_tick(_cyc_08085AAA);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085AE2);
    }
    g_cpu.R[15] = 0x08085AACu;
    runtime_tick(_cyc_08085AAA);
    /* 08085AAC  08085aac T cmps r5,#0xa */
    g_cpu.R[15] = 0x08085AACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085AAC = 1u;
    _cyc_08085AAC = 1u;
    uint32_t _rn_08085AAC = g_cpu.R[5];
    uint32_t _r_08085AAC;
    _r_08085AAC = _rn_08085AAC - 0x0000000Au;
    arm_set_nzcv_sub(_rn_08085AAC, 0x0000000Au, _r_08085AAC);
    g_cpu.R[15] = 0x08085AAEu;
    runtime_tick(_cyc_08085AAC);
    /* 08085AAE  08085aae T beq 0x08085acc */
    g_cpu.R[15] = 0x08085AAEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085AAE = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085AAE = 3u;
        g_cpu.R[15] = 0x08085ACCu;
        runtime_tick(_cyc_08085AAE);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085ACC);
    }
    g_cpu.R[15] = 0x08085AB0u;
    runtime_tick(_cyc_08085AAE);
    /* 08085AB0  08085ab0 T cmps r5,#0xb */
    g_cpu.R[15] = 0x08085AB0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085AB0 = 1u;
    _cyc_08085AB0 = 1u;
    uint32_t _rn_08085AB0 = g_cpu.R[5];
    uint32_t _r_08085AB0;
    _r_08085AB0 = _rn_08085AB0 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_08085AB0, 0x0000000Bu, _r_08085AB0);
    g_cpu.R[15] = 0x08085AB2u;
    runtime_tick(_cyc_08085AB0);
    /* 08085AB2  08085ab2 T beq 0x08085ad8 */
    g_cpu.R[15] = 0x08085AB2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085AB2 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085AB2 = 3u;
        g_cpu.R[15] = 0x08085AD8u;
        runtime_tick(_cyc_08085AB2);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085AD8);
    }
    g_cpu.R[15] = 0x08085AB4u;
    runtime_tick(_cyc_08085AB2);
    /* 08085AB4  08085ab4 T cmps r5,#0xc */
    g_cpu.R[15] = 0x08085AB4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085AB4 = 1u;
    _cyc_08085AB4 = 1u;
    uint32_t _rn_08085AB4 = g_cpu.R[5];
    uint32_t _r_08085AB4;
    _r_08085AB4 = _rn_08085AB4 - 0x0000000Cu;
    arm_set_nzcv_sub(_rn_08085AB4, 0x0000000Cu, _r_08085AB4);
    g_cpu.R[15] = 0x08085AB6u;
    runtime_tick(_cyc_08085AB4);
    /* 08085AB6  08085ab6 T beq 0x08085acc */
    g_cpu.R[15] = 0x08085AB6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085AB6 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085AB6 = 3u;
        g_cpu.R[15] = 0x08085ACCu;
        runtime_tick(_cyc_08085AB6);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085ACC);
    }
    g_cpu.R[15] = 0x08085AB8u;
    runtime_tick(_cyc_08085AB6);
    /* 08085AB8  08085ab8 T b 0x08085ae2 */
    g_cpu.R[15] = 0x08085AB8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085AB8 = 1u;
    _cyc_08085AB8 = 3u;
    g_cpu.R[15] = 0x08085AE2u;
    runtime_tick(_cyc_08085AB8);
    GBARECOMP_TAIL_CALL(gf_tfunc_08085AE2);
    g_cpu.R[15] = 0x08085ABAu;
    runtime_tick(_cyc_08085AB8);
    /* fall-through to 0x08085ABA */
    g_cpu.R[15] = 0x08085ABAu;
    runtime_dispatch(0x08085ABAu);
    return;
}

/* 0x08085ACA  mode=thumb  end=0x08085ACC  branches=1 */


/* 0x08085B34 thumb */
void gf_autojt_08085480_48(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08085B34u);
    /* 08085B34  08085b34 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085B34u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085B34 = 1u;
    _cyc_08085B34 = 1u;
    uint32_t _rn_08085B34 = g_cpu.R[5];
    uint32_t _r_08085B34;
    _r_08085B34 = _rn_08085B34 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085B34, 0x00000009u, _r_08085B34);
    g_cpu.R[15] = 0x08085B36u;
    runtime_tick(_cyc_08085B34);
    /* 08085B36  08085b36 T beq 0x08085b4a */
    g_cpu.R[15] = 0x08085B36u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085B36 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085B36 = 3u;
        g_cpu.R[15] = 0x08085B4Au;
        runtime_tick(_cyc_08085B36);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085B4A);
    }
    g_cpu.R[15] = 0x08085B38u;
    runtime_tick(_cyc_08085B36);
    /* 08085B38  08085b38 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085B38u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085B38 = 1u;
    _cyc_08085B38 = 1u;
    uint32_t _rn_08085B38 = g_cpu.R[5];
    uint32_t _r_08085B38;
    _r_08085B38 = _rn_08085B38 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085B38, 0x00000009u, _r_08085B38);
    g_cpu.R[15] = 0x08085B3Au;
    runtime_tick(_cyc_08085B38);
    /* 08085B3A  08085b3a T blt 0x08085b6c */
    g_cpu.R[15] = 0x08085B3Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085B3A = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_08085B3A = 3u;
        g_cpu.R[15] = 0x08085B6Cu;
        runtime_tick(_cyc_08085B3A);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085B6C);
    }
    g_cpu.R[15] = 0x08085B3Cu;
    runtime_tick(_cyc_08085B3A);
    /* 08085B3C  08085b3c T cmps r5,#0xa */
    g_cpu.R[15] = 0x08085B3Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085B3C = 1u;
    _cyc_08085B3C = 1u;
    uint32_t _rn_08085B3C = g_cpu.R[5];
    uint32_t _r_08085B3C;
    _r_08085B3C = _rn_08085B3C - 0x0000000Au;
    arm_set_nzcv_sub(_rn_08085B3C, 0x0000000Au, _r_08085B3C);
    g_cpu.R[15] = 0x08085B3Eu;
    runtime_tick(_cyc_08085B3C);
    /* 08085B3E  08085b3e T beq 0x08085b56 */
    g_cpu.R[15] = 0x08085B3Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085B3E = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085B3E = 3u;
        g_cpu.R[15] = 0x08085B56u;
        runtime_tick(_cyc_08085B3E);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085B56);
    }
    g_cpu.R[15] = 0x08085B40u;
    runtime_tick(_cyc_08085B3E);
    /* 08085B40  08085b40 T cmps r5,#0xb */
    g_cpu.R[15] = 0x08085B40u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085B40 = 1u;
    _cyc_08085B40 = 1u;
    uint32_t _rn_08085B40 = g_cpu.R[5];
    uint32_t _r_08085B40;
    _r_08085B40 = _rn_08085B40 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_08085B40, 0x0000000Bu, _r_08085B40);
    g_cpu.R[15] = 0x08085B42u;
    runtime_tick(_cyc_08085B40);
    /* 08085B42  08085b42 T beq 0x08085b62 */
    g_cpu.R[15] = 0x08085B42u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085B42 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085B42 = 3u;
        g_cpu.R[15] = 0x08085B62u;
        runtime_tick(_cyc_08085B42);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085B62);
    }
    g_cpu.R[15] = 0x08085B44u;
    runtime_tick(_cyc_08085B42);
    /* 08085B44  08085b44 T cmps r5,#0xc */
    g_cpu.R[15] = 0x08085B44u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085B44 = 1u;
    _cyc_08085B44 = 1u;
    uint32_t _rn_08085B44 = g_cpu.R[5];
    uint32_t _r_08085B44;
    _r_08085B44 = _rn_08085B44 - 0x0000000Cu;
    arm_set_nzcv_sub(_rn_08085B44, 0x0000000Cu, _r_08085B44);
    g_cpu.R[15] = 0x08085B46u;
    runtime_tick(_cyc_08085B44);
    /* 08085B46  08085b46 T beq 0x08085b56 */
    g_cpu.R[15] = 0x08085B46u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085B46 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085B46 = 3u;
        g_cpu.R[15] = 0x08085B56u;
        runtime_tick(_cyc_08085B46);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085B56);
    }
    g_cpu.R[15] = 0x08085B48u;
    runtime_tick(_cyc_08085B46);
    /* 08085B48  08085b48 T b 0x08085b6c */
    g_cpu.R[15] = 0x08085B48u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085B48 = 1u;
    _cyc_08085B48 = 3u;
    g_cpu.R[15] = 0x08085B6Cu;
    runtime_tick(_cyc_08085B48);
    GBARECOMP_TAIL_CALL(gf_tfunc_08085B6C);
    g_cpu.R[15] = 0x08085B4Au;
    runtime_tick(_cyc_08085B48);
    /* fall-through to 0x08085B4A */
    g_cpu.R[15] = 0x08085B4Au;
    runtime_dispatch(0x08085B4Au);
    return;
}

/* 0x08085B60  mode=thumb  end=0x08085B62  branches=1 */


/* 0x08085BC0 thumb */
void gf_autojt_08085480_49(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08085BC0u);
    /* 08085BC0  08085bc0 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085BC0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085BC0 = 1u;
    _cyc_08085BC0 = 1u;
    uint32_t _rn_08085BC0 = g_cpu.R[5];
    uint32_t _r_08085BC0;
    _r_08085BC0 = _rn_08085BC0 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085BC0, 0x00000009u, _r_08085BC0);
    g_cpu.R[15] = 0x08085BC2u;
    runtime_tick(_cyc_08085BC0);
    /* 08085BC2  08085bc2 T beq 0x08085bd6 */
    g_cpu.R[15] = 0x08085BC2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085BC2 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085BC2 = 3u;
        g_cpu.R[15] = 0x08085BD6u;
        runtime_tick(_cyc_08085BC2);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085BD6);
    }
    g_cpu.R[15] = 0x08085BC4u;
    runtime_tick(_cyc_08085BC2);
    /* 08085BC4  08085bc4 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085BC4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085BC4 = 1u;
    _cyc_08085BC4 = 1u;
    uint32_t _rn_08085BC4 = g_cpu.R[5];
    uint32_t _r_08085BC4;
    _r_08085BC4 = _rn_08085BC4 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085BC4, 0x00000009u, _r_08085BC4);
    g_cpu.R[15] = 0x08085BC6u;
    runtime_tick(_cyc_08085BC4);
    /* 08085BC6  08085bc6 T blt 0x08085bf8 */
    g_cpu.R[15] = 0x08085BC6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085BC6 = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_08085BC6 = 3u;
        g_cpu.R[15] = 0x08085BF8u;
        runtime_tick(_cyc_08085BC6);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085BF8);
    }
    g_cpu.R[15] = 0x08085BC8u;
    runtime_tick(_cyc_08085BC6);
    /* 08085BC8  08085bc8 T cmps r5,#0xa */
    g_cpu.R[15] = 0x08085BC8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085BC8 = 1u;
    _cyc_08085BC8 = 1u;
    uint32_t _rn_08085BC8 = g_cpu.R[5];
    uint32_t _r_08085BC8;
    _r_08085BC8 = _rn_08085BC8 - 0x0000000Au;
    arm_set_nzcv_sub(_rn_08085BC8, 0x0000000Au, _r_08085BC8);
    g_cpu.R[15] = 0x08085BCAu;
    runtime_tick(_cyc_08085BC8);
    /* 08085BCA  08085bca T beq 0x08085be2 */
    g_cpu.R[15] = 0x08085BCAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085BCA = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085BCA = 3u;
        g_cpu.R[15] = 0x08085BE2u;
        runtime_tick(_cyc_08085BCA);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085BE2);
    }
    g_cpu.R[15] = 0x08085BCCu;
    runtime_tick(_cyc_08085BCA);
    /* 08085BCC  08085bcc T cmps r5,#0xb */
    g_cpu.R[15] = 0x08085BCCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085BCC = 1u;
    _cyc_08085BCC = 1u;
    uint32_t _rn_08085BCC = g_cpu.R[5];
    uint32_t _r_08085BCC;
    _r_08085BCC = _rn_08085BCC - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_08085BCC, 0x0000000Bu, _r_08085BCC);
    g_cpu.R[15] = 0x08085BCEu;
    runtime_tick(_cyc_08085BCC);
    /* 08085BCE  08085bce T beq 0x08085bee */
    g_cpu.R[15] = 0x08085BCEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085BCE = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085BCE = 3u;
        g_cpu.R[15] = 0x08085BEEu;
        runtime_tick(_cyc_08085BCE);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085BEE);
    }
    g_cpu.R[15] = 0x08085BD0u;
    runtime_tick(_cyc_08085BCE);
    /* 08085BD0  08085bd0 T cmps r5,#0xc */
    g_cpu.R[15] = 0x08085BD0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085BD0 = 1u;
    _cyc_08085BD0 = 1u;
    uint32_t _rn_08085BD0 = g_cpu.R[5];
    uint32_t _r_08085BD0;
    _r_08085BD0 = _rn_08085BD0 - 0x0000000Cu;
    arm_set_nzcv_sub(_rn_08085BD0, 0x0000000Cu, _r_08085BD0);
    g_cpu.R[15] = 0x08085BD2u;
    runtime_tick(_cyc_08085BD0);
    /* 08085BD2  08085bd2 T beq 0x08085be2 */
    g_cpu.R[15] = 0x08085BD2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085BD2 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085BD2 = 3u;
        g_cpu.R[15] = 0x08085BE2u;
        runtime_tick(_cyc_08085BD2);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085BE2);
    }
    g_cpu.R[15] = 0x08085BD4u;
    runtime_tick(_cyc_08085BD2);
    /* 08085BD4  08085bd4 T b 0x08085bf8 */
    g_cpu.R[15] = 0x08085BD4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085BD4 = 1u;
    _cyc_08085BD4 = 3u;
    g_cpu.R[15] = 0x08085BF8u;
    runtime_tick(_cyc_08085BD4);
    GBARECOMP_TAIL_CALL(gf_tfunc_08085BF8);
    g_cpu.R[15] = 0x08085BD6u;
    runtime_tick(_cyc_08085BD4);
    /* fall-through to 0x08085BD6 */
    g_cpu.R[15] = 0x08085BD6u;
    runtime_dispatch(0x08085BD6u);
    return;
}

/* 0x08085BE0  mode=thumb  end=0x08085BE2  branches=1 */


/* 0x08085C4C thumb */
void gf_autojt_08085480_50(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08085C4Cu);
    /* 08085C4C  08085c4c T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085C4Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085C4C = 1u;
    _cyc_08085C4C = 1u;
    uint32_t _rn_08085C4C = g_cpu.R[5];
    uint32_t _r_08085C4C;
    _r_08085C4C = _rn_08085C4C - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085C4C, 0x00000009u, _r_08085C4C);
    g_cpu.R[15] = 0x08085C4Eu;
    runtime_tick(_cyc_08085C4C);
    /* 08085C4E  08085c4e T beq 0x08085c62 */
    g_cpu.R[15] = 0x08085C4Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085C4E = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085C4E = 3u;
        g_cpu.R[15] = 0x08085C62u;
        runtime_tick(_cyc_08085C4E);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085C62);
    }
    g_cpu.R[15] = 0x08085C50u;
    runtime_tick(_cyc_08085C4E);
    /* 08085C50  08085c50 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085C50u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085C50 = 1u;
    _cyc_08085C50 = 1u;
    uint32_t _rn_08085C50 = g_cpu.R[5];
    uint32_t _r_08085C50;
    _r_08085C50 = _rn_08085C50 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085C50, 0x00000009u, _r_08085C50);
    g_cpu.R[15] = 0x08085C52u;
    runtime_tick(_cyc_08085C50);
    /* 08085C52  08085c52 T blt 0x08085c84 */
    g_cpu.R[15] = 0x08085C52u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085C52 = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_08085C52 = 3u;
        g_cpu.R[15] = 0x08085C84u;
        runtime_tick(_cyc_08085C52);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085C84);
    }
    g_cpu.R[15] = 0x08085C54u;
    runtime_tick(_cyc_08085C52);
    /* 08085C54  08085c54 T cmps r5,#0xa */
    g_cpu.R[15] = 0x08085C54u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085C54 = 1u;
    _cyc_08085C54 = 1u;
    uint32_t _rn_08085C54 = g_cpu.R[5];
    uint32_t _r_08085C54;
    _r_08085C54 = _rn_08085C54 - 0x0000000Au;
    arm_set_nzcv_sub(_rn_08085C54, 0x0000000Au, _r_08085C54);
    g_cpu.R[15] = 0x08085C56u;
    runtime_tick(_cyc_08085C54);
    /* 08085C56  08085c56 T beq 0x08085c6e */
    g_cpu.R[15] = 0x08085C56u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085C56 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085C56 = 3u;
        g_cpu.R[15] = 0x08085C6Eu;
        runtime_tick(_cyc_08085C56);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085C6E);
    }
    g_cpu.R[15] = 0x08085C58u;
    runtime_tick(_cyc_08085C56);
    /* 08085C58  08085c58 T cmps r5,#0xb */
    g_cpu.R[15] = 0x08085C58u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085C58 = 1u;
    _cyc_08085C58 = 1u;
    uint32_t _rn_08085C58 = g_cpu.R[5];
    uint32_t _r_08085C58;
    _r_08085C58 = _rn_08085C58 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_08085C58, 0x0000000Bu, _r_08085C58);
    g_cpu.R[15] = 0x08085C5Au;
    runtime_tick(_cyc_08085C58);
    /* 08085C5A  08085c5a T beq 0x08085c7a */
    g_cpu.R[15] = 0x08085C5Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085C5A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085C5A = 3u;
        g_cpu.R[15] = 0x08085C7Au;
        runtime_tick(_cyc_08085C5A);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085C7A);
    }
    g_cpu.R[15] = 0x08085C5Cu;
    runtime_tick(_cyc_08085C5A);
    /* 08085C5C  08085c5c T cmps r5,#0xc */
    g_cpu.R[15] = 0x08085C5Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085C5C = 1u;
    _cyc_08085C5C = 1u;
    uint32_t _rn_08085C5C = g_cpu.R[5];
    uint32_t _r_08085C5C;
    _r_08085C5C = _rn_08085C5C - 0x0000000Cu;
    arm_set_nzcv_sub(_rn_08085C5C, 0x0000000Cu, _r_08085C5C);
    g_cpu.R[15] = 0x08085C5Eu;
    runtime_tick(_cyc_08085C5C);
    /* 08085C5E  08085c5e T beq 0x08085c6e */
    g_cpu.R[15] = 0x08085C5Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085C5E = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085C5E = 3u;
        g_cpu.R[15] = 0x08085C6Eu;
        runtime_tick(_cyc_08085C5E);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085C6E);
    }
    g_cpu.R[15] = 0x08085C60u;
    runtime_tick(_cyc_08085C5E);
    /* 08085C60  08085c60 T b 0x08085c84 */
    g_cpu.R[15] = 0x08085C60u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085C60 = 1u;
    _cyc_08085C60 = 3u;
    g_cpu.R[15] = 0x08085C84u;
    runtime_tick(_cyc_08085C60);
    GBARECOMP_TAIL_CALL(gf_tfunc_08085C84);
    g_cpu.R[15] = 0x08085C62u;
    runtime_tick(_cyc_08085C60);
    /* fall-through to 0x08085C62 */
    g_cpu.R[15] = 0x08085C62u;
    runtime_dispatch(0x08085C62u);
    return;
}

/* 0x08085C62  mode=thumb  end=0x08085C6C  branches=3 */


/* 0x08085CD8 thumb */
void gf_autojt_08085480_51(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08085CD8u);
    /* 08085CD8  08085cd8 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085CD8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085CD8 = 1u;
    _cyc_08085CD8 = 1u;
    uint32_t _rn_08085CD8 = g_cpu.R[5];
    uint32_t _r_08085CD8;
    _r_08085CD8 = _rn_08085CD8 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085CD8, 0x00000009u, _r_08085CD8);
    g_cpu.R[15] = 0x08085CDAu;
    runtime_tick(_cyc_08085CD8);
    /* 08085CDA  08085cda T beq 0x08085cee */
    g_cpu.R[15] = 0x08085CDAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085CDA = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085CDA = 3u;
        g_cpu.R[15] = 0x08085CEEu;
        runtime_tick(_cyc_08085CDA);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085CEE);
    }
    g_cpu.R[15] = 0x08085CDCu;
    runtime_tick(_cyc_08085CDA);
    /* 08085CDC  08085cdc T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085CDCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085CDC = 1u;
    _cyc_08085CDC = 1u;
    uint32_t _rn_08085CDC = g_cpu.R[5];
    uint32_t _r_08085CDC;
    _r_08085CDC = _rn_08085CDC - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085CDC, 0x00000009u, _r_08085CDC);
    g_cpu.R[15] = 0x08085CDEu;
    runtime_tick(_cyc_08085CDC);
    /* 08085CDE  08085cde T blt 0x08085d10 */
    g_cpu.R[15] = 0x08085CDEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085CDE = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_08085CDE = 3u;
        g_cpu.R[15] = 0x08085D10u;
        runtime_tick(_cyc_08085CDE);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085D10);
    }
    g_cpu.R[15] = 0x08085CE0u;
    runtime_tick(_cyc_08085CDE);
    /* 08085CE0  08085ce0 T cmps r5,#0xa */
    g_cpu.R[15] = 0x08085CE0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085CE0 = 1u;
    _cyc_08085CE0 = 1u;
    uint32_t _rn_08085CE0 = g_cpu.R[5];
    uint32_t _r_08085CE0;
    _r_08085CE0 = _rn_08085CE0 - 0x0000000Au;
    arm_set_nzcv_sub(_rn_08085CE0, 0x0000000Au, _r_08085CE0);
    g_cpu.R[15] = 0x08085CE2u;
    runtime_tick(_cyc_08085CE0);
    /* 08085CE2  08085ce2 T beq 0x08085cfa */
    g_cpu.R[15] = 0x08085CE2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085CE2 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085CE2 = 3u;
        g_cpu.R[15] = 0x08085CFAu;
        runtime_tick(_cyc_08085CE2);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085CFA);
    }
    g_cpu.R[15] = 0x08085CE4u;
    runtime_tick(_cyc_08085CE2);
    /* 08085CE4  08085ce4 T cmps r5,#0xb */
    g_cpu.R[15] = 0x08085CE4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085CE4 = 1u;
    _cyc_08085CE4 = 1u;
    uint32_t _rn_08085CE4 = g_cpu.R[5];
    uint32_t _r_08085CE4;
    _r_08085CE4 = _rn_08085CE4 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_08085CE4, 0x0000000Bu, _r_08085CE4);
    g_cpu.R[15] = 0x08085CE6u;
    runtime_tick(_cyc_08085CE4);
    /* 08085CE6  08085ce6 T beq 0x08085d06 */
    g_cpu.R[15] = 0x08085CE6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085CE6 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085CE6 = 3u;
        g_cpu.R[15] = 0x08085D06u;
        runtime_tick(_cyc_08085CE6);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085D06);
    }
    g_cpu.R[15] = 0x08085CE8u;
    runtime_tick(_cyc_08085CE6);
    /* 08085CE8  08085ce8 T cmps r5,#0xc */
    g_cpu.R[15] = 0x08085CE8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085CE8 = 1u;
    _cyc_08085CE8 = 1u;
    uint32_t _rn_08085CE8 = g_cpu.R[5];
    uint32_t _r_08085CE8;
    _r_08085CE8 = _rn_08085CE8 - 0x0000000Cu;
    arm_set_nzcv_sub(_rn_08085CE8, 0x0000000Cu, _r_08085CE8);
    g_cpu.R[15] = 0x08085CEAu;
    runtime_tick(_cyc_08085CE8);
    /* 08085CEA  08085cea T beq 0x08085cfa */
    g_cpu.R[15] = 0x08085CEAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085CEA = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085CEA = 3u;
        g_cpu.R[15] = 0x08085CFAu;
        runtime_tick(_cyc_08085CEA);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085CFA);
    }
    g_cpu.R[15] = 0x08085CECu;
    runtime_tick(_cyc_08085CEA);
    /* 08085CEC  08085cec T b 0x08085d10 */
    g_cpu.R[15] = 0x08085CECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085CEC = 1u;
    _cyc_08085CEC = 3u;
    g_cpu.R[15] = 0x08085D10u;
    runtime_tick(_cyc_08085CEC);
    GBARECOMP_TAIL_CALL(gf_tfunc_08085D10);
    g_cpu.R[15] = 0x08085CEEu;
    runtime_tick(_cyc_08085CEC);
    /* fall-through to 0x08085CEE */
    g_cpu.R[15] = 0x08085CEEu;
    runtime_dispatch(0x08085CEEu);
    return;
}

/* 0x08085CEE  mode=thumb  end=0x08085CF8  branches=3 */


/* 0x08085D68 thumb */
void gf_autojt_08085480_52(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08085D68u);
    /* 08085D68  08085d68 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085D68u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085D68 = 1u;
    _cyc_08085D68 = 1u;
    uint32_t _rn_08085D68 = g_cpu.R[5];
    uint32_t _r_08085D68;
    _r_08085D68 = _rn_08085D68 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085D68, 0x00000009u, _r_08085D68);
    g_cpu.R[15] = 0x08085D6Au;
    runtime_tick(_cyc_08085D68);
    /* 08085D6A  08085d6a T beq 0x08085d7e */
    g_cpu.R[15] = 0x08085D6Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085D6A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085D6A = 3u;
        g_cpu.R[15] = 0x08085D7Eu;
        runtime_tick(_cyc_08085D6A);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085D7E);
    }
    g_cpu.R[15] = 0x08085D6Cu;
    runtime_tick(_cyc_08085D6A);
    /* 08085D6C  08085d6c T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085D6Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085D6C = 1u;
    _cyc_08085D6C = 1u;
    uint32_t _rn_08085D6C = g_cpu.R[5];
    uint32_t _r_08085D6C;
    _r_08085D6C = _rn_08085D6C - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085D6C, 0x00000009u, _r_08085D6C);
    g_cpu.R[15] = 0x08085D6Eu;
    runtime_tick(_cyc_08085D6C);
    /* 08085D6E  08085d6e T blt 0x08085da0 */
    g_cpu.R[15] = 0x08085D6Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085D6E = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_08085D6E = 3u;
        g_cpu.R[15] = 0x08085DA0u;
        runtime_tick(_cyc_08085D6E);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085DA0);
    }
    g_cpu.R[15] = 0x08085D70u;
    runtime_tick(_cyc_08085D6E);
    /* 08085D70  08085d70 T cmps r5,#0xa */
    g_cpu.R[15] = 0x08085D70u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085D70 = 1u;
    _cyc_08085D70 = 1u;
    uint32_t _rn_08085D70 = g_cpu.R[5];
    uint32_t _r_08085D70;
    _r_08085D70 = _rn_08085D70 - 0x0000000Au;
    arm_set_nzcv_sub(_rn_08085D70, 0x0000000Au, _r_08085D70);
    g_cpu.R[15] = 0x08085D72u;
    runtime_tick(_cyc_08085D70);
    /* 08085D72  08085d72 T beq 0x08085d8a */
    g_cpu.R[15] = 0x08085D72u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085D72 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085D72 = 3u;
        g_cpu.R[15] = 0x08085D8Au;
        runtime_tick(_cyc_08085D72);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085D8A);
    }
    g_cpu.R[15] = 0x08085D74u;
    runtime_tick(_cyc_08085D72);
    /* 08085D74  08085d74 T cmps r5,#0xb */
    g_cpu.R[15] = 0x08085D74u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085D74 = 1u;
    _cyc_08085D74 = 1u;
    uint32_t _rn_08085D74 = g_cpu.R[5];
    uint32_t _r_08085D74;
    _r_08085D74 = _rn_08085D74 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_08085D74, 0x0000000Bu, _r_08085D74);
    g_cpu.R[15] = 0x08085D76u;
    runtime_tick(_cyc_08085D74);
    /* 08085D76  08085d76 T beq 0x08085d96 */
    g_cpu.R[15] = 0x08085D76u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085D76 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085D76 = 3u;
        g_cpu.R[15] = 0x08085D96u;
        runtime_tick(_cyc_08085D76);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085D96);
    }
    g_cpu.R[15] = 0x08085D78u;
    runtime_tick(_cyc_08085D76);
    /* 08085D78  08085d78 T cmps r5,#0xc */
    g_cpu.R[15] = 0x08085D78u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085D78 = 1u;
    _cyc_08085D78 = 1u;
    uint32_t _rn_08085D78 = g_cpu.R[5];
    uint32_t _r_08085D78;
    _r_08085D78 = _rn_08085D78 - 0x0000000Cu;
    arm_set_nzcv_sub(_rn_08085D78, 0x0000000Cu, _r_08085D78);
    g_cpu.R[15] = 0x08085D7Au;
    runtime_tick(_cyc_08085D78);
    /* 08085D7A  08085d7a T beq 0x08085d8a */
    g_cpu.R[15] = 0x08085D7Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085D7A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085D7A = 3u;
        g_cpu.R[15] = 0x08085D8Au;
        runtime_tick(_cyc_08085D7A);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085D8A);
    }
    g_cpu.R[15] = 0x08085D7Cu;
    runtime_tick(_cyc_08085D7A);
    /* 08085D7C  08085d7c T b 0x08085da0 */
    g_cpu.R[15] = 0x08085D7Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085D7C = 1u;
    _cyc_08085D7C = 3u;
    g_cpu.R[15] = 0x08085DA0u;
    runtime_tick(_cyc_08085D7C);
    GBARECOMP_TAIL_CALL(gf_tfunc_08085DA0);
    g_cpu.R[15] = 0x08085D7Eu;
    runtime_tick(_cyc_08085D7C);
    /* fall-through to 0x08085D7E */
    g_cpu.R[15] = 0x08085D7Eu;
    runtime_dispatch(0x08085D7Eu);
    return;
}

/* 0x08085D7E  mode=thumb  end=0x08085D88  branches=3 */


/* 0x08085DF4 thumb */
void gf_autojt_08085480_53(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08085DF4u);
    /* 08085DF4  08085df4 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085DF4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085DF4 = 1u;
    _cyc_08085DF4 = 1u;
    uint32_t _rn_08085DF4 = g_cpu.R[5];
    uint32_t _r_08085DF4;
    _r_08085DF4 = _rn_08085DF4 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085DF4, 0x00000009u, _r_08085DF4);
    g_cpu.R[15] = 0x08085DF6u;
    runtime_tick(_cyc_08085DF4);
    /* 08085DF6  08085df6 T beq 0x08085e0a */
    g_cpu.R[15] = 0x08085DF6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085DF6 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085DF6 = 3u;
        g_cpu.R[15] = 0x08085E0Au;
        runtime_tick(_cyc_08085DF6);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085E0A);
    }
    g_cpu.R[15] = 0x08085DF8u;
    runtime_tick(_cyc_08085DF6);
    /* 08085DF8  08085df8 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085DF8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085DF8 = 1u;
    _cyc_08085DF8 = 1u;
    uint32_t _rn_08085DF8 = g_cpu.R[5];
    uint32_t _r_08085DF8;
    _r_08085DF8 = _rn_08085DF8 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085DF8, 0x00000009u, _r_08085DF8);
    g_cpu.R[15] = 0x08085DFAu;
    runtime_tick(_cyc_08085DF8);
    /* 08085DFA  08085dfa T blt 0x08085e2c */
    g_cpu.R[15] = 0x08085DFAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085DFA = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_08085DFA = 3u;
        g_cpu.R[15] = 0x08085E2Cu;
        runtime_tick(_cyc_08085DFA);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085E2C);
    }
    g_cpu.R[15] = 0x08085DFCu;
    runtime_tick(_cyc_08085DFA);
    /* 08085DFC  08085dfc T cmps r5,#0xa */
    g_cpu.R[15] = 0x08085DFCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085DFC = 1u;
    _cyc_08085DFC = 1u;
    uint32_t _rn_08085DFC = g_cpu.R[5];
    uint32_t _r_08085DFC;
    _r_08085DFC = _rn_08085DFC - 0x0000000Au;
    arm_set_nzcv_sub(_rn_08085DFC, 0x0000000Au, _r_08085DFC);
    g_cpu.R[15] = 0x08085DFEu;
    runtime_tick(_cyc_08085DFC);
    /* 08085DFE  08085dfe T beq 0x08085e16 */
    g_cpu.R[15] = 0x08085DFEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085DFE = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085DFE = 3u;
        g_cpu.R[15] = 0x08085E16u;
        runtime_tick(_cyc_08085DFE);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085E16);
    }
    g_cpu.R[15] = 0x08085E00u;
    runtime_tick(_cyc_08085DFE);
    /* 08085E00  08085e00 T cmps r5,#0xb */
    g_cpu.R[15] = 0x08085E00u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085E00 = 1u;
    _cyc_08085E00 = 1u;
    uint32_t _rn_08085E00 = g_cpu.R[5];
    uint32_t _r_08085E00;
    _r_08085E00 = _rn_08085E00 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_08085E00, 0x0000000Bu, _r_08085E00);
    g_cpu.R[15] = 0x08085E02u;
    runtime_tick(_cyc_08085E00);
    /* 08085E02  08085e02 T beq 0x08085e22 */
    g_cpu.R[15] = 0x08085E02u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085E02 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085E02 = 3u;
        g_cpu.R[15] = 0x08085E22u;
        runtime_tick(_cyc_08085E02);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085E22);
    }
    g_cpu.R[15] = 0x08085E04u;
    runtime_tick(_cyc_08085E02);
    /* 08085E04  08085e04 T cmps r5,#0xc */
    g_cpu.R[15] = 0x08085E04u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085E04 = 1u;
    _cyc_08085E04 = 1u;
    uint32_t _rn_08085E04 = g_cpu.R[5];
    uint32_t _r_08085E04;
    _r_08085E04 = _rn_08085E04 - 0x0000000Cu;
    arm_set_nzcv_sub(_rn_08085E04, 0x0000000Cu, _r_08085E04);
    g_cpu.R[15] = 0x08085E06u;
    runtime_tick(_cyc_08085E04);
    /* 08085E06  08085e06 T beq 0x08085e16 */
    g_cpu.R[15] = 0x08085E06u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085E06 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085E06 = 3u;
        g_cpu.R[15] = 0x08085E16u;
        runtime_tick(_cyc_08085E06);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085E16);
    }
    g_cpu.R[15] = 0x08085E08u;
    runtime_tick(_cyc_08085E06);
    /* 08085E08  08085e08 T b 0x08085e2c */
    g_cpu.R[15] = 0x08085E08u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085E08 = 1u;
    _cyc_08085E08 = 3u;
    g_cpu.R[15] = 0x08085E2Cu;
    runtime_tick(_cyc_08085E08);
    GBARECOMP_TAIL_CALL(gf_tfunc_08085E2C);
    g_cpu.R[15] = 0x08085E0Au;
    runtime_tick(_cyc_08085E08);
    /* fall-through to 0x08085E0A */
    g_cpu.R[15] = 0x08085E0Au;
    runtime_dispatch(0x08085E0Au);
    return;
}

/* 0x08085E14  mode=thumb  end=0x08085E16  branches=1 */


/* 0x08085E80 thumb */
void gf_autojt_08085480_54(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08085E80u);
    /* 08085E80  08085e80 T ldr r0,[r15,#0x1c] */
    g_cpu.R[15] = 0x08085E80u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085E80 = 1u;
    _cyc_08085E80 = 2u;
    uint32_t _base_08085E80 = 0x08085E84u & ~3u;
    uint32_t _off_08085E80;
    _off_08085E80 = 0x0000001Cu;
    uint32_t _ea_08085E80 = _base_08085E80 + _off_08085E80;
    uint32_t _post_08085E80 = _base_08085E80 + _off_08085E80;
    _cyc_08085E80 += runtime_mem_cycles(_ea_08085E80, 4u, 0u);
    uint32_t _v_08085E80;
    { uint32_t _w = bus_read_u32(_ea_08085E80 & ~3u); uint32_t _rot = (_ea_08085E80 & 3u) * 8u; _v_08085E80 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08085E80;
    g_cpu.R[15] = 0x08085E82u;
    runtime_tick(_cyc_08085E80);
    /* 08085E82  08085e82 T adds r1,r2,r0 */
    g_cpu.R[15] = 0x08085E82u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085E82 = 1u;
    _cyc_08085E82 = 1u;
    uint32_t _rm_08085E82 = g_cpu.R[0];
    uint32_t _op2_08085E82;
    uint32_t _co_08085E82;
    _op2_08085E82 = _rm_08085E82;
    _co_08085E82 = cpsr_c();
    uint32_t _rn_08085E82 = g_cpu.R[2];
    uint32_t _r_08085E82;
    _r_08085E82 = _rn_08085E82 + _op2_08085E82;
    arm_set_nzcv_add(_rn_08085E82, _op2_08085E82, _r_08085E82);
    g_cpu.R[1] = _r_08085E82;
    g_cpu.R[15] = 0x08085E84u;
    runtime_tick(_cyc_08085E82);
    /* 08085E84  08085e84 T movs r0,#0x0 */
    g_cpu.R[15] = 0x08085E84u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085E84 = 1u;
    _cyc_08085E84 = 1u;
    uint32_t _r_08085E84;
    _r_08085E84 = 0x00000000u;
    arm_set_nzc_logic(_r_08085E84, cpsr_c());
    g_cpu.R[0] = _r_08085E84;
    g_cpu.R[15] = 0x08085E86u;
    runtime_tick(_cyc_08085E84);
    /* 08085E86  08085e86 T str r0,[r1] */
    g_cpu.R[15] = 0x08085E86u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085E86 = 1u;
    _cyc_08085E86 = 1u;
    uint32_t _base_08085E86 = g_cpu.R[1];
    uint32_t _off_08085E86;
    _off_08085E86 = 0x00000000u;
    uint32_t _ea_08085E86 = _base_08085E86 + _off_08085E86;
    uint32_t _post_08085E86 = _base_08085E86 + _off_08085E86;
    _cyc_08085E86 += runtime_mem_cycles(_ea_08085E86, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08085E86u, _ea_08085E86 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08085E86 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08085E88u;
    runtime_tick(_cyc_08085E86);
    /* 08085E88  08085e88 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085E88u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085E88 = 1u;
    _cyc_08085E88 = 1u;
    uint32_t _rn_08085E88 = g_cpu.R[5];
    uint32_t _r_08085E88;
    _r_08085E88 = _rn_08085E88 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085E88, 0x00000009u, _r_08085E88);
    g_cpu.R[15] = 0x08085E8Au;
    runtime_tick(_cyc_08085E88);
    /* 08085E8A  08085e8a T beq 0x08085ea4 */
    g_cpu.R[15] = 0x08085E8Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085E8A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085E8A = 3u;
        g_cpu.R[15] = 0x08085EA4u;
        runtime_tick(_cyc_08085E8A);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085EA4);
    }
    g_cpu.R[15] = 0x08085E8Cu;
    runtime_tick(_cyc_08085E8A);
    /* 08085E8C  08085e8c T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085E8Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085E8C = 1u;
    _cyc_08085E8C = 1u;
    uint32_t _rn_08085E8C = g_cpu.R[5];
    uint32_t _r_08085E8C;
    _r_08085E8C = _rn_08085E8C - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085E8C, 0x00000009u, _r_08085E8C);
    g_cpu.R[15] = 0x08085E8Eu;
    runtime_tick(_cyc_08085E8C);
    /* 08085E8E  08085e8e T bge 0x08085e92 */
    g_cpu.R[15] = 0x08085E8Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085E8E = 1u;
    if (arm_cond_passes(0xau)) {
        _cyc_08085E8E = 3u;
        g_cpu.R[15] = 0x08085E92u;
        runtime_tick(_cyc_08085E8E);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085E92);
    }
    g_cpu.R[15] = 0x08085E90u;
    runtime_tick(_cyc_08085E8E);
    /* 08085E90  08085e90 T b 0x080860ce */
    g_cpu.R[15] = 0x08085E90u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085E90 = 1u;
    _cyc_08085E90 = 3u;
    g_cpu.R[15] = 0x080860CEu;
    runtime_tick(_cyc_08085E90);
    GBARECOMP_TAIL_CALL(gf_tfunc_080860CE);
    g_cpu.R[15] = 0x08085E92u;
    runtime_tick(_cyc_08085E90);
    /* fall-through to 0x08085E92 */
    g_cpu.R[15] = 0x08085E92u;
    runtime_dispatch(0x08085E92u);
    return;
}

/* 0x08085EA4  mode=thumb  end=0x08085EAE  branches=3 */


/* 0x08085EC4 thumb */
void gf_autojt_08085480_55(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08085EC4u);
    /* 08085EC4  08085ec4 T ldr r0,[r15,#0x1c] */
    g_cpu.R[15] = 0x08085EC4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085EC4 = 1u;
    _cyc_08085EC4 = 2u;
    uint32_t _base_08085EC4 = 0x08085EC8u & ~3u;
    uint32_t _off_08085EC4;
    _off_08085EC4 = 0x0000001Cu;
    uint32_t _ea_08085EC4 = _base_08085EC4 + _off_08085EC4;
    uint32_t _post_08085EC4 = _base_08085EC4 + _off_08085EC4;
    _cyc_08085EC4 += runtime_mem_cycles(_ea_08085EC4, 4u, 0u);
    uint32_t _v_08085EC4;
    { uint32_t _w = bus_read_u32(_ea_08085EC4 & ~3u); uint32_t _rot = (_ea_08085EC4 & 3u) * 8u; _v_08085EC4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08085EC4;
    g_cpu.R[15] = 0x08085EC6u;
    runtime_tick(_cyc_08085EC4);
    /* 08085EC6  08085ec6 T adds r1,r2,r0 */
    g_cpu.R[15] = 0x08085EC6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085EC6 = 1u;
    _cyc_08085EC6 = 1u;
    uint32_t _rm_08085EC6 = g_cpu.R[0];
    uint32_t _op2_08085EC6;
    uint32_t _co_08085EC6;
    _op2_08085EC6 = _rm_08085EC6;
    _co_08085EC6 = cpsr_c();
    uint32_t _rn_08085EC6 = g_cpu.R[2];
    uint32_t _r_08085EC6;
    _r_08085EC6 = _rn_08085EC6 + _op2_08085EC6;
    arm_set_nzcv_add(_rn_08085EC6, _op2_08085EC6, _r_08085EC6);
    g_cpu.R[1] = _r_08085EC6;
    g_cpu.R[15] = 0x08085EC8u;
    runtime_tick(_cyc_08085EC6);
    /* 08085EC8  08085ec8 T movs r0,#0x5 */
    g_cpu.R[15] = 0x08085EC8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085EC8 = 1u;
    _cyc_08085EC8 = 1u;
    uint32_t _r_08085EC8;
    _r_08085EC8 = 0x00000005u;
    arm_set_nzc_logic(_r_08085EC8, cpsr_c());
    g_cpu.R[0] = _r_08085EC8;
    g_cpu.R[15] = 0x08085ECAu;
    runtime_tick(_cyc_08085EC8);
    /* 08085ECA  08085eca T str r0,[r1] */
    g_cpu.R[15] = 0x08085ECAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085ECA = 1u;
    _cyc_08085ECA = 1u;
    uint32_t _base_08085ECA = g_cpu.R[1];
    uint32_t _off_08085ECA;
    _off_08085ECA = 0x00000000u;
    uint32_t _ea_08085ECA = _base_08085ECA + _off_08085ECA;
    uint32_t _post_08085ECA = _base_08085ECA + _off_08085ECA;
    _cyc_08085ECA += runtime_mem_cycles(_ea_08085ECA, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08085ECAu, _ea_08085ECA & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08085ECA & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08085ECCu;
    runtime_tick(_cyc_08085ECA);
    /* 08085ECC  08085ecc T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085ECCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085ECC = 1u;
    _cyc_08085ECC = 1u;
    uint32_t _rn_08085ECC = g_cpu.R[5];
    uint32_t _r_08085ECC;
    _r_08085ECC = _rn_08085ECC - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085ECC, 0x00000009u, _r_08085ECC);
    g_cpu.R[15] = 0x08085ECEu;
    runtime_tick(_cyc_08085ECC);
    /* 08085ECE  08085ece T beq 0x08085ee8 */
    g_cpu.R[15] = 0x08085ECEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085ECE = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085ECE = 3u;
        g_cpu.R[15] = 0x08085EE8u;
        runtime_tick(_cyc_08085ECE);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085EE8);
    }
    g_cpu.R[15] = 0x08085ED0u;
    runtime_tick(_cyc_08085ECE);
    /* 08085ED0  08085ed0 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085ED0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085ED0 = 1u;
    _cyc_08085ED0 = 1u;
    uint32_t _rn_08085ED0 = g_cpu.R[5];
    uint32_t _r_08085ED0;
    _r_08085ED0 = _rn_08085ED0 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085ED0, 0x00000009u, _r_08085ED0);
    g_cpu.R[15] = 0x08085ED2u;
    runtime_tick(_cyc_08085ED0);
    /* 08085ED2  08085ed2 T bge 0x08085ed6 */
    g_cpu.R[15] = 0x08085ED2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085ED2 = 1u;
    if (arm_cond_passes(0xau)) {
        _cyc_08085ED2 = 3u;
        g_cpu.R[15] = 0x08085ED6u;
        runtime_tick(_cyc_08085ED2);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085ED6);
    }
    g_cpu.R[15] = 0x08085ED4u;
    runtime_tick(_cyc_08085ED2);
    /* 08085ED4  08085ed4 T b 0x08085fe2 */
    g_cpu.R[15] = 0x08085ED4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085ED4 = 1u;
    _cyc_08085ED4 = 3u;
    g_cpu.R[15] = 0x08085FE2u;
    runtime_tick(_cyc_08085ED4);
    GBARECOMP_TAIL_CALL(gf_tfunc_08085FE2);
    g_cpu.R[15] = 0x08085ED6u;
    runtime_tick(_cyc_08085ED4);
    /* fall-through to 0x08085ED6 */
    g_cpu.R[15] = 0x08085ED6u;
    runtime_dispatch(0x08085ED6u);
    return;
}

/* 0x08085EE8  mode=thumb  end=0x08085EF2  branches=3 */


/* 0x08085F08 thumb */
void gf_autojt_08085480_56(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08085F08u);
    /* 08085F08  08085f08 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085F08u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085F08 = 1u;
    _cyc_08085F08 = 1u;
    uint32_t _rn_08085F08 = g_cpu.R[5];
    uint32_t _r_08085F08;
    _r_08085F08 = _rn_08085F08 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085F08, 0x00000009u, _r_08085F08);
    g_cpu.R[15] = 0x08085F0Au;
    runtime_tick(_cyc_08085F08);
    /* 08085F0A  08085f0a T beq 0x08085f1e */
    g_cpu.R[15] = 0x08085F0Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085F0A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085F0A = 3u;
        g_cpu.R[15] = 0x08085F1Eu;
        runtime_tick(_cyc_08085F0A);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085F1E);
    }
    g_cpu.R[15] = 0x08085F0Cu;
    runtime_tick(_cyc_08085F0A);
    /* 08085F0C  08085f0c T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085F0Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085F0C = 1u;
    _cyc_08085F0C = 1u;
    uint32_t _rn_08085F0C = g_cpu.R[5];
    uint32_t _r_08085F0C;
    _r_08085F0C = _rn_08085F0C - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085F0C, 0x00000009u, _r_08085F0C);
    g_cpu.R[15] = 0x08085F0Eu;
    runtime_tick(_cyc_08085F0C);
    /* 08085F0E  08085f0e T blt 0x08085f40 */
    g_cpu.R[15] = 0x08085F0Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085F0E = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_08085F0E = 3u;
        g_cpu.R[15] = 0x08085F40u;
        runtime_tick(_cyc_08085F0E);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085F40);
    }
    g_cpu.R[15] = 0x08085F10u;
    runtime_tick(_cyc_08085F0E);
    /* 08085F10  08085f10 T cmps r5,#0xa */
    g_cpu.R[15] = 0x08085F10u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085F10 = 1u;
    _cyc_08085F10 = 1u;
    uint32_t _rn_08085F10 = g_cpu.R[5];
    uint32_t _r_08085F10;
    _r_08085F10 = _rn_08085F10 - 0x0000000Au;
    arm_set_nzcv_sub(_rn_08085F10, 0x0000000Au, _r_08085F10);
    g_cpu.R[15] = 0x08085F12u;
    runtime_tick(_cyc_08085F10);
    /* 08085F12  08085f12 T beq 0x08085f2a */
    g_cpu.R[15] = 0x08085F12u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085F12 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085F12 = 3u;
        g_cpu.R[15] = 0x08085F2Au;
        runtime_tick(_cyc_08085F12);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085F2A);
    }
    g_cpu.R[15] = 0x08085F14u;
    runtime_tick(_cyc_08085F12);
    /* 08085F14  08085f14 T cmps r5,#0xb */
    g_cpu.R[15] = 0x08085F14u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085F14 = 1u;
    _cyc_08085F14 = 1u;
    uint32_t _rn_08085F14 = g_cpu.R[5];
    uint32_t _r_08085F14;
    _r_08085F14 = _rn_08085F14 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_08085F14, 0x0000000Bu, _r_08085F14);
    g_cpu.R[15] = 0x08085F16u;
    runtime_tick(_cyc_08085F14);
    /* 08085F16  08085f16 T beq 0x08085f36 */
    g_cpu.R[15] = 0x08085F16u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085F16 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085F16 = 3u;
        g_cpu.R[15] = 0x08085F36u;
        runtime_tick(_cyc_08085F16);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085F36);
    }
    g_cpu.R[15] = 0x08085F18u;
    runtime_tick(_cyc_08085F16);
    /* 08085F18  08085f18 T cmps r5,#0xc */
    g_cpu.R[15] = 0x08085F18u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085F18 = 1u;
    _cyc_08085F18 = 1u;
    uint32_t _rn_08085F18 = g_cpu.R[5];
    uint32_t _r_08085F18;
    _r_08085F18 = _rn_08085F18 - 0x0000000Cu;
    arm_set_nzcv_sub(_rn_08085F18, 0x0000000Cu, _r_08085F18);
    g_cpu.R[15] = 0x08085F1Au;
    runtime_tick(_cyc_08085F18);
    /* 08085F1A  08085f1a T beq 0x08085f2a */
    g_cpu.R[15] = 0x08085F1Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085F1A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085F1A = 3u;
        g_cpu.R[15] = 0x08085F2Au;
        runtime_tick(_cyc_08085F1A);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085F2A);
    }
    g_cpu.R[15] = 0x08085F1Cu;
    runtime_tick(_cyc_08085F1A);
    /* 08085F1C  08085f1c T b 0x08085f40 */
    g_cpu.R[15] = 0x08085F1Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085F1C = 1u;
    _cyc_08085F1C = 3u;
    g_cpu.R[15] = 0x08085F40u;
    runtime_tick(_cyc_08085F1C);
    GBARECOMP_TAIL_CALL(gf_tfunc_08085F40);
    g_cpu.R[15] = 0x08085F1Eu;
    runtime_tick(_cyc_08085F1C);
    /* fall-through to 0x08085F1E */
    g_cpu.R[15] = 0x08085F1Eu;
    runtime_dispatch(0x08085F1Eu);
    return;
}

/* 0x08085F28  mode=thumb  end=0x08085F2A  branches=1 */


/* 0x08085F9C thumb */
void gf_autojt_08085480_57(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08085F9Cu);
    /* 08085F9C  08085f9c T ldr r0,[r15,#0x1c] */
    g_cpu.R[15] = 0x08085F9Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085F9C = 1u;
    _cyc_08085F9C = 2u;
    uint32_t _base_08085F9C = 0x08085FA0u & ~3u;
    uint32_t _off_08085F9C;
    _off_08085F9C = 0x0000001Cu;
    uint32_t _ea_08085F9C = _base_08085F9C + _off_08085F9C;
    uint32_t _post_08085F9C = _base_08085F9C + _off_08085F9C;
    _cyc_08085F9C += runtime_mem_cycles(_ea_08085F9C, 4u, 0u);
    uint32_t _v_08085F9C;
    { uint32_t _w = bus_read_u32(_ea_08085F9C & ~3u); uint32_t _rot = (_ea_08085F9C & 3u) * 8u; _v_08085F9C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08085F9C;
    g_cpu.R[15] = 0x08085F9Eu;
    runtime_tick(_cyc_08085F9C);
    /* 08085F9E  08085f9e T adds r1,r2,r0 */
    g_cpu.R[15] = 0x08085F9Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085F9E = 1u;
    _cyc_08085F9E = 1u;
    uint32_t _rm_08085F9E = g_cpu.R[0];
    uint32_t _op2_08085F9E;
    uint32_t _co_08085F9E;
    _op2_08085F9E = _rm_08085F9E;
    _co_08085F9E = cpsr_c();
    uint32_t _rn_08085F9E = g_cpu.R[2];
    uint32_t _r_08085F9E;
    _r_08085F9E = _rn_08085F9E + _op2_08085F9E;
    arm_set_nzcv_add(_rn_08085F9E, _op2_08085F9E, _r_08085F9E);
    g_cpu.R[1] = _r_08085F9E;
    g_cpu.R[15] = 0x08085FA0u;
    runtime_tick(_cyc_08085F9E);
    /* 08085FA0  08085fa0 T movs r0,#0x0 */
    g_cpu.R[15] = 0x08085FA0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085FA0 = 1u;
    _cyc_08085FA0 = 1u;
    uint32_t _r_08085FA0;
    _r_08085FA0 = 0x00000000u;
    arm_set_nzc_logic(_r_08085FA0, cpsr_c());
    g_cpu.R[0] = _r_08085FA0;
    g_cpu.R[15] = 0x08085FA2u;
    runtime_tick(_cyc_08085FA0);
    /* 08085FA2  08085fa2 T str r0,[r1] */
    g_cpu.R[15] = 0x08085FA2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085FA2 = 1u;
    _cyc_08085FA2 = 1u;
    uint32_t _base_08085FA2 = g_cpu.R[1];
    uint32_t _off_08085FA2;
    _off_08085FA2 = 0x00000000u;
    uint32_t _ea_08085FA2 = _base_08085FA2 + _off_08085FA2;
    uint32_t _post_08085FA2 = _base_08085FA2 + _off_08085FA2;
    _cyc_08085FA2 += runtime_mem_cycles(_ea_08085FA2, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08085FA2u, _ea_08085FA2 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08085FA2 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08085FA4u;
    runtime_tick(_cyc_08085FA2);
    /* 08085FA4  08085fa4 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085FA4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085FA4 = 1u;
    _cyc_08085FA4 = 1u;
    uint32_t _rn_08085FA4 = g_cpu.R[5];
    uint32_t _r_08085FA4;
    _r_08085FA4 = _rn_08085FA4 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085FA4, 0x00000009u, _r_08085FA4);
    g_cpu.R[15] = 0x08085FA6u;
    runtime_tick(_cyc_08085FA4);
    /* 08085FA6  08085fa6 T beq 0x08085fc0 */
    g_cpu.R[15] = 0x08085FA6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085FA6 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085FA6 = 3u;
        g_cpu.R[15] = 0x08085FC0u;
        runtime_tick(_cyc_08085FA6);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085FC0);
    }
    g_cpu.R[15] = 0x08085FA8u;
    runtime_tick(_cyc_08085FA6);
    /* 08085FA8  08085fa8 T cmps r5,#0x9 */
    g_cpu.R[15] = 0x08085FA8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085FA8 = 1u;
    _cyc_08085FA8 = 1u;
    uint32_t _rn_08085FA8 = g_cpu.R[5];
    uint32_t _r_08085FA8;
    _r_08085FA8 = _rn_08085FA8 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08085FA8, 0x00000009u, _r_08085FA8);
    g_cpu.R[15] = 0x08085FAAu;
    runtime_tick(_cyc_08085FA8);
    /* 08085FAA  08085faa T blt 0x08085fe2 */
    g_cpu.R[15] = 0x08085FAAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085FAA = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_08085FAA = 3u;
        g_cpu.R[15] = 0x08085FE2u;
        runtime_tick(_cyc_08085FAA);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085FE2);
    }
    g_cpu.R[15] = 0x08085FACu;
    runtime_tick(_cyc_08085FAA);
    /* 08085FAC  08085fac T cmps r5,#0xa */
    g_cpu.R[15] = 0x08085FACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085FAC = 1u;
    _cyc_08085FAC = 1u;
    uint32_t _rn_08085FAC = g_cpu.R[5];
    uint32_t _r_08085FAC;
    _r_08085FAC = _rn_08085FAC - 0x0000000Au;
    arm_set_nzcv_sub(_rn_08085FAC, 0x0000000Au, _r_08085FAC);
    g_cpu.R[15] = 0x08085FAEu;
    runtime_tick(_cyc_08085FAC);
    /* 08085FAE  08085fae T beq 0x08085fcc */
    g_cpu.R[15] = 0x08085FAEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085FAE = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085FAE = 3u;
        g_cpu.R[15] = 0x08085FCCu;
        runtime_tick(_cyc_08085FAE);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085FCC);
    }
    g_cpu.R[15] = 0x08085FB0u;
    runtime_tick(_cyc_08085FAE);
    /* 08085FB0  08085fb0 T cmps r5,#0xb */
    g_cpu.R[15] = 0x08085FB0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085FB0 = 1u;
    _cyc_08085FB0 = 1u;
    uint32_t _rn_08085FB0 = g_cpu.R[5];
    uint32_t _r_08085FB0;
    _r_08085FB0 = _rn_08085FB0 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_08085FB0, 0x0000000Bu, _r_08085FB0);
    g_cpu.R[15] = 0x08085FB2u;
    runtime_tick(_cyc_08085FB0);
    /* 08085FB2  08085fb2 T beq 0x08085fd8 */
    g_cpu.R[15] = 0x08085FB2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085FB2 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085FB2 = 3u;
        g_cpu.R[15] = 0x08085FD8u;
        runtime_tick(_cyc_08085FB2);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085FD8);
    }
    g_cpu.R[15] = 0x08085FB4u;
    runtime_tick(_cyc_08085FB2);
    /* 08085FB4  08085fb4 T cmps r5,#0xc */
    g_cpu.R[15] = 0x08085FB4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085FB4 = 1u;
    _cyc_08085FB4 = 1u;
    uint32_t _rn_08085FB4 = g_cpu.R[5];
    uint32_t _r_08085FB4;
    _r_08085FB4 = _rn_08085FB4 - 0x0000000Cu;
    arm_set_nzcv_sub(_rn_08085FB4, 0x0000000Cu, _r_08085FB4);
    g_cpu.R[15] = 0x08085FB6u;
    runtime_tick(_cyc_08085FB4);
    /* 08085FB6  08085fb6 T beq 0x08085fcc */
    g_cpu.R[15] = 0x08085FB6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085FB6 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08085FB6 = 3u;
        g_cpu.R[15] = 0x08085FCCu;
        runtime_tick(_cyc_08085FB6);
        GBARECOMP_TAIL_CALL(gf_tfunc_08085FCC);
    }
    g_cpu.R[15] = 0x08085FB8u;
    runtime_tick(_cyc_08085FB6);
    /* 08085FB8  08085fb8 T b 0x08085fe2 */
    g_cpu.R[15] = 0x08085FB8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08085FB8 = 1u;
    _cyc_08085FB8 = 3u;
    g_cpu.R[15] = 0x08085FE2u;
    runtime_tick(_cyc_08085FB8);
    GBARECOMP_TAIL_CALL(gf_tfunc_08085FE2);
    g_cpu.R[15] = 0x08085FBAu;
    runtime_tick(_cyc_08085FB8);
    /* fall-through to 0x08085FBA */
    g_cpu.R[15] = 0x08085FBAu;
    runtime_dispatch(0x08085FBAu);
    return;
}

/* 0x08085FC0  mode=thumb  end=0x08085FCA  branches=3 */


/* 0x08086034 thumb */
void gf_autojt_08085480_69(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08086034u);
    /* 08086034  08086034 T ldr r0,[r15,#0x24] */
    g_cpu.R[15] = 0x08086034u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086034 = 1u;
    _cyc_08086034 = 2u;
    uint32_t _base_08086034 = 0x08086038u & ~3u;
    uint32_t _off_08086034;
    _off_08086034 = 0x00000024u;
    uint32_t _ea_08086034 = _base_08086034 + _off_08086034;
    uint32_t _post_08086034 = _base_08086034 + _off_08086034;
    _cyc_08086034 += runtime_mem_cycles(_ea_08086034, 4u, 0u);
    uint32_t _v_08086034;
    { uint32_t _w = bus_read_u32(_ea_08086034 & ~3u); uint32_t _rot = (_ea_08086034 & 3u) * 8u; _v_08086034 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08086034;
    g_cpu.R[15] = 0x08086036u;
    runtime_tick(_cyc_08086034);
    /* 08086036  08086036 T adds r1,r2,r0 */
    g_cpu.R[15] = 0x08086036u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086036 = 1u;
    _cyc_08086036 = 1u;
    uint32_t _rm_08086036 = g_cpu.R[0];
    uint32_t _op2_08086036;
    uint32_t _co_08086036;
    _op2_08086036 = _rm_08086036;
    _co_08086036 = cpsr_c();
    uint32_t _rn_08086036 = g_cpu.R[2];
    uint32_t _r_08086036;
    _r_08086036 = _rn_08086036 + _op2_08086036;
    arm_set_nzcv_add(_rn_08086036, _op2_08086036, _r_08086036);
    g_cpu.R[1] = _r_08086036;
    g_cpu.R[15] = 0x08086038u;
    runtime_tick(_cyc_08086036);
    /* 08086038  08086038 T movs r0,#0x0 */
    g_cpu.R[15] = 0x08086038u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086038 = 1u;
    _cyc_08086038 = 1u;
    uint32_t _r_08086038;
    _r_08086038 = 0x00000000u;
    arm_set_nzc_logic(_r_08086038, cpsr_c());
    g_cpu.R[0] = _r_08086038;
    g_cpu.R[15] = 0x0808603Au;
    runtime_tick(_cyc_08086038);
    /* 0808603A  0808603a T str r0,[r1] */
    g_cpu.R[15] = 0x0808603Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808603A = 1u;
    _cyc_0808603A = 1u;
    uint32_t _base_0808603A = g_cpu.R[1];
    uint32_t _off_0808603A;
    _off_0808603A = 0x00000000u;
    uint32_t _ea_0808603A = _base_0808603A + _off_0808603A;
    uint32_t _post_0808603A = _base_0808603A + _off_0808603A;
    _cyc_0808603A += runtime_mem_cycles(_ea_0808603A, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808603Au, _ea_0808603A & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_0808603A & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0808603Cu;
    runtime_tick(_cyc_0808603A);
    /* 0808603C  0808603c T movs r0,#0x6b */
    g_cpu.R[15] = 0x0808603Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808603C = 1u;
    _cyc_0808603C = 1u;
    uint32_t _r_0808603C;
    _r_0808603C = 0x0000006Bu;
    arm_set_nzc_logic(_r_0808603C, cpsr_c());
    g_cpu.R[0] = _r_0808603C;
    g_cpu.R[15] = 0x0808603Eu;
    runtime_tick(_cyc_0808603C);
    /* 0808603E  0808603e T bl.hi 0x08005042 */
    g_cpu.R[15] = 0x0808603Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808603E = 1u;
    _cyc_0808603E = 1u;
    g_cpu.R[14] = 0x08005042u;
    g_cpu.R[15] = 0x08086040u;
    runtime_tick(_cyc_0808603E);
    /* 08086040  08086040 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08086040u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086040 = 1u;
    _cyc_08086040 = 3u;
    uint32_t _blt_08086040 = (g_cpu.R[14] + 0x00000E3Eu) & ~1u;
    g_cpu.R[14] = 0x08086043u;
    g_cpu.R[15] = _blt_08086040;
    runtime_call_push_return(0x08086042u);
    runtime_tick(_cyc_08086040);
    _cyc_08086040 = 0u;
    runtime_dispatch(_blt_08086040);
    if (g_cpu.R[15] != 0x08086042u) { runtime_call_cancel_return(0x08086042u); return; }
    g_cpu.R[15] = 0x08086042u;
    runtime_tick(_cyc_08086040);
    /* fall-through to 0x08086042 */
    g_cpu.R[15] = 0x08086042u;
    runtime_dispatch(0x08086042u);
    return;
}

/* 0x0808606C  mode=thumb  end=0x08086076  branches=3 */


/* 0x08086080 thumb */
void gf_autojt_08085480_73(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08086080u);
    /* 08086080  08086080 T ldr r0,[r15,#0x24] */
    g_cpu.R[15] = 0x08086080u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086080 = 1u;
    _cyc_08086080 = 2u;
    uint32_t _base_08086080 = 0x08086084u & ~3u;
    uint32_t _off_08086080;
    _off_08086080 = 0x00000024u;
    uint32_t _ea_08086080 = _base_08086080 + _off_08086080;
    uint32_t _post_08086080 = _base_08086080 + _off_08086080;
    _cyc_08086080 += runtime_mem_cycles(_ea_08086080, 4u, 0u);
    uint32_t _v_08086080;
    { uint32_t _w = bus_read_u32(_ea_08086080 & ~3u); uint32_t _rot = (_ea_08086080 & 3u) * 8u; _v_08086080 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08086080;
    g_cpu.R[15] = 0x08086082u;
    runtime_tick(_cyc_08086080);
    /* 08086082  08086082 T adds r1,r2,r0 */
    g_cpu.R[15] = 0x08086082u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086082 = 1u;
    _cyc_08086082 = 1u;
    uint32_t _rm_08086082 = g_cpu.R[0];
    uint32_t _op2_08086082;
    uint32_t _co_08086082;
    _op2_08086082 = _rm_08086082;
    _co_08086082 = cpsr_c();
    uint32_t _rn_08086082 = g_cpu.R[2];
    uint32_t _r_08086082;
    _r_08086082 = _rn_08086082 + _op2_08086082;
    arm_set_nzcv_add(_rn_08086082, _op2_08086082, _r_08086082);
    g_cpu.R[1] = _r_08086082;
    g_cpu.R[15] = 0x08086084u;
    runtime_tick(_cyc_08086082);
    /* 08086084  08086084 T movs r0,#0x0 */
    g_cpu.R[15] = 0x08086084u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086084 = 1u;
    _cyc_08086084 = 1u;
    uint32_t _r_08086084;
    _r_08086084 = 0x00000000u;
    arm_set_nzc_logic(_r_08086084, cpsr_c());
    g_cpu.R[0] = _r_08086084;
    g_cpu.R[15] = 0x08086086u;
    runtime_tick(_cyc_08086084);
    /* 08086086  08086086 T str r0,[r1] */
    g_cpu.R[15] = 0x08086086u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086086 = 1u;
    _cyc_08086086 = 1u;
    uint32_t _base_08086086 = g_cpu.R[1];
    uint32_t _off_08086086;
    _off_08086086 = 0x00000000u;
    uint32_t _ea_08086086 = _base_08086086 + _off_08086086;
    uint32_t _post_08086086 = _base_08086086 + _off_08086086;
    _cyc_08086086 += runtime_mem_cycles(_ea_08086086, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08086086u, _ea_08086086 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08086086 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08086088u;
    runtime_tick(_cyc_08086086);
    /* 08086088  08086088 T movs r0,#0xf0 */
    g_cpu.R[15] = 0x08086088u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086088 = 1u;
    _cyc_08086088 = 1u;
    uint32_t _r_08086088;
    _r_08086088 = 0x000000F0u;
    arm_set_nzc_logic(_r_08086088, cpsr_c());
    g_cpu.R[0] = _r_08086088;
    g_cpu.R[15] = 0x0808608Au;
    runtime_tick(_cyc_08086088);
    /* 0808608A  0808608a T bl.hi 0x0800508e */
    g_cpu.R[15] = 0x0808608Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808608A = 1u;
    _cyc_0808608A = 1u;
    g_cpu.R[14] = 0x0800508Eu;
    g_cpu.R[15] = 0x0808608Cu;
    runtime_tick(_cyc_0808608A);
    /* 0808608C  0808608c T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0808608Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808608C = 1u;
    _cyc_0808608C = 3u;
    uint32_t _blt_0808608C = (g_cpu.R[14] + 0x00000DF2u) & ~1u;
    g_cpu.R[14] = 0x0808608Fu;
    g_cpu.R[15] = _blt_0808608C;
    runtime_call_push_return(0x0808608Eu);
    runtime_tick(_cyc_0808608C);
    _cyc_0808608C = 0u;
    runtime_dispatch(_blt_0808608C);
    if (g_cpu.R[15] != 0x0808608Eu) { runtime_call_cancel_return(0x0808608Eu); return; }
    g_cpu.R[15] = 0x0808608Eu;
    runtime_tick(_cyc_0808608C);
    /* fall-through to 0x0808608E */
    g_cpu.R[15] = 0x0808608Eu;
    runtime_dispatch(0x0808608Eu);
    return;
}

/* 0x080860AC  mode=thumb  end=0x080860B6  branches=3 */


/* 0x0808611C thumb */
void gf_autojt_08085480_70(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808611Cu);
    /* 0808611C  0808611c T movs r4,#0xb3 */
    g_cpu.R[15] = 0x0808611Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808611C = 1u;
    _cyc_0808611C = 1u;
    uint32_t _r_0808611C;
    _r_0808611C = 0x000000B3u;
    arm_set_nzc_logic(_r_0808611C, cpsr_c());
    g_cpu.R[4] = _r_0808611C;
    g_cpu.R[15] = 0x0808611Eu;
    runtime_tick(_cyc_0808611C);
    /* 0808611E  0808611e T movs r4,r4,lsl #2 */
    g_cpu.R[15] = 0x0808611Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808611E = 1u;
    _cyc_0808611E = 1u;
    uint32_t _rm_0808611E = g_cpu.R[4];
    uint32_t _op2_0808611E;
    uint32_t _co_0808611E;
    _op2_0808611E = _rm_0808611E << 2;
    _co_0808611E = (_rm_0808611E >> 30) & 1u;
    uint32_t _r_0808611E;
    _r_0808611E = _op2_0808611E;
    arm_set_nzc_logic(_r_0808611E, _co_0808611E);
    g_cpu.R[4] = _r_0808611E;
    g_cpu.R[15] = 0x08086120u;
    runtime_tick(_cyc_0808611E);
    /* 08086120  08086120 T add r4,r4,r8 */
    g_cpu.R[15] = 0x08086120u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086120 = 1u;
    _cyc_08086120 = 1u;
    uint32_t _rm_08086120 = g_cpu.R[8];
    uint32_t _op2_08086120;
    uint32_t _co_08086120;
    _op2_08086120 = _rm_08086120;
    _co_08086120 = cpsr_c();
    uint32_t _rn_08086120 = g_cpu.R[4];
    uint32_t _r_08086120;
    _r_08086120 = _rn_08086120 + _op2_08086120;
    g_cpu.R[4] = _r_08086120;
    g_cpu.R[15] = 0x08086122u;
    runtime_tick(_cyc_08086120);
    /* 08086122  08086122 T ldr r3,[r15,#0x5c] */
    g_cpu.R[15] = 0x08086122u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086122 = 1u;
    _cyc_08086122 = 2u;
    uint32_t _base_08086122 = 0x08086126u & ~3u;
    uint32_t _off_08086122;
    _off_08086122 = 0x0000005Cu;
    uint32_t _ea_08086122 = _base_08086122 + _off_08086122;
    uint32_t _post_08086122 = _base_08086122 + _off_08086122;
    _cyc_08086122 += runtime_mem_cycles(_ea_08086122, 4u, 0u);
    uint32_t _v_08086122;
    { uint32_t _w = bus_read_u32(_ea_08086122 & ~3u); uint32_t _rot = (_ea_08086122 & 3u) * 8u; _v_08086122 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08086122;
    g_cpu.R[15] = 0x08086124u;
    runtime_tick(_cyc_08086122);
    /* 08086124  08086124 T movs r0,#0xc1 */
    g_cpu.R[15] = 0x08086124u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086124 = 1u;
    _cyc_08086124 = 1u;
    uint32_t _r_08086124;
    _r_08086124 = 0x000000C1u;
    arm_set_nzc_logic(_r_08086124, cpsr_c());
    g_cpu.R[0] = _r_08086124;
    g_cpu.R[15] = 0x08086126u;
    runtime_tick(_cyc_08086124);
    /* 08086126  08086126 T movs r0,r0,lsl #2 */
    g_cpu.R[15] = 0x08086126u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086126 = 1u;
    _cyc_08086126 = 1u;
    uint32_t _rm_08086126 = g_cpu.R[0];
    uint32_t _op2_08086126;
    uint32_t _co_08086126;
    _op2_08086126 = _rm_08086126 << 2;
    _co_08086126 = (_rm_08086126 >> 30) & 1u;
    uint32_t _r_08086126;
    _r_08086126 = _op2_08086126;
    arm_set_nzc_logic(_r_08086126, _co_08086126);
    g_cpu.R[0] = _r_08086126;
    g_cpu.R[15] = 0x08086128u;
    runtime_tick(_cyc_08086126);
    /* 08086128  08086128 T add r0,r0,r8 */
    g_cpu.R[15] = 0x08086128u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086128 = 1u;
    _cyc_08086128 = 1u;
    uint32_t _rm_08086128 = g_cpu.R[8];
    uint32_t _op2_08086128;
    uint32_t _co_08086128;
    _op2_08086128 = _rm_08086128;
    _co_08086128 = cpsr_c();
    uint32_t _rn_08086128 = g_cpu.R[0];
    uint32_t _r_08086128;
    _r_08086128 = _rn_08086128 + _op2_08086128;
    g_cpu.R[0] = _r_08086128;
    g_cpu.R[15] = 0x0808612Au;
    runtime_tick(_cyc_08086128);
    /* 0808612A  0808612a T ldrb r0,[r0] */
    g_cpu.R[15] = 0x0808612Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808612A = 1u;
    _cyc_0808612A = 2u;
    uint32_t _base_0808612A = g_cpu.R[0];
    uint32_t _off_0808612A;
    _off_0808612A = 0x00000000u;
    uint32_t _ea_0808612A = _base_0808612A + _off_0808612A;
    uint32_t _post_0808612A = _base_0808612A + _off_0808612A;
    _cyc_0808612A += runtime_mem_cycles(_ea_0808612A, 1u, 0u);
    uint32_t _v_0808612A;
    _v_0808612A = bus_read_u8(_ea_0808612A);
    g_cpu.R[0] = _v_0808612A;
    g_cpu.R[15] = 0x0808612Cu;
    runtime_tick(_cyc_0808612A);
    /* 0808612C  0808612c T subs r0,r0,#0x1 */
    g_cpu.R[15] = 0x0808612Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808612C = 1u;
    _cyc_0808612C = 1u;
    uint32_t _rn_0808612C = g_cpu.R[0];
    uint32_t _r_0808612C;
    _r_0808612C = _rn_0808612C - 0x00000001u;
    arm_set_nzcv_sub(_rn_0808612C, 0x00000001u, _r_0808612C);
    g_cpu.R[0] = _r_0808612C;
    g_cpu.R[15] = 0x0808612Eu;
    runtime_tick(_cyc_0808612C);
    /* 0808612E  0808612e T movs r2,r0,lsl #1 */
    g_cpu.R[15] = 0x0808612Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808612E = 1u;
    _cyc_0808612E = 1u;
    uint32_t _rm_0808612E = g_cpu.R[0];
    uint32_t _op2_0808612E;
    uint32_t _co_0808612E;
    _op2_0808612E = _rm_0808612E << 1;
    _co_0808612E = (_rm_0808612E >> 31) & 1u;
    uint32_t _r_0808612E;
    _r_0808612E = _op2_0808612E;
    arm_set_nzc_logic(_r_0808612E, _co_0808612E);
    g_cpu.R[2] = _r_0808612E;
    g_cpu.R[15] = 0x08086130u;
    runtime_tick(_cyc_0808612E);
    /* 08086130  08086130 T adds r2,r2,r0 */
    g_cpu.R[15] = 0x08086130u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086130 = 1u;
    _cyc_08086130 = 1u;
    uint32_t _rm_08086130 = g_cpu.R[0];
    uint32_t _op2_08086130;
    uint32_t _co_08086130;
    _op2_08086130 = _rm_08086130;
    _co_08086130 = cpsr_c();
    uint32_t _rn_08086130 = g_cpu.R[2];
    uint32_t _r_08086130;
    _r_08086130 = _rn_08086130 + _op2_08086130;
    arm_set_nzcv_add(_rn_08086130, _op2_08086130, _r_08086130);
    g_cpu.R[2] = _r_08086130;
    g_cpu.R[15] = 0x08086132u;
    runtime_tick(_cyc_08086130);
    /* 08086132  08086132 T movs r2,r2,lsl #2 */
    g_cpu.R[15] = 0x08086132u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086132 = 1u;
    _cyc_08086132 = 1u;
    uint32_t _rm_08086132 = g_cpu.R[2];
    uint32_t _op2_08086132;
    uint32_t _co_08086132;
    _op2_08086132 = _rm_08086132 << 2;
    _co_08086132 = (_rm_08086132 >> 30) & 1u;
    uint32_t _r_08086132;
    _r_08086132 = _op2_08086132;
    arm_set_nzc_logic(_r_08086132, _co_08086132);
    g_cpu.R[2] = _r_08086132;
    g_cpu.R[15] = 0x08086134u;
    runtime_tick(_cyc_08086132);
    /* 08086134  08086134 T ldr r0,[r15,#0x4c] */
    g_cpu.R[15] = 0x08086134u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086134 = 1u;
    _cyc_08086134 = 2u;
    uint32_t _base_08086134 = 0x08086138u & ~3u;
    uint32_t _off_08086134;
    _off_08086134 = 0x0000004Cu;
    uint32_t _ea_08086134 = _base_08086134 + _off_08086134;
    uint32_t _post_08086134 = _base_08086134 + _off_08086134;
    _cyc_08086134 += runtime_mem_cycles(_ea_08086134, 4u, 0u);
    uint32_t _v_08086134;
    { uint32_t _w = bus_read_u32(_ea_08086134 & ~3u); uint32_t _rot = (_ea_08086134 & 3u) * 8u; _v_08086134 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08086134;
    g_cpu.R[15] = 0x08086136u;
    runtime_tick(_cyc_08086134);
    /* 08086136  08086136 T add r0,r0,r8 */
    g_cpu.R[15] = 0x08086136u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086136 = 1u;
    _cyc_08086136 = 1u;
    uint32_t _rm_08086136 = g_cpu.R[8];
    uint32_t _op2_08086136;
    uint32_t _co_08086136;
    _op2_08086136 = _rm_08086136;
    _co_08086136 = cpsr_c();
    uint32_t _rn_08086136 = g_cpu.R[0];
    uint32_t _r_08086136;
    _r_08086136 = _rn_08086136 + _op2_08086136;
    g_cpu.R[0] = _r_08086136;
    g_cpu.R[15] = 0x08086138u;
    runtime_tick(_cyc_08086136);
    /* 08086138  08086138 T ldrb r1,[r0] */
    g_cpu.R[15] = 0x08086138u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086138 = 1u;
    _cyc_08086138 = 2u;
    uint32_t _base_08086138 = g_cpu.R[0];
    uint32_t _off_08086138;
    _off_08086138 = 0x00000000u;
    uint32_t _ea_08086138 = _base_08086138 + _off_08086138;
    uint32_t _post_08086138 = _base_08086138 + _off_08086138;
    _cyc_08086138 += runtime_mem_cycles(_ea_08086138, 1u, 0u);
    uint32_t _v_08086138;
    _v_08086138 = bus_read_u8(_ea_08086138);
    g_cpu.R[1] = _v_08086138;
    g_cpu.R[15] = 0x0808613Au;
    runtime_tick(_cyc_08086138);
    /* 0808613A  0808613a T subs r1,r1,#0x1 */
    g_cpu.R[15] = 0x0808613Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808613A = 1u;
    _cyc_0808613A = 1u;
    uint32_t _rn_0808613A = g_cpu.R[1];
    uint32_t _r_0808613A;
    _r_0808613A = _rn_0808613A - 0x00000001u;
    arm_set_nzcv_sub(_rn_0808613A, 0x00000001u, _r_0808613A);
    g_cpu.R[1] = _r_0808613A;
    g_cpu.R[15] = 0x0808613Cu;
    runtime_tick(_cyc_0808613A);
    /* 0808613C  0808613c T movs r0,r1,lsl #4 */
    g_cpu.R[15] = 0x0808613Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808613C = 1u;
    _cyc_0808613C = 1u;
    uint32_t _rm_0808613C = g_cpu.R[1];
    uint32_t _op2_0808613C;
    uint32_t _co_0808613C;
    _op2_0808613C = _rm_0808613C << 4;
    _co_0808613C = (_rm_0808613C >> 28) & 1u;
    uint32_t _r_0808613C;
    _r_0808613C = _op2_0808613C;
    arm_set_nzc_logic(_r_0808613C, _co_0808613C);
    g_cpu.R[0] = _r_0808613C;
    g_cpu.R[15] = 0x0808613Eu;
    runtime_tick(_cyc_0808613C);
    /* 0808613E  0808613e T subs r0,r0,r1 */
    g_cpu.R[15] = 0x0808613Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808613E = 1u;
    _cyc_0808613E = 1u;
    uint32_t _rm_0808613E = g_cpu.R[1];
    uint32_t _op2_0808613E;
    uint32_t _co_0808613E;
    _op2_0808613E = _rm_0808613E;
    _co_0808613E = cpsr_c();
    uint32_t _rn_0808613E = g_cpu.R[0];
    uint32_t _r_0808613E;
    _r_0808613E = _rn_0808613E - _op2_0808613E;
    arm_set_nzcv_sub(_rn_0808613E, _op2_0808613E, _r_0808613E);
    g_cpu.R[0] = _r_0808613E;
    g_cpu.R[15] = 0x08086140u;
    runtime_tick(_cyc_0808613E);
    /* 08086140  08086140 T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x08086140u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086140 = 1u;
    _cyc_08086140 = 1u;
    uint32_t _rm_08086140 = g_cpu.R[0];
    uint32_t _op2_08086140;
    uint32_t _co_08086140;
    _op2_08086140 = _rm_08086140 << 3;
    _co_08086140 = (_rm_08086140 >> 29) & 1u;
    uint32_t _r_08086140;
    _r_08086140 = _op2_08086140;
    arm_set_nzc_logic(_r_08086140, _co_08086140);
    g_cpu.R[0] = _r_08086140;
    g_cpu.R[15] = 0x08086142u;
    runtime_tick(_cyc_08086140);
    /* 08086142  08086142 T adds r2,r2,r0 */
    g_cpu.R[15] = 0x08086142u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086142 = 1u;
    _cyc_08086142 = 1u;
    uint32_t _rm_08086142 = g_cpu.R[0];
    uint32_t _op2_08086142;
    uint32_t _co_08086142;
    _op2_08086142 = _rm_08086142;
    _co_08086142 = cpsr_c();
    uint32_t _rn_08086142 = g_cpu.R[2];
    uint32_t _r_08086142;
    _r_08086142 = _rn_08086142 + _op2_08086142;
    arm_set_nzcv_add(_rn_08086142, _op2_08086142, _r_08086142);
    g_cpu.R[2] = _r_08086142;
    g_cpu.R[15] = 0x08086144u;
    runtime_tick(_cyc_08086142);
    /* 08086144  08086144 T adds r3,r3,#0x4 */
    g_cpu.R[15] = 0x08086144u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086144 = 1u;
    _cyc_08086144 = 1u;
    uint32_t _rn_08086144 = g_cpu.R[3];
    uint32_t _r_08086144;
    _r_08086144 = _rn_08086144 + 0x00000004u;
    arm_set_nzcv_add(_rn_08086144, 0x00000004u, _r_08086144);
    g_cpu.R[3] = _r_08086144;
    g_cpu.R[15] = 0x08086146u;
    runtime_tick(_cyc_08086144);
    /* 08086146  08086146 T adds r2,r2,r3 */
    g_cpu.R[15] = 0x08086146u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086146 = 1u;
    _cyc_08086146 = 1u;
    uint32_t _rm_08086146 = g_cpu.R[3];
    uint32_t _op2_08086146;
    uint32_t _co_08086146;
    _op2_08086146 = _rm_08086146;
    _co_08086146 = cpsr_c();
    uint32_t _rn_08086146 = g_cpu.R[2];
    uint32_t _r_08086146;
    _r_08086146 = _rn_08086146 + _op2_08086146;
    arm_set_nzcv_add(_rn_08086146, _op2_08086146, _r_08086146);
    g_cpu.R[2] = _r_08086146;
    g_cpu.R[15] = 0x08086148u;
    runtime_tick(_cyc_08086146);
    /* 08086148  08086148 T ldr r0,[r4] */
    g_cpu.R[15] = 0x08086148u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086148 = 1u;
    _cyc_08086148 = 2u;
    uint32_t _base_08086148 = g_cpu.R[4];
    uint32_t _off_08086148;
    _off_08086148 = 0x00000000u;
    uint32_t _ea_08086148 = _base_08086148 + _off_08086148;
    uint32_t _post_08086148 = _base_08086148 + _off_08086148;
    _cyc_08086148 += runtime_mem_cycles(_ea_08086148, 4u, 0u);
    uint32_t _v_08086148;
    { uint32_t _w = bus_read_u32(_ea_08086148 & ~3u); uint32_t _rot = (_ea_08086148 & 3u) * 8u; _v_08086148 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08086148;
    g_cpu.R[15] = 0x0808614Au;
    runtime_tick(_cyc_08086148);
    /* 0808614A  0808614a T ldr r1,[r2] */
    g_cpu.R[15] = 0x0808614Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808614A = 1u;
    _cyc_0808614A = 2u;
    uint32_t _base_0808614A = g_cpu.R[2];
    uint32_t _off_0808614A;
    _off_0808614A = 0x00000000u;
    uint32_t _ea_0808614A = _base_0808614A + _off_0808614A;
    uint32_t _post_0808614A = _base_0808614A + _off_0808614A;
    _cyc_0808614A += runtime_mem_cycles(_ea_0808614A, 4u, 0u);
    uint32_t _v_0808614A;
    { uint32_t _w = bus_read_u32(_ea_0808614A & ~3u); uint32_t _rot = (_ea_0808614A & 3u) * 8u; _v_0808614A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0808614A;
    g_cpu.R[15] = 0x0808614Cu;
    runtime_tick(_cyc_0808614A);
    /* 0808614C  0808614c T subs r0,r0,r1 */
    g_cpu.R[15] = 0x0808614Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808614C = 1u;
    _cyc_0808614C = 1u;
    uint32_t _rm_0808614C = g_cpu.R[1];
    uint32_t _op2_0808614C;
    uint32_t _co_0808614C;
    _op2_0808614C = _rm_0808614C;
    _co_0808614C = cpsr_c();
    uint32_t _rn_0808614C = g_cpu.R[0];
    uint32_t _r_0808614C;
    _r_0808614C = _rn_0808614C - _op2_0808614C;
    arm_set_nzcv_sub(_rn_0808614C, _op2_0808614C, _r_0808614C);
    g_cpu.R[0] = _r_0808614C;
    g_cpu.R[15] = 0x0808614Eu;
    runtime_tick(_cyc_0808614C);
    /* 0808614E  0808614e T str r0,[r4] */
    g_cpu.R[15] = 0x0808614Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808614E = 1u;
    _cyc_0808614E = 1u;
    uint32_t _base_0808614E = g_cpu.R[4];
    uint32_t _off_0808614E;
    _off_0808614E = 0x00000000u;
    uint32_t _ea_0808614E = _base_0808614E + _off_0808614E;
    uint32_t _post_0808614E = _base_0808614E + _off_0808614E;
    _cyc_0808614E += runtime_mem_cycles(_ea_0808614E, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808614Eu, _ea_0808614E & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_0808614E & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08086150u;
    runtime_tick(_cyc_0808614E);
    /* 08086150  08086150 T bl.hi 0x08086154 */
    g_cpu.R[15] = 0x08086150u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086150 = 1u;
    _cyc_08086150 = 1u;
    g_cpu.R[14] = 0x08086154u;
    g_cpu.R[15] = 0x08086152u;
    runtime_tick(_cyc_08086150);
    /* 08086152  08086152 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08086152u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086152 = 1u;
    _cyc_08086152 = 3u;
    uint32_t _blt_08086152 = (g_cpu.R[14] + 0x00000CD4u) & ~1u;
    g_cpu.R[14] = 0x08086155u;
    g_cpu.R[15] = _blt_08086152;
    runtime_call_push_return(0x08086154u);
    runtime_tick(_cyc_08086152);
    _cyc_08086152 = 0u;
    runtime_dispatch(_blt_08086152);
    if (g_cpu.R[15] != 0x08086154u) { runtime_call_cancel_return(0x08086154u); return; }
    g_cpu.R[15] = 0x08086154u;
    runtime_tick(_cyc_08086152);
    /* fall-through to 0x08086154 */
    g_cpu.R[15] = 0x08086154u;
    runtime_dispatch(0x08086154u);
    return;
}

/* 0x08086164  mode=thumb  end=0x08086168  branches=8 */


/* 0x08086190 thumb */
void gf_autojt_08085480_64(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08086190u);
    /* 08086190  08086190 T movs r4,#0xb3 */
    g_cpu.R[15] = 0x08086190u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086190 = 1u;
    _cyc_08086190 = 1u;
    uint32_t _r_08086190;
    _r_08086190 = 0x000000B3u;
    arm_set_nzc_logic(_r_08086190, cpsr_c());
    g_cpu.R[4] = _r_08086190;
    g_cpu.R[15] = 0x08086192u;
    runtime_tick(_cyc_08086190);
    /* 08086192  08086192 T movs r4,r4,lsl #2 */
    g_cpu.R[15] = 0x08086192u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086192 = 1u;
    _cyc_08086192 = 1u;
    uint32_t _rm_08086192 = g_cpu.R[4];
    uint32_t _op2_08086192;
    uint32_t _co_08086192;
    _op2_08086192 = _rm_08086192 << 2;
    _co_08086192 = (_rm_08086192 >> 30) & 1u;
    uint32_t _r_08086192;
    _r_08086192 = _op2_08086192;
    arm_set_nzc_logic(_r_08086192, _co_08086192);
    g_cpu.R[4] = _r_08086192;
    g_cpu.R[15] = 0x08086194u;
    runtime_tick(_cyc_08086192);
    /* 08086194  08086194 T add r4,r4,r8 */
    g_cpu.R[15] = 0x08086194u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086194 = 1u;
    _cyc_08086194 = 1u;
    uint32_t _rm_08086194 = g_cpu.R[8];
    uint32_t _op2_08086194;
    uint32_t _co_08086194;
    _op2_08086194 = _rm_08086194;
    _co_08086194 = cpsr_c();
    uint32_t _rn_08086194 = g_cpu.R[4];
    uint32_t _r_08086194;
    _r_08086194 = _rn_08086194 + _op2_08086194;
    g_cpu.R[4] = _r_08086194;
    g_cpu.R[15] = 0x08086196u;
    runtime_tick(_cyc_08086194);
    /* 08086196  08086196 T ldr r3,[r15,#0x40] */
    g_cpu.R[15] = 0x08086196u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086196 = 1u;
    _cyc_08086196 = 2u;
    uint32_t _base_08086196 = 0x0808619Au & ~3u;
    uint32_t _off_08086196;
    _off_08086196 = 0x00000040u;
    uint32_t _ea_08086196 = _base_08086196 + _off_08086196;
    uint32_t _post_08086196 = _base_08086196 + _off_08086196;
    _cyc_08086196 += runtime_mem_cycles(_ea_08086196, 4u, 0u);
    uint32_t _v_08086196;
    { uint32_t _w = bus_read_u32(_ea_08086196 & ~3u); uint32_t _rot = (_ea_08086196 & 3u) * 8u; _v_08086196 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08086196;
    g_cpu.R[15] = 0x08086198u;
    runtime_tick(_cyc_08086196);
    /* 08086198  08086198 T movs r0,#0xc1 */
    g_cpu.R[15] = 0x08086198u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08086198 = 1u;
    _cyc_08086198 = 1u;
    uint32_t _r_08086198;
    _r_08086198 = 0x000000C1u;
    arm_set_nzc_logic(_r_08086198, cpsr_c());
    g_cpu.R[0] = _r_08086198;
    g_cpu.R[15] = 0x0808619Au;
    runtime_tick(_cyc_08086198);
    /* 0808619A  0808619a T movs r0,r0,lsl #2 */
    g_cpu.R[15] = 0x0808619Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808619A = 1u;
    _cyc_0808619A = 1u;
    uint32_t _rm_0808619A = g_cpu.R[0];
    uint32_t _op2_0808619A;
    uint32_t _co_0808619A;
    _op2_0808619A = _rm_0808619A << 2;
    _co_0808619A = (_rm_0808619A >> 30) & 1u;
    uint32_t _r_0808619A;
    _r_0808619A = _op2_0808619A;
    arm_set_nzc_logic(_r_0808619A, _co_0808619A);
    g_cpu.R[0] = _r_0808619A;
    g_cpu.R[15] = 0x0808619Cu;
    runtime_tick(_cyc_0808619A);
    /* 0808619C  0808619c T add r0,r0,r8 */
    g_cpu.R[15] = 0x0808619Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808619C = 1u;
    _cyc_0808619C = 1u;
    uint32_t _rm_0808619C = g_cpu.R[8];
    uint32_t _op2_0808619C;
    uint32_t _co_0808619C;
    _op2_0808619C = _rm_0808619C;
    _co_0808619C = cpsr_c();
    uint32_t _rn_0808619C = g_cpu.R[0];
    uint32_t _r_0808619C;
    _r_0808619C = _rn_0808619C + _op2_0808619C;
    g_cpu.R[0] = _r_0808619C;
    g_cpu.R[15] = 0x0808619Eu;
    runtime_tick(_cyc_0808619C);
    /* 0808619E  0808619e T ldrb r0,[r0] */
    g_cpu.R[15] = 0x0808619Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808619E = 1u;
    _cyc_0808619E = 2u;
    uint32_t _base_0808619E = g_cpu.R[0];
    uint32_t _off_0808619E;
    _off_0808619E = 0x00000000u;
    uint32_t _ea_0808619E = _base_0808619E + _off_0808619E;
    uint32_t _post_0808619E = _base_0808619E + _off_0808619E;
    _cyc_0808619E += runtime_mem_cycles(_ea_0808619E, 1u, 0u);
    uint32_t _v_0808619E;
    _v_0808619E = bus_read_u8(_ea_0808619E);
    g_cpu.R[0] = _v_0808619E;
    g_cpu.R[15] = 0x080861A0u;
    runtime_tick(_cyc_0808619E);
    /* 080861A0  080861a0 T subs r0,r0,#0x1 */
    g_cpu.R[15] = 0x080861A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080861A0 = 1u;
    _cyc_080861A0 = 1u;
    uint32_t _rn_080861A0 = g_cpu.R[0];
    uint32_t _r_080861A0;
    _r_080861A0 = _rn_080861A0 - 0x00000001u;
    arm_set_nzcv_sub(_rn_080861A0, 0x00000001u, _r_080861A0);
    g_cpu.R[0] = _r_080861A0;
    g_cpu.R[15] = 0x080861A2u;
    runtime_tick(_cyc_080861A0);
    /* 080861A2  080861a2 T movs r2,r0,lsl #1 */
    g_cpu.R[15] = 0x080861A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080861A2 = 1u;
    _cyc_080861A2 = 1u;
    uint32_t _rm_080861A2 = g_cpu.R[0];
    uint32_t _op2_080861A2;
    uint32_t _co_080861A2;
    _op2_080861A2 = _rm_080861A2 << 1;
    _co_080861A2 = (_rm_080861A2 >> 31) & 1u;
    uint32_t _r_080861A2;
    _r_080861A2 = _op2_080861A2;
    arm_set_nzc_logic(_r_080861A2, _co_080861A2);
    g_cpu.R[2] = _r_080861A2;
    g_cpu.R[15] = 0x080861A4u;
    runtime_tick(_cyc_080861A2);
    /* 080861A4  080861a4 T adds r2,r2,r0 */
    g_cpu.R[15] = 0x080861A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080861A4 = 1u;
    _cyc_080861A4 = 1u;
    uint32_t _rm_080861A4 = g_cpu.R[0];
    uint32_t _op2_080861A4;
    uint32_t _co_080861A4;
    _op2_080861A4 = _rm_080861A4;
    _co_080861A4 = cpsr_c();
    uint32_t _rn_080861A4 = g_cpu.R[2];
    uint32_t _r_080861A4;
    _r_080861A4 = _rn_080861A4 + _op2_080861A4;
    arm_set_nzcv_add(_rn_080861A4, _op2_080861A4, _r_080861A4);
    g_cpu.R[2] = _r_080861A4;
    g_cpu.R[15] = 0x080861A6u;
    runtime_tick(_cyc_080861A4);
    /* 080861A6  080861a6 T movs r2,r2,lsl #2 */
    g_cpu.R[15] = 0x080861A6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080861A6 = 1u;
    _cyc_080861A6 = 1u;
    uint32_t _rm_080861A6 = g_cpu.R[2];
    uint32_t _op2_080861A6;
    uint32_t _co_080861A6;
    _op2_080861A6 = _rm_080861A6 << 2;
    _co_080861A6 = (_rm_080861A6 >> 30) & 1u;
    uint32_t _r_080861A6;
    _r_080861A6 = _op2_080861A6;
    arm_set_nzc_logic(_r_080861A6, _co_080861A6);
    g_cpu.R[2] = _r_080861A6;
    g_cpu.R[15] = 0x080861A8u;
    runtime_tick(_cyc_080861A6);
    /* 080861A8  080861a8 T ldr r0,[r15,#0x30] */
    g_cpu.R[15] = 0x080861A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080861A8 = 1u;
    _cyc_080861A8 = 2u;
    uint32_t _base_080861A8 = 0x080861ACu & ~3u;
    uint32_t _off_080861A8;
    _off_080861A8 = 0x00000030u;
    uint32_t _ea_080861A8 = _base_080861A8 + _off_080861A8;
    uint32_t _post_080861A8 = _base_080861A8 + _off_080861A8;
    _cyc_080861A8 += runtime_mem_cycles(_ea_080861A8, 4u, 0u);
    uint32_t _v_080861A8;
    { uint32_t _w = bus_read_u32(_ea_080861A8 & ~3u); uint32_t _rot = (_ea_080861A8 & 3u) * 8u; _v_080861A8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080861A8;
    g_cpu.R[15] = 0x080861AAu;
    runtime_tick(_cyc_080861A8);
    /* 080861AA  080861aa T add r0,r0,r8 */
    g_cpu.R[15] = 0x080861AAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080861AA = 1u;
    _cyc_080861AA = 1u;
    uint32_t _rm_080861AA = g_cpu.R[8];
    uint32_t _op2_080861AA;
    uint32_t _co_080861AA;
    _op2_080861AA = _rm_080861AA;
    _co_080861AA = cpsr_c();
    uint32_t _rn_080861AA = g_cpu.R[0];
    uint32_t _r_080861AA;
    _r_080861AA = _rn_080861AA + _op2_080861AA;
    g_cpu.R[0] = _r_080861AA;
    g_cpu.R[15] = 0x080861ACu;
    runtime_tick(_cyc_080861AA);
    /* 080861AC  080861ac T ldrb r1,[r0] */
    g_cpu.R[15] = 0x080861ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080861AC = 1u;
    _cyc_080861AC = 2u;
    uint32_t _base_080861AC = g_cpu.R[0];
    uint32_t _off_080861AC;
    _off_080861AC = 0x00000000u;
    uint32_t _ea_080861AC = _base_080861AC + _off_080861AC;
    uint32_t _post_080861AC = _base_080861AC + _off_080861AC;
    _cyc_080861AC += runtime_mem_cycles(_ea_080861AC, 1u, 0u);
    uint32_t _v_080861AC;
    _v_080861AC = bus_read_u8(_ea_080861AC);
    g_cpu.R[1] = _v_080861AC;
    g_cpu.R[15] = 0x080861AEu;
    runtime_tick(_cyc_080861AC);
    /* 080861AE  080861ae T subs r1,r1,#0x1 */
    g_cpu.R[15] = 0x080861AEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080861AE = 1u;
    _cyc_080861AE = 1u;
    uint32_t _rn_080861AE = g_cpu.R[1];
    uint32_t _r_080861AE;
    _r_080861AE = _rn_080861AE - 0x00000001u;
    arm_set_nzcv_sub(_rn_080861AE, 0x00000001u, _r_080861AE);
    g_cpu.R[1] = _r_080861AE;
    g_cpu.R[15] = 0x080861B0u;
    runtime_tick(_cyc_080861AE);
    /* 080861B0  080861b0 T movs r0,r1,lsl #4 */
    g_cpu.R[15] = 0x080861B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080861B0 = 1u;
    _cyc_080861B0 = 1u;
    uint32_t _rm_080861B0 = g_cpu.R[1];
    uint32_t _op2_080861B0;
    uint32_t _co_080861B0;
    _op2_080861B0 = _rm_080861B0 << 4;
    _co_080861B0 = (_rm_080861B0 >> 28) & 1u;
    uint32_t _r_080861B0;
    _r_080861B0 = _op2_080861B0;
    arm_set_nzc_logic(_r_080861B0, _co_080861B0);
    g_cpu.R[0] = _r_080861B0;
    g_cpu.R[15] = 0x080861B2u;
    runtime_tick(_cyc_080861B0);
    /* 080861B2  080861b2 T subs r0,r0,r1 */
    g_cpu.R[15] = 0x080861B2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080861B2 = 1u;
    _cyc_080861B2 = 1u;
    uint32_t _rm_080861B2 = g_cpu.R[1];
    uint32_t _op2_080861B2;
    uint32_t _co_080861B2;
    _op2_080861B2 = _rm_080861B2;
    _co_080861B2 = cpsr_c();
    uint32_t _rn_080861B2 = g_cpu.R[0];
    uint32_t _r_080861B2;
    _r_080861B2 = _rn_080861B2 - _op2_080861B2;
    arm_set_nzcv_sub(_rn_080861B2, _op2_080861B2, _r_080861B2);
    g_cpu.R[0] = _r_080861B2;
    g_cpu.R[15] = 0x080861B4u;
    runtime_tick(_cyc_080861B2);
    /* 080861B4  080861b4 T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x080861B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080861B4 = 1u;
    _cyc_080861B4 = 1u;
    uint32_t _rm_080861B4 = g_cpu.R[0];
    uint32_t _op2_080861B4;
    uint32_t _co_080861B4;
    _op2_080861B4 = _rm_080861B4 << 3;
    _co_080861B4 = (_rm_080861B4 >> 29) & 1u;
    uint32_t _r_080861B4;
    _r_080861B4 = _op2_080861B4;
    arm_set_nzc_logic(_r_080861B4, _co_080861B4);
    g_cpu.R[0] = _r_080861B4;
    g_cpu.R[15] = 0x080861B6u;
    runtime_tick(_cyc_080861B4);
    /* 080861B6  080861b6 T adds r2,r2,r0 */
    g_cpu.R[15] = 0x080861B6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080861B6 = 1u;
    _cyc_080861B6 = 1u;
    uint32_t _rm_080861B6 = g_cpu.R[0];
    uint32_t _op2_080861B6;
    uint32_t _co_080861B6;
    _op2_080861B6 = _rm_080861B6;
    _co_080861B6 = cpsr_c();
    uint32_t _rn_080861B6 = g_cpu.R[2];
    uint32_t _r_080861B6;
    _r_080861B6 = _rn_080861B6 + _op2_080861B6;
    arm_set_nzcv_add(_rn_080861B6, _op2_080861B6, _r_080861B6);
    g_cpu.R[2] = _r_080861B6;
    g_cpu.R[15] = 0x080861B8u;
    runtime_tick(_cyc_080861B6);
    /* 080861B8  080861b8 T adds r3,r3,#0x4 */
    g_cpu.R[15] = 0x080861B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080861B8 = 1u;
    _cyc_080861B8 = 1u;
    uint32_t _rn_080861B8 = g_cpu.R[3];
    uint32_t _r_080861B8;
    _r_080861B8 = _rn_080861B8 + 0x00000004u;
    arm_set_nzcv_add(_rn_080861B8, 0x00000004u, _r_080861B8);
    g_cpu.R[3] = _r_080861B8;
    g_cpu.R[15] = 0x080861BAu;
    runtime_tick(_cyc_080861B8);
    /* 080861BA  080861ba T adds r2,r2,r3 */
    g_cpu.R[15] = 0x080861BAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080861BA = 1u;
    _cyc_080861BA = 1u;
    uint32_t _rm_080861BA = g_cpu.R[3];
    uint32_t _op2_080861BA;
    uint32_t _co_080861BA;
    _op2_080861BA = _rm_080861BA;
    _co_080861BA = cpsr_c();
    uint32_t _rn_080861BA = g_cpu.R[2];
    uint32_t _r_080861BA;
    _r_080861BA = _rn_080861BA + _op2_080861BA;
    arm_set_nzcv_add(_rn_080861BA, _op2_080861BA, _r_080861BA);
    g_cpu.R[2] = _r_080861BA;
    g_cpu.R[15] = 0x080861BCu;
    runtime_tick(_cyc_080861BA);
    /* 080861BC  080861bc T ldr r0,[r4] */
    g_cpu.R[15] = 0x080861BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080861BC = 1u;
    _cyc_080861BC = 2u;
    uint32_t _base_080861BC = g_cpu.R[4];
    uint32_t _off_080861BC;
    _off_080861BC = 0x00000000u;
    uint32_t _ea_080861BC = _base_080861BC + _off_080861BC;
    uint32_t _post_080861BC = _base_080861BC + _off_080861BC;
    _cyc_080861BC += runtime_mem_cycles(_ea_080861BC, 4u, 0u);
    uint32_t _v_080861BC;
    { uint32_t _w = bus_read_u32(_ea_080861BC & ~3u); uint32_t _rot = (_ea_080861BC & 3u) * 8u; _v_080861BC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080861BC;
    g_cpu.R[15] = 0x080861BEu;
    runtime_tick(_cyc_080861BC);
    /* 080861BE  080861be T ldr r1,[r2] */
    g_cpu.R[15] = 0x080861BEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080861BE = 1u;
    _cyc_080861BE = 2u;
    uint32_t _base_080861BE = g_cpu.R[2];
    uint32_t _off_080861BE;
    _off_080861BE = 0x00000000u;
    uint32_t _ea_080861BE = _base_080861BE + _off_080861BE;
    uint32_t _post_080861BE = _base_080861BE + _off_080861BE;
    _cyc_080861BE += runtime_mem_cycles(_ea_080861BE, 4u, 0u);
    uint32_t _v_080861BE;
    { uint32_t _w = bus_read_u32(_ea_080861BE & ~3u); uint32_t _rot = (_ea_080861BE & 3u) * 8u; _v_080861BE = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_080861BE;
    g_cpu.R[15] = 0x080861C0u;
    runtime_tick(_cyc_080861BE);
    /* 080861C0  080861c0 T subs r0,r0,r1 */
    g_cpu.R[15] = 0x080861C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080861C0 = 1u;
    _cyc_080861C0 = 1u;
    uint32_t _rm_080861C0 = g_cpu.R[1];
    uint32_t _op2_080861C0;
    uint32_t _co_080861C0;
    _op2_080861C0 = _rm_080861C0;
    _co_080861C0 = cpsr_c();
    uint32_t _rn_080861C0 = g_cpu.R[0];
    uint32_t _r_080861C0;
    _r_080861C0 = _rn_080861C0 - _op2_080861C0;
    arm_set_nzcv_sub(_rn_080861C0, _op2_080861C0, _r_080861C0);
    g_cpu.R[0] = _r_080861C0;
    g_cpu.R[15] = 0x080861C2u;
    runtime_tick(_cyc_080861C0);
    /* 080861C2  080861c2 T str r0,[r4] */
    g_cpu.R[15] = 0x080861C2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080861C2 = 1u;
    _cyc_080861C2 = 1u;
    uint32_t _base_080861C2 = g_cpu.R[4];
    uint32_t _off_080861C2;
    _off_080861C2 = 0x00000000u;
    uint32_t _ea_080861C2 = _base_080861C2 + _off_080861C2;
    uint32_t _post_080861C2 = _base_080861C2 + _off_080861C2;
    _cyc_080861C2 += runtime_mem_cycles(_ea_080861C2, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080861C2u, _ea_080861C2 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_080861C2 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x080861C4u;
    runtime_tick(_cyc_080861C2);
    /* 080861C4  080861c4 T bl.hi 0x080861c8 */
    g_cpu.R[15] = 0x080861C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080861C4 = 1u;
    _cyc_080861C4 = 1u;
    g_cpu.R[14] = 0x080861C8u;
    g_cpu.R[15] = 0x080861C6u;
    runtime_tick(_cyc_080861C4);
    /* 080861C6  080861c6 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x080861C6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080861C6 = 1u;
    _cyc_080861C6 = 3u;
    uint32_t _blt_080861C6 = (g_cpu.R[14] + 0x00000C60u) & ~1u;
    g_cpu.R[14] = 0x080861C9u;
    g_cpu.R[15] = _blt_080861C6;
    runtime_call_push_return(0x080861C8u);
    runtime_tick(_cyc_080861C6);
    _cyc_080861C6 = 0u;
    runtime_dispatch(_blt_080861C6);
    if (g_cpu.R[15] != 0x080861C8u) { runtime_call_cancel_return(0x080861C8u); return; }
    g_cpu.R[15] = 0x080861C8u;
    runtime_tick(_cyc_080861C6);
    /* fall-through to 0x080861C8 */
    g_cpu.R[15] = 0x080861C8u;
    runtime_dispatch(0x080861C8u);
    return;
}

/* 0x080861E8  mode=thumb  end=0x080861F2  branches=3 */


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


/* 0x0808C1EC thumb */
void gf_autojt_0808C1C0_00(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808C1ECu);
    /* 0808C1EC  0808c1ec T ldr r1,[r15,#0xc] */
    g_cpu.R[15] = 0x0808C1ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808C1EC = 1u;
    _cyc_0808C1EC = 2u;
    uint32_t _base_0808C1EC = 0x0808C1F0u & ~3u;
    uint32_t _off_0808C1EC;
    _off_0808C1EC = 0x0000000Cu;
    uint32_t _ea_0808C1EC = _base_0808C1EC + _off_0808C1EC;
    uint32_t _post_0808C1EC = _base_0808C1EC + _off_0808C1EC;
    _cyc_0808C1EC += runtime_mem_cycles(_ea_0808C1EC, 4u, 0u);
    uint32_t _v_0808C1EC;
    { uint32_t _w = bus_read_u32(_ea_0808C1EC & ~3u); uint32_t _rot = (_ea_0808C1EC & 3u) * 8u; _v_0808C1EC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0808C1EC;
    g_cpu.R[15] = 0x0808C1EEu;
    runtime_tick(_cyc_0808C1EC);
    /* 0808C1EE  0808c1ee T adds r0,r2,r1 */
    g_cpu.R[15] = 0x0808C1EEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808C1EE = 1u;
    _cyc_0808C1EE = 1u;
    uint32_t _rm_0808C1EE = g_cpu.R[1];
    uint32_t _op2_0808C1EE;
    uint32_t _co_0808C1EE;
    _op2_0808C1EE = _rm_0808C1EE;
    _co_0808C1EE = cpsr_c();
    uint32_t _rn_0808C1EE = g_cpu.R[2];
    uint32_t _r_0808C1EE;
    _r_0808C1EE = _rn_0808C1EE + _op2_0808C1EE;
    arm_set_nzcv_add(_rn_0808C1EE, _op2_0808C1EE, _r_0808C1EE);
    g_cpu.R[0] = _r_0808C1EE;
    g_cpu.R[15] = 0x0808C1F0u;
    runtime_tick(_cyc_0808C1EE);
    /* 0808C1F0  0808c1f0 T ldrb r0,[r0] */
    g_cpu.R[15] = 0x0808C1F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808C1F0 = 1u;
    _cyc_0808C1F0 = 2u;
    uint32_t _base_0808C1F0 = g_cpu.R[0];
    uint32_t _off_0808C1F0;
    _off_0808C1F0 = 0x00000000u;
    uint32_t _ea_0808C1F0 = _base_0808C1F0 + _off_0808C1F0;
    uint32_t _post_0808C1F0 = _base_0808C1F0 + _off_0808C1F0;
    _cyc_0808C1F0 += runtime_mem_cycles(_ea_0808C1F0, 1u, 0u);
    uint32_t _v_0808C1F0;
    _v_0808C1F0 = bus_read_u8(_ea_0808C1F0);
    g_cpu.R[0] = _v_0808C1F0;
    g_cpu.R[15] = 0x0808C1F2u;
    runtime_tick(_cyc_0808C1F0);
    /* 0808C1F2  0808c1f2 T cmps r0,#0x3 */
    g_cpu.R[15] = 0x0808C1F2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808C1F2 = 1u;
    _cyc_0808C1F2 = 1u;
    uint32_t _rn_0808C1F2 = g_cpu.R[0];
    uint32_t _r_0808C1F2;
    _r_0808C1F2 = _rn_0808C1F2 - 0x00000003u;
    arm_set_nzcv_sub(_rn_0808C1F2, 0x00000003u, _r_0808C1F2);
    g_cpu.R[15] = 0x0808C1F4u;
    runtime_tick(_cyc_0808C1F2);
    /* 0808C1F4  0808c1f4 T bne 0x0808c208 */
    g_cpu.R[15] = 0x0808C1F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808C1F4 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_0808C1F4 = 3u;
        g_cpu.R[15] = 0x0808C208u;
        runtime_tick(_cyc_0808C1F4);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808C208);
    }
    g_cpu.R[15] = 0x0808C1F6u;
    runtime_tick(_cyc_0808C1F4);
    /* 0808C1F6  0808c1f6 T ldr r0,[r15,#0x8] */
    g_cpu.R[15] = 0x0808C1F6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808C1F6 = 1u;
    _cyc_0808C1F6 = 2u;
    uint32_t _base_0808C1F6 = 0x0808C1FAu & ~3u;
    uint32_t _off_0808C1F6;
    _off_0808C1F6 = 0x00000008u;
    uint32_t _ea_0808C1F6 = _base_0808C1F6 + _off_0808C1F6;
    uint32_t _post_0808C1F6 = _base_0808C1F6 + _off_0808C1F6;
    _cyc_0808C1F6 += runtime_mem_cycles(_ea_0808C1F6, 4u, 0u);
    uint32_t _v_0808C1F6;
    { uint32_t _w = bus_read_u32(_ea_0808C1F6 & ~3u); uint32_t _rot = (_ea_0808C1F6 & 3u) * 8u; _v_0808C1F6 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0808C1F6;
    g_cpu.R[15] = 0x0808C1F8u;
    runtime_tick(_cyc_0808C1F6);
    /* 0808C1F8  0808c1f8 T ldr r3,[r15,#0x8] */
    g_cpu.R[15] = 0x0808C1F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808C1F8 = 1u;
    _cyc_0808C1F8 = 2u;
    uint32_t _base_0808C1F8 = 0x0808C1FCu & ~3u;
    uint32_t _off_0808C1F8;
    _off_0808C1F8 = 0x00000008u;
    uint32_t _ea_0808C1F8 = _base_0808C1F8 + _off_0808C1F8;
    uint32_t _post_0808C1F8 = _base_0808C1F8 + _off_0808C1F8;
    _cyc_0808C1F8 += runtime_mem_cycles(_ea_0808C1F8, 4u, 0u);
    uint32_t _v_0808C1F8;
    { uint32_t _w = bus_read_u32(_ea_0808C1F8 & ~3u); uint32_t _rot = (_ea_0808C1F8 & 3u) * 8u; _v_0808C1F8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_0808C1F8;
    g_cpu.R[15] = 0x0808C1FAu;
    runtime_tick(_cyc_0808C1F8);
    /* 0808C1FA  0808c1fa T b 0x0808c20c */
    g_cpu.R[15] = 0x0808C1FAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808C1FA = 1u;
    _cyc_0808C1FA = 3u;
    g_cpu.R[15] = 0x0808C20Cu;
    runtime_tick(_cyc_0808C1FA);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808C20C);
    g_cpu.R[15] = 0x0808C1FCu;
    runtime_tick(_cyc_0808C1FA);
    /* fall-through to 0x0808C1FC */
    g_cpu.R[15] = 0x0808C1FCu;
    runtime_dispatch(0x0808C1FCu);
    return;
}

/* 0x0808C208  mode=thumb  end=0x0808C20C  branches=0  indirect */


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


/* 0x0808CD88 thumb */
void gf_autojt_0808CD58_00(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808CD88u);
    /* 0808CD88  0808cd88 T ldr r0,[r15,#0x20] */
    g_cpu.R[15] = 0x0808CD88u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CD88 = 1u;
    _cyc_0808CD88 = 2u;
    uint32_t _base_0808CD88 = 0x0808CD8Cu & ~3u;
    uint32_t _off_0808CD88;
    _off_0808CD88 = 0x00000020u;
    uint32_t _ea_0808CD88 = _base_0808CD88 + _off_0808CD88;
    uint32_t _post_0808CD88 = _base_0808CD88 + _off_0808CD88;
    _cyc_0808CD88 += runtime_mem_cycles(_ea_0808CD88, 4u, 0u);
    uint32_t _v_0808CD88;
    { uint32_t _w = bus_read_u32(_ea_0808CD88 & ~3u); uint32_t _rot = (_ea_0808CD88 & 3u) * 8u; _v_0808CD88 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0808CD88;
    g_cpu.R[15] = 0x0808CD8Au;
    runtime_tick(_cyc_0808CD88);
    /* 0808CD8A  0808cd8a T ldr r1,[r15,#0x24] */
    g_cpu.R[15] = 0x0808CD8Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CD8A = 1u;
    _cyc_0808CD8A = 2u;
    uint32_t _base_0808CD8A = 0x0808CD8Eu & ~3u;
    uint32_t _off_0808CD8A;
    _off_0808CD8A = 0x00000024u;
    uint32_t _ea_0808CD8A = _base_0808CD8A + _off_0808CD8A;
    uint32_t _post_0808CD8A = _base_0808CD8A + _off_0808CD8A;
    _cyc_0808CD8A += runtime_mem_cycles(_ea_0808CD8A, 4u, 0u);
    uint32_t _v_0808CD8A;
    { uint32_t _w = bus_read_u32(_ea_0808CD8A & ~3u); uint32_t _rot = (_ea_0808CD8A & 3u) * 8u; _v_0808CD8A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0808CD8A;
    g_cpu.R[15] = 0x0808CD8Cu;
    runtime_tick(_cyc_0808CD8A);
    /* 0808CD8C  0808cd8c T adds r0,r0,r1 */
    g_cpu.R[15] = 0x0808CD8Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CD8C = 1u;
    _cyc_0808CD8C = 1u;
    uint32_t _rm_0808CD8C = g_cpu.R[1];
    uint32_t _op2_0808CD8C;
    uint32_t _co_0808CD8C;
    _op2_0808CD8C = _rm_0808CD8C;
    _co_0808CD8C = cpsr_c();
    uint32_t _rn_0808CD8C = g_cpu.R[0];
    uint32_t _r_0808CD8C;
    _r_0808CD8C = _rn_0808CD8C + _op2_0808CD8C;
    arm_set_nzcv_add(_rn_0808CD8C, _op2_0808CD8C, _r_0808CD8C);
    g_cpu.R[0] = _r_0808CD8C;
    g_cpu.R[15] = 0x0808CD8Eu;
    runtime_tick(_cyc_0808CD8C);
    /* 0808CD8E  0808cd8e T ldrh r0,[r0] */
    g_cpu.R[15] = 0x0808CD8Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CD8E = 1u;
    _cyc_0808CD8E = 2u;
    uint32_t _base_0808CD8E = g_cpu.R[0];
    uint32_t _off_0808CD8E;
    _off_0808CD8E = 0x00000000u;
    uint32_t _ea_0808CD8E = _base_0808CD8E + _off_0808CD8E;
    uint32_t _post_0808CD8E = _base_0808CD8E + _off_0808CD8E;
    _cyc_0808CD8E += runtime_mem_cycles(_ea_0808CD8E, 2u, 0u);
    uint32_t _v_0808CD8E;
    { uint32_t _h = bus_read_u16(_ea_0808CD8E & ~1u); if (_ea_0808CD8E & 1u) _v_0808CD8E = ((_h >> 8) | (_h << 24)); else _v_0808CD8E = _h; }
    g_cpu.R[0] = _v_0808CD8E;
    g_cpu.R[15] = 0x0808CD90u;
    runtime_tick(_cyc_0808CD8E);
    /* 0808CD90  0808cd90 T strh r0,[r4,#0x2] */
    g_cpu.R[15] = 0x0808CD90u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CD90 = 1u;
    _cyc_0808CD90 = 1u;
    uint32_t _base_0808CD90 = g_cpu.R[4];
    uint32_t _off_0808CD90;
    _off_0808CD90 = 0x00000002u;
    uint32_t _ea_0808CD90 = _base_0808CD90 + _off_0808CD90;
    uint32_t _post_0808CD90 = _base_0808CD90 + _off_0808CD90;
    _cyc_0808CD90 += runtime_mem_cycles(_ea_0808CD90, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CD90u, _ea_0808CD90 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0808CD90 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0808CD92u;
    runtime_tick(_cyc_0808CD90);
    /* 0808CD92  0808cd92 T movs r0,r0,lsl #16 */
    g_cpu.R[15] = 0x0808CD92u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CD92 = 1u;
    _cyc_0808CD92 = 1u;
    uint32_t _rm_0808CD92 = g_cpu.R[0];
    uint32_t _op2_0808CD92;
    uint32_t _co_0808CD92;
    _op2_0808CD92 = _rm_0808CD92 << 16;
    _co_0808CD92 = (_rm_0808CD92 >> 16) & 1u;
    uint32_t _r_0808CD92;
    _r_0808CD92 = _op2_0808CD92;
    arm_set_nzc_logic(_r_0808CD92, _co_0808CD92);
    g_cpu.R[0] = _r_0808CD92;
    g_cpu.R[15] = 0x0808CD94u;
    runtime_tick(_cyc_0808CD92);
    /* 0808CD94  0808cd94 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x0808CD94u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CD94 = 1u;
    _cyc_0808CD94 = 1u;
    uint32_t _rn_0808CD94 = g_cpu.R[0];
    uint32_t _r_0808CD94;
    _r_0808CD94 = _rn_0808CD94 - 0x00000000u;
    arm_set_nzcv_sub(_rn_0808CD94, 0x00000000u, _r_0808CD94);
    g_cpu.R[15] = 0x0808CD96u;
    runtime_tick(_cyc_0808CD94);
    /* 0808CD96  0808cd96 T beq 0x0808cd9e */
    g_cpu.R[15] = 0x0808CD96u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CD96 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808CD96 = 3u;
        g_cpu.R[15] = 0x0808CD9Eu;
        runtime_tick(_cyc_0808CD96);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808CD9E);
    }
    g_cpu.R[15] = 0x0808CD98u;
    runtime_tick(_cyc_0808CD96);
    /* 0808CD98  0808cd98 T ldrh r0,[r4,#0x2] */
    g_cpu.R[15] = 0x0808CD98u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CD98 = 1u;
    _cyc_0808CD98 = 2u;
    uint32_t _base_0808CD98 = g_cpu.R[4];
    uint32_t _off_0808CD98;
    _off_0808CD98 = 0x00000002u;
    uint32_t _ea_0808CD98 = _base_0808CD98 + _off_0808CD98;
    uint32_t _post_0808CD98 = _base_0808CD98 + _off_0808CD98;
    _cyc_0808CD98 += runtime_mem_cycles(_ea_0808CD98, 2u, 0u);
    uint32_t _v_0808CD98;
    { uint32_t _h = bus_read_u16(_ea_0808CD98 & ~1u); if (_ea_0808CD98 & 1u) _v_0808CD98 = ((_h >> 8) | (_h << 24)); else _v_0808CD98 = _h; }
    g_cpu.R[0] = _v_0808CD98;
    g_cpu.R[15] = 0x0808CD9Au;
    runtime_tick(_cyc_0808CD98);
    /* 0808CD9A  0808cd9a T bl.hi 0x08005d9e */
    g_cpu.R[15] = 0x0808CD9Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CD9A = 1u;
    _cyc_0808CD9A = 1u;
    g_cpu.R[14] = 0x08005D9Eu;
    g_cpu.R[15] = 0x0808CD9Cu;
    runtime_tick(_cyc_0808CD9A);
    /* 0808CD9C  0808cd9c T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0808CD9Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CD9C = 1u;
    _cyc_0808CD9C = 3u;
    uint32_t _blt_0808CD9C = (g_cpu.R[14] + 0x000000E2u) & ~1u;
    g_cpu.R[14] = 0x0808CD9Fu;
    g_cpu.R[15] = _blt_0808CD9C;
    runtime_call_push_return(0x0808CD9Eu);
    runtime_tick(_cyc_0808CD9C);
    _cyc_0808CD9C = 0u;
    runtime_dispatch(_blt_0808CD9C);
    if (g_cpu.R[15] != 0x0808CD9Eu) { runtime_call_cancel_return(0x0808CD9Eu); return; }
    g_cpu.R[15] = 0x0808CD9Eu;
    runtime_tick(_cyc_0808CD9C);
    /* fall-through to 0x0808CD9E */
    g_cpu.R[15] = 0x0808CD9Eu;
    runtime_dispatch(0x0808CD9Eu);
    return;
}

/* 0x0808CD9E  mode=thumb  end=0x0808CDA8  branches=3 */


/* 0x0808CDB4 thumb */
void gf_autojt_0808CD58_01(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808CDB4u);
    /* 0808CDB4  0808cdb4 T ldrh r1,[r4,#0x2] */
    g_cpu.R[15] = 0x0808CDB4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CDB4 = 1u;
    _cyc_0808CDB4 = 2u;
    uint32_t _base_0808CDB4 = g_cpu.R[4];
    uint32_t _off_0808CDB4;
    _off_0808CDB4 = 0x00000002u;
    uint32_t _ea_0808CDB4 = _base_0808CDB4 + _off_0808CDB4;
    uint32_t _post_0808CDB4 = _base_0808CDB4 + _off_0808CDB4;
    _cyc_0808CDB4 += runtime_mem_cycles(_ea_0808CDB4, 2u, 0u);
    uint32_t _v_0808CDB4;
    { uint32_t _h = bus_read_u16(_ea_0808CDB4 & ~1u); if (_ea_0808CDB4 & 1u) _v_0808CDB4 = ((_h >> 8) | (_h << 24)); else _v_0808CDB4 = _h; }
    g_cpu.R[1] = _v_0808CDB4;
    g_cpu.R[15] = 0x0808CDB6u;
    runtime_tick(_cyc_0808CDB4);
    /* 0808CDB6  0808cdb6 T ldr r0,[r15,#0x8] */
    g_cpu.R[15] = 0x0808CDB6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CDB6 = 1u;
    _cyc_0808CDB6 = 2u;
    uint32_t _base_0808CDB6 = 0x0808CDBAu & ~3u;
    uint32_t _off_0808CDB6;
    _off_0808CDB6 = 0x00000008u;
    uint32_t _ea_0808CDB6 = _base_0808CDB6 + _off_0808CDB6;
    uint32_t _post_0808CDB6 = _base_0808CDB6 + _off_0808CDB6;
    _cyc_0808CDB6 += runtime_mem_cycles(_ea_0808CDB6, 4u, 0u);
    uint32_t _v_0808CDB6;
    { uint32_t _w = bus_read_u32(_ea_0808CDB6 & ~3u); uint32_t _rot = (_ea_0808CDB6 & 3u) * 8u; _v_0808CDB6 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0808CDB6;
    g_cpu.R[15] = 0x0808CDB8u;
    runtime_tick(_cyc_0808CDB6);
    /* 0808CDB8  0808cdb8 T str r0,[r13] */
    g_cpu.R[15] = 0x0808CDB8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CDB8 = 1u;
    _cyc_0808CDB8 = 1u;
    uint32_t _base_0808CDB8 = g_cpu.R[13];
    uint32_t _off_0808CDB8;
    _off_0808CDB8 = 0x00000000u;
    uint32_t _ea_0808CDB8 = _base_0808CDB8 + _off_0808CDB8;
    uint32_t _post_0808CDB8 = _base_0808CDB8 + _off_0808CDB8;
    _cyc_0808CDB8 += runtime_mem_cycles(_ea_0808CDB8, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CDB8u, _ea_0808CDB8 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_0808CDB8 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0808CDBAu;
    runtime_tick(_cyc_0808CDB8);
    /* 0808CDBA  0808cdba T movs r0,#0x0 */
    g_cpu.R[15] = 0x0808CDBAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CDBA = 1u;
    _cyc_0808CDBA = 1u;
    uint32_t _r_0808CDBA;
    _r_0808CDBA = 0x00000000u;
    arm_set_nzc_logic(_r_0808CDBA, cpsr_c());
    g_cpu.R[0] = _r_0808CDBA;
    g_cpu.R[15] = 0x0808CDBCu;
    runtime_tick(_cyc_0808CDBA);
    /* 0808CDBC  0808cdbc T movs r2,#0x4 */
    g_cpu.R[15] = 0x0808CDBCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CDBC = 1u;
    _cyc_0808CDBC = 1u;
    uint32_t _r_0808CDBC;
    _r_0808CDBC = 0x00000004u;
    arm_set_nzc_logic(_r_0808CDBC, cpsr_c());
    g_cpu.R[2] = _r_0808CDBC;
    g_cpu.R[15] = 0x0808CDBEu;
    runtime_tick(_cyc_0808CDBC);
    /* 0808CDBE  0808cdbe T b 0x0808cdde */
    g_cpu.R[15] = 0x0808CDBEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CDBE = 1u;
    _cyc_0808CDBE = 3u;
    g_cpu.R[15] = 0x0808CDDEu;
    runtime_tick(_cyc_0808CDBE);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808CDDE);
    g_cpu.R[15] = 0x0808CDC0u;
    runtime_tick(_cyc_0808CDBE);
    /* fall-through to 0x0808CDC0 */
    g_cpu.R[15] = 0x0808CDC0u;
    runtime_dispatch(0x0808CDC0u);
    return;
}

/* 0x0808CDD4  mode=thumb  end=0x0808CDDE  branches=3 */


/* 0x0808CDC4 thumb */
void gf_autojt_0808CD58_02(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808CDC4u);
    /* 0808CDC4  0808cdc4 T ldrh r1,[r4,#0x2] */
    g_cpu.R[15] = 0x0808CDC4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CDC4 = 1u;
    _cyc_0808CDC4 = 2u;
    uint32_t _base_0808CDC4 = g_cpu.R[4];
    uint32_t _off_0808CDC4;
    _off_0808CDC4 = 0x00000002u;
    uint32_t _ea_0808CDC4 = _base_0808CDC4 + _off_0808CDC4;
    uint32_t _post_0808CDC4 = _base_0808CDC4 + _off_0808CDC4;
    _cyc_0808CDC4 += runtime_mem_cycles(_ea_0808CDC4, 2u, 0u);
    uint32_t _v_0808CDC4;
    { uint32_t _h = bus_read_u16(_ea_0808CDC4 & ~1u); if (_ea_0808CDC4 & 1u) _v_0808CDC4 = ((_h >> 8) | (_h << 24)); else _v_0808CDC4 = _h; }
    g_cpu.R[1] = _v_0808CDC4;
    g_cpu.R[15] = 0x0808CDC6u;
    runtime_tick(_cyc_0808CDC4);
    /* 0808CDC6  0808cdc6 T ldr r0,[r15,#0x8] */
    g_cpu.R[15] = 0x0808CDC6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CDC6 = 1u;
    _cyc_0808CDC6 = 2u;
    uint32_t _base_0808CDC6 = 0x0808CDCAu & ~3u;
    uint32_t _off_0808CDC6;
    _off_0808CDC6 = 0x00000008u;
    uint32_t _ea_0808CDC6 = _base_0808CDC6 + _off_0808CDC6;
    uint32_t _post_0808CDC6 = _base_0808CDC6 + _off_0808CDC6;
    _cyc_0808CDC6 += runtime_mem_cycles(_ea_0808CDC6, 4u, 0u);
    uint32_t _v_0808CDC6;
    { uint32_t _w = bus_read_u32(_ea_0808CDC6 & ~3u); uint32_t _rot = (_ea_0808CDC6 & 3u) * 8u; _v_0808CDC6 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0808CDC6;
    g_cpu.R[15] = 0x0808CDC8u;
    runtime_tick(_cyc_0808CDC6);
    /* 0808CDC8  0808cdc8 T str r0,[r13] */
    g_cpu.R[15] = 0x0808CDC8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CDC8 = 1u;
    _cyc_0808CDC8 = 1u;
    uint32_t _base_0808CDC8 = g_cpu.R[13];
    uint32_t _off_0808CDC8;
    _off_0808CDC8 = 0x00000000u;
    uint32_t _ea_0808CDC8 = _base_0808CDC8 + _off_0808CDC8;
    uint32_t _post_0808CDC8 = _base_0808CDC8 + _off_0808CDC8;
    _cyc_0808CDC8 += runtime_mem_cycles(_ea_0808CDC8, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CDC8u, _ea_0808CDC8 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_0808CDC8 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0808CDCAu;
    runtime_tick(_cyc_0808CDC8);
    /* 0808CDCA  0808cdca T movs r0,#0x0 */
    g_cpu.R[15] = 0x0808CDCAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CDCA = 1u;
    _cyc_0808CDCA = 1u;
    uint32_t _r_0808CDCA;
    _r_0808CDCA = 0x00000000u;
    arm_set_nzc_logic(_r_0808CDCA, cpsr_c());
    g_cpu.R[0] = _r_0808CDCA;
    g_cpu.R[15] = 0x0808CDCCu;
    runtime_tick(_cyc_0808CDCA);
    /* 0808CDCC  0808cdcc T movs r2,#0xc */
    g_cpu.R[15] = 0x0808CDCCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CDCC = 1u;
    _cyc_0808CDCC = 1u;
    uint32_t _r_0808CDCC;
    _r_0808CDCC = 0x0000000Cu;
    arm_set_nzc_logic(_r_0808CDCC, cpsr_c());
    g_cpu.R[2] = _r_0808CDCC;
    g_cpu.R[15] = 0x0808CDCEu;
    runtime_tick(_cyc_0808CDCC);
    /* 0808CDCE  0808cdce T b 0x0808cdde */
    g_cpu.R[15] = 0x0808CDCEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CDCE = 1u;
    _cyc_0808CDCE = 3u;
    g_cpu.R[15] = 0x0808CDDEu;
    runtime_tick(_cyc_0808CDCE);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808CDDE);
    g_cpu.R[15] = 0x0808CDD0u;
    runtime_tick(_cyc_0808CDCE);
    /* fall-through to 0x0808CDD0 */
    g_cpu.R[15] = 0x0808CDD0u;
    runtime_dispatch(0x0808CDD0u);
    return;
}

/* 0x0808CDDE  mode=thumb  end=0x0808CDE4  branches=3 */


/* 0x0808CDD4 thumb */
void gf_autojt_0808CD58_03(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808CDD4u);
    /* 0808CDD4  0808cdd4 T ldrh r1,[r4,#0x2] */
    g_cpu.R[15] = 0x0808CDD4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CDD4 = 1u;
    _cyc_0808CDD4 = 2u;
    uint32_t _base_0808CDD4 = g_cpu.R[4];
    uint32_t _off_0808CDD4;
    _off_0808CDD4 = 0x00000002u;
    uint32_t _ea_0808CDD4 = _base_0808CDD4 + _off_0808CDD4;
    uint32_t _post_0808CDD4 = _base_0808CDD4 + _off_0808CDD4;
    _cyc_0808CDD4 += runtime_mem_cycles(_ea_0808CDD4, 2u, 0u);
    uint32_t _v_0808CDD4;
    { uint32_t _h = bus_read_u16(_ea_0808CDD4 & ~1u); if (_ea_0808CDD4 & 1u) _v_0808CDD4 = ((_h >> 8) | (_h << 24)); else _v_0808CDD4 = _h; }
    g_cpu.R[1] = _v_0808CDD4;
    g_cpu.R[15] = 0x0808CDD6u;
    runtime_tick(_cyc_0808CDD4);
    /* 0808CDD6  0808cdd6 T ldr r0,[r15,#0x14] */
    g_cpu.R[15] = 0x0808CDD6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CDD6 = 1u;
    _cyc_0808CDD6 = 2u;
    uint32_t _base_0808CDD6 = 0x0808CDDAu & ~3u;
    uint32_t _off_0808CDD6;
    _off_0808CDD6 = 0x00000014u;
    uint32_t _ea_0808CDD6 = _base_0808CDD6 + _off_0808CDD6;
    uint32_t _post_0808CDD6 = _base_0808CDD6 + _off_0808CDD6;
    _cyc_0808CDD6 += runtime_mem_cycles(_ea_0808CDD6, 4u, 0u);
    uint32_t _v_0808CDD6;
    { uint32_t _w = bus_read_u32(_ea_0808CDD6 & ~3u); uint32_t _rot = (_ea_0808CDD6 & 3u) * 8u; _v_0808CDD6 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0808CDD6;
    g_cpu.R[15] = 0x0808CDD8u;
    runtime_tick(_cyc_0808CDD6);
    /* 0808CDD8  0808cdd8 T str r0,[r13] */
    g_cpu.R[15] = 0x0808CDD8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CDD8 = 1u;
    _cyc_0808CDD8 = 1u;
    uint32_t _base_0808CDD8 = g_cpu.R[13];
    uint32_t _off_0808CDD8;
    _off_0808CDD8 = 0x00000000u;
    uint32_t _ea_0808CDD8 = _base_0808CDD8 + _off_0808CDD8;
    uint32_t _post_0808CDD8 = _base_0808CDD8 + _off_0808CDD8;
    _cyc_0808CDD8 += runtime_mem_cycles(_ea_0808CDD8, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CDD8u, _ea_0808CDD8 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_0808CDD8 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0808CDDAu;
    runtime_tick(_cyc_0808CDD8);
    /* 0808CDDA  0808cdda T movs r0,#0x0 */
    g_cpu.R[15] = 0x0808CDDAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CDDA = 1u;
    _cyc_0808CDDA = 1u;
    uint32_t _r_0808CDDA;
    _r_0808CDDA = 0x00000000u;
    arm_set_nzc_logic(_r_0808CDDA, cpsr_c());
    g_cpu.R[0] = _r_0808CDDA;
    g_cpu.R[15] = 0x0808CDDCu;
    runtime_tick(_cyc_0808CDDA);
    /* 0808CDDC  0808cddc T movs r2,#0x14 */
    g_cpu.R[15] = 0x0808CDDCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CDDC = 1u;
    _cyc_0808CDDC = 1u;
    uint32_t _r_0808CDDC;
    _r_0808CDDC = 0x00000014u;
    arm_set_nzc_logic(_r_0808CDDC, cpsr_c());
    g_cpu.R[2] = _r_0808CDDC;
    g_cpu.R[15] = 0x0808CDDEu;
    runtime_tick(_cyc_0808CDDC);
    /* fall-through to 0x0808CDDE */
    g_cpu.R[15] = 0x0808CDDEu;
    runtime_dispatch(0x0808CDDEu);
    return;
}

/* 0x0808CDE4  mode=thumb  end=0x0808CDEC  branches=1 */


/* 0x0808CDF0 thumb */
void gf_autojt_0808CD58_04(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808CDF0u);
    /* 0808CDF0  0808cdf0 T ldr r0,[r15,#0x18] */
    g_cpu.R[15] = 0x0808CDF0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CDF0 = 1u;
    _cyc_0808CDF0 = 2u;
    uint32_t _base_0808CDF0 = 0x0808CDF4u & ~3u;
    uint32_t _off_0808CDF0;
    _off_0808CDF0 = 0x00000018u;
    uint32_t _ea_0808CDF0 = _base_0808CDF0 + _off_0808CDF0;
    uint32_t _post_0808CDF0 = _base_0808CDF0 + _off_0808CDF0;
    _cyc_0808CDF0 += runtime_mem_cycles(_ea_0808CDF0, 4u, 0u);
    uint32_t _v_0808CDF0;
    { uint32_t _w = bus_read_u32(_ea_0808CDF0 & ~3u); uint32_t _rot = (_ea_0808CDF0 & 3u) * 8u; _v_0808CDF0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0808CDF0;
    g_cpu.R[15] = 0x0808CDF2u;
    runtime_tick(_cyc_0808CDF0);
    /* 0808CDF2  0808cdf2 T ldr r2,[r15,#0x1c] */
    g_cpu.R[15] = 0x0808CDF2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CDF2 = 1u;
    _cyc_0808CDF2 = 2u;
    uint32_t _base_0808CDF2 = 0x0808CDF6u & ~3u;
    uint32_t _off_0808CDF2;
    _off_0808CDF2 = 0x0000001Cu;
    uint32_t _ea_0808CDF2 = _base_0808CDF2 + _off_0808CDF2;
    uint32_t _post_0808CDF2 = _base_0808CDF2 + _off_0808CDF2;
    _cyc_0808CDF2 += runtime_mem_cycles(_ea_0808CDF2, 4u, 0u);
    uint32_t _v_0808CDF2;
    { uint32_t _w = bus_read_u32(_ea_0808CDF2 & ~3u); uint32_t _rot = (_ea_0808CDF2 & 3u) * 8u; _v_0808CDF2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_0808CDF2;
    g_cpu.R[15] = 0x0808CDF4u;
    runtime_tick(_cyc_0808CDF2);
    /* 0808CDF4  0808cdf4 T adds r0,r0,r2 */
    g_cpu.R[15] = 0x0808CDF4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CDF4 = 1u;
    _cyc_0808CDF4 = 1u;
    uint32_t _rm_0808CDF4 = g_cpu.R[2];
    uint32_t _op2_0808CDF4;
    uint32_t _co_0808CDF4;
    _op2_0808CDF4 = _rm_0808CDF4;
    _co_0808CDF4 = cpsr_c();
    uint32_t _rn_0808CDF4 = g_cpu.R[0];
    uint32_t _r_0808CDF4;
    _r_0808CDF4 = _rn_0808CDF4 + _op2_0808CDF4;
    arm_set_nzcv_add(_rn_0808CDF4, _op2_0808CDF4, _r_0808CDF4);
    g_cpu.R[0] = _r_0808CDF4;
    g_cpu.R[15] = 0x0808CDF6u;
    runtime_tick(_cyc_0808CDF4);
    /* 0808CDF6  0808cdf6 T ldrh r0,[r0] */
    g_cpu.R[15] = 0x0808CDF6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CDF6 = 1u;
    _cyc_0808CDF6 = 2u;
    uint32_t _base_0808CDF6 = g_cpu.R[0];
    uint32_t _off_0808CDF6;
    _off_0808CDF6 = 0x00000000u;
    uint32_t _ea_0808CDF6 = _base_0808CDF6 + _off_0808CDF6;
    uint32_t _post_0808CDF6 = _base_0808CDF6 + _off_0808CDF6;
    _cyc_0808CDF6 += runtime_mem_cycles(_ea_0808CDF6, 2u, 0u);
    uint32_t _v_0808CDF6;
    { uint32_t _h = bus_read_u16(_ea_0808CDF6 & ~1u); if (_ea_0808CDF6 & 1u) _v_0808CDF6 = ((_h >> 8) | (_h << 24)); else _v_0808CDF6 = _h; }
    g_cpu.R[0] = _v_0808CDF6;
    g_cpu.R[15] = 0x0808CDF8u;
    runtime_tick(_cyc_0808CDF6);
    /* 0808CDF8  0808cdf8 T strh r0,[r4,#0x4] */
    g_cpu.R[15] = 0x0808CDF8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CDF8 = 1u;
    _cyc_0808CDF8 = 1u;
    uint32_t _base_0808CDF8 = g_cpu.R[4];
    uint32_t _off_0808CDF8;
    _off_0808CDF8 = 0x00000004u;
    uint32_t _ea_0808CDF8 = _base_0808CDF8 + _off_0808CDF8;
    uint32_t _post_0808CDF8 = _base_0808CDF8 + _off_0808CDF8;
    _cyc_0808CDF8 += runtime_mem_cycles(_ea_0808CDF8, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CDF8u, _ea_0808CDF8 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0808CDF8 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0808CDFAu;
    runtime_tick(_cyc_0808CDF8);
    /* 0808CDFA  0808cdfa T movs r0,#0x82 */
    g_cpu.R[15] = 0x0808CDFAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CDFA = 1u;
    _cyc_0808CDFA = 1u;
    uint32_t _r_0808CDFA;
    _r_0808CDFA = 0x00000082u;
    arm_set_nzc_logic(_r_0808CDFA, cpsr_c());
    g_cpu.R[0] = _r_0808CDFA;
    g_cpu.R[15] = 0x0808CDFCu;
    runtime_tick(_cyc_0808CDFA);
    /* 0808CDFC  0808cdfc T str r0,[r4,#0x8] */
    g_cpu.R[15] = 0x0808CDFCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CDFC = 1u;
    _cyc_0808CDFC = 1u;
    uint32_t _base_0808CDFC = g_cpu.R[4];
    uint32_t _off_0808CDFC;
    _off_0808CDFC = 0x00000008u;
    uint32_t _ea_0808CDFC = _base_0808CDFC + _off_0808CDFC;
    uint32_t _post_0808CDFC = _base_0808CDFC + _off_0808CDFC;
    _cyc_0808CDFC += runtime_mem_cycles(_ea_0808CDFC, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CDFCu, _ea_0808CDFC & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_0808CDFC & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0808CDFEu;
    runtime_tick(_cyc_0808CDFC);
    /* 0808CDFE  0808cdfe T ldrh r1,[r4,#0x2] */
    g_cpu.R[15] = 0x0808CDFEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CDFE = 1u;
    _cyc_0808CDFE = 2u;
    uint32_t _base_0808CDFE = g_cpu.R[4];
    uint32_t _off_0808CDFE;
    _off_0808CDFE = 0x00000002u;
    uint32_t _ea_0808CDFE = _base_0808CDFE + _off_0808CDFE;
    uint32_t _post_0808CDFE = _base_0808CDFE + _off_0808CDFE;
    _cyc_0808CDFE += runtime_mem_cycles(_ea_0808CDFE, 2u, 0u);
    uint32_t _v_0808CDFE;
    { uint32_t _h = bus_read_u16(_ea_0808CDFE & ~1u); if (_ea_0808CDFE & 1u) _v_0808CDFE = ((_h >> 8) | (_h << 24)); else _v_0808CDFE = _h; }
    g_cpu.R[1] = _v_0808CDFE;
    g_cpu.R[15] = 0x0808CE00u;
    runtime_tick(_cyc_0808CDFE);
    /* 0808CE00  0808ce00 T ldr r0,[r15,#0x10] */
    g_cpu.R[15] = 0x0808CE00u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE00 = 1u;
    _cyc_0808CE00 = 2u;
    uint32_t _base_0808CE00 = 0x0808CE04u & ~3u;
    uint32_t _off_0808CE00;
    _off_0808CE00 = 0x00000010u;
    uint32_t _ea_0808CE00 = _base_0808CE00 + _off_0808CE00;
    uint32_t _post_0808CE00 = _base_0808CE00 + _off_0808CE00;
    _cyc_0808CE00 += runtime_mem_cycles(_ea_0808CE00, 4u, 0u);
    uint32_t _v_0808CE00;
    { uint32_t _w = bus_read_u32(_ea_0808CE00 & ~3u); uint32_t _rot = (_ea_0808CE00 & 3u) * 8u; _v_0808CE00 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0808CE00;
    g_cpu.R[15] = 0x0808CE02u;
    runtime_tick(_cyc_0808CE00);
    /* 0808CE02  0808ce02 T str r0,[r13] */
    g_cpu.R[15] = 0x0808CE02u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE02 = 1u;
    _cyc_0808CE02 = 1u;
    uint32_t _base_0808CE02 = g_cpu.R[13];
    uint32_t _off_0808CE02;
    _off_0808CE02 = 0x00000000u;
    uint32_t _ea_0808CE02 = _base_0808CE02 + _off_0808CE02;
    uint32_t _post_0808CE02 = _base_0808CE02 + _off_0808CE02;
    _cyc_0808CE02 += runtime_mem_cycles(_ea_0808CE02, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CE02u, _ea_0808CE02 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_0808CE02 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0808CE04u;
    runtime_tick(_cyc_0808CE02);
    /* 0808CE04  0808ce04 T movs r0,#0x0 */
    g_cpu.R[15] = 0x0808CE04u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE04 = 1u;
    _cyc_0808CE04 = 1u;
    uint32_t _r_0808CE04;
    _r_0808CE04 = 0x00000000u;
    arm_set_nzc_logic(_r_0808CE04, cpsr_c());
    g_cpu.R[0] = _r_0808CE04;
    g_cpu.R[15] = 0x0808CE06u;
    runtime_tick(_cyc_0808CE04);
    /* 0808CE06  0808ce06 T movs r2,#0x8 */
    g_cpu.R[15] = 0x0808CE06u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE06 = 1u;
    _cyc_0808CE06 = 1u;
    uint32_t _r_0808CE06;
    _r_0808CE06 = 0x00000008u;
    arm_set_nzc_logic(_r_0808CE06, cpsr_c());
    g_cpu.R[2] = _r_0808CE06;
    g_cpu.R[15] = 0x0808CE08u;
    runtime_tick(_cyc_0808CE06);
    /* 0808CE08  0808ce08 T b 0x0808ce7c */
    g_cpu.R[15] = 0x0808CE08u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE08 = 1u;
    _cyc_0808CE08 = 3u;
    g_cpu.R[15] = 0x0808CE7Cu;
    runtime_tick(_cyc_0808CE08);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808CE7C);
    g_cpu.R[15] = 0x0808CE0Au;
    runtime_tick(_cyc_0808CE08);
    /* fall-through to 0x0808CE0A */
    g_cpu.R[15] = 0x0808CE0Au;
    runtime_dispatch(0x0808CE0Au);
    return;
}

/* 0x0808CE18  mode=thumb  end=0x0808CE32  branches=1 */


/* 0x0808CE18 thumb */
void gf_autojt_0808CD58_05(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808CE18u);
    /* 0808CE18  0808ce18 T ldr r0,[r15,#0x18] */
    g_cpu.R[15] = 0x0808CE18u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE18 = 1u;
    _cyc_0808CE18 = 2u;
    uint32_t _base_0808CE18 = 0x0808CE1Cu & ~3u;
    uint32_t _off_0808CE18;
    _off_0808CE18 = 0x00000018u;
    uint32_t _ea_0808CE18 = _base_0808CE18 + _off_0808CE18;
    uint32_t _post_0808CE18 = _base_0808CE18 + _off_0808CE18;
    _cyc_0808CE18 += runtime_mem_cycles(_ea_0808CE18, 4u, 0u);
    uint32_t _v_0808CE18;
    { uint32_t _w = bus_read_u32(_ea_0808CE18 & ~3u); uint32_t _rot = (_ea_0808CE18 & 3u) * 8u; _v_0808CE18 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0808CE18;
    g_cpu.R[15] = 0x0808CE1Au;
    runtime_tick(_cyc_0808CE18);
    /* 0808CE1A  0808ce1a T ldr r3,[r15,#0x1c] */
    g_cpu.R[15] = 0x0808CE1Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE1A = 1u;
    _cyc_0808CE1A = 2u;
    uint32_t _base_0808CE1A = 0x0808CE1Eu & ~3u;
    uint32_t _off_0808CE1A;
    _off_0808CE1A = 0x0000001Cu;
    uint32_t _ea_0808CE1A = _base_0808CE1A + _off_0808CE1A;
    uint32_t _post_0808CE1A = _base_0808CE1A + _off_0808CE1A;
    _cyc_0808CE1A += runtime_mem_cycles(_ea_0808CE1A, 4u, 0u);
    uint32_t _v_0808CE1A;
    { uint32_t _w = bus_read_u32(_ea_0808CE1A & ~3u); uint32_t _rot = (_ea_0808CE1A & 3u) * 8u; _v_0808CE1A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_0808CE1A;
    g_cpu.R[15] = 0x0808CE1Cu;
    runtime_tick(_cyc_0808CE1A);
    /* 0808CE1C  0808ce1c T adds r0,r0,r3 */
    g_cpu.R[15] = 0x0808CE1Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE1C = 1u;
    _cyc_0808CE1C = 1u;
    uint32_t _rm_0808CE1C = g_cpu.R[3];
    uint32_t _op2_0808CE1C;
    uint32_t _co_0808CE1C;
    _op2_0808CE1C = _rm_0808CE1C;
    _co_0808CE1C = cpsr_c();
    uint32_t _rn_0808CE1C = g_cpu.R[0];
    uint32_t _r_0808CE1C;
    _r_0808CE1C = _rn_0808CE1C + _op2_0808CE1C;
    arm_set_nzcv_add(_rn_0808CE1C, _op2_0808CE1C, _r_0808CE1C);
    g_cpu.R[0] = _r_0808CE1C;
    g_cpu.R[15] = 0x0808CE1Eu;
    runtime_tick(_cyc_0808CE1C);
    /* 0808CE1E  0808ce1e T ldrh r0,[r0] */
    g_cpu.R[15] = 0x0808CE1Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE1E = 1u;
    _cyc_0808CE1E = 2u;
    uint32_t _base_0808CE1E = g_cpu.R[0];
    uint32_t _off_0808CE1E;
    _off_0808CE1E = 0x00000000u;
    uint32_t _ea_0808CE1E = _base_0808CE1E + _off_0808CE1E;
    uint32_t _post_0808CE1E = _base_0808CE1E + _off_0808CE1E;
    _cyc_0808CE1E += runtime_mem_cycles(_ea_0808CE1E, 2u, 0u);
    uint32_t _v_0808CE1E;
    { uint32_t _h = bus_read_u16(_ea_0808CE1E & ~1u); if (_ea_0808CE1E & 1u) _v_0808CE1E = ((_h >> 8) | (_h << 24)); else _v_0808CE1E = _h; }
    g_cpu.R[0] = _v_0808CE1E;
    g_cpu.R[15] = 0x0808CE20u;
    runtime_tick(_cyc_0808CE1E);
    /* 0808CE20  0808ce20 T strh r0,[r4,#0x4] */
    g_cpu.R[15] = 0x0808CE20u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE20 = 1u;
    _cyc_0808CE20 = 1u;
    uint32_t _base_0808CE20 = g_cpu.R[4];
    uint32_t _off_0808CE20;
    _off_0808CE20 = 0x00000004u;
    uint32_t _ea_0808CE20 = _base_0808CE20 + _off_0808CE20;
    uint32_t _post_0808CE20 = _base_0808CE20 + _off_0808CE20;
    _cyc_0808CE20 += runtime_mem_cycles(_ea_0808CE20, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CE20u, _ea_0808CE20 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0808CE20 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0808CE22u;
    runtime_tick(_cyc_0808CE20);
    /* 0808CE22  0808ce22 T movs r0,#0xc2 */
    g_cpu.R[15] = 0x0808CE22u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE22 = 1u;
    _cyc_0808CE22 = 1u;
    uint32_t _r_0808CE22;
    _r_0808CE22 = 0x000000C2u;
    arm_set_nzc_logic(_r_0808CE22, cpsr_c());
    g_cpu.R[0] = _r_0808CE22;
    g_cpu.R[15] = 0x0808CE24u;
    runtime_tick(_cyc_0808CE22);
    /* 0808CE24  0808ce24 T str r0,[r4,#0x8] */
    g_cpu.R[15] = 0x0808CE24u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE24 = 1u;
    _cyc_0808CE24 = 1u;
    uint32_t _base_0808CE24 = g_cpu.R[4];
    uint32_t _off_0808CE24;
    _off_0808CE24 = 0x00000008u;
    uint32_t _ea_0808CE24 = _base_0808CE24 + _off_0808CE24;
    uint32_t _post_0808CE24 = _base_0808CE24 + _off_0808CE24;
    _cyc_0808CE24 += runtime_mem_cycles(_ea_0808CE24, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CE24u, _ea_0808CE24 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_0808CE24 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0808CE26u;
    runtime_tick(_cyc_0808CE24);
    /* 0808CE26  0808ce26 T ldrh r1,[r4,#0x2] */
    g_cpu.R[15] = 0x0808CE26u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE26 = 1u;
    _cyc_0808CE26 = 2u;
    uint32_t _base_0808CE26 = g_cpu.R[4];
    uint32_t _off_0808CE26;
    _off_0808CE26 = 0x00000002u;
    uint32_t _ea_0808CE26 = _base_0808CE26 + _off_0808CE26;
    uint32_t _post_0808CE26 = _base_0808CE26 + _off_0808CE26;
    _cyc_0808CE26 += runtime_mem_cycles(_ea_0808CE26, 2u, 0u);
    uint32_t _v_0808CE26;
    { uint32_t _h = bus_read_u16(_ea_0808CE26 & ~1u); if (_ea_0808CE26 & 1u) _v_0808CE26 = ((_h >> 8) | (_h << 24)); else _v_0808CE26 = _h; }
    g_cpu.R[1] = _v_0808CE26;
    g_cpu.R[15] = 0x0808CE28u;
    runtime_tick(_cyc_0808CE26);
    /* 0808CE28  0808ce28 T ldr r0,[r15,#0x10] */
    g_cpu.R[15] = 0x0808CE28u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE28 = 1u;
    _cyc_0808CE28 = 2u;
    uint32_t _base_0808CE28 = 0x0808CE2Cu & ~3u;
    uint32_t _off_0808CE28;
    _off_0808CE28 = 0x00000010u;
    uint32_t _ea_0808CE28 = _base_0808CE28 + _off_0808CE28;
    uint32_t _post_0808CE28 = _base_0808CE28 + _off_0808CE28;
    _cyc_0808CE28 += runtime_mem_cycles(_ea_0808CE28, 4u, 0u);
    uint32_t _v_0808CE28;
    { uint32_t _w = bus_read_u32(_ea_0808CE28 & ~3u); uint32_t _rot = (_ea_0808CE28 & 3u) * 8u; _v_0808CE28 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0808CE28;
    g_cpu.R[15] = 0x0808CE2Au;
    runtime_tick(_cyc_0808CE28);
    /* 0808CE2A  0808ce2a T str r0,[r13] */
    g_cpu.R[15] = 0x0808CE2Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE2A = 1u;
    _cyc_0808CE2A = 1u;
    uint32_t _base_0808CE2A = g_cpu.R[13];
    uint32_t _off_0808CE2A;
    _off_0808CE2A = 0x00000000u;
    uint32_t _ea_0808CE2A = _base_0808CE2A + _off_0808CE2A;
    uint32_t _post_0808CE2A = _base_0808CE2A + _off_0808CE2A;
    _cyc_0808CE2A += runtime_mem_cycles(_ea_0808CE2A, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CE2Au, _ea_0808CE2A & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_0808CE2A & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0808CE2Cu;
    runtime_tick(_cyc_0808CE2A);
    /* 0808CE2C  0808ce2c T movs r0,#0x0 */
    g_cpu.R[15] = 0x0808CE2Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE2C = 1u;
    _cyc_0808CE2C = 1u;
    uint32_t _r_0808CE2C;
    _r_0808CE2C = 0x00000000u;
    arm_set_nzc_logic(_r_0808CE2C, cpsr_c());
    g_cpu.R[0] = _r_0808CE2C;
    g_cpu.R[15] = 0x0808CE2Eu;
    runtime_tick(_cyc_0808CE2C);
    /* 0808CE2E  0808ce2e T movs r2,#0xc */
    g_cpu.R[15] = 0x0808CE2Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE2E = 1u;
    _cyc_0808CE2E = 1u;
    uint32_t _r_0808CE2E;
    _r_0808CE2E = 0x0000000Cu;
    arm_set_nzc_logic(_r_0808CE2E, cpsr_c());
    g_cpu.R[2] = _r_0808CE2E;
    g_cpu.R[15] = 0x0808CE30u;
    runtime_tick(_cyc_0808CE2E);
    /* 0808CE30  0808ce30 T b 0x0808ce7c */
    g_cpu.R[15] = 0x0808CE30u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE30 = 1u;
    _cyc_0808CE30 = 3u;
    g_cpu.R[15] = 0x0808CE7Cu;
    runtime_tick(_cyc_0808CE30);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808CE7C);
    g_cpu.R[15] = 0x0808CE32u;
    runtime_tick(_cyc_0808CE30);
    /* fall-through to 0x0808CE32 */
    g_cpu.R[15] = 0x0808CE32u;
    runtime_dispatch(0x0808CE32u);
    return;
}

/* 0x0808CE40  mode=thumb  end=0x0808CE50  branches=1 */


/* 0x0808CE40 thumb */
void gf_autojt_0808CD58_06(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808CE40u);
    /* 0808CE40  0808ce40 T ldr r0,[r15,#0xc] */
    g_cpu.R[15] = 0x0808CE40u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE40 = 1u;
    _cyc_0808CE40 = 2u;
    uint32_t _base_0808CE40 = 0x0808CE44u & ~3u;
    uint32_t _off_0808CE40;
    _off_0808CE40 = 0x0000000Cu;
    uint32_t _ea_0808CE40 = _base_0808CE40 + _off_0808CE40;
    uint32_t _post_0808CE40 = _base_0808CE40 + _off_0808CE40;
    _cyc_0808CE40 += runtime_mem_cycles(_ea_0808CE40, 4u, 0u);
    uint32_t _v_0808CE40;
    { uint32_t _w = bus_read_u32(_ea_0808CE40 & ~3u); uint32_t _rot = (_ea_0808CE40 & 3u) * 8u; _v_0808CE40 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0808CE40;
    g_cpu.R[15] = 0x0808CE42u;
    runtime_tick(_cyc_0808CE40);
    /* 0808CE42  0808ce42 T ldr r7,[r15,#0x10] */
    g_cpu.R[15] = 0x0808CE42u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE42 = 1u;
    _cyc_0808CE42 = 2u;
    uint32_t _base_0808CE42 = 0x0808CE46u & ~3u;
    uint32_t _off_0808CE42;
    _off_0808CE42 = 0x00000010u;
    uint32_t _ea_0808CE42 = _base_0808CE42 + _off_0808CE42;
    uint32_t _post_0808CE42 = _base_0808CE42 + _off_0808CE42;
    _cyc_0808CE42 += runtime_mem_cycles(_ea_0808CE42, 4u, 0u);
    uint32_t _v_0808CE42;
    { uint32_t _w = bus_read_u32(_ea_0808CE42 & ~3u); uint32_t _rot = (_ea_0808CE42 & 3u) * 8u; _v_0808CE42 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[7] = _v_0808CE42;
    g_cpu.R[15] = 0x0808CE44u;
    runtime_tick(_cyc_0808CE42);
    /* 0808CE44  0808ce44 T adds r0,r0,r7 */
    g_cpu.R[15] = 0x0808CE44u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE44 = 1u;
    _cyc_0808CE44 = 1u;
    uint32_t _rm_0808CE44 = g_cpu.R[7];
    uint32_t _op2_0808CE44;
    uint32_t _co_0808CE44;
    _op2_0808CE44 = _rm_0808CE44;
    _co_0808CE44 = cpsr_c();
    uint32_t _rn_0808CE44 = g_cpu.R[0];
    uint32_t _r_0808CE44;
    _r_0808CE44 = _rn_0808CE44 + _op2_0808CE44;
    arm_set_nzcv_add(_rn_0808CE44, _op2_0808CE44, _r_0808CE44);
    g_cpu.R[0] = _r_0808CE44;
    g_cpu.R[15] = 0x0808CE46u;
    runtime_tick(_cyc_0808CE44);
    /* 0808CE46  0808ce46 T ldrh r0,[r0] */
    g_cpu.R[15] = 0x0808CE46u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE46 = 1u;
    _cyc_0808CE46 = 2u;
    uint32_t _base_0808CE46 = g_cpu.R[0];
    uint32_t _off_0808CE46;
    _off_0808CE46 = 0x00000000u;
    uint32_t _ea_0808CE46 = _base_0808CE46 + _off_0808CE46;
    uint32_t _post_0808CE46 = _base_0808CE46 + _off_0808CE46;
    _cyc_0808CE46 += runtime_mem_cycles(_ea_0808CE46, 2u, 0u);
    uint32_t _v_0808CE46;
    { uint32_t _h = bus_read_u16(_ea_0808CE46 & ~1u); if (_ea_0808CE46 & 1u) _v_0808CE46 = ((_h >> 8) | (_h << 24)); else _v_0808CE46 = _h; }
    g_cpu.R[0] = _v_0808CE46;
    g_cpu.R[15] = 0x0808CE48u;
    runtime_tick(_cyc_0808CE46);
    /* 0808CE48  0808ce48 T strh r0,[r4,#0x4] */
    g_cpu.R[15] = 0x0808CE48u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE48 = 1u;
    _cyc_0808CE48 = 1u;
    uint32_t _base_0808CE48 = g_cpu.R[4];
    uint32_t _off_0808CE48;
    _off_0808CE48 = 0x00000004u;
    uint32_t _ea_0808CE48 = _base_0808CE48 + _off_0808CE48;
    uint32_t _post_0808CE48 = _base_0808CE48 + _off_0808CE48;
    _cyc_0808CE48 += runtime_mem_cycles(_ea_0808CE48, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CE48u, _ea_0808CE48 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0808CE48 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0808CE4Au;
    runtime_tick(_cyc_0808CE48);
    /* 0808CE4A  0808ce4a T movs r0,#0x3d */
    g_cpu.R[15] = 0x0808CE4Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE4A = 1u;
    _cyc_0808CE4A = 1u;
    uint32_t _r_0808CE4A;
    _r_0808CE4A = 0x0000003Du;
    arm_set_nzc_logic(_r_0808CE4A, cpsr_c());
    g_cpu.R[0] = _r_0808CE4A;
    g_cpu.R[15] = 0x0808CE4Cu;
    runtime_tick(_cyc_0808CE4A);
    /* 0808CE4C  0808ce4c T str r0,[r4,#0x8] */
    g_cpu.R[15] = 0x0808CE4Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE4C = 1u;
    _cyc_0808CE4C = 1u;
    uint32_t _base_0808CE4C = g_cpu.R[4];
    uint32_t _off_0808CE4C;
    _off_0808CE4C = 0x00000008u;
    uint32_t _ea_0808CE4C = _base_0808CE4C + _off_0808CE4C;
    uint32_t _post_0808CE4C = _base_0808CE4C + _off_0808CE4C;
    _cyc_0808CE4C += runtime_mem_cycles(_ea_0808CE4C, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CE4Cu, _ea_0808CE4C & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_0808CE4C & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0808CE4Eu;
    runtime_tick(_cyc_0808CE4C);
    /* 0808CE4E  0808ce4e T b 0x0808cf10 */
    g_cpu.R[15] = 0x0808CE4Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE4E = 1u;
    _cyc_0808CE4E = 3u;
    g_cpu.R[15] = 0x0808CF10u;
    runtime_tick(_cyc_0808CE4E);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808CF10);
    g_cpu.R[15] = 0x0808CE50u;
    runtime_tick(_cyc_0808CE4E);
    /* fall-through to 0x0808CE50 */
    g_cpu.R[15] = 0x0808CE50u;
    runtime_dispatch(0x0808CE50u);
    return;
}

/* 0x0808CE7C  mode=thumb  end=0x0808CE82  branches=3 */


/* 0x0808CE58 thumb */
void gf_autojt_0808CD58_07(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808CE58u);
    /* 0808CE58  0808ce58 T movs r0,#0x7 */
    g_cpu.R[15] = 0x0808CE58u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE58 = 1u;
    _cyc_0808CE58 = 1u;
    uint32_t _r_0808CE58;
    _r_0808CE58 = 0x00000007u;
    arm_set_nzc_logic(_r_0808CE58, cpsr_c());
    g_cpu.R[0] = _r_0808CE58;
    g_cpu.R[15] = 0x0808CE5Au;
    runtime_tick(_cyc_0808CE58);
    /* 0808CE5A  0808ce5a T str r0,[r4,#0x8] */
    g_cpu.R[15] = 0x0808CE5Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE5A = 1u;
    _cyc_0808CE5A = 1u;
    uint32_t _base_0808CE5A = g_cpu.R[4];
    uint32_t _off_0808CE5A;
    _off_0808CE5A = 0x00000008u;
    uint32_t _ea_0808CE5A = _base_0808CE5A + _off_0808CE5A;
    uint32_t _post_0808CE5A = _base_0808CE5A + _off_0808CE5A;
    _cyc_0808CE5A += runtime_mem_cycles(_ea_0808CE5A, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CE5Au, _ea_0808CE5A & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_0808CE5A & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0808CE5Cu;
    runtime_tick(_cyc_0808CE5A);
    /* 0808CE5C  0808ce5c T b 0x0808cf10 */
    g_cpu.R[15] = 0x0808CE5Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE5C = 1u;
    _cyc_0808CE5C = 3u;
    g_cpu.R[15] = 0x0808CF10u;
    runtime_tick(_cyc_0808CE5C);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808CF10);
    g_cpu.R[15] = 0x0808CE5Eu;
    runtime_tick(_cyc_0808CE5C);
    /* fall-through to 0x0808CE5E */
    g_cpu.R[15] = 0x0808CE5Eu;
    runtime_dispatch(0x0808CE5Eu);
    return;
}

/* 0x0808CE5E  mode=thumb  end=0x0808CE7C  branches=4 */


/* 0x0808CE5E thumb */
void gf_autojt_0808CD58_08(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808CE5Eu);
    /* 0808CE5E  0808ce5e T ldr r0,[r15,#0x24] */
    g_cpu.R[15] = 0x0808CE5Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE5E = 1u;
    _cyc_0808CE5E = 2u;
    uint32_t _base_0808CE5E = 0x0808CE62u & ~3u;
    uint32_t _off_0808CE5E;
    _off_0808CE5E = 0x00000024u;
    uint32_t _ea_0808CE5E = _base_0808CE5E + _off_0808CE5E;
    uint32_t _post_0808CE5E = _base_0808CE5E + _off_0808CE5E;
    _cyc_0808CE5E += runtime_mem_cycles(_ea_0808CE5E, 4u, 0u);
    uint32_t _v_0808CE5E;
    { uint32_t _w = bus_read_u32(_ea_0808CE5E & ~3u); uint32_t _rot = (_ea_0808CE5E & 3u) * 8u; _v_0808CE5E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0808CE5E;
    g_cpu.R[15] = 0x0808CE60u;
    runtime_tick(_cyc_0808CE5E);
    /* 0808CE60  0808ce60 T ldr r1,[r15,#0x24] */
    g_cpu.R[15] = 0x0808CE60u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE60 = 1u;
    _cyc_0808CE60 = 2u;
    uint32_t _base_0808CE60 = 0x0808CE64u & ~3u;
    uint32_t _off_0808CE60;
    _off_0808CE60 = 0x00000024u;
    uint32_t _ea_0808CE60 = _base_0808CE60 + _off_0808CE60;
    uint32_t _post_0808CE60 = _base_0808CE60 + _off_0808CE60;
    _cyc_0808CE60 += runtime_mem_cycles(_ea_0808CE60, 4u, 0u);
    uint32_t _v_0808CE60;
    { uint32_t _w = bus_read_u32(_ea_0808CE60 & ~3u); uint32_t _rot = (_ea_0808CE60 & 3u) * 8u; _v_0808CE60 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0808CE60;
    g_cpu.R[15] = 0x0808CE62u;
    runtime_tick(_cyc_0808CE60);
    /* 0808CE62  0808ce62 T adds r0,r0,r1 */
    g_cpu.R[15] = 0x0808CE62u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE62 = 1u;
    _cyc_0808CE62 = 1u;
    uint32_t _rm_0808CE62 = g_cpu.R[1];
    uint32_t _op2_0808CE62;
    uint32_t _co_0808CE62;
    _op2_0808CE62 = _rm_0808CE62;
    _co_0808CE62 = cpsr_c();
    uint32_t _rn_0808CE62 = g_cpu.R[0];
    uint32_t _r_0808CE62;
    _r_0808CE62 = _rn_0808CE62 + _op2_0808CE62;
    arm_set_nzcv_add(_rn_0808CE62, _op2_0808CE62, _r_0808CE62);
    g_cpu.R[0] = _r_0808CE62;
    g_cpu.R[15] = 0x0808CE64u;
    runtime_tick(_cyc_0808CE62);
    /* 0808CE64  0808ce64 T ldrh r1,[r0] */
    g_cpu.R[15] = 0x0808CE64u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE64 = 1u;
    _cyc_0808CE64 = 2u;
    uint32_t _base_0808CE64 = g_cpu.R[0];
    uint32_t _off_0808CE64;
    _off_0808CE64 = 0x00000000u;
    uint32_t _ea_0808CE64 = _base_0808CE64 + _off_0808CE64;
    uint32_t _post_0808CE64 = _base_0808CE64 + _off_0808CE64;
    _cyc_0808CE64 += runtime_mem_cycles(_ea_0808CE64, 2u, 0u);
    uint32_t _v_0808CE64;
    { uint32_t _h = bus_read_u16(_ea_0808CE64 & ~1u); if (_ea_0808CE64 & 1u) _v_0808CE64 = ((_h >> 8) | (_h << 24)); else _v_0808CE64 = _h; }
    g_cpu.R[1] = _v_0808CE64;
    g_cpu.R[15] = 0x0808CE66u;
    runtime_tick(_cyc_0808CE64);
    /* 0808CE66  0808ce66 T ldrh r0,[r4,#0x2] */
    g_cpu.R[15] = 0x0808CE66u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE66 = 1u;
    _cyc_0808CE66 = 2u;
    uint32_t _base_0808CE66 = g_cpu.R[4];
    uint32_t _off_0808CE66;
    _off_0808CE66 = 0x00000002u;
    uint32_t _ea_0808CE66 = _base_0808CE66 + _off_0808CE66;
    uint32_t _post_0808CE66 = _base_0808CE66 + _off_0808CE66;
    _cyc_0808CE66 += runtime_mem_cycles(_ea_0808CE66, 2u, 0u);
    uint32_t _v_0808CE66;
    { uint32_t _h = bus_read_u16(_ea_0808CE66 & ~1u); if (_ea_0808CE66 & 1u) _v_0808CE66 = ((_h >> 8) | (_h << 24)); else _v_0808CE66 = _h; }
    g_cpu.R[0] = _v_0808CE66;
    g_cpu.R[15] = 0x0808CE68u;
    runtime_tick(_cyc_0808CE66);
    /* 0808CE68  0808ce68 T cmps r0,r1 */
    g_cpu.R[15] = 0x0808CE68u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE68 = 1u;
    _cyc_0808CE68 = 1u;
    uint32_t _rm_0808CE68 = g_cpu.R[1];
    uint32_t _op2_0808CE68;
    uint32_t _co_0808CE68;
    _op2_0808CE68 = _rm_0808CE68;
    _co_0808CE68 = cpsr_c();
    uint32_t _rn_0808CE68 = g_cpu.R[0];
    uint32_t _r_0808CE68;
    _r_0808CE68 = _rn_0808CE68 - _op2_0808CE68;
    arm_set_nzcv_sub(_rn_0808CE68, _op2_0808CE68, _r_0808CE68);
    g_cpu.R[15] = 0x0808CE6Au;
    runtime_tick(_cyc_0808CE68);
    /* 0808CE6A  0808ce6a T beq 0x0808ce90 */
    g_cpu.R[15] = 0x0808CE6Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE6A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808CE6A = 3u;
        g_cpu.R[15] = 0x0808CE90u;
        runtime_tick(_cyc_0808CE6A);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808CE90);
    }
    g_cpu.R[15] = 0x0808CE6Cu;
    runtime_tick(_cyc_0808CE6A);
    /* 0808CE6C  0808ce6c T strh r1,[r4,#0x4] */
    g_cpu.R[15] = 0x0808CE6Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE6C = 1u;
    _cyc_0808CE6C = 1u;
    uint32_t _base_0808CE6C = g_cpu.R[4];
    uint32_t _off_0808CE6C;
    _off_0808CE6C = 0x00000004u;
    uint32_t _ea_0808CE6C = _base_0808CE6C + _off_0808CE6C;
    uint32_t _post_0808CE6C = _base_0808CE6C + _off_0808CE6C;
    _cyc_0808CE6C += runtime_mem_cycles(_ea_0808CE6C, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CE6Cu, _ea_0808CE6C & ~1u, (uint32_t)(g_cpu.R[1] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0808CE6C & ~1u, (uint16_t)(g_cpu.R[1] & 0xFFFFu));
    g_cpu.R[15] = 0x0808CE6Eu;
    runtime_tick(_cyc_0808CE6C);
    /* 0808CE6E  0808ce6e T movs r0,#0x12 */
    g_cpu.R[15] = 0x0808CE6Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE6E = 1u;
    _cyc_0808CE6E = 1u;
    uint32_t _r_0808CE6E;
    _r_0808CE6E = 0x00000012u;
    arm_set_nzc_logic(_r_0808CE6E, cpsr_c());
    g_cpu.R[0] = _r_0808CE6E;
    g_cpu.R[15] = 0x0808CE70u;
    runtime_tick(_cyc_0808CE6E);
    /* 0808CE70  0808ce70 T str r0,[r4,#0x8] */
    g_cpu.R[15] = 0x0808CE70u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE70 = 1u;
    _cyc_0808CE70 = 1u;
    uint32_t _base_0808CE70 = g_cpu.R[4];
    uint32_t _off_0808CE70;
    _off_0808CE70 = 0x00000008u;
    uint32_t _ea_0808CE70 = _base_0808CE70 + _off_0808CE70;
    uint32_t _post_0808CE70 = _base_0808CE70 + _off_0808CE70;
    _cyc_0808CE70 += runtime_mem_cycles(_ea_0808CE70, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CE70u, _ea_0808CE70 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_0808CE70 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0808CE72u;
    runtime_tick(_cyc_0808CE70);
    /* 0808CE72  0808ce72 T ldrh r1,[r4,#0x2] */
    g_cpu.R[15] = 0x0808CE72u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE72 = 1u;
    _cyc_0808CE72 = 2u;
    uint32_t _base_0808CE72 = g_cpu.R[4];
    uint32_t _off_0808CE72;
    _off_0808CE72 = 0x00000002u;
    uint32_t _ea_0808CE72 = _base_0808CE72 + _off_0808CE72;
    uint32_t _post_0808CE72 = _base_0808CE72 + _off_0808CE72;
    _cyc_0808CE72 += runtime_mem_cycles(_ea_0808CE72, 2u, 0u);
    uint32_t _v_0808CE72;
    { uint32_t _h = bus_read_u16(_ea_0808CE72 & ~1u); if (_ea_0808CE72 & 1u) _v_0808CE72 = ((_h >> 8) | (_h << 24)); else _v_0808CE72 = _h; }
    g_cpu.R[1] = _v_0808CE72;
    g_cpu.R[15] = 0x0808CE74u;
    runtime_tick(_cyc_0808CE72);
    /* 0808CE74  0808ce74 T ldr r0,[r15,#0x14] */
    g_cpu.R[15] = 0x0808CE74u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE74 = 1u;
    _cyc_0808CE74 = 2u;
    uint32_t _base_0808CE74 = 0x0808CE78u & ~3u;
    uint32_t _off_0808CE74;
    _off_0808CE74 = 0x00000014u;
    uint32_t _ea_0808CE74 = _base_0808CE74 + _off_0808CE74;
    uint32_t _post_0808CE74 = _base_0808CE74 + _off_0808CE74;
    _cyc_0808CE74 += runtime_mem_cycles(_ea_0808CE74, 4u, 0u);
    uint32_t _v_0808CE74;
    { uint32_t _w = bus_read_u32(_ea_0808CE74 & ~3u); uint32_t _rot = (_ea_0808CE74 & 3u) * 8u; _v_0808CE74 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0808CE74;
    g_cpu.R[15] = 0x0808CE76u;
    runtime_tick(_cyc_0808CE74);
    /* 0808CE76  0808ce76 T str r0,[r13] */
    g_cpu.R[15] = 0x0808CE76u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE76 = 1u;
    _cyc_0808CE76 = 1u;
    uint32_t _base_0808CE76 = g_cpu.R[13];
    uint32_t _off_0808CE76;
    _off_0808CE76 = 0x00000000u;
    uint32_t _ea_0808CE76 = _base_0808CE76 + _off_0808CE76;
    uint32_t _post_0808CE76 = _base_0808CE76 + _off_0808CE76;
    _cyc_0808CE76 += runtime_mem_cycles(_ea_0808CE76, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CE76u, _ea_0808CE76 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_0808CE76 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0808CE78u;
    runtime_tick(_cyc_0808CE76);
    /* 0808CE78  0808ce78 T movs r0,#0x0 */
    g_cpu.R[15] = 0x0808CE78u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE78 = 1u;
    _cyc_0808CE78 = 1u;
    uint32_t _r_0808CE78;
    _r_0808CE78 = 0x00000000u;
    arm_set_nzc_logic(_r_0808CE78, cpsr_c());
    g_cpu.R[0] = _r_0808CE78;
    g_cpu.R[15] = 0x0808CE7Au;
    runtime_tick(_cyc_0808CE78);
    /* 0808CE7A  0808ce7a T movs r2,#0x1 */
    g_cpu.R[15] = 0x0808CE7Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE7A = 1u;
    _cyc_0808CE7A = 1u;
    uint32_t _r_0808CE7A;
    _r_0808CE7A = 0x00000001u;
    arm_set_nzc_logic(_r_0808CE7A, cpsr_c());
    g_cpu.R[2] = _r_0808CE7A;
    g_cpu.R[15] = 0x0808CE7Cu;
    runtime_tick(_cyc_0808CE7A);
    /* fall-through to 0x0808CE7C */
    g_cpu.R[15] = 0x0808CE7Cu;
    runtime_dispatch(0x0808CE7Cu);
    return;
}

/* 0x0808CE96  mode=thumb  end=0x0808CEAC  branches=2 */


/* 0x0808CE96 thumb */
void gf_autojt_0808CD58_09(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808CE96u);
    /* 0808CE96  0808ce96 T ldr r3,[r15,#0x14] */
    g_cpu.R[15] = 0x0808CE96u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE96 = 1u;
    _cyc_0808CE96 = 2u;
    uint32_t _base_0808CE96 = 0x0808CE9Au & ~3u;
    uint32_t _off_0808CE96;
    _off_0808CE96 = 0x00000014u;
    uint32_t _ea_0808CE96 = _base_0808CE96 + _off_0808CE96;
    uint32_t _post_0808CE96 = _base_0808CE96 + _off_0808CE96;
    _cyc_0808CE96 += runtime_mem_cycles(_ea_0808CE96, 4u, 0u);
    uint32_t _v_0808CE96;
    { uint32_t _w = bus_read_u32(_ea_0808CE96 & ~3u); uint32_t _rot = (_ea_0808CE96 & 3u) * 8u; _v_0808CE96 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_0808CE96;
    g_cpu.R[15] = 0x0808CE98u;
    runtime_tick(_cyc_0808CE96);
    /* 0808CE98  0808ce98 T ldr r2,[r15,#0x14] */
    g_cpu.R[15] = 0x0808CE98u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE98 = 1u;
    _cyc_0808CE98 = 2u;
    uint32_t _base_0808CE98 = 0x0808CE9Cu & ~3u;
    uint32_t _off_0808CE98;
    _off_0808CE98 = 0x00000014u;
    uint32_t _ea_0808CE98 = _base_0808CE98 + _off_0808CE98;
    uint32_t _post_0808CE98 = _base_0808CE98 + _off_0808CE98;
    _cyc_0808CE98 += runtime_mem_cycles(_ea_0808CE98, 4u, 0u);
    uint32_t _v_0808CE98;
    { uint32_t _w = bus_read_u32(_ea_0808CE98 & ~3u); uint32_t _rot = (_ea_0808CE98 & 3u) * 8u; _v_0808CE98 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_0808CE98;
    g_cpu.R[15] = 0x0808CE9Au;
    runtime_tick(_cyc_0808CE98);
    /* 0808CE9A  0808ce9a T adds r0,r3,r2 */
    g_cpu.R[15] = 0x0808CE9Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE9A = 1u;
    _cyc_0808CE9A = 1u;
    uint32_t _rm_0808CE9A = g_cpu.R[2];
    uint32_t _op2_0808CE9A;
    uint32_t _co_0808CE9A;
    _op2_0808CE9A = _rm_0808CE9A;
    _co_0808CE9A = cpsr_c();
    uint32_t _rn_0808CE9A = g_cpu.R[3];
    uint32_t _r_0808CE9A;
    _r_0808CE9A = _rn_0808CE9A + _op2_0808CE9A;
    arm_set_nzcv_add(_rn_0808CE9A, _op2_0808CE9A, _r_0808CE9A);
    g_cpu.R[0] = _r_0808CE9A;
    g_cpu.R[15] = 0x0808CE9Cu;
    runtime_tick(_cyc_0808CE9A);
    /* 0808CE9C  0808ce9c T ldrh r1,[r0] */
    g_cpu.R[15] = 0x0808CE9Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE9C = 1u;
    _cyc_0808CE9C = 2u;
    uint32_t _base_0808CE9C = g_cpu.R[0];
    uint32_t _off_0808CE9C;
    _off_0808CE9C = 0x00000000u;
    uint32_t _ea_0808CE9C = _base_0808CE9C + _off_0808CE9C;
    uint32_t _post_0808CE9C = _base_0808CE9C + _off_0808CE9C;
    _cyc_0808CE9C += runtime_mem_cycles(_ea_0808CE9C, 2u, 0u);
    uint32_t _v_0808CE9C;
    { uint32_t _h = bus_read_u16(_ea_0808CE9C & ~1u); if (_ea_0808CE9C & 1u) _v_0808CE9C = ((_h >> 8) | (_h << 24)); else _v_0808CE9C = _h; }
    g_cpu.R[1] = _v_0808CE9C;
    g_cpu.R[15] = 0x0808CE9Eu;
    runtime_tick(_cyc_0808CE9C);
    /* 0808CE9E  0808ce9e T ldrh r0,[r4,#0x2] */
    g_cpu.R[15] = 0x0808CE9Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CE9E = 1u;
    _cyc_0808CE9E = 2u;
    uint32_t _base_0808CE9E = g_cpu.R[4];
    uint32_t _off_0808CE9E;
    _off_0808CE9E = 0x00000002u;
    uint32_t _ea_0808CE9E = _base_0808CE9E + _off_0808CE9E;
    uint32_t _post_0808CE9E = _base_0808CE9E + _off_0808CE9E;
    _cyc_0808CE9E += runtime_mem_cycles(_ea_0808CE9E, 2u, 0u);
    uint32_t _v_0808CE9E;
    { uint32_t _h = bus_read_u16(_ea_0808CE9E & ~1u); if (_ea_0808CE9E & 1u) _v_0808CE9E = ((_h >> 8) | (_h << 24)); else _v_0808CE9E = _h; }
    g_cpu.R[0] = _v_0808CE9E;
    g_cpu.R[15] = 0x0808CEA0u;
    runtime_tick(_cyc_0808CE9E);
    /* 0808CEA0  0808cea0 T cmps r0,r1 */
    g_cpu.R[15] = 0x0808CEA0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CEA0 = 1u;
    _cyc_0808CEA0 = 1u;
    uint32_t _rm_0808CEA0 = g_cpu.R[1];
    uint32_t _op2_0808CEA0;
    uint32_t _co_0808CEA0;
    _op2_0808CEA0 = _rm_0808CEA0;
    _co_0808CEA0 = cpsr_c();
    uint32_t _rn_0808CEA0 = g_cpu.R[0];
    uint32_t _r_0808CEA0;
    _r_0808CEA0 = _rn_0808CEA0 - _op2_0808CEA0;
    arm_set_nzcv_sub(_rn_0808CEA0, _op2_0808CEA0, _r_0808CEA0);
    g_cpu.R[15] = 0x0808CEA2u;
    runtime_tick(_cyc_0808CEA0);
    /* 0808CEA2  0808cea2 T beq 0x0808ceb4 */
    g_cpu.R[15] = 0x0808CEA2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CEA2 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808CEA2 = 3u;
        g_cpu.R[15] = 0x0808CEB4u;
        runtime_tick(_cyc_0808CEA2);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808CEB4);
    }
    g_cpu.R[15] = 0x0808CEA4u;
    runtime_tick(_cyc_0808CEA2);
    /* 0808CEA4  0808cea4 T strh r1,[r4,#0x4] */
    g_cpu.R[15] = 0x0808CEA4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CEA4 = 1u;
    _cyc_0808CEA4 = 1u;
    uint32_t _base_0808CEA4 = g_cpu.R[4];
    uint32_t _off_0808CEA4;
    _off_0808CEA4 = 0x00000004u;
    uint32_t _ea_0808CEA4 = _base_0808CEA4 + _off_0808CEA4;
    uint32_t _post_0808CEA4 = _base_0808CEA4 + _off_0808CEA4;
    _cyc_0808CEA4 += runtime_mem_cycles(_ea_0808CEA4, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CEA4u, _ea_0808CEA4 & ~1u, (uint32_t)(g_cpu.R[1] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0808CEA4 & ~1u, (uint16_t)(g_cpu.R[1] & 0xFFFFu));
    g_cpu.R[15] = 0x0808CEA6u;
    runtime_tick(_cyc_0808CEA4);
    /* 0808CEA6  0808cea6 T movs r0,#0x12 */
    g_cpu.R[15] = 0x0808CEA6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CEA6 = 1u;
    _cyc_0808CEA6 = 1u;
    uint32_t _r_0808CEA6;
    _r_0808CEA6 = 0x00000012u;
    arm_set_nzc_logic(_r_0808CEA6, cpsr_c());
    g_cpu.R[0] = _r_0808CEA6;
    g_cpu.R[15] = 0x0808CEA8u;
    runtime_tick(_cyc_0808CEA6);
    /* 0808CEA8  0808cea8 T str r0,[r4,#0x8] */
    g_cpu.R[15] = 0x0808CEA8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CEA8 = 1u;
    _cyc_0808CEA8 = 1u;
    uint32_t _base_0808CEA8 = g_cpu.R[4];
    uint32_t _off_0808CEA8;
    _off_0808CEA8 = 0x00000008u;
    uint32_t _ea_0808CEA8 = _base_0808CEA8 + _off_0808CEA8;
    uint32_t _post_0808CEA8 = _base_0808CEA8 + _off_0808CEA8;
    _cyc_0808CEA8 += runtime_mem_cycles(_ea_0808CEA8, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CEA8u, _ea_0808CEA8 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_0808CEA8 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0808CEAAu;
    runtime_tick(_cyc_0808CEA8);
    /* 0808CEAA  0808ceaa T b 0x0808cf10 */
    g_cpu.R[15] = 0x0808CEAAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CEAA = 1u;
    _cyc_0808CEAA = 3u;
    g_cpu.R[15] = 0x0808CF10u;
    runtime_tick(_cyc_0808CEAA);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808CF10);
    g_cpu.R[15] = 0x0808CEACu;
    runtime_tick(_cyc_0808CEAA);
    /* fall-through to 0x0808CEAC */
    g_cpu.R[15] = 0x0808CEACu;
    runtime_dispatch(0x0808CEACu);
    return;
}

/* 0x0808CED4  mode=thumb  end=0x0808CEEA  branches=1 */


/* 0x0808CED4 thumb */
void gf_autojt_0808CD58_10(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808CED4u);
    /* 0808CED4  0808ced4 T ldr r1,[r15,#0x14] */
    g_cpu.R[15] = 0x0808CED4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CED4 = 1u;
    _cyc_0808CED4 = 2u;
    uint32_t _base_0808CED4 = 0x0808CED8u & ~3u;
    uint32_t _off_0808CED4;
    _off_0808CED4 = 0x00000014u;
    uint32_t _ea_0808CED4 = _base_0808CED4 + _off_0808CED4;
    uint32_t _post_0808CED4 = _base_0808CED4 + _off_0808CED4;
    _cyc_0808CED4 += runtime_mem_cycles(_ea_0808CED4, 4u, 0u);
    uint32_t _v_0808CED4;
    { uint32_t _w = bus_read_u32(_ea_0808CED4 & ~3u); uint32_t _rot = (_ea_0808CED4 & 3u) * 8u; _v_0808CED4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0808CED4;
    g_cpu.R[15] = 0x0808CED6u;
    runtime_tick(_cyc_0808CED4);
    /* 0808CED6  0808ced6 T ldr r3,[r15,#0x18] */
    g_cpu.R[15] = 0x0808CED6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CED6 = 1u;
    _cyc_0808CED6 = 2u;
    uint32_t _base_0808CED6 = 0x0808CEDAu & ~3u;
    uint32_t _off_0808CED6;
    _off_0808CED6 = 0x00000018u;
    uint32_t _ea_0808CED6 = _base_0808CED6 + _off_0808CED6;
    uint32_t _post_0808CED6 = _base_0808CED6 + _off_0808CED6;
    _cyc_0808CED6 += runtime_mem_cycles(_ea_0808CED6, 4u, 0u);
    uint32_t _v_0808CED6;
    { uint32_t _w = bus_read_u32(_ea_0808CED6 & ~3u); uint32_t _rot = (_ea_0808CED6 & 3u) * 8u; _v_0808CED6 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_0808CED6;
    g_cpu.R[15] = 0x0808CED8u;
    runtime_tick(_cyc_0808CED6);
    /* 0808CED8  0808ced8 T adds r2,r1,r3 */
    g_cpu.R[15] = 0x0808CED8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CED8 = 1u;
    _cyc_0808CED8 = 1u;
    uint32_t _rm_0808CED8 = g_cpu.R[3];
    uint32_t _op2_0808CED8;
    uint32_t _co_0808CED8;
    _op2_0808CED8 = _rm_0808CED8;
    _co_0808CED8 = cpsr_c();
    uint32_t _rn_0808CED8 = g_cpu.R[1];
    uint32_t _r_0808CED8;
    _r_0808CED8 = _rn_0808CED8 + _op2_0808CED8;
    arm_set_nzcv_add(_rn_0808CED8, _op2_0808CED8, _r_0808CED8);
    g_cpu.R[2] = _r_0808CED8;
    g_cpu.R[15] = 0x0808CEDAu;
    runtime_tick(_cyc_0808CED8);
    /* 0808CEDA  0808ceda T movs r0,#0x0 */
    g_cpu.R[15] = 0x0808CEDAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CEDA = 1u;
    _cyc_0808CEDA = 1u;
    uint32_t _r_0808CEDA;
    _r_0808CEDA = 0x00000000u;
    arm_set_nzc_logic(_r_0808CEDA, cpsr_c());
    g_cpu.R[0] = _r_0808CEDA;
    g_cpu.R[15] = 0x0808CEDCu;
    runtime_tick(_cyc_0808CEDA);
    /* 0808CEDC  0808cedc T strh r0,[r2] */
    g_cpu.R[15] = 0x0808CEDCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CEDC = 1u;
    _cyc_0808CEDC = 1u;
    uint32_t _base_0808CEDC = g_cpu.R[2];
    uint32_t _off_0808CEDC;
    _off_0808CEDC = 0x00000000u;
    uint32_t _ea_0808CEDC = _base_0808CEDC + _off_0808CEDC;
    uint32_t _post_0808CEDC = _base_0808CEDC + _off_0808CEDC;
    _cyc_0808CEDC += runtime_mem_cycles(_ea_0808CEDC, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CEDCu, _ea_0808CEDC & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0808CEDC & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0808CEDEu;
    runtime_tick(_cyc_0808CEDC);
    /* 0808CEDE  0808cede T movs r7,#0xa7 */
    g_cpu.R[15] = 0x0808CEDEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CEDE = 1u;
    _cyc_0808CEDE = 1u;
    uint32_t _r_0808CEDE;
    _r_0808CEDE = 0x000000A7u;
    arm_set_nzc_logic(_r_0808CEDE, cpsr_c());
    g_cpu.R[7] = _r_0808CEDE;
    g_cpu.R[15] = 0x0808CEE0u;
    runtime_tick(_cyc_0808CEDE);
    /* 0808CEE0  0808cee0 T movs r7,r7,lsl #5 */
    g_cpu.R[15] = 0x0808CEE0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CEE0 = 1u;
    _cyc_0808CEE0 = 1u;
    uint32_t _rm_0808CEE0 = g_cpu.R[7];
    uint32_t _op2_0808CEE0;
    uint32_t _co_0808CEE0;
    _op2_0808CEE0 = _rm_0808CEE0 << 5;
    _co_0808CEE0 = (_rm_0808CEE0 >> 27) & 1u;
    uint32_t _r_0808CEE0;
    _r_0808CEE0 = _op2_0808CEE0;
    arm_set_nzc_logic(_r_0808CEE0, _co_0808CEE0);
    g_cpu.R[7] = _r_0808CEE0;
    g_cpu.R[15] = 0x0808CEE2u;
    runtime_tick(_cyc_0808CEE0);
    /* 0808CEE2  0808cee2 T adds r1,r1,r7 */
    g_cpu.R[15] = 0x0808CEE2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CEE2 = 1u;
    _cyc_0808CEE2 = 1u;
    uint32_t _rm_0808CEE2 = g_cpu.R[7];
    uint32_t _op2_0808CEE2;
    uint32_t _co_0808CEE2;
    _op2_0808CEE2 = _rm_0808CEE2;
    _co_0808CEE2 = cpsr_c();
    uint32_t _rn_0808CEE2 = g_cpu.R[1];
    uint32_t _r_0808CEE2;
    _r_0808CEE2 = _rn_0808CEE2 + _op2_0808CEE2;
    arm_set_nzcv_add(_rn_0808CEE2, _op2_0808CEE2, _r_0808CEE2);
    g_cpu.R[1] = _r_0808CEE2;
    g_cpu.R[15] = 0x0808CEE4u;
    runtime_tick(_cyc_0808CEE2);
    /* 0808CEE4  0808cee4 T movs r0,#0x1 */
    g_cpu.R[15] = 0x0808CEE4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CEE4 = 1u;
    _cyc_0808CEE4 = 1u;
    uint32_t _r_0808CEE4;
    _r_0808CEE4 = 0x00000001u;
    arm_set_nzc_logic(_r_0808CEE4, cpsr_c());
    g_cpu.R[0] = _r_0808CEE4;
    g_cpu.R[15] = 0x0808CEE6u;
    runtime_tick(_cyc_0808CEE4);
    /* 0808CEE6  0808cee6 T strh r0,[r1] */
    g_cpu.R[15] = 0x0808CEE6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CEE6 = 1u;
    _cyc_0808CEE6 = 1u;
    uint32_t _base_0808CEE6 = g_cpu.R[1];
    uint32_t _off_0808CEE6;
    _off_0808CEE6 = 0x00000000u;
    uint32_t _ea_0808CEE6 = _base_0808CEE6 + _off_0808CEE6;
    uint32_t _post_0808CEE6 = _base_0808CEE6 + _off_0808CEE6;
    _cyc_0808CEE6 += runtime_mem_cycles(_ea_0808CEE6, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CEE6u, _ea_0808CEE6 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0808CEE6 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0808CEE8u;
    runtime_tick(_cyc_0808CEE6);
    /* 0808CEE8  0808cee8 T b 0x0808cf10 */
    g_cpu.R[15] = 0x0808CEE8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CEE8 = 1u;
    _cyc_0808CEE8 = 3u;
    g_cpu.R[15] = 0x0808CF10u;
    runtime_tick(_cyc_0808CEE8);
    GBARECOMP_TAIL_CALL(gf_tfunc_0808CF10);
    g_cpu.R[15] = 0x0808CEEAu;
    runtime_tick(_cyc_0808CEE8);
    /* fall-through to 0x0808CEEA */
    g_cpu.R[15] = 0x0808CEEAu;
    runtime_dispatch(0x0808CEEAu);
    return;
}

/* 0x0808CF10  mode=thumb  end=0x0808CF24  branches=1  indirect */


/* 0x0808CEF4 thumb */
void gf_autojt_0808CD58_11(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808CEF4u);
    /* 0808CEF4  0808cef4 T ldr r1,[r15,#0x2c] */
    g_cpu.R[15] = 0x0808CEF4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CEF4 = 1u;
    _cyc_0808CEF4 = 2u;
    uint32_t _base_0808CEF4 = 0x0808CEF8u & ~3u;
    uint32_t _off_0808CEF4;
    _off_0808CEF4 = 0x0000002Cu;
    uint32_t _ea_0808CEF4 = _base_0808CEF4 + _off_0808CEF4;
    uint32_t _post_0808CEF4 = _base_0808CEF4 + _off_0808CEF4;
    _cyc_0808CEF4 += runtime_mem_cycles(_ea_0808CEF4, 4u, 0u);
    uint32_t _v_0808CEF4;
    { uint32_t _w = bus_read_u32(_ea_0808CEF4 & ~3u); uint32_t _rot = (_ea_0808CEF4 & 3u) * 8u; _v_0808CEF4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0808CEF4;
    g_cpu.R[15] = 0x0808CEF6u;
    runtime_tick(_cyc_0808CEF4);
    /* 0808CEF6  0808cef6 T ldr r2,[r15,#0x30] */
    g_cpu.R[15] = 0x0808CEF6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CEF6 = 1u;
    _cyc_0808CEF6 = 2u;
    uint32_t _base_0808CEF6 = 0x0808CEFAu & ~3u;
    uint32_t _off_0808CEF6;
    _off_0808CEF6 = 0x00000030u;
    uint32_t _ea_0808CEF6 = _base_0808CEF6 + _off_0808CEF6;
    uint32_t _post_0808CEF6 = _base_0808CEF6 + _off_0808CEF6;
    _cyc_0808CEF6 += runtime_mem_cycles(_ea_0808CEF6, 4u, 0u);
    uint32_t _v_0808CEF6;
    { uint32_t _w = bus_read_u32(_ea_0808CEF6 & ~3u); uint32_t _rot = (_ea_0808CEF6 & 3u) * 8u; _v_0808CEF6 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_0808CEF6;
    g_cpu.R[15] = 0x0808CEF8u;
    runtime_tick(_cyc_0808CEF6);
    /* 0808CEF8  0808cef8 T adds r0,r1,r2 */
    g_cpu.R[15] = 0x0808CEF8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CEF8 = 1u;
    _cyc_0808CEF8 = 1u;
    uint32_t _rm_0808CEF8 = g_cpu.R[2];
    uint32_t _op2_0808CEF8;
    uint32_t _co_0808CEF8;
    _op2_0808CEF8 = _rm_0808CEF8;
    _co_0808CEF8 = cpsr_c();
    uint32_t _rn_0808CEF8 = g_cpu.R[1];
    uint32_t _r_0808CEF8;
    _r_0808CEF8 = _rn_0808CEF8 + _op2_0808CEF8;
    arm_set_nzcv_add(_rn_0808CEF8, _op2_0808CEF8, _r_0808CEF8);
    g_cpu.R[0] = _r_0808CEF8;
    g_cpu.R[15] = 0x0808CEFAu;
    runtime_tick(_cyc_0808CEF8);
    /* 0808CEFA  0808cefa T ldrh r2,[r0] */
    g_cpu.R[15] = 0x0808CEFAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CEFA = 1u;
    _cyc_0808CEFA = 2u;
    uint32_t _base_0808CEFA = g_cpu.R[0];
    uint32_t _off_0808CEFA;
    _off_0808CEFA = 0x00000000u;
    uint32_t _ea_0808CEFA = _base_0808CEFA + _off_0808CEFA;
    uint32_t _post_0808CEFA = _base_0808CEFA + _off_0808CEFA;
    _cyc_0808CEFA += runtime_mem_cycles(_ea_0808CEFA, 2u, 0u);
    uint32_t _v_0808CEFA;
    { uint32_t _h = bus_read_u16(_ea_0808CEFA & ~1u); if (_ea_0808CEFA & 1u) _v_0808CEFA = ((_h >> 8) | (_h << 24)); else _v_0808CEFA = _h; }
    g_cpu.R[2] = _v_0808CEFA;
    g_cpu.R[15] = 0x0808CEFCu;
    runtime_tick(_cyc_0808CEFA);
    /* 0808CEFC  0808cefc T ldr r3,[r15,#0x2c] */
    g_cpu.R[15] = 0x0808CEFCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CEFC = 1u;
    _cyc_0808CEFC = 2u;
    uint32_t _base_0808CEFC = 0x0808CF00u & ~3u;
    uint32_t _off_0808CEFC;
    _off_0808CEFC = 0x0000002Cu;
    uint32_t _ea_0808CEFC = _base_0808CEFC + _off_0808CEFC;
    uint32_t _post_0808CEFC = _base_0808CEFC + _off_0808CEFC;
    _cyc_0808CEFC += runtime_mem_cycles(_ea_0808CEFC, 4u, 0u);
    uint32_t _v_0808CEFC;
    { uint32_t _w = bus_read_u32(_ea_0808CEFC & ~3u); uint32_t _rot = (_ea_0808CEFC & 3u) * 8u; _v_0808CEFC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_0808CEFC;
    g_cpu.R[15] = 0x0808CEFEu;
    runtime_tick(_cyc_0808CEFC);
    /* 0808CEFE  0808cefe T adds r0,r1,r3 */
    g_cpu.R[15] = 0x0808CEFEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CEFE = 1u;
    _cyc_0808CEFE = 1u;
    uint32_t _rm_0808CEFE = g_cpu.R[3];
    uint32_t _op2_0808CEFE;
    uint32_t _co_0808CEFE;
    _op2_0808CEFE = _rm_0808CEFE;
    _co_0808CEFE = cpsr_c();
    uint32_t _rn_0808CEFE = g_cpu.R[1];
    uint32_t _r_0808CEFE;
    _r_0808CEFE = _rn_0808CEFE + _op2_0808CEFE;
    arm_set_nzcv_add(_rn_0808CEFE, _op2_0808CEFE, _r_0808CEFE);
    g_cpu.R[0] = _r_0808CEFE;
    g_cpu.R[15] = 0x0808CF00u;
    runtime_tick(_cyc_0808CEFE);
    /* 0808CF00  0808cf00 T movs r3,#0x0 */
    g_cpu.R[15] = 0x0808CF00u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF00 = 1u;
    _cyc_0808CF00 = 1u;
    uint32_t _r_0808CF00;
    _r_0808CF00 = 0x00000000u;
    arm_set_nzc_logic(_r_0808CF00, cpsr_c());
    g_cpu.R[3] = _r_0808CF00;
    g_cpu.R[15] = 0x0808CF02u;
    runtime_tick(_cyc_0808CF00);
    /* 0808CF02  0808cf02 T strh r2,[r0] */
    g_cpu.R[15] = 0x0808CF02u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF02 = 1u;
    _cyc_0808CF02 = 1u;
    uint32_t _base_0808CF02 = g_cpu.R[0];
    uint32_t _off_0808CF02;
    _off_0808CF02 = 0x00000000u;
    uint32_t _ea_0808CF02 = _base_0808CF02 + _off_0808CF02;
    uint32_t _post_0808CF02 = _base_0808CF02 + _off_0808CF02;
    _cyc_0808CF02 += runtime_mem_cycles(_ea_0808CF02, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CF02u, _ea_0808CF02 & ~1u, (uint32_t)(g_cpu.R[2] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0808CF02 & ~1u, (uint16_t)(g_cpu.R[2] & 0xFFFFu));
    g_cpu.R[15] = 0x0808CF04u;
    runtime_tick(_cyc_0808CF02);
    /* 0808CF04  0808cf04 T movs r7,#0xa7 */
    g_cpu.R[15] = 0x0808CF04u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF04 = 1u;
    _cyc_0808CF04 = 1u;
    uint32_t _r_0808CF04;
    _r_0808CF04 = 0x000000A7u;
    arm_set_nzc_logic(_r_0808CF04, cpsr_c());
    g_cpu.R[7] = _r_0808CF04;
    g_cpu.R[15] = 0x0808CF06u;
    runtime_tick(_cyc_0808CF04);
    /* 0808CF06  0808cf06 T movs r7,r7,lsl #5 */
    g_cpu.R[15] = 0x0808CF06u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF06 = 1u;
    _cyc_0808CF06 = 1u;
    uint32_t _rm_0808CF06 = g_cpu.R[7];
    uint32_t _op2_0808CF06;
    uint32_t _co_0808CF06;
    _op2_0808CF06 = _rm_0808CF06 << 5;
    _co_0808CF06 = (_rm_0808CF06 >> 27) & 1u;
    uint32_t _r_0808CF06;
    _r_0808CF06 = _op2_0808CF06;
    arm_set_nzc_logic(_r_0808CF06, _co_0808CF06);
    g_cpu.R[7] = _r_0808CF06;
    g_cpu.R[15] = 0x0808CF08u;
    runtime_tick(_cyc_0808CF06);
    /* 0808CF08  0808cf08 T adds r1,r1,r7 */
    g_cpu.R[15] = 0x0808CF08u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF08 = 1u;
    _cyc_0808CF08 = 1u;
    uint32_t _rm_0808CF08 = g_cpu.R[7];
    uint32_t _op2_0808CF08;
    uint32_t _co_0808CF08;
    _op2_0808CF08 = _rm_0808CF08;
    _co_0808CF08 = cpsr_c();
    uint32_t _rn_0808CF08 = g_cpu.R[1];
    uint32_t _r_0808CF08;
    _r_0808CF08 = _rn_0808CF08 + _op2_0808CF08;
    arm_set_nzcv_add(_rn_0808CF08, _op2_0808CF08, _r_0808CF08);
    g_cpu.R[1] = _r_0808CF08;
    g_cpu.R[15] = 0x0808CF0Au;
    runtime_tick(_cyc_0808CF08);
    /* 0808CF0A  0808cf0a T movs r0,#0x1 */
    g_cpu.R[15] = 0x0808CF0Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF0A = 1u;
    _cyc_0808CF0A = 1u;
    uint32_t _r_0808CF0A;
    _r_0808CF0A = 0x00000001u;
    arm_set_nzc_logic(_r_0808CF0A, cpsr_c());
    g_cpu.R[0] = _r_0808CF0A;
    g_cpu.R[15] = 0x0808CF0Cu;
    runtime_tick(_cyc_0808CF0A);
    /* 0808CF0C  0808cf0c T strh r0,[r1] */
    g_cpu.R[15] = 0x0808CF0Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF0C = 1u;
    _cyc_0808CF0C = 1u;
    uint32_t _base_0808CF0C = g_cpu.R[1];
    uint32_t _off_0808CF0C;
    _off_0808CF0C = 0x00000000u;
    uint32_t _ea_0808CF0C = _base_0808CF0C + _off_0808CF0C;
    uint32_t _post_0808CF0C = _base_0808CF0C + _off_0808CF0C;
    _cyc_0808CF0C += runtime_mem_cycles(_ea_0808CF0C, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CF0Cu, _ea_0808CF0C & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0808CF0C & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0808CF0Eu;
    runtime_tick(_cyc_0808CF0C);
    /* 0808CF0E  0808cf0e T strh r3,[r4] */
    g_cpu.R[15] = 0x0808CF0Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF0E = 1u;
    _cyc_0808CF0E = 1u;
    uint32_t _base_0808CF0E = g_cpu.R[4];
    uint32_t _off_0808CF0E;
    _off_0808CF0E = 0x00000000u;
    uint32_t _ea_0808CF0E = _base_0808CF0E + _off_0808CF0E;
    uint32_t _post_0808CF0E = _base_0808CF0E + _off_0808CF0E;
    _cyc_0808CF0E += runtime_mem_cycles(_ea_0808CF0E, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CF0Eu, _ea_0808CF0E & ~1u, (uint32_t)(g_cpu.R[3] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0808CF0E & ~1u, (uint16_t)(g_cpu.R[3] & 0xFFFFu));
    g_cpu.R[15] = 0x0808CF10u;
    runtime_tick(_cyc_0808CF0E);
    /* fall-through to 0x0808CF10 */
    g_cpu.R[15] = 0x0808CF10u;
    runtime_dispatch(0x0808CF10u);
    return;
}

/* 0x0808CF6E  mode=thumb  end=0x0808CF78  branches=3 */


/* 0x0808CF54 thumb */
void gf_autojt_0808CF38_00(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808CF54u);
    /* 0808CF54  0808cf54 T ldr r0,[r4,#0x8] */
    g_cpu.R[15] = 0x0808CF54u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF54 = 1u;
    _cyc_0808CF54 = 2u;
    uint32_t _base_0808CF54 = g_cpu.R[4];
    uint32_t _off_0808CF54;
    _off_0808CF54 = 0x00000008u;
    uint32_t _ea_0808CF54 = _base_0808CF54 + _off_0808CF54;
    uint32_t _post_0808CF54 = _base_0808CF54 + _off_0808CF54;
    _cyc_0808CF54 += runtime_mem_cycles(_ea_0808CF54, 4u, 0u);
    uint32_t _v_0808CF54;
    { uint32_t _w = bus_read_u32(_ea_0808CF54 & ~3u); uint32_t _rot = (_ea_0808CF54 & 3u) * 8u; _v_0808CF54 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0808CF54;
    g_cpu.R[15] = 0x0808CF56u;
    runtime_tick(_cyc_0808CF54);
    /* 0808CF56  0808cf56 T subs r5,r0,#0x1 */
    g_cpu.R[15] = 0x0808CF56u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF56 = 1u;
    _cyc_0808CF56 = 1u;
    uint32_t _rn_0808CF56 = g_cpu.R[0];
    uint32_t _r_0808CF56;
    _r_0808CF56 = _rn_0808CF56 - 0x00000001u;
    arm_set_nzcv_sub(_rn_0808CF56, 0x00000001u, _r_0808CF56);
    g_cpu.R[5] = _r_0808CF56;
    g_cpu.R[15] = 0x0808CF58u;
    runtime_tick(_cyc_0808CF56);
    /* 0808CF58  0808cf58 T str r5,[r4,#0x8] */
    g_cpu.R[15] = 0x0808CF58u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF58 = 1u;
    _cyc_0808CF58 = 1u;
    uint32_t _base_0808CF58 = g_cpu.R[4];
    uint32_t _off_0808CF58;
    _off_0808CF58 = 0x00000008u;
    uint32_t _ea_0808CF58 = _base_0808CF58 + _off_0808CF58;
    uint32_t _post_0808CF58 = _base_0808CF58 + _off_0808CF58;
    _cyc_0808CF58 += runtime_mem_cycles(_ea_0808CF58, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CF58u, _ea_0808CF58 & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_ea_0808CF58 & ~3u, g_cpu.R[5]);
    g_cpu.R[15] = 0x0808CF5Au;
    runtime_tick(_cyc_0808CF58);
    /* 0808CF5A  0808cf5a T cmps r5,#0x0 */
    g_cpu.R[15] = 0x0808CF5Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF5A = 1u;
    _cyc_0808CF5A = 1u;
    uint32_t _rn_0808CF5A = g_cpu.R[5];
    uint32_t _r_0808CF5A;
    _r_0808CF5A = _rn_0808CF5A - 0x00000000u;
    arm_set_nzcv_sub(_rn_0808CF5A, 0x00000000u, _r_0808CF5A);
    g_cpu.R[15] = 0x0808CF5Cu;
    runtime_tick(_cyc_0808CF5A);
    /* 0808CF5C  0808cf5c T bne 0x0808cfb2 */
    g_cpu.R[15] = 0x0808CF5Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF5C = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_0808CF5C = 3u;
        g_cpu.R[15] = 0x0808CFB2u;
        runtime_tick(_cyc_0808CF5C);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808CFB2);
    }
    g_cpu.R[15] = 0x0808CF5Eu;
    runtime_tick(_cyc_0808CF5C);
    /* 0808CF5E  0808cf5e T ldrh r0,[r4,#0x4] */
    g_cpu.R[15] = 0x0808CF5Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF5E = 1u;
    _cyc_0808CF5E = 2u;
    uint32_t _base_0808CF5E = g_cpu.R[4];
    uint32_t _off_0808CF5E;
    _off_0808CF5E = 0x00000004u;
    uint32_t _ea_0808CF5E = _base_0808CF5E + _off_0808CF5E;
    uint32_t _post_0808CF5E = _base_0808CF5E + _off_0808CF5E;
    _cyc_0808CF5E += runtime_mem_cycles(_ea_0808CF5E, 2u, 0u);
    uint32_t _v_0808CF5E;
    { uint32_t _h = bus_read_u16(_ea_0808CF5E & ~1u); if (_ea_0808CF5E & 1u) _v_0808CF5E = ((_h >> 8) | (_h << 24)); else _v_0808CF5E = _h; }
    g_cpu.R[0] = _v_0808CF5E;
    g_cpu.R[15] = 0x0808CF60u;
    runtime_tick(_cyc_0808CF5E);
    /* 0808CF60  0808cf60 T strh r0,[r4,#0x2] */
    g_cpu.R[15] = 0x0808CF60u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF60 = 1u;
    _cyc_0808CF60 = 1u;
    uint32_t _base_0808CF60 = g_cpu.R[4];
    uint32_t _off_0808CF60;
    _off_0808CF60 = 0x00000002u;
    uint32_t _ea_0808CF60 = _base_0808CF60 + _off_0808CF60;
    uint32_t _post_0808CF60 = _base_0808CF60 + _off_0808CF60;
    _cyc_0808CF60 += runtime_mem_cycles(_ea_0808CF60, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CF60u, _ea_0808CF60 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0808CF60 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0808CF62u;
    runtime_tick(_cyc_0808CF60);
    /* 0808CF62  0808cf62 T movs r0,r0,lsl #16 */
    g_cpu.R[15] = 0x0808CF62u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF62 = 1u;
    _cyc_0808CF62 = 1u;
    uint32_t _rm_0808CF62 = g_cpu.R[0];
    uint32_t _op2_0808CF62;
    uint32_t _co_0808CF62;
    _op2_0808CF62 = _rm_0808CF62 << 16;
    _co_0808CF62 = (_rm_0808CF62 >> 16) & 1u;
    uint32_t _r_0808CF62;
    _r_0808CF62 = _op2_0808CF62;
    arm_set_nzc_logic(_r_0808CF62, _co_0808CF62);
    g_cpu.R[0] = _r_0808CF62;
    g_cpu.R[15] = 0x0808CF64u;
    runtime_tick(_cyc_0808CF62);
    /* 0808CF64  0808cf64 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x0808CF64u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF64 = 1u;
    _cyc_0808CF64 = 1u;
    uint32_t _rn_0808CF64 = g_cpu.R[0];
    uint32_t _r_0808CF64;
    _r_0808CF64 = _rn_0808CF64 - 0x00000000u;
    arm_set_nzcv_sub(_rn_0808CF64, 0x00000000u, _r_0808CF64);
    g_cpu.R[15] = 0x0808CF66u;
    runtime_tick(_cyc_0808CF64);
    /* 0808CF66  0808cf66 T beq 0x0808cf6e */
    g_cpu.R[15] = 0x0808CF66u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF66 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0808CF66 = 3u;
        g_cpu.R[15] = 0x0808CF6Eu;
        runtime_tick(_cyc_0808CF66);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808CF6E);
    }
    g_cpu.R[15] = 0x0808CF68u;
    runtime_tick(_cyc_0808CF66);
    /* 0808CF68  0808cf68 T ldrh r0,[r4,#0x2] */
    g_cpu.R[15] = 0x0808CF68u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF68 = 1u;
    _cyc_0808CF68 = 2u;
    uint32_t _base_0808CF68 = g_cpu.R[4];
    uint32_t _off_0808CF68;
    _off_0808CF68 = 0x00000002u;
    uint32_t _ea_0808CF68 = _base_0808CF68 + _off_0808CF68;
    uint32_t _post_0808CF68 = _base_0808CF68 + _off_0808CF68;
    _cyc_0808CF68 += runtime_mem_cycles(_ea_0808CF68, 2u, 0u);
    uint32_t _v_0808CF68;
    { uint32_t _h = bus_read_u16(_ea_0808CF68 & ~1u); if (_ea_0808CF68 & 1u) _v_0808CF68 = ((_h >> 8) | (_h << 24)); else _v_0808CF68 = _h; }
    g_cpu.R[0] = _v_0808CF68;
    g_cpu.R[15] = 0x0808CF6Au;
    runtime_tick(_cyc_0808CF68);
    /* 0808CF6A  0808cf6a T bl.hi 0x08004f6e */
    g_cpu.R[15] = 0x0808CF6Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF6A = 1u;
    _cyc_0808CF6A = 1u;
    g_cpu.R[14] = 0x08004F6Eu;
    g_cpu.R[15] = 0x0808CF6Cu;
    runtime_tick(_cyc_0808CF6A);
    /* 0808CF6C  0808cf6c T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0808CF6Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF6C = 1u;
    _cyc_0808CF6C = 3u;
    uint32_t _blt_0808CF6C = (g_cpu.R[14] + 0x00000F12u) & ~1u;
    g_cpu.R[14] = 0x0808CF6Fu;
    g_cpu.R[15] = _blt_0808CF6C;
    runtime_call_push_return(0x0808CF6Eu);
    runtime_tick(_cyc_0808CF6C);
    _cyc_0808CF6C = 0u;
    runtime_dispatch(_blt_0808CF6C);
    if (g_cpu.R[15] != 0x0808CF6Eu) { runtime_call_cancel_return(0x0808CF6Eu); return; }
    g_cpu.R[15] = 0x0808CF6Eu;
    runtime_tick(_cyc_0808CF6C);
    /* fall-through to 0x0808CF6E */
    g_cpu.R[15] = 0x0808CF6Eu;
    runtime_dispatch(0x0808CF6Eu);
    return;
}

/* 0x0808CF7C  mode=thumb  end=0x0808CF96  branches=4 */


/* 0x0808CF7C thumb */
void gf_autojt_0808CF38_03(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808CF7Cu);
    /* 0808CF7C  0808cf7c T ldr r0,[r4,#0x8] */
    g_cpu.R[15] = 0x0808CF7Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF7C = 1u;
    _cyc_0808CF7C = 2u;
    uint32_t _base_0808CF7C = g_cpu.R[4];
    uint32_t _off_0808CF7C;
    _off_0808CF7C = 0x00000008u;
    uint32_t _ea_0808CF7C = _base_0808CF7C + _off_0808CF7C;
    uint32_t _post_0808CF7C = _base_0808CF7C + _off_0808CF7C;
    _cyc_0808CF7C += runtime_mem_cycles(_ea_0808CF7C, 4u, 0u);
    uint32_t _v_0808CF7C;
    { uint32_t _w = bus_read_u32(_ea_0808CF7C & ~3u); uint32_t _rot = (_ea_0808CF7C & 3u) * 8u; _v_0808CF7C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0808CF7C;
    g_cpu.R[15] = 0x0808CF7Eu;
    runtime_tick(_cyc_0808CF7C);
    /* 0808CF7E  0808cf7e T subs r5,r0,#0x1 */
    g_cpu.R[15] = 0x0808CF7Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF7E = 1u;
    _cyc_0808CF7E = 1u;
    uint32_t _rn_0808CF7E = g_cpu.R[0];
    uint32_t _r_0808CF7E;
    _r_0808CF7E = _rn_0808CF7E - 0x00000001u;
    arm_set_nzcv_sub(_rn_0808CF7E, 0x00000001u, _r_0808CF7E);
    g_cpu.R[5] = _r_0808CF7E;
    g_cpu.R[15] = 0x0808CF80u;
    runtime_tick(_cyc_0808CF7E);
    /* 0808CF80  0808cf80 T str r5,[r4,#0x8] */
    g_cpu.R[15] = 0x0808CF80u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF80 = 1u;
    _cyc_0808CF80 = 1u;
    uint32_t _base_0808CF80 = g_cpu.R[4];
    uint32_t _off_0808CF80;
    _off_0808CF80 = 0x00000008u;
    uint32_t _ea_0808CF80 = _base_0808CF80 + _off_0808CF80;
    uint32_t _post_0808CF80 = _base_0808CF80 + _off_0808CF80;
    _cyc_0808CF80 += runtime_mem_cycles(_ea_0808CF80, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CF80u, _ea_0808CF80 & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_ea_0808CF80 & ~3u, g_cpu.R[5]);
    g_cpu.R[15] = 0x0808CF82u;
    runtime_tick(_cyc_0808CF80);
    /* 0808CF82  0808cf82 T cmps r5,#0x0 */
    g_cpu.R[15] = 0x0808CF82u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF82 = 1u;
    _cyc_0808CF82 = 1u;
    uint32_t _rn_0808CF82 = g_cpu.R[5];
    uint32_t _r_0808CF82;
    _r_0808CF82 = _rn_0808CF82 - 0x00000000u;
    arm_set_nzcv_sub(_rn_0808CF82, 0x00000000u, _r_0808CF82);
    g_cpu.R[15] = 0x0808CF84u;
    runtime_tick(_cyc_0808CF82);
    /* 0808CF84  0808cf84 T bne 0x0808cfb2 */
    g_cpu.R[15] = 0x0808CF84u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF84 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_0808CF84 = 3u;
        g_cpu.R[15] = 0x0808CFB2u;
        runtime_tick(_cyc_0808CF84);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808CFB2);
    }
    g_cpu.R[15] = 0x0808CF86u;
    runtime_tick(_cyc_0808CF84);
    /* 0808CF86  0808cf86 T ldrh r1,[r4,#0x2] */
    g_cpu.R[15] = 0x0808CF86u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF86 = 1u;
    _cyc_0808CF86 = 2u;
    uint32_t _base_0808CF86 = g_cpu.R[4];
    uint32_t _off_0808CF86;
    _off_0808CF86 = 0x00000002u;
    uint32_t _ea_0808CF86 = _base_0808CF86 + _off_0808CF86;
    uint32_t _post_0808CF86 = _base_0808CF86 + _off_0808CF86;
    _cyc_0808CF86 += runtime_mem_cycles(_ea_0808CF86, 2u, 0u);
    uint32_t _v_0808CF86;
    { uint32_t _h = bus_read_u16(_ea_0808CF86 & ~1u); if (_ea_0808CF86 & 1u) _v_0808CF86 = ((_h >> 8) | (_h << 24)); else _v_0808CF86 = _h; }
    g_cpu.R[1] = _v_0808CF86;
    g_cpu.R[15] = 0x0808CF88u;
    runtime_tick(_cyc_0808CF86);
    /* 0808CF88  0808cf88 T ldr r0,[r15,#0x10] */
    g_cpu.R[15] = 0x0808CF88u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF88 = 1u;
    _cyc_0808CF88 = 2u;
    uint32_t _base_0808CF88 = 0x0808CF8Cu & ~3u;
    uint32_t _off_0808CF88;
    _off_0808CF88 = 0x00000010u;
    uint32_t _ea_0808CF88 = _base_0808CF88 + _off_0808CF88;
    uint32_t _post_0808CF88 = _base_0808CF88 + _off_0808CF88;
    _cyc_0808CF88 += runtime_mem_cycles(_ea_0808CF88, 4u, 0u);
    uint32_t _v_0808CF88;
    { uint32_t _w = bus_read_u32(_ea_0808CF88 & ~3u); uint32_t _rot = (_ea_0808CF88 & 3u) * 8u; _v_0808CF88 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0808CF88;
    g_cpu.R[15] = 0x0808CF8Au;
    runtime_tick(_cyc_0808CF88);
    /* 0808CF8A  0808cf8a T str r0,[r13] */
    g_cpu.R[15] = 0x0808CF8Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF8A = 1u;
    _cyc_0808CF8A = 1u;
    uint32_t _base_0808CF8A = g_cpu.R[13];
    uint32_t _off_0808CF8A;
    _off_0808CF8A = 0x00000000u;
    uint32_t _ea_0808CF8A = _base_0808CF8A + _off_0808CF8A;
    uint32_t _post_0808CF8A = _base_0808CF8A + _off_0808CF8A;
    _cyc_0808CF8A += runtime_mem_cycles(_ea_0808CF8A, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CF8Au, _ea_0808CF8A & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_0808CF8A & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0808CF8Cu;
    runtime_tick(_cyc_0808CF8A);
    /* 0808CF8C  0808cf8c T movs r0,#0x0 */
    g_cpu.R[15] = 0x0808CF8Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF8C = 1u;
    _cyc_0808CF8C = 1u;
    uint32_t _r_0808CF8C;
    _r_0808CF8C = 0x00000000u;
    arm_set_nzc_logic(_r_0808CF8C, cpsr_c());
    g_cpu.R[0] = _r_0808CF8C;
    g_cpu.R[15] = 0x0808CF8Eu;
    runtime_tick(_cyc_0808CF8C);
    /* 0808CF8E  0808cf8e T movs r2,#0x4 */
    g_cpu.R[15] = 0x0808CF8Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF8E = 1u;
    _cyc_0808CF8E = 1u;
    uint32_t _r_0808CF8E;
    _r_0808CF8E = 0x00000004u;
    arm_set_nzc_logic(_r_0808CF8E, cpsr_c());
    g_cpu.R[2] = _r_0808CF8E;
    g_cpu.R[15] = 0x0808CF90u;
    runtime_tick(_cyc_0808CF8E);
    /* 0808CF90  0808cf90 T movs r3,#0x0 */
    g_cpu.R[15] = 0x0808CF90u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF90 = 1u;
    _cyc_0808CF90 = 1u;
    uint32_t _r_0808CF90;
    _r_0808CF90 = 0x00000000u;
    arm_set_nzc_logic(_r_0808CF90, cpsr_c());
    g_cpu.R[3] = _r_0808CF90;
    g_cpu.R[15] = 0x0808CF92u;
    runtime_tick(_cyc_0808CF90);
    /* 0808CF92  0808cf92 T bl.hi 0x08005f96 */
    g_cpu.R[15] = 0x0808CF92u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF92 = 1u;
    _cyc_0808CF92 = 1u;
    g_cpu.R[14] = 0x08005F96u;
    g_cpu.R[15] = 0x0808CF94u;
    runtime_tick(_cyc_0808CF92);
    /* 0808CF94  0808cf94 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0808CF94u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CF94 = 1u;
    _cyc_0808CF94 = 3u;
    uint32_t _blt_0808CF94 = (g_cpu.R[14] + 0x0000002Eu) & ~1u;
    g_cpu.R[14] = 0x0808CF97u;
    g_cpu.R[15] = _blt_0808CF94;
    runtime_call_push_return(0x0808CF96u);
    runtime_tick(_cyc_0808CF94);
    _cyc_0808CF94 = 0u;
    runtime_dispatch(_blt_0808CF94);
    if (g_cpu.R[15] != 0x0808CF96u) { runtime_call_cancel_return(0x0808CF96u); return; }
    g_cpu.R[15] = 0x0808CF96u;
    runtime_tick(_cyc_0808CF94);
    /* fall-through to 0x0808CF96 */
    g_cpu.R[15] = 0x0808CF96u;
    runtime_dispatch(0x0808CF96u);
    return;
}

/* 0x0808CF96  mode=thumb  end=0x0808CF9A  branches=1 */


/* 0x0808CFA0 thumb */
void gf_autojt_0808CF38_06(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0808CFA0u);
    /* 0808CFA0  0808cfa0 T ldr r0,[r15,#0xa4] */
    g_cpu.R[15] = 0x0808CFA0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CFA0 = 1u;
    _cyc_0808CFA0 = 2u;
    uint32_t _base_0808CFA0 = 0x0808CFA4u & ~3u;
    uint32_t _off_0808CFA0;
    _off_0808CFA0 = 0x000000A4u;
    uint32_t _ea_0808CFA0 = _base_0808CFA0 + _off_0808CFA0;
    uint32_t _post_0808CFA0 = _base_0808CFA0 + _off_0808CFA0;
    _cyc_0808CFA0 += runtime_mem_cycles(_ea_0808CFA0, 4u, 0u);
    uint32_t _v_0808CFA0;
    { uint32_t _w = bus_read_u32(_ea_0808CFA0 & ~3u); uint32_t _rot = (_ea_0808CFA0 & 3u) * 8u; _v_0808CFA0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0808CFA0;
    g_cpu.R[15] = 0x0808CFA2u;
    runtime_tick(_cyc_0808CFA0);
    /* 0808CFA2  0808cfa2 T ldr r2,[r15,#0xa8] */
    g_cpu.R[15] = 0x0808CFA2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CFA2 = 1u;
    _cyc_0808CFA2 = 2u;
    uint32_t _base_0808CFA2 = 0x0808CFA6u & ~3u;
    uint32_t _off_0808CFA2;
    _off_0808CFA2 = 0x000000A8u;
    uint32_t _ea_0808CFA2 = _base_0808CFA2 + _off_0808CFA2;
    uint32_t _post_0808CFA2 = _base_0808CFA2 + _off_0808CFA2;
    _cyc_0808CFA2 += runtime_mem_cycles(_ea_0808CFA2, 4u, 0u);
    uint32_t _v_0808CFA2;
    { uint32_t _w = bus_read_u32(_ea_0808CFA2 & ~3u); uint32_t _rot = (_ea_0808CFA2 & 3u) * 8u; _v_0808CFA2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_0808CFA2;
    g_cpu.R[15] = 0x0808CFA4u;
    runtime_tick(_cyc_0808CFA2);
    /* 0808CFA4  0808cfa4 T adds r0,r0,r2 */
    g_cpu.R[15] = 0x0808CFA4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CFA4 = 1u;
    _cyc_0808CFA4 = 1u;
    uint32_t _rm_0808CFA4 = g_cpu.R[2];
    uint32_t _op2_0808CFA4;
    uint32_t _co_0808CFA4;
    _op2_0808CFA4 = _rm_0808CFA4;
    _co_0808CFA4 = cpsr_c();
    uint32_t _rn_0808CFA4 = g_cpu.R[0];
    uint32_t _r_0808CFA4;
    _r_0808CFA4 = _rn_0808CFA4 + _op2_0808CFA4;
    arm_set_nzcv_add(_rn_0808CFA4, _op2_0808CFA4, _r_0808CFA4);
    g_cpu.R[0] = _r_0808CFA4;
    g_cpu.R[15] = 0x0808CFA6u;
    runtime_tick(_cyc_0808CFA4);
    /* 0808CFA6  0808cfa6 T movs r3,#0x0 */
    g_cpu.R[15] = 0x0808CFA6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CFA6 = 1u;
    _cyc_0808CFA6 = 1u;
    uint32_t _r_0808CFA6;
    _r_0808CFA6 = 0x00000000u;
    arm_set_nzc_logic(_r_0808CFA6, cpsr_c());
    g_cpu.R[3] = _r_0808CFA6;
    g_cpu.R[15] = 0x0808CFA8u;
    runtime_tick(_cyc_0808CFA6);
    /* 0808CFA8  0808cfa8 T ldrsh r0,[r0,+r3] */
    g_cpu.R[15] = 0x0808CFA8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CFA8 = 1u;
    _cyc_0808CFA8 = 2u;
    uint32_t _base_0808CFA8 = g_cpu.R[0];
    uint32_t _off_0808CFA8;
    uint32_t _morm_0808CFA8 = g_cpu.R[3];
    _off_0808CFA8 = _morm_0808CFA8;
    uint32_t _ea_0808CFA8 = _base_0808CFA8 + _off_0808CFA8;
    uint32_t _post_0808CFA8 = _base_0808CFA8 + _off_0808CFA8;
    _cyc_0808CFA8 += runtime_mem_cycles(_ea_0808CFA8, 2u, 0u);
    uint32_t _v_0808CFA8;
    if (_ea_0808CFA8 & 1u) _v_0808CFA8 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_0808CFA8);
    else _v_0808CFA8 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_0808CFA8);
    g_cpu.R[0] = _v_0808CFA8;
    g_cpu.R[15] = 0x0808CFAAu;
    runtime_tick(_cyc_0808CFA8);
    /* 0808CFAA  0808cfaa T cmps r0,#0x0 */
    g_cpu.R[15] = 0x0808CFAAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CFAA = 1u;
    _cyc_0808CFAA = 1u;
    uint32_t _rn_0808CFAA = g_cpu.R[0];
    uint32_t _r_0808CFAA;
    _r_0808CFAA = _rn_0808CFAA - 0x00000000u;
    arm_set_nzcv_sub(_rn_0808CFAA, 0x00000000u, _r_0808CFAA);
    g_cpu.R[15] = 0x0808CFACu;
    runtime_tick(_cyc_0808CFAA);
    /* 0808CFAC  0808cfac T bne 0x0808cfb2 */
    g_cpu.R[15] = 0x0808CFACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CFAC = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_0808CFAC = 3u;
        g_cpu.R[15] = 0x0808CFB2u;
        runtime_tick(_cyc_0808CFAC);
        GBARECOMP_TAIL_CALL(gf_tfunc_0808CFB2);
    }
    g_cpu.R[15] = 0x0808CFAEu;
    runtime_tick(_cyc_0808CFAC);
    /* 0808CFAE  0808cfae T strh r0,[r4] */
    g_cpu.R[15] = 0x0808CFAEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CFAE = 1u;
    _cyc_0808CFAE = 1u;
    uint32_t _base_0808CFAE = g_cpu.R[4];
    uint32_t _off_0808CFAE;
    _off_0808CFAE = 0x00000000u;
    uint32_t _ea_0808CFAE = _base_0808CFAE + _off_0808CFAE;
    uint32_t _post_0808CFAE = _base_0808CFAE + _off_0808CFAE;
    _cyc_0808CFAE += runtime_mem_cycles(_ea_0808CFAE, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CFAEu, _ea_0808CFAE & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0808CFAE & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0808CFB0u;
    runtime_tick(_cyc_0808CFAE);
    /* 0808CFB0  0808cfb0 T strh r0,[r4,#0x2] */
    g_cpu.R[15] = 0x0808CFB0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0808CFB0 = 1u;
    _cyc_0808CFB0 = 1u;
    uint32_t _base_0808CFB0 = g_cpu.R[4];
    uint32_t _off_0808CFB0;
    _off_0808CFB0 = 0x00000002u;
    uint32_t _ea_0808CFB0 = _base_0808CFB0 + _off_0808CFB0;
    uint32_t _post_0808CFB0 = _base_0808CFB0 + _off_0808CFB0;
    _cyc_0808CFB0 += runtime_mem_cycles(_ea_0808CFB0, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0808CFB0u, _ea_0808CFB0 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0808CFB0 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0808CFB2u;
    runtime_tick(_cyc_0808CFB0);
    /* fall-through to 0x0808CFB2 */
    g_cpu.R[15] = 0x0808CFB2u;
    runtime_dispatch(0x0808CFB2u);
    return;
}

/* 0x0808CFE6  mode=thumb  end=0x0808CFF8  branches=6  indirect */


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


