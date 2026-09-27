/* Auto-split from gbarecomp shards. Module: iwram_reloc
 * 33 guest functions. Do not hand-edit function bodies.
 */

#include "runtime_arm.h"
#include "recompiled.h"

/* 0x03000000 thumb */
void gf_tfunc_03000000(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000000u);
    /* 03000000  03000000 T adds r2,r1,#0x0 */
    g_cpu.R[15] = 0x03000000u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000000 = 1u;
    _cyc_03000000 = 1u;
    uint32_t _rn_03000000 = g_cpu.R[1];
    uint32_t _r_03000000;
    _r_03000000 = _rn_03000000 + 0x00000000u;
    arm_set_nzcv_add(_rn_03000000, 0x00000000u, _r_03000000);
    g_cpu.R[2] = _r_03000000;
    g_cpu.R[15] = 0x03000002u;
    runtime_tick(_cyc_03000000);
    /* 03000002  03000002 T movs r3,#0x0 */
    g_cpu.R[15] = 0x03000002u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000002 = 1u;
    _cyc_03000002 = 1u;
    uint32_t _r_03000002;
    _r_03000002 = 0x00000000u;
    arm_set_nzc_logic(_r_03000002, cpsr_c());
    g_cpu.R[3] = _r_03000002;
    g_cpu.R[15] = 0x03000004u;
    runtime_tick(_cyc_03000002);
    /* 03000004  03000004 T ldrsh r1,[r2,+r3] */
    g_cpu.R[15] = 0x03000004u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000004 = 1u;
    _cyc_03000004 = 2u;
    uint32_t _base_03000004 = g_cpu.R[2];
    uint32_t _off_03000004;
    uint32_t _morm_03000004 = g_cpu.R[3];
    _off_03000004 = _morm_03000004;
    uint32_t _ea_03000004 = _base_03000004 + _off_03000004;
    uint32_t _post_03000004 = _base_03000004 + _off_03000004;
    _cyc_03000004 += runtime_mem_cycles(_ea_03000004, 2u, 0u);
    uint32_t _v_03000004;
    if (_ea_03000004 & 1u) _v_03000004 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_03000004);
    else _v_03000004 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_03000004);
    g_cpu.R[1] = _v_03000004;
    g_cpu.R[15] = 0x03000006u;
    runtime_tick(_cyc_03000004);
    /* 03000006  03000006 T movs r1,r1,lsl #1 */
    g_cpu.R[15] = 0x03000006u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000006 = 1u;
    _cyc_03000006 = 1u;
    uint32_t _rm_03000006 = g_cpu.R[1];
    uint32_t _op2_03000006;
    uint32_t _co_03000006;
    _op2_03000006 = _rm_03000006 << 1;
    _co_03000006 = (_rm_03000006 >> 31) & 1u;
    uint32_t _r_03000006;
    _r_03000006 = _op2_03000006;
    arm_set_nzc_logic(_r_03000006, _co_03000006);
    g_cpu.R[1] = _r_03000006;
    g_cpu.R[15] = 0x03000008u;
    runtime_tick(_cyc_03000006);
    /* 03000008  03000008 T adds r1,r0,r1 */
    g_cpu.R[15] = 0x03000008u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000008 = 1u;
    _cyc_03000008 = 1u;
    uint32_t _rm_03000008 = g_cpu.R[1];
    uint32_t _op2_03000008;
    uint32_t _co_03000008;
    _op2_03000008 = _rm_03000008;
    _co_03000008 = cpsr_c();
    uint32_t _rn_03000008 = g_cpu.R[0];
    uint32_t _r_03000008;
    _r_03000008 = _rn_03000008 + _op2_03000008;
    arm_set_nzcv_add(_rn_03000008, _op2_03000008, _r_03000008);
    g_cpu.R[1] = _r_03000008;
    g_cpu.R[15] = 0x0300000Au;
    runtime_tick(_cyc_03000008);
    /* 0300000A  0300000a T ldrh r0,[r1] */
    g_cpu.R[15] = 0x0300000Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300000A = 1u;
    _cyc_0300000A = 2u;
    uint32_t _base_0300000A = g_cpu.R[1];
    uint32_t _off_0300000A;
    _off_0300000A = 0x00000000u;
    uint32_t _ea_0300000A = _base_0300000A + _off_0300000A;
    uint32_t _post_0300000A = _base_0300000A + _off_0300000A;
    _cyc_0300000A += runtime_mem_cycles(_ea_0300000A, 2u, 0u);
    uint32_t _v_0300000A;
    { uint32_t _h = bus_read_u16(_ea_0300000A & ~1u); if (_ea_0300000A & 1u) _v_0300000A = ((_h >> 8) | (_h << 24)); else _v_0300000A = _h; }
    g_cpu.R[0] = _v_0300000A;
    g_cpu.R[15] = 0x0300000Cu;
    runtime_tick(_cyc_0300000A);
    /* 0300000C  0300000c T adds r0,r0,#0x1 */
    g_cpu.R[15] = 0x0300000Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300000C = 1u;
    _cyc_0300000C = 1u;
    uint32_t _rn_0300000C = g_cpu.R[0];
    uint32_t _r_0300000C;
    _r_0300000C = _rn_0300000C + 0x00000001u;
    arm_set_nzcv_add(_rn_0300000C, 0x00000001u, _r_0300000C);
    g_cpu.R[0] = _r_0300000C;
    g_cpu.R[15] = 0x0300000Eu;
    runtime_tick(_cyc_0300000C);
    /* 0300000E  0300000e T strh r0,[r1] */
    g_cpu.R[15] = 0x0300000Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300000E = 1u;
    _cyc_0300000E = 1u;
    uint32_t _base_0300000E = g_cpu.R[1];
    uint32_t _off_0300000E;
    _off_0300000E = 0x00000000u;
    uint32_t _ea_0300000E = _base_0300000E + _off_0300000E;
    uint32_t _post_0300000E = _base_0300000E + _off_0300000E;
    _cyc_0300000E += runtime_mem_cycles(_ea_0300000E, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0300000Eu, _ea_0300000E & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0300000E & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x03000010u;
    runtime_tick(_cyc_0300000E);
    /* 03000010  03000010 T adds r1,r1,#0x2 */
    g_cpu.R[15] = 0x03000010u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000010 = 1u;
    _cyc_03000010 = 1u;
    uint32_t _rn_03000010 = g_cpu.R[1];
    uint32_t _r_03000010;
    _r_03000010 = _rn_03000010 + 0x00000002u;
    arm_set_nzcv_add(_rn_03000010, 0x00000002u, _r_03000010);
    g_cpu.R[1] = _r_03000010;
    g_cpu.R[15] = 0x03000012u;
    runtime_tick(_cyc_03000010);
    /* 03000012  03000012 T cmps r1,r2 */
    g_cpu.R[15] = 0x03000012u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000012 = 1u;
    _cyc_03000012 = 1u;
    uint32_t _rm_03000012 = g_cpu.R[2];
    uint32_t _op2_03000012;
    uint32_t _co_03000012;
    _op2_03000012 = _rm_03000012;
    _co_03000012 = cpsr_c();
    uint32_t _rn_03000012 = g_cpu.R[1];
    uint32_t _r_03000012;
    _r_03000012 = _rn_03000012 - _op2_03000012;
    arm_set_nzcv_sub(_rn_03000012, _op2_03000012, _r_03000012);
    g_cpu.R[15] = 0x03000014u;
    runtime_tick(_cyc_03000012);
    /* 03000014  03000014 T bcs 0x03000020 */
    g_cpu.R[15] = 0x03000014u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000014 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_03000014 = 3u;
        g_cpu.R[15] = 0x03000020u;
        runtime_tick(_cyc_03000014);
        GBARECOMP_TAIL_CALL(gf_tfunc_03000020);
    }
    g_cpu.R[15] = 0x03000016u;
    runtime_tick(_cyc_03000014);
    /* 03000016  03000016 T movs r0,#0x0 */
    g_cpu.R[15] = 0x03000016u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000016 = 1u;
    _cyc_03000016 = 1u;
    uint32_t _r_03000016;
    _r_03000016 = 0x00000000u;
    arm_set_nzc_logic(_r_03000016, cpsr_c());
    g_cpu.R[0] = _r_03000016;
    g_cpu.R[15] = 0x03000018u;
    runtime_tick(_cyc_03000016);
    /* fall-through to 0x03000018 */
    g_cpu.R[15] = 0x03000018u;
    runtime_dispatch(0x03000018u);
    return;
}

/* 0x03000018  mode=thumb  end=0x03000020  branches=1  indirect */


/* 0x03000018 thumb */
void gf_tfunc_03000018(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000018u);
L_03000018:
    /* 03000018  03000018 T strh r0,[r1] */
    g_cpu.R[15] = 0x03000018u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000018 = 1u;
    _cyc_03000018 = 1u;
    uint32_t _base_03000018 = g_cpu.R[1];
    uint32_t _off_03000018;
    _off_03000018 = 0x00000000u;
    uint32_t _ea_03000018 = _base_03000018 + _off_03000018;
    uint32_t _post_03000018 = _base_03000018 + _off_03000018;
    _cyc_03000018 += runtime_mem_cycles(_ea_03000018, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000018u, _ea_03000018 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_03000018 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0300001Au;
    runtime_tick(_cyc_03000018);
    /* 0300001A  0300001a T adds r1,r1,#0x2 */
    g_cpu.R[15] = 0x0300001Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300001A = 1u;
    _cyc_0300001A = 1u;
    uint32_t _rn_0300001A = g_cpu.R[1];
    uint32_t _r_0300001A;
    _r_0300001A = _rn_0300001A + 0x00000002u;
    arm_set_nzcv_add(_rn_0300001A, 0x00000002u, _r_0300001A);
    g_cpu.R[1] = _r_0300001A;
    g_cpu.R[15] = 0x0300001Cu;
    runtime_tick(_cyc_0300001A);
    /* 0300001C  0300001c T cmps r1,r2 */
    g_cpu.R[15] = 0x0300001Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300001C = 1u;
    _cyc_0300001C = 1u;
    uint32_t _rm_0300001C = g_cpu.R[2];
    uint32_t _op2_0300001C;
    uint32_t _co_0300001C;
    _op2_0300001C = _rm_0300001C;
    _co_0300001C = cpsr_c();
    uint32_t _rn_0300001C = g_cpu.R[1];
    uint32_t _r_0300001C;
    _r_0300001C = _rn_0300001C - _op2_0300001C;
    arm_set_nzcv_sub(_rn_0300001C, _op2_0300001C, _r_0300001C);
    g_cpu.R[15] = 0x0300001Eu;
    runtime_tick(_cyc_0300001C);
    /* 0300001E  0300001e T bcc 0x03000018 */
    g_cpu.R[15] = 0x0300001Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300001E = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_0300001E = 3u;
        g_cpu.R[15] = 0x03000018u;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x0300001Eu, 0x03000018u, 0u, 0u);
        runtime_tick(_cyc_0300001E);
        goto L_03000018;
    }
    g_cpu.R[15] = 0x03000020u;
    runtime_tick(_cyc_0300001E);
    /* fall-through to 0x03000020 */
    g_cpu.R[15] = 0x03000020u;
    runtime_dispatch(0x03000020u);
    return;
}

/* 0x03000020  mode=thumb  end=0x03000022  branches=0  indirect */


/* 0x03000020 thumb */
void gf_tfunc_03000020(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000020u);
    /* 03000020  03000020 T bx r14 */
    g_cpu.R[15] = 0x03000020u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000020 = 1u;
    _cyc_03000020 = 3u;
    uint32_t _bxt_03000020 = g_cpu.R[14];
    g_cpu.R[15] = _bxt_03000020 & ~1u;
    if (_bxt_03000020 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_03000020);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_03000020);
    g_cpu.R[15] = 0x03000022u;
    runtime_tick(_cyc_03000020);
    /* fall-through to 0x03000022 */
    g_cpu.R[15] = 0x03000022u;
    runtime_dispatch(0x03000022u);
    return;
}

/* 0x03000042  mode=thumb  end=0x0300004A  branches=1  indirect */


/* 0x03000024 thumb */
void gf_tfunc_03000024(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000024u);
    /* 03000024  03000024 T adds r2,r0,#0x0 */
    g_cpu.R[15] = 0x03000024u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000024 = 1u;
    _cyc_03000024 = 1u;
    uint32_t _rn_03000024 = g_cpu.R[0];
    uint32_t _r_03000024;
    _r_03000024 = _rn_03000024 + 0x00000000u;
    arm_set_nzcv_add(_rn_03000024, 0x00000000u, _r_03000024);
    g_cpu.R[2] = _r_03000024;
    g_cpu.R[15] = 0x03000026u;
    runtime_tick(_cyc_03000024);
    /* 03000026  03000026 T movs r3,#0x0 */
    g_cpu.R[15] = 0x03000026u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000026 = 1u;
    _cyc_03000026 = 1u;
    uint32_t _r_03000026;
    _r_03000026 = 0x00000000u;
    arm_set_nzc_logic(_r_03000026, cpsr_c());
    g_cpu.R[3] = _r_03000026;
    g_cpu.R[15] = 0x03000028u;
    runtime_tick(_cyc_03000026);
    /* 03000028  03000028 T ldrsh r0,[r1,+r3] */
    g_cpu.R[15] = 0x03000028u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000028 = 1u;
    _cyc_03000028 = 2u;
    uint32_t _base_03000028 = g_cpu.R[1];
    uint32_t _off_03000028;
    uint32_t _morm_03000028 = g_cpu.R[3];
    _off_03000028 = _morm_03000028;
    uint32_t _ea_03000028 = _base_03000028 + _off_03000028;
    uint32_t _post_03000028 = _base_03000028 + _off_03000028;
    _cyc_03000028 += runtime_mem_cycles(_ea_03000028, 2u, 0u);
    uint32_t _v_03000028;
    if (_ea_03000028 & 1u) _v_03000028 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_03000028);
    else _v_03000028 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_03000028);
    g_cpu.R[0] = _v_03000028;
    g_cpu.R[15] = 0x0300002Au;
    runtime_tick(_cyc_03000028);
    /* 0300002A  0300002a T cmps r0,#0x0 */
    g_cpu.R[15] = 0x0300002Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300002A = 1u;
    _cyc_0300002A = 1u;
    uint32_t _rn_0300002A = g_cpu.R[0];
    uint32_t _r_0300002A;
    _r_0300002A = _rn_0300002A - 0x00000000u;
    arm_set_nzcv_sub(_rn_0300002A, 0x00000000u, _r_0300002A);
    g_cpu.R[15] = 0x0300002Cu;
    runtime_tick(_cyc_0300002A);
    /* 0300002C  0300002c T ble 0x0300004a */
    g_cpu.R[15] = 0x0300002Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300002C = 1u;
    if (arm_cond_passes(0xdu)) {
        _cyc_0300002C = 3u;
        g_cpu.R[15] = 0x0300004Au;
        runtime_tick(_cyc_0300002C);
        GBARECOMP_TAIL_CALL(gf_tfunc_0300004A);
    }
    g_cpu.R[15] = 0x0300002Eu;
    runtime_tick(_cyc_0300002C);
    /* 0300002E  0300002e T movs r0,r0,lsl #1 */
    g_cpu.R[15] = 0x0300002Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300002E = 1u;
    _cyc_0300002E = 1u;
    uint32_t _rm_0300002E = g_cpu.R[0];
    uint32_t _op2_0300002E;
    uint32_t _co_0300002E;
    _op2_0300002E = _rm_0300002E << 1;
    _co_0300002E = (_rm_0300002E >> 31) & 1u;
    uint32_t _r_0300002E;
    _r_0300002E = _op2_0300002E;
    arm_set_nzc_logic(_r_0300002E, _co_0300002E);
    g_cpu.R[0] = _r_0300002E;
    g_cpu.R[15] = 0x03000030u;
    runtime_tick(_cyc_0300002E);
    /* 03000030  03000030 T subs r0,r0,#0x2 */
    g_cpu.R[15] = 0x03000030u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000030 = 1u;
    _cyc_03000030 = 1u;
    uint32_t _rn_03000030 = g_cpu.R[0];
    uint32_t _r_03000030;
    _r_03000030 = _rn_03000030 - 0x00000002u;
    arm_set_nzcv_sub(_rn_03000030, 0x00000002u, _r_03000030);
    g_cpu.R[0] = _r_03000030;
    g_cpu.R[15] = 0x03000032u;
    runtime_tick(_cyc_03000030);
    /* 03000032  03000032 T adds r2,r2,r0 */
    g_cpu.R[15] = 0x03000032u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000032 = 1u;
    _cyc_03000032 = 1u;
    uint32_t _rm_03000032 = g_cpu.R[0];
    uint32_t _op2_03000032;
    uint32_t _co_03000032;
    _op2_03000032 = _rm_03000032;
    _co_03000032 = cpsr_c();
    uint32_t _rn_03000032 = g_cpu.R[2];
    uint32_t _r_03000032;
    _r_03000032 = _rn_03000032 + _op2_03000032;
    arm_set_nzcv_add(_rn_03000032, _op2_03000032, _r_03000032);
    g_cpu.R[2] = _r_03000032;
    g_cpu.R[15] = 0x03000034u;
    runtime_tick(_cyc_03000032);
    /* 03000034  03000034 T ldrh r0,[r2] */
    g_cpu.R[15] = 0x03000034u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000034 = 1u;
    _cyc_03000034 = 2u;
    uint32_t _base_03000034 = g_cpu.R[2];
    uint32_t _off_03000034;
    _off_03000034 = 0x00000000u;
    uint32_t _ea_03000034 = _base_03000034 + _off_03000034;
    uint32_t _post_03000034 = _base_03000034 + _off_03000034;
    _cyc_03000034 += runtime_mem_cycles(_ea_03000034, 2u, 0u);
    uint32_t _v_03000034;
    { uint32_t _h = bus_read_u16(_ea_03000034 & ~1u); if (_ea_03000034 & 1u) _v_03000034 = ((_h >> 8) | (_h << 24)); else _v_03000034 = _h; }
    g_cpu.R[0] = _v_03000034;
    g_cpu.R[15] = 0x03000036u;
    runtime_tick(_cyc_03000034);
    /* 03000036  03000036 T adds r0,r0,#0x1 */
    g_cpu.R[15] = 0x03000036u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000036 = 1u;
    _cyc_03000036 = 1u;
    uint32_t _rn_03000036 = g_cpu.R[0];
    uint32_t _r_03000036;
    _r_03000036 = _rn_03000036 + 0x00000001u;
    arm_set_nzcv_add(_rn_03000036, 0x00000001u, _r_03000036);
    g_cpu.R[0] = _r_03000036;
    g_cpu.R[15] = 0x03000038u;
    runtime_tick(_cyc_03000036);
    /* 03000038  03000038 T strh r0,[r2] */
    g_cpu.R[15] = 0x03000038u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000038 = 1u;
    _cyc_03000038 = 1u;
    uint32_t _base_03000038 = g_cpu.R[2];
    uint32_t _off_03000038;
    _off_03000038 = 0x00000000u;
    uint32_t _ea_03000038 = _base_03000038 + _off_03000038;
    uint32_t _post_03000038 = _base_03000038 + _off_03000038;
    _cyc_03000038 += runtime_mem_cycles(_ea_03000038, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000038u, _ea_03000038 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_03000038 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0300003Au;
    runtime_tick(_cyc_03000038);
    /* 0300003A  0300003a T adds r2,r2,#0x2 */
    g_cpu.R[15] = 0x0300003Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300003A = 1u;
    _cyc_0300003A = 1u;
    uint32_t _rn_0300003A = g_cpu.R[2];
    uint32_t _r_0300003A;
    _r_0300003A = _rn_0300003A + 0x00000002u;
    arm_set_nzcv_add(_rn_0300003A, 0x00000002u, _r_0300003A);
    g_cpu.R[2] = _r_0300003A;
    g_cpu.R[15] = 0x0300003Cu;
    runtime_tick(_cyc_0300003A);
    /* 0300003C  0300003c T cmps r2,r1 */
    g_cpu.R[15] = 0x0300003Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300003C = 1u;
    _cyc_0300003C = 1u;
    uint32_t _rm_0300003C = g_cpu.R[1];
    uint32_t _op2_0300003C;
    uint32_t _co_0300003C;
    _op2_0300003C = _rm_0300003C;
    _co_0300003C = cpsr_c();
    uint32_t _rn_0300003C = g_cpu.R[2];
    uint32_t _r_0300003C;
    _r_0300003C = _rn_0300003C - _op2_0300003C;
    arm_set_nzcv_sub(_rn_0300003C, _op2_0300003C, _r_0300003C);
    g_cpu.R[15] = 0x0300003Eu;
    runtime_tick(_cyc_0300003C);
    /* 0300003E  0300003e T bcs 0x0300004a */
    g_cpu.R[15] = 0x0300003Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300003E = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_0300003E = 3u;
        g_cpu.R[15] = 0x0300004Au;
        runtime_tick(_cyc_0300003E);
        GBARECOMP_TAIL_CALL(gf_tfunc_0300004A);
    }
    g_cpu.R[15] = 0x03000040u;
    runtime_tick(_cyc_0300003E);
    /* 03000040  03000040 T movs r0,#0x0 */
    g_cpu.R[15] = 0x03000040u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000040 = 1u;
    _cyc_03000040 = 1u;
    uint32_t _r_03000040;
    _r_03000040 = 0x00000000u;
    arm_set_nzc_logic(_r_03000040, cpsr_c());
    g_cpu.R[0] = _r_03000040;
    g_cpu.R[15] = 0x03000042u;
    runtime_tick(_cyc_03000040);
    /* fall-through to 0x03000042 */
    g_cpu.R[15] = 0x03000042u;
    runtime_dispatch(0x03000042u);
    return;
}

/* 0x0300004A  mode=thumb  end=0x0300004C  branches=0  indirect */


/* 0x03000042 thumb */
void gf_tfunc_03000042(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000042u);
L_03000042:
    /* 03000042  03000042 T strh r0,[r2] */
    g_cpu.R[15] = 0x03000042u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000042 = 1u;
    _cyc_03000042 = 1u;
    uint32_t _base_03000042 = g_cpu.R[2];
    uint32_t _off_03000042;
    _off_03000042 = 0x00000000u;
    uint32_t _ea_03000042 = _base_03000042 + _off_03000042;
    uint32_t _post_03000042 = _base_03000042 + _off_03000042;
    _cyc_03000042 += runtime_mem_cycles(_ea_03000042, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000042u, _ea_03000042 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_03000042 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x03000044u;
    runtime_tick(_cyc_03000042);
    /* 03000044  03000044 T adds r2,r2,#0x2 */
    g_cpu.R[15] = 0x03000044u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000044 = 1u;
    _cyc_03000044 = 1u;
    uint32_t _rn_03000044 = g_cpu.R[2];
    uint32_t _r_03000044;
    _r_03000044 = _rn_03000044 + 0x00000002u;
    arm_set_nzcv_add(_rn_03000044, 0x00000002u, _r_03000044);
    g_cpu.R[2] = _r_03000044;
    g_cpu.R[15] = 0x03000046u;
    runtime_tick(_cyc_03000044);
    /* 03000046  03000046 T cmps r2,r1 */
    g_cpu.R[15] = 0x03000046u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000046 = 1u;
    _cyc_03000046 = 1u;
    uint32_t _rm_03000046 = g_cpu.R[1];
    uint32_t _op2_03000046;
    uint32_t _co_03000046;
    _op2_03000046 = _rm_03000046;
    _co_03000046 = cpsr_c();
    uint32_t _rn_03000046 = g_cpu.R[2];
    uint32_t _r_03000046;
    _r_03000046 = _rn_03000046 - _op2_03000046;
    arm_set_nzcv_sub(_rn_03000046, _op2_03000046, _r_03000046);
    g_cpu.R[15] = 0x03000048u;
    runtime_tick(_cyc_03000046);
    /* 03000048  03000048 T bcc 0x03000042 */
    g_cpu.R[15] = 0x03000048u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000048 = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_03000048 = 3u;
        g_cpu.R[15] = 0x03000042u;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x03000048u, 0x03000042u, 0u, 0u);
        runtime_tick(_cyc_03000048);
        goto L_03000042;
    }
    g_cpu.R[15] = 0x0300004Au;
    runtime_tick(_cyc_03000048);
    /* fall-through to 0x0300004A */
    g_cpu.R[15] = 0x0300004Au;
    runtime_dispatch(0x0300004Au);
    return;
}

/* 0x03000208  mode=thumb  end=0x0300021C  branches=1  indirect */


/* 0x0300004A thumb */
void gf_tfunc_0300004A(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0300004Au);
    /* 0300004A  0300004a T bx r14 */
    g_cpu.R[15] = 0x0300004Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300004A = 1u;
    _cyc_0300004A = 3u;
    uint32_t _bxt_0300004A = g_cpu.R[14];
    g_cpu.R[15] = _bxt_0300004A & ~1u;
    if (_bxt_0300004A & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_0300004A);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_0300004A);
    g_cpu.R[15] = 0x0300004Cu;
    runtime_tick(_cyc_0300004A);
    /* fall-through to 0x0300004C */
    g_cpu.R[15] = 0x0300004Cu;
    runtime_dispatch(0x0300004Cu);
    return;
}

/* 0x03000140  mode=thumb  end=0x03000156  branches=2  indirect */


/* 0x03000140 thumb */
void gf_tfunc_03000140(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000140u);
    /* 03000140  03000140 T stm r13!,{r4,r14} */
    g_cpu.R[15] = 0x03000140u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000140 = 1u;
    _cyc_03000140 = 1u;
    uint32_t _b_03000140 = g_cpu.R[13];
    uint32_t _a_03000140 = _b_03000140 - 8u;
    uint32_t _fb_03000140 = _b_03000140 - 8u;
    _cyc_03000140 += runtime_mem_cycles(_a_03000140 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000140u, _a_03000140 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_03000140 & ~3u, g_cpu.R[4]);
    _a_03000140 += 4u;
    _cyc_03000140 += runtime_mem_cycles(_a_03000140 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000140u, _a_03000140 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_03000140 & ~3u, g_cpu.R[14]);
    _a_03000140 += 4u;
    g_cpu.R[13] = _fb_03000140;
    g_cpu.R[15] = 0x03000142u;
    runtime_tick(_cyc_03000140);
    /* 03000142  03000142 T adds r3,r1,#0x0 */
    g_cpu.R[15] = 0x03000142u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000142 = 1u;
    _cyc_03000142 = 1u;
    uint32_t _rn_03000142 = g_cpu.R[1];
    uint32_t _r_03000142;
    _r_03000142 = _rn_03000142 + 0x00000000u;
    arm_set_nzcv_add(_rn_03000142, 0x00000000u, _r_03000142);
    g_cpu.R[3] = _r_03000142;
    g_cpu.R[15] = 0x03000144u;
    runtime_tick(_cyc_03000142);
    /* 03000144  03000144 T movs r4,#0x0 */
    g_cpu.R[15] = 0x03000144u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000144 = 1u;
    _cyc_03000144 = 1u;
    uint32_t _r_03000144;
    _r_03000144 = 0x00000000u;
    arm_set_nzc_logic(_r_03000144, cpsr_c());
    g_cpu.R[4] = _r_03000144;
    g_cpu.R[15] = 0x03000146u;
    runtime_tick(_cyc_03000144);
    /* 03000146  03000146 T ldrsh r1,[r3,+r4] */
    g_cpu.R[15] = 0x03000146u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000146 = 1u;
    _cyc_03000146 = 2u;
    uint32_t _base_03000146 = g_cpu.R[3];
    uint32_t _off_03000146;
    uint32_t _morm_03000146 = g_cpu.R[4];
    _off_03000146 = _morm_03000146;
    uint32_t _ea_03000146 = _base_03000146 + _off_03000146;
    uint32_t _post_03000146 = _base_03000146 + _off_03000146;
    _cyc_03000146 += runtime_mem_cycles(_ea_03000146, 2u, 0u);
    uint32_t _v_03000146;
    if (_ea_03000146 & 1u) _v_03000146 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_03000146);
    else _v_03000146 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_03000146);
    g_cpu.R[1] = _v_03000146;
    g_cpu.R[15] = 0x03000148u;
    runtime_tick(_cyc_03000146);
    /* 03000148  03000148 T movs r1,r1,lsl #1 */
    g_cpu.R[15] = 0x03000148u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000148 = 1u;
    _cyc_03000148 = 1u;
    uint32_t _rm_03000148 = g_cpu.R[1];
    uint32_t _op2_03000148;
    uint32_t _co_03000148;
    _op2_03000148 = _rm_03000148 << 1;
    _co_03000148 = (_rm_03000148 >> 31) & 1u;
    uint32_t _r_03000148;
    _r_03000148 = _op2_03000148;
    arm_set_nzc_logic(_r_03000148, _co_03000148);
    g_cpu.R[1] = _r_03000148;
    g_cpu.R[15] = 0x0300014Au;
    runtime_tick(_cyc_03000148);
    /* 0300014A  0300014a T adds r0,r0,r1 */
    g_cpu.R[15] = 0x0300014Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300014A = 1u;
    _cyc_0300014A = 1u;
    uint32_t _rm_0300014A = g_cpu.R[1];
    uint32_t _op2_0300014A;
    uint32_t _co_0300014A;
    _op2_0300014A = _rm_0300014A;
    _co_0300014A = cpsr_c();
    uint32_t _rn_0300014A = g_cpu.R[0];
    uint32_t _r_0300014A;
    _r_0300014A = _rn_0300014A + _op2_0300014A;
    arm_set_nzcv_add(_rn_0300014A, _op2_0300014A, _r_0300014A);
    g_cpu.R[0] = _r_0300014A;
    g_cpu.R[15] = 0x0300014Cu;
    runtime_tick(_cyc_0300014A);
    /* 0300014C  0300014c T strh r2,[r0] */
    g_cpu.R[15] = 0x0300014Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300014C = 1u;
    _cyc_0300014C = 1u;
    uint32_t _base_0300014C = g_cpu.R[0];
    uint32_t _off_0300014C;
    _off_0300014C = 0x00000000u;
    uint32_t _ea_0300014C = _base_0300014C + _off_0300014C;
    uint32_t _post_0300014C = _base_0300014C + _off_0300014C;
    _cyc_0300014C += runtime_mem_cycles(_ea_0300014C, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0300014Cu, _ea_0300014C & ~1u, (uint32_t)(g_cpu.R[2] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0300014C & ~1u, (uint16_t)(g_cpu.R[2] & 0xFFFFu));
    g_cpu.R[15] = 0x0300014Eu;
    runtime_tick(_cyc_0300014C);
    /* 0300014E  0300014e T adds r0,r0,#0x2 */
    g_cpu.R[15] = 0x0300014Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300014E = 1u;
    _cyc_0300014E = 1u;
    uint32_t _rn_0300014E = g_cpu.R[0];
    uint32_t _r_0300014E;
    _r_0300014E = _rn_0300014E + 0x00000002u;
    arm_set_nzcv_add(_rn_0300014E, 0x00000002u, _r_0300014E);
    g_cpu.R[0] = _r_0300014E;
    g_cpu.R[15] = 0x03000150u;
    runtime_tick(_cyc_0300014E);
    /* 03000150  03000150 T cmps r0,r3 */
    g_cpu.R[15] = 0x03000150u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000150 = 1u;
    _cyc_03000150 = 1u;
    uint32_t _rm_03000150 = g_cpu.R[3];
    uint32_t _op2_03000150;
    uint32_t _co_03000150;
    _op2_03000150 = _rm_03000150;
    _co_03000150 = cpsr_c();
    uint32_t _rn_03000150 = g_cpu.R[0];
    uint32_t _r_03000150;
    _r_03000150 = _rn_03000150 - _op2_03000150;
    arm_set_nzcv_sub(_rn_03000150, _op2_03000150, _r_03000150);
    g_cpu.R[15] = 0x03000152u;
    runtime_tick(_cyc_03000150);
    /* 03000152  03000152 T bcs 0x0300015e */
    g_cpu.R[15] = 0x03000152u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000152 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_03000152 = 3u;
        g_cpu.R[15] = 0x0300015Eu;
        runtime_tick(_cyc_03000152);
        GBARECOMP_TAIL_CALL(gf_tfunc_0300015E);
    }
    g_cpu.R[15] = 0x03000154u;
    runtime_tick(_cyc_03000152);
    /* 03000154  03000154 T movs r1,#0x0 */
    g_cpu.R[15] = 0x03000154u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000154 = 1u;
    _cyc_03000154 = 1u;
    uint32_t _r_03000154;
    _r_03000154 = 0x00000000u;
    arm_set_nzc_logic(_r_03000154, cpsr_c());
    g_cpu.R[1] = _r_03000154;
    g_cpu.R[15] = 0x03000156u;
    runtime_tick(_cyc_03000154);
    /* fall-through to 0x03000156 */
    g_cpu.R[15] = 0x03000156u;
    runtime_dispatch(0x03000156u);
    return;
}

/* 0x03000156  mode=thumb  end=0x0300015E  branches=1  indirect */


/* 0x03000156 thumb */
void gf_tfunc_03000156(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000156u);
L_03000156:
    /* 03000156  03000156 T strh r1,[r0] */
    g_cpu.R[15] = 0x03000156u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000156 = 1u;
    _cyc_03000156 = 1u;
    uint32_t _base_03000156 = g_cpu.R[0];
    uint32_t _off_03000156;
    _off_03000156 = 0x00000000u;
    uint32_t _ea_03000156 = _base_03000156 + _off_03000156;
    uint32_t _post_03000156 = _base_03000156 + _off_03000156;
    _cyc_03000156 += runtime_mem_cycles(_ea_03000156, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000156u, _ea_03000156 & ~1u, (uint32_t)(g_cpu.R[1] & 0xFFFFu), 2u);
    bus_write_u16(_ea_03000156 & ~1u, (uint16_t)(g_cpu.R[1] & 0xFFFFu));
    g_cpu.R[15] = 0x03000158u;
    runtime_tick(_cyc_03000156);
    /* 03000158  03000158 T adds r0,r0,#0x2 */
    g_cpu.R[15] = 0x03000158u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000158 = 1u;
    _cyc_03000158 = 1u;
    uint32_t _rn_03000158 = g_cpu.R[0];
    uint32_t _r_03000158;
    _r_03000158 = _rn_03000158 + 0x00000002u;
    arm_set_nzcv_add(_rn_03000158, 0x00000002u, _r_03000158);
    g_cpu.R[0] = _r_03000158;
    g_cpu.R[15] = 0x0300015Au;
    runtime_tick(_cyc_03000158);
    /* 0300015A  0300015a T cmps r0,r3 */
    g_cpu.R[15] = 0x0300015Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300015A = 1u;
    _cyc_0300015A = 1u;
    uint32_t _rm_0300015A = g_cpu.R[3];
    uint32_t _op2_0300015A;
    uint32_t _co_0300015A;
    _op2_0300015A = _rm_0300015A;
    _co_0300015A = cpsr_c();
    uint32_t _rn_0300015A = g_cpu.R[0];
    uint32_t _r_0300015A;
    _r_0300015A = _rn_0300015A - _op2_0300015A;
    arm_set_nzcv_sub(_rn_0300015A, _op2_0300015A, _r_0300015A);
    g_cpu.R[15] = 0x0300015Cu;
    runtime_tick(_cyc_0300015A);
    /* 0300015C  0300015c T bcc 0x03000156 */
    g_cpu.R[15] = 0x0300015Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300015C = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_0300015C = 3u;
        g_cpu.R[15] = 0x03000156u;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x0300015Cu, 0x03000156u, 0u, 0u);
        runtime_tick(_cyc_0300015C);
        goto L_03000156;
    }
    g_cpu.R[15] = 0x0300015Eu;
    runtime_tick(_cyc_0300015C);
    /* fall-through to 0x0300015E */
    g_cpu.R[15] = 0x0300015Eu;
    runtime_dispatch(0x0300015Eu);
    return;
}

/* 0x0300015E  mode=thumb  end=0x03000164  branches=0  indirect */


/* 0x0300015E thumb */
void gf_tfunc_0300015E(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0300015Eu);
    /* 0300015E  0300015e T ldm r13!,{r4} */
    g_cpu.R[15] = 0x0300015Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300015E = 1u;
    _cyc_0300015E = 2u;
    uint32_t _b_0300015E = g_cpu.R[13];
    uint32_t _a_0300015E = _b_0300015E;
    uint32_t _fb_0300015E = _b_0300015E + 4u;
    _cyc_0300015E += runtime_mem_cycles(_a_0300015E & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_0300015E & ~3u);
    _a_0300015E += 4u;
    g_cpu.R[13] = _fb_0300015E;
    g_cpu.R[15] = 0x03000160u;
    runtime_tick(_cyc_0300015E);
    /* 03000160  03000160 T ldm r13!,{r0} */
    g_cpu.R[15] = 0x03000160u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000160 = 1u;
    _cyc_03000160 = 2u;
    uint32_t _b_03000160 = g_cpu.R[13];
    uint32_t _a_03000160 = _b_03000160;
    uint32_t _fb_03000160 = _b_03000160 + 4u;
    _cyc_03000160 += runtime_mem_cycles(_a_03000160 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_03000160 & ~3u);
    _a_03000160 += 4u;
    g_cpu.R[13] = _fb_03000160;
    g_cpu.R[15] = 0x03000162u;
    runtime_tick(_cyc_03000160);
    /* 03000162  03000162 T bx r0 */
    g_cpu.R[15] = 0x03000162u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000162 = 1u;
    _cyc_03000162 = 3u;
    uint32_t _bxt_03000162 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_03000162 & ~1u;
    if (_bxt_03000162 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_03000162);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_03000162);
    g_cpu.R[15] = 0x03000164u;
    runtime_tick(_cyc_03000162);
    /* fall-through to 0x03000164 */
    g_cpu.R[15] = 0x03000164u;
    runtime_dispatch(0x03000164u);
    return;
}

/* 0x03000300  mode=thumb  end=0x0300031A  branches=7  indirect */


/* 0x03000208 thumb */
void gf_tfunc_03000208(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000208u);
    /* 03000208  03000208 T stm r13!,{r4,r14} */
    g_cpu.R[15] = 0x03000208u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000208 = 1u;
    _cyc_03000208 = 1u;
    uint32_t _b_03000208 = g_cpu.R[13];
    uint32_t _a_03000208 = _b_03000208 - 8u;
    uint32_t _fb_03000208 = _b_03000208 - 8u;
    _cyc_03000208 += runtime_mem_cycles(_a_03000208 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000208u, _a_03000208 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_03000208 & ~3u, g_cpu.R[4]);
    _a_03000208 += 4u;
    _cyc_03000208 += runtime_mem_cycles(_a_03000208 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000208u, _a_03000208 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_03000208 & ~3u, g_cpu.R[14]);
    _a_03000208 += 4u;
    g_cpu.R[13] = _fb_03000208;
    g_cpu.R[15] = 0x0300020Au;
    runtime_tick(_cyc_03000208);
    /* 0300020A  0300020a T ldr r0,[r15,#0x28] */
    g_cpu.R[15] = 0x0300020Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300020A = 1u;
    _cyc_0300020A = 2u;
    uint32_t _base_0300020A = 0x0300020Eu & ~3u;
    uint32_t _off_0300020A;
    _off_0300020A = 0x00000028u;
    uint32_t _ea_0300020A = _base_0300020A + _off_0300020A;
    uint32_t _post_0300020A = _base_0300020A + _off_0300020A;
    _cyc_0300020A += runtime_mem_cycles(_ea_0300020A, 4u, 0u);
    uint32_t _v_0300020A;
    { uint32_t _w = bus_read_u32(_ea_0300020A & ~3u); uint32_t _rot = (_ea_0300020A & 3u) * 8u; _v_0300020A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0300020A;
    g_cpu.R[15] = 0x0300020Cu;
    runtime_tick(_cyc_0300020A);
    /* 0300020C  0300020c T movs r1,#0x0 */
    g_cpu.R[15] = 0x0300020Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300020C = 1u;
    _cyc_0300020C = 1u;
    uint32_t _r_0300020C;
    _r_0300020C = 0x00000000u;
    arm_set_nzc_logic(_r_0300020C, cpsr_c());
    g_cpu.R[1] = _r_0300020C;
    g_cpu.R[15] = 0x0300020Eu;
    runtime_tick(_cyc_0300020C);
    /* 0300020E  0300020e T str r1,[r0] */
    g_cpu.R[15] = 0x0300020Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300020E = 1u;
    _cyc_0300020E = 1u;
    uint32_t _base_0300020E = g_cpu.R[0];
    uint32_t _off_0300020E;
    _off_0300020E = 0x00000000u;
    uint32_t _ea_0300020E = _base_0300020E + _off_0300020E;
    uint32_t _post_0300020E = _base_0300020E + _off_0300020E;
    _cyc_0300020E += runtime_mem_cycles(_ea_0300020E, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0300020Eu, _ea_0300020E & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_ea_0300020E & ~3u, g_cpu.R[1]);
    g_cpu.R[15] = 0x03000210u;
    runtime_tick(_cyc_0300020E);
    /* 03000210  03000210 T ldr r0,[r15,#0x24] */
    g_cpu.R[15] = 0x03000210u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000210 = 1u;
    _cyc_03000210 = 2u;
    uint32_t _base_03000210 = 0x03000214u & ~3u;
    uint32_t _off_03000210;
    _off_03000210 = 0x00000024u;
    uint32_t _ea_03000210 = _base_03000210 + _off_03000210;
    uint32_t _post_03000210 = _base_03000210 + _off_03000210;
    _cyc_03000210 += runtime_mem_cycles(_ea_03000210, 4u, 0u);
    uint32_t _v_03000210;
    { uint32_t _w = bus_read_u32(_ea_03000210 & ~3u); uint32_t _rot = (_ea_03000210 & 3u) * 8u; _v_03000210 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_03000210;
    g_cpu.R[15] = 0x03000212u;
    runtime_tick(_cyc_03000210);
    /* 03000212  03000212 T str r1,[r0] */
    g_cpu.R[15] = 0x03000212u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000212 = 1u;
    _cyc_03000212 = 1u;
    uint32_t _base_03000212 = g_cpu.R[0];
    uint32_t _off_03000212;
    _off_03000212 = 0x00000000u;
    uint32_t _ea_03000212 = _base_03000212 + _off_03000212;
    uint32_t _post_03000212 = _base_03000212 + _off_03000212;
    _cyc_03000212 += runtime_mem_cycles(_ea_03000212, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000212u, _ea_03000212 & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_ea_03000212 & ~3u, g_cpu.R[1]);
    g_cpu.R[15] = 0x03000214u;
    runtime_tick(_cyc_03000212);
    /* 03000214  03000214 T movs r0,#0x0 */
    g_cpu.R[15] = 0x03000214u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000214 = 1u;
    _cyc_03000214 = 1u;
    uint32_t _r_03000214;
    _r_03000214 = 0x00000000u;
    arm_set_nzc_logic(_r_03000214, cpsr_c());
    g_cpu.R[0] = _r_03000214;
    g_cpu.R[15] = 0x03000216u;
    runtime_tick(_cyc_03000214);
    /* 03000216  03000216 T ldr r3,[r15,#0x24] */
    g_cpu.R[15] = 0x03000216u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000216 = 1u;
    _cyc_03000216 = 2u;
    uint32_t _base_03000216 = 0x0300021Au & ~3u;
    uint32_t _off_03000216;
    _off_03000216 = 0x00000024u;
    uint32_t _ea_03000216 = _base_03000216 + _off_03000216;
    uint32_t _post_03000216 = _base_03000216 + _off_03000216;
    _cyc_03000216 += runtime_mem_cycles(_ea_03000216, 4u, 0u);
    uint32_t _v_03000216;
    { uint32_t _w = bus_read_u32(_ea_03000216 & ~3u); uint32_t _rot = (_ea_03000216 & 3u) * 8u; _v_03000216 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_03000216;
    g_cpu.R[15] = 0x03000218u;
    runtime_tick(_cyc_03000216);
    /* 03000218  03000218 T ldr r4,[r15,#0x24] */
    g_cpu.R[15] = 0x03000218u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000218 = 1u;
    _cyc_03000218 = 2u;
    uint32_t _base_03000218 = 0x0300021Cu & ~3u;
    uint32_t _off_03000218;
    _off_03000218 = 0x00000024u;
    uint32_t _ea_03000218 = _base_03000218 + _off_03000218;
    uint32_t _post_03000218 = _base_03000218 + _off_03000218;
    _cyc_03000218 += runtime_mem_cycles(_ea_03000218, 4u, 0u);
    uint32_t _v_03000218;
    { uint32_t _w = bus_read_u32(_ea_03000218 & ~3u); uint32_t _rot = (_ea_03000218 & 3u) * 8u; _v_03000218 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[4] = _v_03000218;
    g_cpu.R[15] = 0x0300021Au;
    runtime_tick(_cyc_03000218);
    /* 0300021A  0300021a T adds r2,r3,#0x0 */
    g_cpu.R[15] = 0x0300021Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300021A = 1u;
    _cyc_0300021A = 1u;
    uint32_t _rn_0300021A = g_cpu.R[3];
    uint32_t _r_0300021A;
    _r_0300021A = _rn_0300021A + 0x00000000u;
    arm_set_nzcv_add(_rn_0300021A, 0x00000000u, _r_0300021A);
    g_cpu.R[2] = _r_0300021A;
    g_cpu.R[15] = 0x0300021Cu;
    runtime_tick(_cyc_0300021A);
    /* fall-through to 0x0300021C */
    g_cpu.R[15] = 0x0300021Cu;
    runtime_dispatch(0x0300021Cu);
    return;
}

/* 0x0300021C  mode=thumb  end=0x03000234  branches=1  indirect */


/* 0x0300021C thumb */
void gf_tfunc_0300021C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0300021Cu);
L_0300021C:
    /* 0300021C  0300021c T stm r2!,{r1} */
    g_cpu.R[15] = 0x0300021Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300021C = 1u;
    _cyc_0300021C = 1u;
    uint32_t _b_0300021C = g_cpu.R[2];
    uint32_t _a_0300021C = _b_0300021C;
    uint32_t _fb_0300021C = _b_0300021C + 4u;
    _cyc_0300021C += runtime_mem_cycles(_a_0300021C & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0300021Cu, _a_0300021C & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_a_0300021C & ~3u, g_cpu.R[1]);
    _a_0300021C += 4u;
    g_cpu.R[2] = _fb_0300021C;
    g_cpu.R[15] = 0x0300021Eu;
    runtime_tick(_cyc_0300021C);
    /* 0300021E  0300021e T adds r0,r0,#0x1 */
    g_cpu.R[15] = 0x0300021Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300021E = 1u;
    _cyc_0300021E = 1u;
    uint32_t _rn_0300021E = g_cpu.R[0];
    uint32_t _r_0300021E;
    _r_0300021E = _rn_0300021E + 0x00000001u;
    arm_set_nzcv_add(_rn_0300021E, 0x00000001u, _r_0300021E);
    g_cpu.R[0] = _r_0300021E;
    g_cpu.R[15] = 0x03000220u;
    runtime_tick(_cyc_0300021E);
    /* 03000220  03000220 T cmps r0,#0xf */
    g_cpu.R[15] = 0x03000220u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000220 = 1u;
    _cyc_03000220 = 1u;
    uint32_t _rn_03000220 = g_cpu.R[0];
    uint32_t _r_03000220;
    _r_03000220 = _rn_03000220 - 0x0000000Fu;
    arm_set_nzcv_sub(_rn_03000220, 0x0000000Fu, _r_03000220);
    g_cpu.R[15] = 0x03000222u;
    runtime_tick(_cyc_03000220);
    /* 03000222  03000222 T bls 0x0300021c */
    g_cpu.R[15] = 0x03000222u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000222 = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_03000222 = 3u;
        g_cpu.R[15] = 0x0300021Cu;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x03000222u, 0x0300021Cu, 0u, 0u);
        runtime_tick(_cyc_03000222);
        goto L_0300021C;
    }
    g_cpu.R[15] = 0x03000224u;
    runtime_tick(_cyc_03000222);
    /* 03000224  03000224 T ldrb r0,[r4] */
    g_cpu.R[15] = 0x03000224u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000224 = 1u;
    _cyc_03000224 = 2u;
    uint32_t _base_03000224 = g_cpu.R[4];
    uint32_t _off_03000224;
    _off_03000224 = 0x00000000u;
    uint32_t _ea_03000224 = _base_03000224 + _off_03000224;
    uint32_t _post_03000224 = _base_03000224 + _off_03000224;
    _cyc_03000224 += runtime_mem_cycles(_ea_03000224, 1u, 0u);
    uint32_t _v_03000224;
    _v_03000224 = bus_read_u8(_ea_03000224);
    g_cpu.R[0] = _v_03000224;
    g_cpu.R[15] = 0x03000226u;
    runtime_tick(_cyc_03000224);
    /* 03000226  03000226 T movs r0,r0,lsl #2 */
    g_cpu.R[15] = 0x03000226u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000226 = 1u;
    _cyc_03000226 = 1u;
    uint32_t _rm_03000226 = g_cpu.R[0];
    uint32_t _op2_03000226;
    uint32_t _co_03000226;
    _op2_03000226 = _rm_03000226 << 2;
    _co_03000226 = (_rm_03000226 >> 30) & 1u;
    uint32_t _r_03000226;
    _r_03000226 = _op2_03000226;
    arm_set_nzc_logic(_r_03000226, _co_03000226);
    g_cpu.R[0] = _r_03000226;
    g_cpu.R[15] = 0x03000228u;
    runtime_tick(_cyc_03000226);
    /* 03000228  03000228 T adds r0,r0,r3 */
    g_cpu.R[15] = 0x03000228u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000228 = 1u;
    _cyc_03000228 = 1u;
    uint32_t _rm_03000228 = g_cpu.R[3];
    uint32_t _op2_03000228;
    uint32_t _co_03000228;
    _op2_03000228 = _rm_03000228;
    _co_03000228 = cpsr_c();
    uint32_t _rn_03000228 = g_cpu.R[0];
    uint32_t _r_03000228;
    _r_03000228 = _rn_03000228 + _op2_03000228;
    arm_set_nzcv_add(_rn_03000228, _op2_03000228, _r_03000228);
    g_cpu.R[0] = _r_03000228;
    g_cpu.R[15] = 0x0300022Au;
    runtime_tick(_cyc_03000228);
    /* 0300022A  0300022a T movs r1,#0x1 */
    g_cpu.R[15] = 0x0300022Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300022A = 1u;
    _cyc_0300022A = 1u;
    uint32_t _r_0300022A;
    _r_0300022A = 0x00000001u;
    arm_set_nzc_logic(_r_0300022A, cpsr_c());
    g_cpu.R[1] = _r_0300022A;
    g_cpu.R[15] = 0x0300022Cu;
    runtime_tick(_cyc_0300022A);
    /* 0300022C  0300022c T str r1,[r0] */
    g_cpu.R[15] = 0x0300022Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300022C = 1u;
    _cyc_0300022C = 1u;
    uint32_t _base_0300022C = g_cpu.R[0];
    uint32_t _off_0300022C;
    _off_0300022C = 0x00000000u;
    uint32_t _ea_0300022C = _base_0300022C + _off_0300022C;
    uint32_t _post_0300022C = _base_0300022C + _off_0300022C;
    _cyc_0300022C += runtime_mem_cycles(_ea_0300022C, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0300022Cu, _ea_0300022C & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_ea_0300022C & ~3u, g_cpu.R[1]);
    g_cpu.R[15] = 0x0300022Eu;
    runtime_tick(_cyc_0300022C);
    /* 0300022E  0300022e T ldm r13!,{r4} */
    g_cpu.R[15] = 0x0300022Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300022E = 1u;
    _cyc_0300022E = 2u;
    uint32_t _b_0300022E = g_cpu.R[13];
    uint32_t _a_0300022E = _b_0300022E;
    uint32_t _fb_0300022E = _b_0300022E + 4u;
    _cyc_0300022E += runtime_mem_cycles(_a_0300022E & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_0300022E & ~3u);
    _a_0300022E += 4u;
    g_cpu.R[13] = _fb_0300022E;
    g_cpu.R[15] = 0x03000230u;
    runtime_tick(_cyc_0300022E);
    /* 03000230  03000230 T ldm r13!,{r0} */
    g_cpu.R[15] = 0x03000230u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000230 = 1u;
    _cyc_03000230 = 2u;
    uint32_t _b_03000230 = g_cpu.R[13];
    uint32_t _a_03000230 = _b_03000230;
    uint32_t _fb_03000230 = _b_03000230 + 4u;
    _cyc_03000230 += runtime_mem_cycles(_a_03000230 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_03000230 & ~3u);
    _a_03000230 += 4u;
    g_cpu.R[13] = _fb_03000230;
    g_cpu.R[15] = 0x03000232u;
    runtime_tick(_cyc_03000230);
    /* 03000232  03000232 T bx r0 */
    g_cpu.R[15] = 0x03000232u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000232 = 1u;
    _cyc_03000232 = 3u;
    uint32_t _bxt_03000232 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_03000232 & ~1u;
    if (_bxt_03000232 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_03000232);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_03000232);
    g_cpu.R[15] = 0x03000234u;
    runtime_tick(_cyc_03000232);
    /* fall-through to 0x03000234 */
    g_cpu.R[15] = 0x03000234u;
    runtime_dispatch(0x03000234u);
    return;
}

/* 0x0300031A  mode=thumb  end=0x0300033C  branches=6  indirect */


/* 0x03000300 thumb */
void gf_tfunc_03000300(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000300u);
    /* 03000300  03000300 T stm r13!,{r4,r5,r6,r7,r14} */
    g_cpu.R[15] = 0x03000300u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000300 = 1u;
    _cyc_03000300 = 1u;
    uint32_t _b_03000300 = g_cpu.R[13];
    uint32_t _a_03000300 = _b_03000300 - 20u;
    uint32_t _fb_03000300 = _b_03000300 - 20u;
    _cyc_03000300 += runtime_mem_cycles(_a_03000300 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000300u, _a_03000300 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_03000300 & ~3u, g_cpu.R[4]);
    _a_03000300 += 4u;
    _cyc_03000300 += runtime_mem_cycles(_a_03000300 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000300u, _a_03000300 & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_03000300 & ~3u, g_cpu.R[5]);
    _a_03000300 += 4u;
    _cyc_03000300 += runtime_mem_cycles(_a_03000300 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000300u, _a_03000300 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_a_03000300 & ~3u, g_cpu.R[6]);
    _a_03000300 += 4u;
    _cyc_03000300 += runtime_mem_cycles(_a_03000300 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000300u, _a_03000300 & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_a_03000300 & ~3u, g_cpu.R[7]);
    _a_03000300 += 4u;
    _cyc_03000300 += runtime_mem_cycles(_a_03000300 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000300u, _a_03000300 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_03000300 & ~3u, g_cpu.R[14]);
    _a_03000300 += 4u;
    g_cpu.R[13] = _fb_03000300;
    g_cpu.R[15] = 0x03000302u;
    runtime_tick(_cyc_03000300);
    /* 03000302  03000302 T mov r7,r10 */
    g_cpu.R[15] = 0x03000302u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000302 = 1u;
    _cyc_03000302 = 1u;
    uint32_t _rm_03000302 = g_cpu.R[10];
    uint32_t _op2_03000302;
    uint32_t _co_03000302;
    _op2_03000302 = _rm_03000302;
    _co_03000302 = cpsr_c();
    uint32_t _r_03000302;
    _r_03000302 = _op2_03000302;
    g_cpu.R[7] = _r_03000302;
    g_cpu.R[15] = 0x03000304u;
    runtime_tick(_cyc_03000302);
    /* 03000304  03000304 T mov r6,r9 */
    g_cpu.R[15] = 0x03000304u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000304 = 1u;
    _cyc_03000304 = 1u;
    uint32_t _rm_03000304 = g_cpu.R[9];
    uint32_t _op2_03000304;
    uint32_t _co_03000304;
    _op2_03000304 = _rm_03000304;
    _co_03000304 = cpsr_c();
    uint32_t _r_03000304;
    _r_03000304 = _op2_03000304;
    g_cpu.R[6] = _r_03000304;
    g_cpu.R[15] = 0x03000306u;
    runtime_tick(_cyc_03000304);
    /* 03000306  03000306 T mov r5,r8 */
    g_cpu.R[15] = 0x03000306u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000306 = 1u;
    _cyc_03000306 = 1u;
    uint32_t _rm_03000306 = g_cpu.R[8];
    uint32_t _op2_03000306;
    uint32_t _co_03000306;
    _op2_03000306 = _rm_03000306;
    _co_03000306 = cpsr_c();
    uint32_t _r_03000306;
    _r_03000306 = _op2_03000306;
    g_cpu.R[5] = _r_03000306;
    g_cpu.R[15] = 0x03000308u;
    runtime_tick(_cyc_03000306);
    /* 03000308  03000308 T stm r13!,{r5,r6,r7} */
    g_cpu.R[15] = 0x03000308u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000308 = 1u;
    _cyc_03000308 = 1u;
    uint32_t _b_03000308 = g_cpu.R[13];
    uint32_t _a_03000308 = _b_03000308 - 12u;
    uint32_t _fb_03000308 = _b_03000308 - 12u;
    _cyc_03000308 += runtime_mem_cycles(_a_03000308 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000308u, _a_03000308 & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_03000308 & ~3u, g_cpu.R[5]);
    _a_03000308 += 4u;
    _cyc_03000308 += runtime_mem_cycles(_a_03000308 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000308u, _a_03000308 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_a_03000308 & ~3u, g_cpu.R[6]);
    _a_03000308 += 4u;
    _cyc_03000308 += runtime_mem_cycles(_a_03000308 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000308u, _a_03000308 & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_a_03000308 & ~3u, g_cpu.R[7]);
    _a_03000308 += 4u;
    g_cpu.R[13] = _fb_03000308;
    g_cpu.R[15] = 0x0300030Au;
    runtime_tick(_cyc_03000308);
    /* 0300030A  0300030a T sub r13,r13,#0x4 */
    g_cpu.R[15] = 0x0300030Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300030A = 1u;
    _cyc_0300030A = 1u;
    uint32_t _rn_0300030A = g_cpu.R[13];
    uint32_t _r_0300030A;
    _r_0300030A = _rn_0300030A - 0x00000004u;
    g_cpu.R[13] = _r_0300030A;
    g_cpu.R[15] = 0x0300030Cu;
    runtime_tick(_cyc_0300030A);
    /* 0300030C  0300030c T ldr r0,[r15,#0x94] */
    g_cpu.R[15] = 0x0300030Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300030C = 1u;
    _cyc_0300030C = 2u;
    uint32_t _base_0300030C = 0x03000310u & ~3u;
    uint32_t _off_0300030C;
    _off_0300030C = 0x00000094u;
    uint32_t _ea_0300030C = _base_0300030C + _off_0300030C;
    uint32_t _post_0300030C = _base_0300030C + _off_0300030C;
    _cyc_0300030C += runtime_mem_cycles(_ea_0300030C, 4u, 0u);
    uint32_t _v_0300030C;
    { uint32_t _w = bus_read_u32(_ea_0300030C & ~3u); uint32_t _rot = (_ea_0300030C & 3u) * 8u; _v_0300030C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0300030C;
    g_cpu.R[15] = 0x0300030Eu;
    runtime_tick(_cyc_0300030C);
    /* 0300030E  0300030e T ldr r7,[r0] */
    g_cpu.R[15] = 0x0300030Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300030E = 1u;
    _cyc_0300030E = 2u;
    uint32_t _base_0300030E = g_cpu.R[0];
    uint32_t _off_0300030E;
    _off_0300030E = 0x00000000u;
    uint32_t _ea_0300030E = _base_0300030E + _off_0300030E;
    uint32_t _post_0300030E = _base_0300030E + _off_0300030E;
    _cyc_0300030E += runtime_mem_cycles(_ea_0300030E, 4u, 0u);
    uint32_t _v_0300030E;
    { uint32_t _w = bus_read_u32(_ea_0300030E & ~3u); uint32_t _rot = (_ea_0300030E & 3u) * 8u; _v_0300030E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[7] = _v_0300030E;
    g_cpu.R[15] = 0x03000310u;
    runtime_tick(_cyc_0300030E);
    /* 03000310  03000310 T movs r4,#0x0 */
    g_cpu.R[15] = 0x03000310u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000310 = 1u;
    _cyc_03000310 = 1u;
    uint32_t _r_03000310;
    _r_03000310 = 0x00000000u;
    arm_set_nzc_logic(_r_03000310, cpsr_c());
    g_cpu.R[4] = _r_03000310;
    g_cpu.R[15] = 0x03000312u;
    runtime_tick(_cyc_03000310);
    /* 03000312  03000312 T cmps r4,r7 */
    g_cpu.R[15] = 0x03000312u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000312 = 1u;
    _cyc_03000312 = 1u;
    uint32_t _rm_03000312 = g_cpu.R[7];
    uint32_t _op2_03000312;
    uint32_t _co_03000312;
    _op2_03000312 = _rm_03000312;
    _co_03000312 = cpsr_c();
    uint32_t _rn_03000312 = g_cpu.R[4];
    uint32_t _r_03000312;
    _r_03000312 = _rn_03000312 - _op2_03000312;
    arm_set_nzcv_sub(_rn_03000312, _op2_03000312, _r_03000312);
    g_cpu.R[15] = 0x03000314u;
    runtime_tick(_cyc_03000312);
    /* 03000314  03000314 T bcs 0x03000392 */
    g_cpu.R[15] = 0x03000314u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000314 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_03000314 = 3u;
        g_cpu.R[15] = 0x03000392u;
        runtime_tick(_cyc_03000314);
        GBARECOMP_TAIL_CALL(gf_tfunc_03000392);
    }
    g_cpu.R[15] = 0x03000316u;
    runtime_tick(_cyc_03000314);
    /* 03000316  03000316 T movs r0,#0x2 */
    g_cpu.R[15] = 0x03000316u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000316 = 1u;
    _cyc_03000316 = 1u;
    uint32_t _r_03000316;
    _r_03000316 = 0x00000002u;
    arm_set_nzc_logic(_r_03000316, cpsr_c());
    g_cpu.R[0] = _r_03000316;
    g_cpu.R[15] = 0x03000318u;
    runtime_tick(_cyc_03000316);
    /* 03000318  03000318 T mov r10,r0 */
    g_cpu.R[15] = 0x03000318u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000318 = 1u;
    _cyc_03000318 = 1u;
    uint32_t _rm_03000318 = g_cpu.R[0];
    uint32_t _op2_03000318;
    uint32_t _co_03000318;
    _op2_03000318 = _rm_03000318;
    _co_03000318 = cpsr_c();
    uint32_t _r_03000318;
    _r_03000318 = _op2_03000318;
    g_cpu.R[10] = _r_03000318;
    g_cpu.R[15] = 0x0300031Au;
    runtime_tick(_cyc_03000318);
    /* fall-through to 0x0300031A */
    g_cpu.R[15] = 0x0300031Au;
    runtime_dispatch(0x0300031Au);
    return;
}

/* 0x0300033C  mode=thumb  end=0x0300035A  branches=5  indirect */


/* 0x0300031A thumb */
void gf_tfunc_0300031A(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0300031Au);
    /* 0300031A  0300031a T ldr r5,[r15,#0x8c] */
    g_cpu.R[15] = 0x0300031Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300031A = 1u;
    _cyc_0300031A = 2u;
    uint32_t _base_0300031A = 0x0300031Eu & ~3u;
    uint32_t _off_0300031A;
    _off_0300031A = 0x0000008Cu;
    uint32_t _ea_0300031A = _base_0300031A + _off_0300031A;
    uint32_t _post_0300031A = _base_0300031A + _off_0300031A;
    _cyc_0300031A += runtime_mem_cycles(_ea_0300031A, 4u, 0u);
    uint32_t _v_0300031A;
    { uint32_t _w = bus_read_u32(_ea_0300031A & ~3u); uint32_t _rot = (_ea_0300031A & 3u) * 8u; _v_0300031A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[5] = _v_0300031A;
    g_cpu.R[15] = 0x0300031Cu;
    runtime_tick(_cyc_0300031A);
    /* 0300031C  0300031c T ldr r2,[r5] */
    g_cpu.R[15] = 0x0300031Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300031C = 1u;
    _cyc_0300031C = 2u;
    uint32_t _base_0300031C = g_cpu.R[5];
    uint32_t _off_0300031C;
    _off_0300031C = 0x00000000u;
    uint32_t _ea_0300031C = _base_0300031C + _off_0300031C;
    uint32_t _post_0300031C = _base_0300031C + _off_0300031C;
    _cyc_0300031C += runtime_mem_cycles(_ea_0300031C, 4u, 0u);
    uint32_t _v_0300031C;
    { uint32_t _w = bus_read_u32(_ea_0300031C & ~3u); uint32_t _rot = (_ea_0300031C & 3u) * 8u; _v_0300031C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_0300031C;
    g_cpu.R[15] = 0x0300031Eu;
    runtime_tick(_cyc_0300031C);
    /* 0300031E  0300031e T ldr r3,[r2,#0x4] */
    g_cpu.R[15] = 0x0300031Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300031E = 1u;
    _cyc_0300031E = 2u;
    uint32_t _base_0300031E = g_cpu.R[2];
    uint32_t _off_0300031E;
    _off_0300031E = 0x00000004u;
    uint32_t _ea_0300031E = _base_0300031E + _off_0300031E;
    uint32_t _post_0300031E = _base_0300031E + _off_0300031E;
    _cyc_0300031E += runtime_mem_cycles(_ea_0300031E, 4u, 0u);
    uint32_t _v_0300031E;
    { uint32_t _w = bus_read_u32(_ea_0300031E & ~3u); uint32_t _rot = (_ea_0300031E & 3u) * 8u; _v_0300031E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_0300031E;
    g_cpu.R[15] = 0x03000320u;
    runtime_tick(_cyc_0300031E);
    /* 03000320  03000320 T movs r1,r7,lsl #2 */
    g_cpu.R[15] = 0x03000320u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000320 = 1u;
    _cyc_03000320 = 1u;
    uint32_t _rm_03000320 = g_cpu.R[7];
    uint32_t _op2_03000320;
    uint32_t _co_03000320;
    _op2_03000320 = _rm_03000320 << 2;
    _co_03000320 = (_rm_03000320 >> 30) & 1u;
    uint32_t _r_03000320;
    _r_03000320 = _op2_03000320;
    arm_set_nzc_logic(_r_03000320, _co_03000320);
    g_cpu.R[1] = _r_03000320;
    g_cpu.R[15] = 0x03000322u;
    runtime_tick(_cyc_03000320);
    /* 03000322  03000322 T adds r1,r1,r2 */
    g_cpu.R[15] = 0x03000322u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000322 = 1u;
    _cyc_03000322 = 1u;
    uint32_t _rm_03000322 = g_cpu.R[2];
    uint32_t _op2_03000322;
    uint32_t _co_03000322;
    _op2_03000322 = _rm_03000322;
    _co_03000322 = cpsr_c();
    uint32_t _rn_03000322 = g_cpu.R[1];
    uint32_t _r_03000322;
    _r_03000322 = _rn_03000322 + _op2_03000322;
    arm_set_nzcv_add(_rn_03000322, _op2_03000322, _r_03000322);
    g_cpu.R[1] = _r_03000322;
    g_cpu.R[15] = 0x03000324u;
    runtime_tick(_cyc_03000322);
    /* 03000324  03000324 T ldr r0,[r1] */
    g_cpu.R[15] = 0x03000324u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000324 = 1u;
    _cyc_03000324 = 2u;
    uint32_t _base_03000324 = g_cpu.R[1];
    uint32_t _off_03000324;
    _off_03000324 = 0x00000000u;
    uint32_t _ea_03000324 = _base_03000324 + _off_03000324;
    uint32_t _post_03000324 = _base_03000324 + _off_03000324;
    _cyc_03000324 += runtime_mem_cycles(_ea_03000324, 4u, 0u);
    uint32_t _v_03000324;
    { uint32_t _w = bus_read_u32(_ea_03000324 & ~3u); uint32_t _rot = (_ea_03000324 & 3u) * 8u; _v_03000324 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_03000324;
    g_cpu.R[15] = 0x03000326u;
    runtime_tick(_cyc_03000324);
    /* 03000326  03000326 T str r0,[r2,#0x4] */
    g_cpu.R[15] = 0x03000326u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000326 = 1u;
    _cyc_03000326 = 1u;
    uint32_t _base_03000326 = g_cpu.R[2];
    uint32_t _off_03000326;
    _off_03000326 = 0x00000004u;
    uint32_t _ea_03000326 = _base_03000326 + _off_03000326;
    uint32_t _post_03000326 = _base_03000326 + _off_03000326;
    _cyc_03000326 += runtime_mem_cycles(_ea_03000326, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000326u, _ea_03000326 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_03000326 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x03000328u;
    runtime_tick(_cyc_03000326);
    /* 03000328  03000328 T str r3,[r1] */
    g_cpu.R[15] = 0x03000328u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000328 = 1u;
    _cyc_03000328 = 1u;
    uint32_t _base_03000328 = g_cpu.R[1];
    uint32_t _off_03000328;
    _off_03000328 = 0x00000000u;
    uint32_t _ea_03000328 = _base_03000328 + _off_03000328;
    uint32_t _post_03000328 = _base_03000328 + _off_03000328;
    _cyc_03000328 += runtime_mem_cycles(_ea_03000328, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000328u, _ea_03000328 & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_ea_03000328 & ~3u, g_cpu.R[3]);
    g_cpu.R[15] = 0x0300032Au;
    runtime_tick(_cyc_03000328);
    /* 0300032A  0300032a T subs r7,r7,#0x1 */
    g_cpu.R[15] = 0x0300032Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300032A = 1u;
    _cyc_0300032A = 1u;
    uint32_t _rn_0300032A = g_cpu.R[7];
    uint32_t _r_0300032A;
    _r_0300032A = _rn_0300032A - 0x00000001u;
    arm_set_nzcv_sub(_rn_0300032A, 0x00000001u, _r_0300032A);
    g_cpu.R[7] = _r_0300032A;
    g_cpu.R[15] = 0x0300032Cu;
    runtime_tick(_cyc_0300032A);
    /* 0300032C  0300032c T movs r3,#0x1 */
    g_cpu.R[15] = 0x0300032Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300032C = 1u;
    _cyc_0300032C = 1u;
    uint32_t _r_0300032C;
    _r_0300032C = 0x00000001u;
    arm_set_nzc_logic(_r_0300032C, cpsr_c());
    g_cpu.R[3] = _r_0300032C;
    g_cpu.R[15] = 0x0300032Eu;
    runtime_tick(_cyc_0300032C);
    /* 0300032E  0300032e T adds r4,r4,#0x1 */
    g_cpu.R[15] = 0x0300032Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300032E = 1u;
    _cyc_0300032E = 1u;
    uint32_t _rn_0300032E = g_cpu.R[4];
    uint32_t _r_0300032E;
    _r_0300032E = _rn_0300032E + 0x00000001u;
    arm_set_nzcv_add(_rn_0300032E, 0x00000001u, _r_0300032E);
    g_cpu.R[4] = _r_0300032E;
    g_cpu.R[15] = 0x03000330u;
    runtime_tick(_cyc_0300032E);
    /* 03000330  03000330 T mov r9,r4 */
    g_cpu.R[15] = 0x03000330u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000330 = 1u;
    _cyc_03000330 = 1u;
    uint32_t _rm_03000330 = g_cpu.R[4];
    uint32_t _op2_03000330;
    uint32_t _co_03000330;
    _op2_03000330 = _rm_03000330;
    _co_03000330 = cpsr_c();
    uint32_t _r_03000330;
    _r_03000330 = _op2_03000330;
    g_cpu.R[9] = _r_03000330;
    g_cpu.R[15] = 0x03000332u;
    runtime_tick(_cyc_03000330);
    /* 03000332  03000332 T cmps r10,r7 */
    g_cpu.R[15] = 0x03000332u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000332 = 1u;
    _cyc_03000332 = 1u;
    uint32_t _rm_03000332 = g_cpu.R[7];
    uint32_t _op2_03000332;
    uint32_t _co_03000332;
    _op2_03000332 = _rm_03000332;
    _co_03000332 = cpsr_c();
    uint32_t _rn_03000332 = g_cpu.R[10];
    uint32_t _r_03000332;
    _r_03000332 = _rn_03000332 - _op2_03000332;
    arm_set_nzcv_sub(_rn_03000332, _op2_03000332, _r_03000332);
    g_cpu.R[15] = 0x03000334u;
    runtime_tick(_cyc_03000332);
    /* 03000334  03000334 T bhi 0x03000388 */
    g_cpu.R[15] = 0x03000334u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000334 = 1u;
    if (arm_cond_passes(0x8u)) {
        _cyc_03000334 = 3u;
        g_cpu.R[15] = 0x03000388u;
        runtime_tick(_cyc_03000334);
        GBARECOMP_TAIL_CALL(gf_tfunc_03000388);
    }
    g_cpu.R[15] = 0x03000336u;
    runtime_tick(_cyc_03000334);
    /* 03000336  03000336 T mov r8,r5 */
    g_cpu.R[15] = 0x03000336u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000336 = 1u;
    _cyc_03000336 = 1u;
    uint32_t _rm_03000336 = g_cpu.R[5];
    uint32_t _op2_03000336;
    uint32_t _co_03000336;
    _op2_03000336 = _rm_03000336;
    _co_03000336 = cpsr_c();
    uint32_t _r_03000336;
    _r_03000336 = _op2_03000336;
    g_cpu.R[8] = _r_03000336;
    g_cpu.R[15] = 0x03000338u;
    runtime_tick(_cyc_03000336);
    /* 03000338  03000338 T ldr r1,[r15,#0x70] */
    g_cpu.R[15] = 0x03000338u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000338 = 1u;
    _cyc_03000338 = 2u;
    uint32_t _base_03000338 = 0x0300033Cu & ~3u;
    uint32_t _off_03000338;
    _off_03000338 = 0x00000070u;
    uint32_t _ea_03000338 = _base_03000338 + _off_03000338;
    uint32_t _post_03000338 = _base_03000338 + _off_03000338;
    _cyc_03000338 += runtime_mem_cycles(_ea_03000338, 4u, 0u);
    uint32_t _v_03000338;
    { uint32_t _w = bus_read_u32(_ea_03000338 & ~3u); uint32_t _rot = (_ea_03000338 & 3u) * 8u; _v_03000338 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_03000338;
    g_cpu.R[15] = 0x0300033Au;
    runtime_tick(_cyc_03000338);
    /* 0300033A  0300033a T mov r12,r1 */
    g_cpu.R[15] = 0x0300033Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300033A = 1u;
    _cyc_0300033A = 1u;
    uint32_t _rm_0300033A = g_cpu.R[1];
    uint32_t _op2_0300033A;
    uint32_t _co_0300033A;
    _op2_0300033A = _rm_0300033A;
    _co_0300033A = cpsr_c();
    uint32_t _r_0300033A;
    _r_0300033A = _op2_0300033A;
    g_cpu.R[12] = _r_0300033A;
    g_cpu.R[15] = 0x0300033Cu;
    runtime_tick(_cyc_0300033A);
    /* fall-through to 0x0300033C */
    g_cpu.R[15] = 0x0300033Cu;
    runtime_dispatch(0x0300033Cu);
    return;
}

/* 0x0300035A  mode=thumb  end=0x03000388  branches=3  indirect */


/* 0x0300033C thumb */
void gf_tfunc_0300033C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0300033Cu);
    /* 0300033C  0300033c T movs r4,r3,lsl #1 */
    g_cpu.R[15] = 0x0300033Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300033C = 1u;
    _cyc_0300033C = 1u;
    uint32_t _rm_0300033C = g_cpu.R[3];
    uint32_t _op2_0300033C;
    uint32_t _co_0300033C;
    _op2_0300033C = _rm_0300033C << 1;
    _co_0300033C = (_rm_0300033C >> 31) & 1u;
    uint32_t _r_0300033C;
    _r_0300033C = _op2_0300033C;
    arm_set_nzc_logic(_r_0300033C, _co_0300033C);
    g_cpu.R[4] = _r_0300033C;
    g_cpu.R[15] = 0x0300033Eu;
    runtime_tick(_cyc_0300033C);
    /* 0300033E  0300033e T cmps r4,r7 */
    g_cpu.R[15] = 0x0300033Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300033E = 1u;
    _cyc_0300033E = 1u;
    uint32_t _rm_0300033E = g_cpu.R[7];
    uint32_t _op2_0300033E;
    uint32_t _co_0300033E;
    _op2_0300033E = _rm_0300033E;
    _co_0300033E = cpsr_c();
    uint32_t _rn_0300033E = g_cpu.R[4];
    uint32_t _r_0300033E;
    _r_0300033E = _rn_0300033E - _op2_0300033E;
    arm_set_nzcv_sub(_rn_0300033E, _op2_0300033E, _r_0300033E);
    g_cpu.R[15] = 0x03000340u;
    runtime_tick(_cyc_0300033E);
    /* 03000340  03000340 T bcs 0x0300035a */
    g_cpu.R[15] = 0x03000340u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000340 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_03000340 = 3u;
        g_cpu.R[15] = 0x0300035Au;
        runtime_tick(_cyc_03000340);
        GBARECOMP_TAIL_CALL(gf_tfunc_0300035A);
    }
    g_cpu.R[15] = 0x03000342u;
    runtime_tick(_cyc_03000340);
    /* 03000342  03000342 T mov r2,r8 */
    g_cpu.R[15] = 0x03000342u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000342 = 1u;
    _cyc_03000342 = 1u;
    uint32_t _rm_03000342 = g_cpu.R[8];
    uint32_t _op2_03000342;
    uint32_t _co_03000342;
    _op2_03000342 = _rm_03000342;
    _co_03000342 = cpsr_c();
    uint32_t _r_03000342;
    _r_03000342 = _op2_03000342;
    g_cpu.R[2] = _r_03000342;
    g_cpu.R[15] = 0x03000344u;
    runtime_tick(_cyc_03000342);
    /* 03000344  03000344 T ldr r1,[r2] */
    g_cpu.R[15] = 0x03000344u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000344 = 1u;
    _cyc_03000344 = 2u;
    uint32_t _base_03000344 = g_cpu.R[2];
    uint32_t _off_03000344;
    _off_03000344 = 0x00000000u;
    uint32_t _ea_03000344 = _base_03000344 + _off_03000344;
    uint32_t _post_03000344 = _base_03000344 + _off_03000344;
    _cyc_03000344 += runtime_mem_cycles(_ea_03000344, 4u, 0u);
    uint32_t _v_03000344;
    { uint32_t _w = bus_read_u32(_ea_03000344 & ~3u); uint32_t _rot = (_ea_03000344 & 3u) * 8u; _v_03000344 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_03000344;
    g_cpu.R[15] = 0x03000346u;
    runtime_tick(_cyc_03000344);
    /* 03000346  03000346 T movs r0,r3,lsl #3 */
    g_cpu.R[15] = 0x03000346u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000346 = 1u;
    _cyc_03000346 = 1u;
    uint32_t _rm_03000346 = g_cpu.R[3];
    uint32_t _op2_03000346;
    uint32_t _co_03000346;
    _op2_03000346 = _rm_03000346 << 3;
    _co_03000346 = (_rm_03000346 >> 29) & 1u;
    uint32_t _r_03000346;
    _r_03000346 = _op2_03000346;
    arm_set_nzc_logic(_r_03000346, _co_03000346);
    g_cpu.R[0] = _r_03000346;
    g_cpu.R[15] = 0x03000348u;
    runtime_tick(_cyc_03000346);
    /* 03000348  03000348 T adds r0,r0,r1 */
    g_cpu.R[15] = 0x03000348u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000348 = 1u;
    _cyc_03000348 = 1u;
    uint32_t _rm_03000348 = g_cpu.R[1];
    uint32_t _op2_03000348;
    uint32_t _co_03000348;
    _op2_03000348 = _rm_03000348;
    _co_03000348 = cpsr_c();
    uint32_t _rn_03000348 = g_cpu.R[0];
    uint32_t _r_03000348;
    _r_03000348 = _rn_03000348 + _op2_03000348;
    arm_set_nzcv_add(_rn_03000348, _op2_03000348, _r_03000348);
    g_cpu.R[0] = _r_03000348;
    g_cpu.R[15] = 0x0300034Au;
    runtime_tick(_cyc_03000348);
    /* 0300034A  0300034a T ldr r1,[r0] */
    g_cpu.R[15] = 0x0300034Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300034A = 1u;
    _cyc_0300034A = 2u;
    uint32_t _base_0300034A = g_cpu.R[0];
    uint32_t _off_0300034A;
    _off_0300034A = 0x00000000u;
    uint32_t _ea_0300034A = _base_0300034A + _off_0300034A;
    uint32_t _post_0300034A = _base_0300034A + _off_0300034A;
    _cyc_0300034A += runtime_mem_cycles(_ea_0300034A, 4u, 0u);
    uint32_t _v_0300034A;
    { uint32_t _w = bus_read_u32(_ea_0300034A & ~3u); uint32_t _rot = (_ea_0300034A & 3u) * 8u; _v_0300034A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0300034A;
    g_cpu.R[15] = 0x0300034Cu;
    runtime_tick(_cyc_0300034A);
    /* 0300034C  0300034c T mov r6,r12 */
    g_cpu.R[15] = 0x0300034Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300034C = 1u;
    _cyc_0300034C = 1u;
    uint32_t _rm_0300034C = g_cpu.R[12];
    uint32_t _op2_0300034C;
    uint32_t _co_0300034C;
    _op2_0300034C = _rm_0300034C;
    _co_0300034C = cpsr_c();
    uint32_t _r_0300034C;
    _r_0300034C = _op2_0300034C;
    g_cpu.R[6] = _r_0300034C;
    g_cpu.R[15] = 0x0300034Eu;
    runtime_tick(_cyc_0300034C);
    /* 0300034E  0300034e T ands r1,r1,r6 */
    g_cpu.R[15] = 0x0300034Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300034E = 1u;
    _cyc_0300034E = 1u;
    uint32_t _rm_0300034E = g_cpu.R[6];
    uint32_t _op2_0300034E;
    uint32_t _co_0300034E;
    _op2_0300034E = _rm_0300034E;
    _co_0300034E = cpsr_c();
    uint32_t _rn_0300034E = g_cpu.R[1];
    uint32_t _r_0300034E;
    _r_0300034E = _rn_0300034E & _op2_0300034E;
    arm_set_nzc_logic(_r_0300034E, _co_0300034E);
    g_cpu.R[1] = _r_0300034E;
    g_cpu.R[15] = 0x03000350u;
    runtime_tick(_cyc_0300034E);
    /* 03000350  03000350 T ldr r0,[r0,#0x4] */
    g_cpu.R[15] = 0x03000350u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000350 = 1u;
    _cyc_03000350 = 2u;
    uint32_t _base_03000350 = g_cpu.R[0];
    uint32_t _off_03000350;
    _off_03000350 = 0x00000004u;
    uint32_t _ea_03000350 = _base_03000350 + _off_03000350;
    uint32_t _post_03000350 = _base_03000350 + _off_03000350;
    _cyc_03000350 += runtime_mem_cycles(_ea_03000350, 4u, 0u);
    uint32_t _v_03000350;
    { uint32_t _w = bus_read_u32(_ea_03000350 & ~3u); uint32_t _rot = (_ea_03000350 & 3u) * 8u; _v_03000350 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_03000350;
    g_cpu.R[15] = 0x03000352u;
    runtime_tick(_cyc_03000350);
    /* 03000352  03000352 T ands r0,r0,r6 */
    g_cpu.R[15] = 0x03000352u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000352 = 1u;
    _cyc_03000352 = 1u;
    uint32_t _rm_03000352 = g_cpu.R[6];
    uint32_t _op2_03000352;
    uint32_t _co_03000352;
    _op2_03000352 = _rm_03000352;
    _co_03000352 = cpsr_c();
    uint32_t _rn_03000352 = g_cpu.R[0];
    uint32_t _r_03000352;
    _r_03000352 = _rn_03000352 & _op2_03000352;
    arm_set_nzc_logic(_r_03000352, _co_03000352);
    g_cpu.R[0] = _r_03000352;
    g_cpu.R[15] = 0x03000354u;
    runtime_tick(_cyc_03000352);
    /* 03000354  03000354 T cmps r1,r0 */
    g_cpu.R[15] = 0x03000354u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000354 = 1u;
    _cyc_03000354 = 1u;
    uint32_t _rm_03000354 = g_cpu.R[0];
    uint32_t _op2_03000354;
    uint32_t _co_03000354;
    _op2_03000354 = _rm_03000354;
    _co_03000354 = cpsr_c();
    uint32_t _rn_03000354 = g_cpu.R[1];
    uint32_t _r_03000354;
    _r_03000354 = _rn_03000354 - _op2_03000354;
    arm_set_nzcv_sub(_rn_03000354, _op2_03000354, _r_03000354);
    g_cpu.R[15] = 0x03000356u;
    runtime_tick(_cyc_03000354);
    /* 03000356  03000356 T bls 0x0300035a */
    g_cpu.R[15] = 0x03000356u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000356 = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_03000356 = 3u;
        g_cpu.R[15] = 0x0300035Au;
        runtime_tick(_cyc_03000356);
        GBARECOMP_TAIL_CALL(gf_tfunc_0300035A);
    }
    g_cpu.R[15] = 0x03000358u;
    runtime_tick(_cyc_03000356);
    /* 03000358  03000358 T adds r4,r4,#0x1 */
    g_cpu.R[15] = 0x03000358u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000358 = 1u;
    _cyc_03000358 = 1u;
    uint32_t _rn_03000358 = g_cpu.R[4];
    uint32_t _r_03000358;
    _r_03000358 = _rn_03000358 + 0x00000001u;
    arm_set_nzcv_add(_rn_03000358, 0x00000001u, _r_03000358);
    g_cpu.R[4] = _r_03000358;
    g_cpu.R[15] = 0x0300035Au;
    runtime_tick(_cyc_03000358);
    /* fall-through to 0x0300035A */
    g_cpu.R[15] = 0x0300035Au;
    runtime_dispatch(0x0300035Au);
    return;
}

/* 0x03000388  mode=thumb  end=0x03000392  branches=1  indirect */


/* 0x0300035A thumb */
void gf_tfunc_0300035A(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0300035Au);
    /* 0300035A  0300035a T mov r0,r8 */
    g_cpu.R[15] = 0x0300035Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300035A = 1u;
    _cyc_0300035A = 1u;
    uint32_t _rm_0300035A = g_cpu.R[8];
    uint32_t _op2_0300035A;
    uint32_t _co_0300035A;
    _op2_0300035A = _rm_0300035A;
    _co_0300035A = cpsr_c();
    uint32_t _r_0300035A;
    _r_0300035A = _op2_0300035A;
    g_cpu.R[0] = _r_0300035A;
    g_cpu.R[15] = 0x0300035Cu;
    runtime_tick(_cyc_0300035A);
    /* 0300035C  0300035c T ldr r2,[r0] */
    g_cpu.R[15] = 0x0300035Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300035C = 1u;
    _cyc_0300035C = 2u;
    uint32_t _base_0300035C = g_cpu.R[0];
    uint32_t _off_0300035C;
    _off_0300035C = 0x00000000u;
    uint32_t _ea_0300035C = _base_0300035C + _off_0300035C;
    uint32_t _post_0300035C = _base_0300035C + _off_0300035C;
    _cyc_0300035C += runtime_mem_cycles(_ea_0300035C, 4u, 0u);
    uint32_t _v_0300035C;
    { uint32_t _w = bus_read_u32(_ea_0300035C & ~3u); uint32_t _rot = (_ea_0300035C & 3u) * 8u; _v_0300035C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_0300035C;
    g_cpu.R[15] = 0x0300035Eu;
    runtime_tick(_cyc_0300035C);
    /* 0300035E  0300035e T movs r0,r3,lsl #2 */
    g_cpu.R[15] = 0x0300035Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300035E = 1u;
    _cyc_0300035E = 1u;
    uint32_t _rm_0300035E = g_cpu.R[3];
    uint32_t _op2_0300035E;
    uint32_t _co_0300035E;
    _op2_0300035E = _rm_0300035E << 2;
    _co_0300035E = (_rm_0300035E >> 30) & 1u;
    uint32_t _r_0300035E;
    _r_0300035E = _op2_0300035E;
    arm_set_nzc_logic(_r_0300035E, _co_0300035E);
    g_cpu.R[0] = _r_0300035E;
    g_cpu.R[15] = 0x03000360u;
    runtime_tick(_cyc_0300035E);
    /* 03000360  03000360 T adds r0,r0,r2 */
    g_cpu.R[15] = 0x03000360u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000360 = 1u;
    _cyc_03000360 = 1u;
    uint32_t _rm_03000360 = g_cpu.R[2];
    uint32_t _op2_03000360;
    uint32_t _co_03000360;
    _op2_03000360 = _rm_03000360;
    _co_03000360 = cpsr_c();
    uint32_t _rn_03000360 = g_cpu.R[0];
    uint32_t _r_03000360;
    _r_03000360 = _rn_03000360 + _op2_03000360;
    arm_set_nzcv_add(_rn_03000360, _op2_03000360, _r_03000360);
    g_cpu.R[0] = _r_03000360;
    g_cpu.R[15] = 0x03000362u;
    runtime_tick(_cyc_03000360);
    /* 03000362  03000362 T str r0,[r13] */
    g_cpu.R[15] = 0x03000362u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000362 = 1u;
    _cyc_03000362 = 1u;
    uint32_t _base_03000362 = g_cpu.R[13];
    uint32_t _off_03000362;
    _off_03000362 = 0x00000000u;
    uint32_t _ea_03000362 = _base_03000362 + _off_03000362;
    uint32_t _post_03000362 = _base_03000362 + _off_03000362;
    _cyc_03000362 += runtime_mem_cycles(_ea_03000362, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000362u, _ea_03000362 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_03000362 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x03000364u;
    runtime_tick(_cyc_03000362);
    /* 03000364  03000364 T ldr r5,[r0] */
    g_cpu.R[15] = 0x03000364u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000364 = 1u;
    _cyc_03000364 = 2u;
    uint32_t _base_03000364 = g_cpu.R[0];
    uint32_t _off_03000364;
    _off_03000364 = 0x00000000u;
    uint32_t _ea_03000364 = _base_03000364 + _off_03000364;
    uint32_t _post_03000364 = _base_03000364 + _off_03000364;
    _cyc_03000364 += runtime_mem_cycles(_ea_03000364, 4u, 0u);
    uint32_t _v_03000364;
    { uint32_t _w = bus_read_u32(_ea_03000364 & ~3u); uint32_t _rot = (_ea_03000364 & 3u) * 8u; _v_03000364 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[5] = _v_03000364;
    g_cpu.R[15] = 0x03000366u;
    runtime_tick(_cyc_03000364);
    /* 03000366  03000366 T adds r1,r5,#0x0 */
    g_cpu.R[15] = 0x03000366u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000366 = 1u;
    _cyc_03000366 = 1u;
    uint32_t _rn_03000366 = g_cpu.R[5];
    uint32_t _r_03000366;
    _r_03000366 = _rn_03000366 + 0x00000000u;
    arm_set_nzcv_add(_rn_03000366, 0x00000000u, _r_03000366);
    g_cpu.R[1] = _r_03000366;
    g_cpu.R[15] = 0x03000368u;
    runtime_tick(_cyc_03000366);
    /* 03000368  03000368 T mov r6,r12 */
    g_cpu.R[15] = 0x03000368u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000368 = 1u;
    _cyc_03000368 = 1u;
    uint32_t _rm_03000368 = g_cpu.R[12];
    uint32_t _op2_03000368;
    uint32_t _co_03000368;
    _op2_03000368 = _rm_03000368;
    _co_03000368 = cpsr_c();
    uint32_t _r_03000368;
    _r_03000368 = _op2_03000368;
    g_cpu.R[6] = _r_03000368;
    g_cpu.R[15] = 0x0300036Au;
    runtime_tick(_cyc_03000368);
    /* 0300036A  0300036a T ands r1,r1,r6 */
    g_cpu.R[15] = 0x0300036Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300036A = 1u;
    _cyc_0300036A = 1u;
    uint32_t _rm_0300036A = g_cpu.R[6];
    uint32_t _op2_0300036A;
    uint32_t _co_0300036A;
    _op2_0300036A = _rm_0300036A;
    _co_0300036A = cpsr_c();
    uint32_t _rn_0300036A = g_cpu.R[1];
    uint32_t _r_0300036A;
    _r_0300036A = _rn_0300036A & _op2_0300036A;
    arm_set_nzc_logic(_r_0300036A, _co_0300036A);
    g_cpu.R[1] = _r_0300036A;
    g_cpu.R[15] = 0x0300036Cu;
    runtime_tick(_cyc_0300036A);
    /* 0300036C  0300036c T movs r0,r4,lsl #2 */
    g_cpu.R[15] = 0x0300036Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300036C = 1u;
    _cyc_0300036C = 1u;
    uint32_t _rm_0300036C = g_cpu.R[4];
    uint32_t _op2_0300036C;
    uint32_t _co_0300036C;
    _op2_0300036C = _rm_0300036C << 2;
    _co_0300036C = (_rm_0300036C >> 30) & 1u;
    uint32_t _r_0300036C;
    _r_0300036C = _op2_0300036C;
    arm_set_nzc_logic(_r_0300036C, _co_0300036C);
    g_cpu.R[0] = _r_0300036C;
    g_cpu.R[15] = 0x0300036Eu;
    runtime_tick(_cyc_0300036C);
    /* 0300036E  0300036e T adds r3,r0,r2 */
    g_cpu.R[15] = 0x0300036Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300036E = 1u;
    _cyc_0300036E = 1u;
    uint32_t _rm_0300036E = g_cpu.R[2];
    uint32_t _op2_0300036E;
    uint32_t _co_0300036E;
    _op2_0300036E = _rm_0300036E;
    _co_0300036E = cpsr_c();
    uint32_t _rn_0300036E = g_cpu.R[0];
    uint32_t _r_0300036E;
    _r_0300036E = _rn_0300036E + _op2_0300036E;
    arm_set_nzcv_add(_rn_0300036E, _op2_0300036E, _r_0300036E);
    g_cpu.R[3] = _r_0300036E;
    g_cpu.R[15] = 0x03000370u;
    runtime_tick(_cyc_0300036E);
    /* 03000370  03000370 T ldr r2,[r3] */
    g_cpu.R[15] = 0x03000370u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000370 = 1u;
    _cyc_03000370 = 2u;
    uint32_t _base_03000370 = g_cpu.R[3];
    uint32_t _off_03000370;
    _off_03000370 = 0x00000000u;
    uint32_t _ea_03000370 = _base_03000370 + _off_03000370;
    uint32_t _post_03000370 = _base_03000370 + _off_03000370;
    _cyc_03000370 += runtime_mem_cycles(_ea_03000370, 4u, 0u);
    uint32_t _v_03000370;
    { uint32_t _w = bus_read_u32(_ea_03000370 & ~3u); uint32_t _rot = (_ea_03000370 & 3u) * 8u; _v_03000370 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_03000370;
    g_cpu.R[15] = 0x03000372u;
    runtime_tick(_cyc_03000370);
    /* 03000372  03000372 T adds r0,r2,#0x0 */
    g_cpu.R[15] = 0x03000372u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000372 = 1u;
    _cyc_03000372 = 1u;
    uint32_t _rn_03000372 = g_cpu.R[2];
    uint32_t _r_03000372;
    _r_03000372 = _rn_03000372 + 0x00000000u;
    arm_set_nzcv_add(_rn_03000372, 0x00000000u, _r_03000372);
    g_cpu.R[0] = _r_03000372;
    g_cpu.R[15] = 0x03000374u;
    runtime_tick(_cyc_03000372);
    /* 03000374  03000374 T ands r0,r0,r6 */
    g_cpu.R[15] = 0x03000374u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000374 = 1u;
    _cyc_03000374 = 1u;
    uint32_t _rm_03000374 = g_cpu.R[6];
    uint32_t _op2_03000374;
    uint32_t _co_03000374;
    _op2_03000374 = _rm_03000374;
    _co_03000374 = cpsr_c();
    uint32_t _rn_03000374 = g_cpu.R[0];
    uint32_t _r_03000374;
    _r_03000374 = _rn_03000374 & _op2_03000374;
    arm_set_nzc_logic(_r_03000374, _co_03000374);
    g_cpu.R[0] = _r_03000374;
    g_cpu.R[15] = 0x03000376u;
    runtime_tick(_cyc_03000374);
    /* 03000376  03000376 T cmps r1,r0 */
    g_cpu.R[15] = 0x03000376u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000376 = 1u;
    _cyc_03000376 = 1u;
    uint32_t _rm_03000376 = g_cpu.R[0];
    uint32_t _op2_03000376;
    uint32_t _co_03000376;
    _op2_03000376 = _rm_03000376;
    _co_03000376 = cpsr_c();
    uint32_t _rn_03000376 = g_cpu.R[1];
    uint32_t _r_03000376;
    _r_03000376 = _rn_03000376 - _op2_03000376;
    arm_set_nzcv_sub(_rn_03000376, _op2_03000376, _r_03000376);
    g_cpu.R[15] = 0x03000378u;
    runtime_tick(_cyc_03000376);
    /* 03000378  03000378 T bls 0x03000388 */
    g_cpu.R[15] = 0x03000378u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000378 = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_03000378 = 3u;
        g_cpu.R[15] = 0x03000388u;
        runtime_tick(_cyc_03000378);
        GBARECOMP_TAIL_CALL(gf_tfunc_03000388);
    }
    g_cpu.R[15] = 0x0300037Au;
    runtime_tick(_cyc_03000378);
    /* 0300037A  0300037a T str r5,[r3] */
    g_cpu.R[15] = 0x0300037Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300037A = 1u;
    _cyc_0300037A = 1u;
    uint32_t _base_0300037A = g_cpu.R[3];
    uint32_t _off_0300037A;
    _off_0300037A = 0x00000000u;
    uint32_t _ea_0300037A = _base_0300037A + _off_0300037A;
    uint32_t _post_0300037A = _base_0300037A + _off_0300037A;
    _cyc_0300037A += runtime_mem_cycles(_ea_0300037A, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0300037Au, _ea_0300037A & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_ea_0300037A & ~3u, g_cpu.R[5]);
    g_cpu.R[15] = 0x0300037Cu;
    runtime_tick(_cyc_0300037A);
    /* 0300037C  0300037c T ldr r0,[r13] */
    g_cpu.R[15] = 0x0300037Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300037C = 1u;
    _cyc_0300037C = 2u;
    uint32_t _base_0300037C = g_cpu.R[13];
    uint32_t _off_0300037C;
    _off_0300037C = 0x00000000u;
    uint32_t _ea_0300037C = _base_0300037C + _off_0300037C;
    uint32_t _post_0300037C = _base_0300037C + _off_0300037C;
    _cyc_0300037C += runtime_mem_cycles(_ea_0300037C, 4u, 0u);
    uint32_t _v_0300037C;
    { uint32_t _w = bus_read_u32(_ea_0300037C & ~3u); uint32_t _rot = (_ea_0300037C & 3u) * 8u; _v_0300037C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0300037C;
    g_cpu.R[15] = 0x0300037Eu;
    runtime_tick(_cyc_0300037C);
    /* 0300037E  0300037e T str r2,[r0] */
    g_cpu.R[15] = 0x0300037Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300037E = 1u;
    _cyc_0300037E = 1u;
    uint32_t _base_0300037E = g_cpu.R[0];
    uint32_t _off_0300037E;
    _off_0300037E = 0x00000000u;
    uint32_t _ea_0300037E = _base_0300037E + _off_0300037E;
    uint32_t _post_0300037E = _base_0300037E + _off_0300037E;
    _cyc_0300037E += runtime_mem_cycles(_ea_0300037E, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0300037Eu, _ea_0300037E & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_0300037E & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x03000380u;
    runtime_tick(_cyc_0300037E);
    /* 03000380  03000380 T adds r3,r4,#0x0 */
    g_cpu.R[15] = 0x03000380u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000380 = 1u;
    _cyc_03000380 = 1u;
    uint32_t _rn_03000380 = g_cpu.R[4];
    uint32_t _r_03000380;
    _r_03000380 = _rn_03000380 + 0x00000000u;
    arm_set_nzcv_add(_rn_03000380, 0x00000000u, _r_03000380);
    g_cpu.R[3] = _r_03000380;
    g_cpu.R[15] = 0x03000382u;
    runtime_tick(_cyc_03000380);
    /* 03000382  03000382 T movs r0,r3,lsl #1 */
    g_cpu.R[15] = 0x03000382u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000382 = 1u;
    _cyc_03000382 = 1u;
    uint32_t _rm_03000382 = g_cpu.R[3];
    uint32_t _op2_03000382;
    uint32_t _co_03000382;
    _op2_03000382 = _rm_03000382 << 1;
    _co_03000382 = (_rm_03000382 >> 31) & 1u;
    uint32_t _r_03000382;
    _r_03000382 = _op2_03000382;
    arm_set_nzc_logic(_r_03000382, _co_03000382);
    g_cpu.R[0] = _r_03000382;
    g_cpu.R[15] = 0x03000384u;
    runtime_tick(_cyc_03000382);
    /* 03000384  03000384 T cmps r0,r7 */
    g_cpu.R[15] = 0x03000384u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000384 = 1u;
    _cyc_03000384 = 1u;
    uint32_t _rm_03000384 = g_cpu.R[7];
    uint32_t _op2_03000384;
    uint32_t _co_03000384;
    _op2_03000384 = _rm_03000384;
    _co_03000384 = cpsr_c();
    uint32_t _rn_03000384 = g_cpu.R[0];
    uint32_t _r_03000384;
    _r_03000384 = _rn_03000384 - _op2_03000384;
    arm_set_nzcv_sub(_rn_03000384, _op2_03000384, _r_03000384);
    g_cpu.R[15] = 0x03000386u;
    runtime_tick(_cyc_03000384);
    /* 03000386  03000386 T bls 0x0300033c */
    g_cpu.R[15] = 0x03000386u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000386 = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_03000386 = 3u;
        g_cpu.R[15] = 0x0300033Cu;
        runtime_tick(_cyc_03000386);
        GBARECOMP_TAIL_CALL(gf_tfunc_0300033C);
    }
    g_cpu.R[15] = 0x03000388u;
    runtime_tick(_cyc_03000386);
    /* fall-through to 0x03000388 */
    g_cpu.R[15] = 0x03000388u;
    runtime_dispatch(0x03000388u);
    return;
}

/* 0x03000754  mode=thumb  end=0x03000768  branches=3 */


/* 0x03000388 thumb */
void gf_tfunc_03000388(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000388u);
    /* 03000388  03000388 T mov r4,r9 */
    g_cpu.R[15] = 0x03000388u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000388 = 1u;
    _cyc_03000388 = 1u;
    uint32_t _rm_03000388 = g_cpu.R[9];
    uint32_t _op2_03000388;
    uint32_t _co_03000388;
    _op2_03000388 = _rm_03000388;
    _co_03000388 = cpsr_c();
    uint32_t _r_03000388;
    _r_03000388 = _op2_03000388;
    g_cpu.R[4] = _r_03000388;
    g_cpu.R[15] = 0x0300038Au;
    runtime_tick(_cyc_03000388);
    /* 0300038A  0300038a T ldr r1,[r15,#0x18] */
    g_cpu.R[15] = 0x0300038Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300038A = 1u;
    _cyc_0300038A = 2u;
    uint32_t _base_0300038A = 0x0300038Eu & ~3u;
    uint32_t _off_0300038A;
    _off_0300038A = 0x00000018u;
    uint32_t _ea_0300038A = _base_0300038A + _off_0300038A;
    uint32_t _post_0300038A = _base_0300038A + _off_0300038A;
    _cyc_0300038A += runtime_mem_cycles(_ea_0300038A, 4u, 0u);
    uint32_t _v_0300038A;
    { uint32_t _w = bus_read_u32(_ea_0300038A & ~3u); uint32_t _rot = (_ea_0300038A & 3u) * 8u; _v_0300038A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0300038A;
    g_cpu.R[15] = 0x0300038Cu;
    runtime_tick(_cyc_0300038A);
    /* 0300038C  0300038c T ldr r0,[r1] */
    g_cpu.R[15] = 0x0300038Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300038C = 1u;
    _cyc_0300038C = 2u;
    uint32_t _base_0300038C = g_cpu.R[1];
    uint32_t _off_0300038C;
    _off_0300038C = 0x00000000u;
    uint32_t _ea_0300038C = _base_0300038C + _off_0300038C;
    uint32_t _post_0300038C = _base_0300038C + _off_0300038C;
    _cyc_0300038C += runtime_mem_cycles(_ea_0300038C, 4u, 0u);
    uint32_t _v_0300038C;
    { uint32_t _w = bus_read_u32(_ea_0300038C & ~3u); uint32_t _rot = (_ea_0300038C & 3u) * 8u; _v_0300038C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0300038C;
    g_cpu.R[15] = 0x0300038Eu;
    runtime_tick(_cyc_0300038C);
    /* 0300038E  0300038e T cmps r4,r0 */
    g_cpu.R[15] = 0x0300038Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300038E = 1u;
    _cyc_0300038E = 1u;
    uint32_t _rm_0300038E = g_cpu.R[0];
    uint32_t _op2_0300038E;
    uint32_t _co_0300038E;
    _op2_0300038E = _rm_0300038E;
    _co_0300038E = cpsr_c();
    uint32_t _rn_0300038E = g_cpu.R[4];
    uint32_t _r_0300038E;
    _r_0300038E = _rn_0300038E - _op2_0300038E;
    arm_set_nzcv_sub(_rn_0300038E, _op2_0300038E, _r_0300038E);
    g_cpu.R[15] = 0x03000390u;
    runtime_tick(_cyc_0300038E);
    /* 03000390  03000390 T bcc 0x0300031a */
    g_cpu.R[15] = 0x03000390u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000390 = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_03000390 = 3u;
        g_cpu.R[15] = 0x0300031Au;
        runtime_tick(_cyc_03000390);
        GBARECOMP_TAIL_CALL(gf_tfunc_0300031A);
    }
    g_cpu.R[15] = 0x03000392u;
    runtime_tick(_cyc_03000390);
    /* fall-through to 0x03000392 */
    g_cpu.R[15] = 0x03000392u;
    runtime_dispatch(0x03000392u);
    return;
}

/* 0x03000392  mode=thumb  end=0x030003A2  branches=0  indirect */


/* 0x03000392 thumb */
void gf_tfunc_03000392(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000392u);
    /* 03000392  03000392 T add r13,r13,#0x4 */
    g_cpu.R[15] = 0x03000392u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000392 = 1u;
    _cyc_03000392 = 1u;
    uint32_t _rn_03000392 = g_cpu.R[13];
    uint32_t _r_03000392;
    _r_03000392 = _rn_03000392 + 0x00000004u;
    g_cpu.R[13] = _r_03000392;
    g_cpu.R[15] = 0x03000394u;
    runtime_tick(_cyc_03000392);
    /* 03000394  03000394 T ldm r13!,{r3,r4,r5} */
    g_cpu.R[15] = 0x03000394u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000394 = 1u;
    _cyc_03000394 = 2u;
    uint32_t _b_03000394 = g_cpu.R[13];
    uint32_t _a_03000394 = _b_03000394;
    uint32_t _fb_03000394 = _b_03000394 + 12u;
    _cyc_03000394 += runtime_mem_cycles(_a_03000394 & ~3u, 4u, 0u);
    g_cpu.R[3] = bus_read_u32(_a_03000394 & ~3u);
    _a_03000394 += 4u;
    _cyc_03000394 += runtime_mem_cycles(_a_03000394 & ~3u, 4u, 1u);
    g_cpu.R[4] = bus_read_u32(_a_03000394 & ~3u);
    _a_03000394 += 4u;
    _cyc_03000394 += runtime_mem_cycles(_a_03000394 & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_03000394 & ~3u);
    _a_03000394 += 4u;
    g_cpu.R[13] = _fb_03000394;
    g_cpu.R[15] = 0x03000396u;
    runtime_tick(_cyc_03000394);
    /* 03000396  03000396 T mov r8,r3 */
    g_cpu.R[15] = 0x03000396u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000396 = 1u;
    _cyc_03000396 = 1u;
    uint32_t _rm_03000396 = g_cpu.R[3];
    uint32_t _op2_03000396;
    uint32_t _co_03000396;
    _op2_03000396 = _rm_03000396;
    _co_03000396 = cpsr_c();
    uint32_t _r_03000396;
    _r_03000396 = _op2_03000396;
    g_cpu.R[8] = _r_03000396;
    g_cpu.R[15] = 0x03000398u;
    runtime_tick(_cyc_03000396);
    /* 03000398  03000398 T mov r9,r4 */
    g_cpu.R[15] = 0x03000398u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000398 = 1u;
    _cyc_03000398 = 1u;
    uint32_t _rm_03000398 = g_cpu.R[4];
    uint32_t _op2_03000398;
    uint32_t _co_03000398;
    _op2_03000398 = _rm_03000398;
    _co_03000398 = cpsr_c();
    uint32_t _r_03000398;
    _r_03000398 = _op2_03000398;
    g_cpu.R[9] = _r_03000398;
    g_cpu.R[15] = 0x0300039Au;
    runtime_tick(_cyc_03000398);
    /* 0300039A  0300039a T mov r10,r5 */
    g_cpu.R[15] = 0x0300039Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300039A = 1u;
    _cyc_0300039A = 1u;
    uint32_t _rm_0300039A = g_cpu.R[5];
    uint32_t _op2_0300039A;
    uint32_t _co_0300039A;
    _op2_0300039A = _rm_0300039A;
    _co_0300039A = cpsr_c();
    uint32_t _r_0300039A;
    _r_0300039A = _op2_0300039A;
    g_cpu.R[10] = _r_0300039A;
    g_cpu.R[15] = 0x0300039Cu;
    runtime_tick(_cyc_0300039A);
    /* 0300039C  0300039c T ldm r13!,{r4,r5,r6,r7} */
    g_cpu.R[15] = 0x0300039Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300039C = 1u;
    _cyc_0300039C = 2u;
    uint32_t _b_0300039C = g_cpu.R[13];
    uint32_t _a_0300039C = _b_0300039C;
    uint32_t _fb_0300039C = _b_0300039C + 16u;
    _cyc_0300039C += runtime_mem_cycles(_a_0300039C & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_0300039C & ~3u);
    _a_0300039C += 4u;
    _cyc_0300039C += runtime_mem_cycles(_a_0300039C & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_0300039C & ~3u);
    _a_0300039C += 4u;
    _cyc_0300039C += runtime_mem_cycles(_a_0300039C & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_0300039C & ~3u);
    _a_0300039C += 4u;
    _cyc_0300039C += runtime_mem_cycles(_a_0300039C & ~3u, 4u, 1u);
    g_cpu.R[7] = bus_read_u32(_a_0300039C & ~3u);
    _a_0300039C += 4u;
    g_cpu.R[13] = _fb_0300039C;
    g_cpu.R[15] = 0x0300039Eu;
    runtime_tick(_cyc_0300039C);
    /* 0300039E  0300039e T ldm r13!,{r0} */
    g_cpu.R[15] = 0x0300039Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300039E = 1u;
    _cyc_0300039E = 2u;
    uint32_t _b_0300039E = g_cpu.R[13];
    uint32_t _a_0300039E = _b_0300039E;
    uint32_t _fb_0300039E = _b_0300039E + 4u;
    _cyc_0300039E += runtime_mem_cycles(_a_0300039E & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_0300039E & ~3u);
    _a_0300039E += 4u;
    g_cpu.R[13] = _fb_0300039E;
    g_cpu.R[15] = 0x030003A0u;
    runtime_tick(_cyc_0300039E);
    /* 030003A0  030003a0 T bx r0 */
    g_cpu.R[15] = 0x030003A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003A0 = 1u;
    _cyc_030003A0 = 3u;
    uint32_t _bxt_030003A0 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_030003A0 & ~1u;
    if (_bxt_030003A0 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_030003A0);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_030003A0);
    g_cpu.R[15] = 0x030003A2u;
    runtime_tick(_cyc_030003A0);
    /* fall-through to 0x030003A2 */
    g_cpu.R[15] = 0x030003A2u;
    runtime_dispatch(0x030003A2u);
    return;
}

/* 0x03000794  mode=thumb  end=0x030007A6  branches=0  indirect */


/* 0x03000754 thumb */
void gf_tfunc_03000754(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000754u);
    /* 03000754  03000754 T stm r13!,{r4,r5,r14} */
    g_cpu.R[15] = 0x03000754u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000754 = 1u;
    _cyc_03000754 = 1u;
    uint32_t _b_03000754 = g_cpu.R[13];
    uint32_t _a_03000754 = _b_03000754 - 12u;
    uint32_t _fb_03000754 = _b_03000754 - 12u;
    _cyc_03000754 += runtime_mem_cycles(_a_03000754 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000754u, _a_03000754 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_03000754 & ~3u, g_cpu.R[4]);
    _a_03000754 += 4u;
    _cyc_03000754 += runtime_mem_cycles(_a_03000754 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000754u, _a_03000754 & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_03000754 & ~3u, g_cpu.R[5]);
    _a_03000754 += 4u;
    _cyc_03000754 += runtime_mem_cycles(_a_03000754 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000754u, _a_03000754 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_03000754 & ~3u, g_cpu.R[14]);
    _a_03000754 += 4u;
    g_cpu.R[13] = _fb_03000754;
    g_cpu.R[15] = 0x03000756u;
    runtime_tick(_cyc_03000754);
    /* 03000756  03000756 T ldr r0,[r15,#0x24] */
    g_cpu.R[15] = 0x03000756u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000756 = 1u;
    _cyc_03000756 = 2u;
    uint32_t _base_03000756 = 0x0300075Au & ~3u;
    uint32_t _off_03000756;
    _off_03000756 = 0x00000024u;
    uint32_t _ea_03000756 = _base_03000756 + _off_03000756;
    uint32_t _post_03000756 = _base_03000756 + _off_03000756;
    _cyc_03000756 += runtime_mem_cycles(_ea_03000756, 4u, 0u);
    uint32_t _v_03000756;
    { uint32_t _w = bus_read_u32(_ea_03000756 & ~3u); uint32_t _rot = (_ea_03000756 & 3u) * 8u; _v_03000756 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_03000756;
    g_cpu.R[15] = 0x03000758u;
    runtime_tick(_cyc_03000756);
    /* 03000758  03000758 T ldr r2,[r0] */
    g_cpu.R[15] = 0x03000758u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000758 = 1u;
    _cyc_03000758 = 2u;
    uint32_t _base_03000758 = g_cpu.R[0];
    uint32_t _off_03000758;
    _off_03000758 = 0x00000000u;
    uint32_t _ea_03000758 = _base_03000758 + _off_03000758;
    uint32_t _post_03000758 = _base_03000758 + _off_03000758;
    _cyc_03000758 += runtime_mem_cycles(_ea_03000758, 4u, 0u);
    uint32_t _v_03000758;
    { uint32_t _w = bus_read_u32(_ea_03000758 & ~3u); uint32_t _rot = (_ea_03000758 & 3u) * 8u; _v_03000758 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_03000758;
    g_cpu.R[15] = 0x0300075Au;
    runtime_tick(_cyc_03000758);
    /* 0300075A  0300075a T movs r3,#0x0 */
    g_cpu.R[15] = 0x0300075Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300075A = 1u;
    _cyc_0300075A = 1u;
    uint32_t _r_0300075A;
    _r_0300075A = 0x00000000u;
    arm_set_nzc_logic(_r_0300075A, cpsr_c());
    g_cpu.R[3] = _r_0300075A;
    g_cpu.R[15] = 0x0300075Cu;
    runtime_tick(_cyc_0300075A);
    /* 0300075C  0300075c T ldr r0,[r15,#0x20] */
    g_cpu.R[15] = 0x0300075Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300075C = 1u;
    _cyc_0300075C = 2u;
    uint32_t _base_0300075C = 0x03000760u & ~3u;
    uint32_t _off_0300075C;
    _off_0300075C = 0x00000020u;
    uint32_t _ea_0300075C = _base_0300075C + _off_0300075C;
    uint32_t _post_0300075C = _base_0300075C + _off_0300075C;
    _cyc_0300075C += runtime_mem_cycles(_ea_0300075C, 4u, 0u);
    uint32_t _v_0300075C;
    { uint32_t _w = bus_read_u32(_ea_0300075C & ~3u); uint32_t _rot = (_ea_0300075C & 3u) * 8u; _v_0300075C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0300075C;
    g_cpu.R[15] = 0x0300075Eu;
    runtime_tick(_cyc_0300075C);
    /* 0300075E  0300075e T ldr r0,[r0] */
    g_cpu.R[15] = 0x0300075Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300075E = 1u;
    _cyc_0300075E = 2u;
    uint32_t _base_0300075E = g_cpu.R[0];
    uint32_t _off_0300075E;
    _off_0300075E = 0x00000000u;
    uint32_t _ea_0300075E = _base_0300075E + _off_0300075E;
    uint32_t _post_0300075E = _base_0300075E + _off_0300075E;
    _cyc_0300075E += runtime_mem_cycles(_ea_0300075E, 4u, 0u);
    uint32_t _v_0300075E;
    { uint32_t _w = bus_read_u32(_ea_0300075E & ~3u); uint32_t _rot = (_ea_0300075E & 3u) * 8u; _v_0300075E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0300075E;
    g_cpu.R[15] = 0x03000760u;
    runtime_tick(_cyc_0300075E);
    /* 03000760  03000760 T cmps r3,r0 */
    g_cpu.R[15] = 0x03000760u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000760 = 1u;
    _cyc_03000760 = 1u;
    uint32_t _rm_03000760 = g_cpu.R[0];
    uint32_t _op2_03000760;
    uint32_t _co_03000760;
    _op2_03000760 = _rm_03000760;
    _co_03000760 = cpsr_c();
    uint32_t _rn_03000760 = g_cpu.R[3];
    uint32_t _r_03000760;
    _r_03000760 = _rn_03000760 - _op2_03000760;
    arm_set_nzcv_sub(_rn_03000760, _op2_03000760, _r_03000760);
    g_cpu.R[15] = 0x03000762u;
    runtime_tick(_cyc_03000760);
    /* 03000762  03000762 T bcs 0x0300078c */
    g_cpu.R[15] = 0x03000762u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000762 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_03000762 = 3u;
        g_cpu.R[15] = 0x0300078Cu;
        runtime_tick(_cyc_03000762);
        GBARECOMP_TAIL_CALL(gf_tfunc_0300078C);
    }
    g_cpu.R[15] = 0x03000764u;
    runtime_tick(_cyc_03000762);
    /* 03000764  03000764 T movs r5,#0x80 */
    g_cpu.R[15] = 0x03000764u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000764 = 1u;
    _cyc_03000764 = 1u;
    uint32_t _r_03000764;
    _r_03000764 = 0x00000080u;
    arm_set_nzc_logic(_r_03000764, cpsr_c());
    g_cpu.R[5] = _r_03000764;
    g_cpu.R[15] = 0x03000766u;
    runtime_tick(_cyc_03000764);
    /* 03000766  03000766 T adds r4,r0,#0x0 */
    g_cpu.R[15] = 0x03000766u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000766 = 1u;
    _cyc_03000766 = 1u;
    uint32_t _rn_03000766 = g_cpu.R[0];
    uint32_t _r_03000766;
    _r_03000766 = _rn_03000766 + 0x00000000u;
    arm_set_nzcv_add(_rn_03000766, 0x00000000u, _r_03000766);
    g_cpu.R[4] = _r_03000766;
    g_cpu.R[15] = 0x03000768u;
    runtime_tick(_cyc_03000766);
    /* fall-through to 0x03000768 */
    g_cpu.R[15] = 0x03000768u;
    runtime_dispatch(0x03000768u);
    return;
}

/* 0x03000768  mode=thumb  end=0x0300077A  branches=2 */


/* 0x03000768 thumb */
void gf_tfunc_03000768(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000768u);
    /* 03000768  03000768 T adds r0,r2,#0x0 */
    g_cpu.R[15] = 0x03000768u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000768 = 1u;
    _cyc_03000768 = 1u;
    uint32_t _rn_03000768 = g_cpu.R[2];
    uint32_t _r_03000768;
    _r_03000768 = _rn_03000768 + 0x00000000u;
    arm_set_nzcv_add(_rn_03000768, 0x00000000u, _r_03000768);
    g_cpu.R[0] = _r_03000768;
    g_cpu.R[15] = 0x0300076Au;
    runtime_tick(_cyc_03000768);
    /* 0300076A  0300076a T adds r0,r0,#0x2a */
    g_cpu.R[15] = 0x0300076Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300076A = 1u;
    _cyc_0300076A = 1u;
    uint32_t _rn_0300076A = g_cpu.R[0];
    uint32_t _r_0300076A;
    _r_0300076A = _rn_0300076A + 0x0000002Au;
    arm_set_nzcv_add(_rn_0300076A, 0x0000002Au, _r_0300076A);
    g_cpu.R[0] = _r_0300076A;
    g_cpu.R[15] = 0x0300076Cu;
    runtime_tick(_cyc_0300076A);
    /* 0300076C  0300076c T ldrb r1,[r0] */
    g_cpu.R[15] = 0x0300076Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300076C = 1u;
    _cyc_0300076C = 2u;
    uint32_t _base_0300076C = g_cpu.R[0];
    uint32_t _off_0300076C;
    _off_0300076C = 0x00000000u;
    uint32_t _ea_0300076C = _base_0300076C + _off_0300076C;
    uint32_t _post_0300076C = _base_0300076C + _off_0300076C;
    _cyc_0300076C += runtime_mem_cycles(_ea_0300076C, 1u, 0u);
    uint32_t _v_0300076C;
    _v_0300076C = bus_read_u8(_ea_0300076C);
    g_cpu.R[1] = _v_0300076C;
    g_cpu.R[15] = 0x0300076Eu;
    runtime_tick(_cyc_0300076C);
    /* 0300076E  0300076e T adds r0,r5,#0x0 */
    g_cpu.R[15] = 0x0300076Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300076E = 1u;
    _cyc_0300076E = 1u;
    uint32_t _rn_0300076E = g_cpu.R[5];
    uint32_t _r_0300076E;
    _r_0300076E = _rn_0300076E + 0x00000000u;
    arm_set_nzcv_add(_rn_0300076E, 0x00000000u, _r_0300076E);
    g_cpu.R[0] = _r_0300076E;
    g_cpu.R[15] = 0x03000770u;
    runtime_tick(_cyc_0300076E);
    /* 03000770  03000770 T ands r0,r0,r1 */
    g_cpu.R[15] = 0x03000770u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000770 = 1u;
    _cyc_03000770 = 1u;
    uint32_t _rm_03000770 = g_cpu.R[1];
    uint32_t _op2_03000770;
    uint32_t _co_03000770;
    _op2_03000770 = _rm_03000770;
    _co_03000770 = cpsr_c();
    uint32_t _rn_03000770 = g_cpu.R[0];
    uint32_t _r_03000770;
    _r_03000770 = _rn_03000770 & _op2_03000770;
    arm_set_nzc_logic(_r_03000770, _co_03000770);
    g_cpu.R[0] = _r_03000770;
    g_cpu.R[15] = 0x03000772u;
    runtime_tick(_cyc_03000770);
    /* 03000772  03000772 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x03000772u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000772 = 1u;
    _cyc_03000772 = 1u;
    uint32_t _rn_03000772 = g_cpu.R[0];
    uint32_t _r_03000772;
    _r_03000772 = _rn_03000772 - 0x00000000u;
    arm_set_nzcv_sub(_rn_03000772, 0x00000000u, _r_03000772);
    g_cpu.R[15] = 0x03000774u;
    runtime_tick(_cyc_03000772);
    /* 03000774  03000774 T bne 0x03000784 */
    g_cpu.R[15] = 0x03000774u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000774 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_03000774 = 3u;
        g_cpu.R[15] = 0x03000784u;
        runtime_tick(_cyc_03000774);
        GBARECOMP_TAIL_CALL(gf_tfunc_03000784);
    }
    g_cpu.R[15] = 0x03000776u;
    runtime_tick(_cyc_03000774);
    /* 03000776  03000776 T adds r0,r2,#0x0 */
    g_cpu.R[15] = 0x03000776u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000776 = 1u;
    _cyc_03000776 = 1u;
    uint32_t _rn_03000776 = g_cpu.R[2];
    uint32_t _r_03000776;
    _r_03000776 = _rn_03000776 + 0x00000000u;
    arm_set_nzcv_add(_rn_03000776, 0x00000000u, _r_03000776);
    g_cpu.R[0] = _r_03000776;
    g_cpu.R[15] = 0x03000778u;
    runtime_tick(_cyc_03000776);
    /* 03000778  03000778 T b 0x0300078e */
    g_cpu.R[15] = 0x03000778u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000778 = 1u;
    _cyc_03000778 = 3u;
    g_cpu.R[15] = 0x0300078Eu;
    runtime_tick(_cyc_03000778);
    GBARECOMP_TAIL_CALL(gf_tfunc_0300078E);
    g_cpu.R[15] = 0x0300077Au;
    runtime_tick(_cyc_03000778);
    /* fall-through to 0x0300077A */
    g_cpu.R[15] = 0x0300077Au;
    runtime_dispatch(0x0300077Au);
    return;
}

/* 0x03000784  mode=thumb  end=0x0300078C  branches=1  indirect */


/* 0x03000784 thumb */
void gf_tfunc_03000784(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000784u);
    /* 03000784  03000784 T adds r2,r2,#0x2c */
    g_cpu.R[15] = 0x03000784u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000784 = 1u;
    _cyc_03000784 = 1u;
    uint32_t _rn_03000784 = g_cpu.R[2];
    uint32_t _r_03000784;
    _r_03000784 = _rn_03000784 + 0x0000002Cu;
    arm_set_nzcv_add(_rn_03000784, 0x0000002Cu, _r_03000784);
    g_cpu.R[2] = _r_03000784;
    g_cpu.R[15] = 0x03000786u;
    runtime_tick(_cyc_03000784);
    /* 03000786  03000786 T adds r3,r3,#0x1 */
    g_cpu.R[15] = 0x03000786u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000786 = 1u;
    _cyc_03000786 = 1u;
    uint32_t _rn_03000786 = g_cpu.R[3];
    uint32_t _r_03000786;
    _r_03000786 = _rn_03000786 + 0x00000001u;
    arm_set_nzcv_add(_rn_03000786, 0x00000001u, _r_03000786);
    g_cpu.R[3] = _r_03000786;
    g_cpu.R[15] = 0x03000788u;
    runtime_tick(_cyc_03000786);
    /* 03000788  03000788 T cmps r3,r4 */
    g_cpu.R[15] = 0x03000788u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000788 = 1u;
    _cyc_03000788 = 1u;
    uint32_t _rm_03000788 = g_cpu.R[4];
    uint32_t _op2_03000788;
    uint32_t _co_03000788;
    _op2_03000788 = _rm_03000788;
    _co_03000788 = cpsr_c();
    uint32_t _rn_03000788 = g_cpu.R[3];
    uint32_t _r_03000788;
    _r_03000788 = _rn_03000788 - _op2_03000788;
    arm_set_nzcv_sub(_rn_03000788, _op2_03000788, _r_03000788);
    g_cpu.R[15] = 0x0300078Au;
    runtime_tick(_cyc_03000788);
    /* 0300078A  0300078a T bcc 0x03000768 */
    g_cpu.R[15] = 0x0300078Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300078A = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_0300078A = 3u;
        g_cpu.R[15] = 0x03000768u;
        runtime_tick(_cyc_0300078A);
        GBARECOMP_TAIL_CALL(gf_tfunc_03000768);
    }
    g_cpu.R[15] = 0x0300078Cu;
    runtime_tick(_cyc_0300078A);
    /* fall-through to 0x0300078C */
    g_cpu.R[15] = 0x0300078Cu;
    runtime_dispatch(0x0300078Cu);
    return;
}

/* 0x0300078C  mode=thumb  end=0x0300078E  branches=0  indirect */


/* 0x0300078C thumb */
void gf_tfunc_0300078C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0300078Cu);
    /* 0300078C  0300078c T movs r0,#0x0 */
    g_cpu.R[15] = 0x0300078Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300078C = 1u;
    _cyc_0300078C = 1u;
    uint32_t _r_0300078C;
    _r_0300078C = 0x00000000u;
    arm_set_nzc_logic(_r_0300078C, cpsr_c());
    g_cpu.R[0] = _r_0300078C;
    g_cpu.R[15] = 0x0300078Eu;
    runtime_tick(_cyc_0300078C);
    /* fall-through to 0x0300078E */
    g_cpu.R[15] = 0x0300078Eu;
    runtime_dispatch(0x0300078Eu);
    return;
}

/* 0x0300078E  mode=thumb  end=0x03000794  branches=0  indirect */


/* 0x0300078E thumb */
void gf_tfunc_0300078E(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0300078Eu);
    /* 0300078E  0300078e T ldm r13!,{r4,r5} */
    g_cpu.R[15] = 0x0300078Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300078E = 1u;
    _cyc_0300078E = 2u;
    uint32_t _b_0300078E = g_cpu.R[13];
    uint32_t _a_0300078E = _b_0300078E;
    uint32_t _fb_0300078E = _b_0300078E + 8u;
    _cyc_0300078E += runtime_mem_cycles(_a_0300078E & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_0300078E & ~3u);
    _a_0300078E += 4u;
    _cyc_0300078E += runtime_mem_cycles(_a_0300078E & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_0300078E & ~3u);
    _a_0300078E += 4u;
    g_cpu.R[13] = _fb_0300078E;
    g_cpu.R[15] = 0x03000790u;
    runtime_tick(_cyc_0300078E);
    /* 03000790  03000790 T ldm r13!,{r1} */
    g_cpu.R[15] = 0x03000790u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000790 = 1u;
    _cyc_03000790 = 2u;
    uint32_t _b_03000790 = g_cpu.R[13];
    uint32_t _a_03000790 = _b_03000790;
    uint32_t _fb_03000790 = _b_03000790 + 4u;
    _cyc_03000790 += runtime_mem_cycles(_a_03000790 & ~3u, 4u, 0u);
    g_cpu.R[1] = bus_read_u32(_a_03000790 & ~3u);
    _a_03000790 += 4u;
    g_cpu.R[13] = _fb_03000790;
    g_cpu.R[15] = 0x03000792u;
    runtime_tick(_cyc_03000790);
    /* 03000792  03000792 T bx r1 */
    g_cpu.R[15] = 0x03000792u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000792 = 1u;
    _cyc_03000792 = 3u;
    uint32_t _bxt_03000792 = g_cpu.R[1];
    g_cpu.R[15] = _bxt_03000792 & ~1u;
    if (_bxt_03000792 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_03000792);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_03000792);
    g_cpu.R[15] = 0x03000794u;
    runtime_tick(_cyc_03000792);
    /* fall-through to 0x03000794 */
    g_cpu.R[15] = 0x03000794u;
    runtime_dispatch(0x03000794u);
    return;
}

/* 0x0300081C  mode=thumb  end=0x03000822  branches=1  indirect */


/* 0x03000794 thumb */
void gf_tfunc_03000794(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000794u);
    /* 03000794  03000794 T adds r0,r0,#0x8 */
    g_cpu.R[15] = 0x03000794u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000794 = 1u;
    _cyc_03000794 = 1u;
    uint32_t _rn_03000794 = g_cpu.R[0];
    uint32_t _r_03000794;
    _r_03000794 = _rn_03000794 + 0x00000008u;
    arm_set_nzcv_add(_rn_03000794, 0x00000008u, _r_03000794);
    g_cpu.R[0] = _r_03000794;
    g_cpu.R[15] = 0x03000796u;
    runtime_tick(_cyc_03000794);
    /* 03000796  03000796 T ldr r1,[r15,#0x10] */
    g_cpu.R[15] = 0x03000796u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000796 = 1u;
    _cyc_03000796 = 2u;
    uint32_t _base_03000796 = 0x0300079Au & ~3u;
    uint32_t _off_03000796;
    _off_03000796 = 0x00000010u;
    uint32_t _ea_03000796 = _base_03000796 + _off_03000796;
    uint32_t _post_03000796 = _base_03000796 + _off_03000796;
    _cyc_03000796 += runtime_mem_cycles(_ea_03000796, 4u, 0u);
    uint32_t _v_03000796;
    { uint32_t _w = bus_read_u32(_ea_03000796 & ~3u); uint32_t _rot = (_ea_03000796 & 3u) * 8u; _v_03000796 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_03000796;
    g_cpu.R[15] = 0x03000798u;
    runtime_tick(_cyc_03000796);
    /* 03000798  03000798 T ands r1,r1,r0 */
    g_cpu.R[15] = 0x03000798u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000798 = 1u;
    _cyc_03000798 = 1u;
    uint32_t _rm_03000798 = g_cpu.R[0];
    uint32_t _op2_03000798;
    uint32_t _co_03000798;
    _op2_03000798 = _rm_03000798;
    _co_03000798 = cpsr_c();
    uint32_t _rn_03000798 = g_cpu.R[1];
    uint32_t _r_03000798;
    _r_03000798 = _rn_03000798 & _op2_03000798;
    arm_set_nzc_logic(_r_03000798, _co_03000798);
    g_cpu.R[1] = _r_03000798;
    g_cpu.R[15] = 0x0300079Au;
    runtime_tick(_cyc_03000798);
    /* 0300079A  0300079a T ldr r0,[r15,#0x10] */
    g_cpu.R[15] = 0x0300079Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300079A = 1u;
    _cyc_0300079A = 2u;
    uint32_t _base_0300079A = 0x0300079Eu & ~3u;
    uint32_t _off_0300079A;
    _off_0300079A = 0x00000010u;
    uint32_t _ea_0300079A = _base_0300079A + _off_0300079A;
    uint32_t _post_0300079A = _base_0300079A + _off_0300079A;
    _cyc_0300079A += runtime_mem_cycles(_ea_0300079A, 4u, 0u);
    uint32_t _v_0300079A;
    { uint32_t _w = bus_read_u32(_ea_0300079A & ~3u); uint32_t _rot = (_ea_0300079A & 3u) * 8u; _v_0300079A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0300079A;
    g_cpu.R[15] = 0x0300079Cu;
    runtime_tick(_cyc_0300079A);
    /* 0300079C  0300079c T movs r1,r1,asr #4 */
    g_cpu.R[15] = 0x0300079Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300079C = 1u;
    _cyc_0300079C = 1u;
    uint32_t _rm_0300079C = g_cpu.R[1];
    uint32_t _op2_0300079C;
    uint32_t _co_0300079C;
    _op2_0300079C = (uint32_t)((int32_t)_rm_0300079C >> 4);
    _co_0300079C = (_rm_0300079C >> 3) & 1u;
    uint32_t _r_0300079C;
    _r_0300079C = _op2_0300079C;
    arm_set_nzc_logic(_r_0300079C, _co_0300079C);
    g_cpu.R[1] = _r_0300079C;
    g_cpu.R[15] = 0x0300079Eu;
    runtime_tick(_cyc_0300079C);
    /* 0300079E  0300079e T movs r1,r1,lsl #2 */
    g_cpu.R[15] = 0x0300079Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300079E = 1u;
    _cyc_0300079E = 1u;
    uint32_t _rm_0300079E = g_cpu.R[1];
    uint32_t _op2_0300079E;
    uint32_t _co_0300079E;
    _op2_0300079E = _rm_0300079E << 2;
    _co_0300079E = (_rm_0300079E >> 30) & 1u;
    uint32_t _r_0300079E;
    _r_0300079E = _op2_0300079E;
    arm_set_nzc_logic(_r_0300079E, _co_0300079E);
    g_cpu.R[1] = _r_0300079E;
    g_cpu.R[15] = 0x030007A0u;
    runtime_tick(_cyc_0300079E);
    /* 030007A0  030007a0 T adds r1,r1,r0 */
    g_cpu.R[15] = 0x030007A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030007A0 = 1u;
    _cyc_030007A0 = 1u;
    uint32_t _rm_030007A0 = g_cpu.R[0];
    uint32_t _op2_030007A0;
    uint32_t _co_030007A0;
    _op2_030007A0 = _rm_030007A0;
    _co_030007A0 = cpsr_c();
    uint32_t _rn_030007A0 = g_cpu.R[1];
    uint32_t _r_030007A0;
    _r_030007A0 = _rn_030007A0 + _op2_030007A0;
    arm_set_nzcv_add(_rn_030007A0, _op2_030007A0, _r_030007A0);
    g_cpu.R[1] = _r_030007A0;
    g_cpu.R[15] = 0x030007A2u;
    runtime_tick(_cyc_030007A0);
    /* 030007A2  030007a2 T ldr r0,[r1] */
    g_cpu.R[15] = 0x030007A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030007A2 = 1u;
    _cyc_030007A2 = 2u;
    uint32_t _base_030007A2 = g_cpu.R[1];
    uint32_t _off_030007A2;
    _off_030007A2 = 0x00000000u;
    uint32_t _ea_030007A2 = _base_030007A2 + _off_030007A2;
    uint32_t _post_030007A2 = _base_030007A2 + _off_030007A2;
    _cyc_030007A2 += runtime_mem_cycles(_ea_030007A2, 4u, 0u);
    uint32_t _v_030007A2;
    { uint32_t _w = bus_read_u32(_ea_030007A2 & ~3u); uint32_t _rot = (_ea_030007A2 & 3u) * 8u; _v_030007A2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_030007A2;
    g_cpu.R[15] = 0x030007A4u;
    runtime_tick(_cyc_030007A2);
    /* 030007A4  030007a4 T bx r14 */
    g_cpu.R[15] = 0x030007A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030007A4 = 1u;
    _cyc_030007A4 = 3u;
    uint32_t _bxt_030007A4 = g_cpu.R[14];
    g_cpu.R[15] = _bxt_030007A4 & ~1u;
    if (_bxt_030007A4 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_030007A4);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_030007A4);
    g_cpu.R[15] = 0x030007A6u;
    runtime_tick(_cyc_030007A4);
    /* fall-through to 0x030007A6 */
    g_cpu.R[15] = 0x030007A6u;
    runtime_dispatch(0x030007A6u);
    return;
}

/* 0x030007E8  mode=thumb  end=0x030007F6  branches=4 */


/* 0x030007E8 thumb */
void gf_tfunc_030007E8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030007E8u);
    /* 030007E8  030007e8 T ldr r0,[r15,#0x24] */
    g_cpu.R[15] = 0x030007E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030007E8 = 1u;
    _cyc_030007E8 = 2u;
    uint32_t _base_030007E8 = 0x030007ECu & ~3u;
    uint32_t _off_030007E8;
    _off_030007E8 = 0x00000024u;
    uint32_t _ea_030007E8 = _base_030007E8 + _off_030007E8;
    uint32_t _post_030007E8 = _base_030007E8 + _off_030007E8;
    _cyc_030007E8 += runtime_mem_cycles(_ea_030007E8, 4u, 0u);
    uint32_t _v_030007E8;
    { uint32_t _w = bus_read_u32(_ea_030007E8 & ~3u); uint32_t _rot = (_ea_030007E8 & 3u) * 8u; _v_030007E8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_030007E8;
    g_cpu.R[15] = 0x030007EAu;
    runtime_tick(_cyc_030007E8);
    /* 030007EA  030007ea T ldr r1,[r0] */
    g_cpu.R[15] = 0x030007EAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030007EA = 1u;
    _cyc_030007EA = 2u;
    uint32_t _base_030007EA = g_cpu.R[0];
    uint32_t _off_030007EA;
    _off_030007EA = 0x00000000u;
    uint32_t _ea_030007EA = _base_030007EA + _off_030007EA;
    uint32_t _post_030007EA = _base_030007EA + _off_030007EA;
    _cyc_030007EA += runtime_mem_cycles(_ea_030007EA, 4u, 0u);
    uint32_t _v_030007EA;
    { uint32_t _w = bus_read_u32(_ea_030007EA & ~3u); uint32_t _rot = (_ea_030007EA & 3u) * 8u; _v_030007EA = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_030007EA;
    g_cpu.R[15] = 0x030007ECu;
    runtime_tick(_cyc_030007EA);
    /* 030007EC  030007ec T ldr r0,[r15,#0x24] */
    g_cpu.R[15] = 0x030007ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030007EC = 1u;
    _cyc_030007EC = 2u;
    uint32_t _base_030007EC = 0x030007F0u & ~3u;
    uint32_t _off_030007EC;
    _off_030007EC = 0x00000024u;
    uint32_t _ea_030007EC = _base_030007EC + _off_030007EC;
    uint32_t _post_030007EC = _base_030007EC + _off_030007EC;
    _cyc_030007EC += runtime_mem_cycles(_ea_030007EC, 4u, 0u);
    uint32_t _v_030007EC;
    { uint32_t _w = bus_read_u32(_ea_030007EC & ~3u); uint32_t _rot = (_ea_030007EC & 3u) * 8u; _v_030007EC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_030007EC;
    g_cpu.R[15] = 0x030007EEu;
    runtime_tick(_cyc_030007EC);
    /* 030007EE  030007ee T ldr r0,[r0] */
    g_cpu.R[15] = 0x030007EEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030007EE = 1u;
    _cyc_030007EE = 2u;
    uint32_t _base_030007EE = g_cpu.R[0];
    uint32_t _off_030007EE;
    _off_030007EE = 0x00000000u;
    uint32_t _ea_030007EE = _base_030007EE + _off_030007EE;
    uint32_t _post_030007EE = _base_030007EE + _off_030007EE;
    _cyc_030007EE += runtime_mem_cycles(_ea_030007EE, 4u, 0u);
    uint32_t _v_030007EE;
    { uint32_t _w = bus_read_u32(_ea_030007EE & ~3u); uint32_t _rot = (_ea_030007EE & 3u) * 8u; _v_030007EE = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_030007EE;
    g_cpu.R[15] = 0x030007F0u;
    runtime_tick(_cyc_030007EE);
    /* 030007F0  030007f0 T cmps r1,r0 */
    g_cpu.R[15] = 0x030007F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030007F0 = 1u;
    _cyc_030007F0 = 1u;
    uint32_t _rm_030007F0 = g_cpu.R[0];
    uint32_t _op2_030007F0;
    uint32_t _co_030007F0;
    _op2_030007F0 = _rm_030007F0;
    _co_030007F0 = cpsr_c();
    uint32_t _rn_030007F0 = g_cpu.R[1];
    uint32_t _r_030007F0;
    _r_030007F0 = _rn_030007F0 - _op2_030007F0;
    arm_set_nzcv_sub(_rn_030007F0, _op2_030007F0, _r_030007F0);
    g_cpu.R[15] = 0x030007F2u;
    runtime_tick(_cyc_030007F0);
    /* 030007F2  030007f2 T bcs 0x03000822 */
    g_cpu.R[15] = 0x030007F2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030007F2 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_030007F2 = 3u;
        g_cpu.R[15] = 0x03000822u;
        runtime_tick(_cyc_030007F2);
        GBARECOMP_TAIL_CALL(gf_tfunc_03000822);
    }
    g_cpu.R[15] = 0x030007F4u;
    runtime_tick(_cyc_030007F2);
    /* 030007F4  030007f4 T adds r2,r0,#0x0 */
    g_cpu.R[15] = 0x030007F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030007F4 = 1u;
    _cyc_030007F4 = 1u;
    uint32_t _rn_030007F4 = g_cpu.R[0];
    uint32_t _r_030007F4;
    _r_030007F4 = _rn_030007F4 + 0x00000000u;
    arm_set_nzcv_add(_rn_030007F4, 0x00000000u, _r_030007F4);
    g_cpu.R[2] = _r_030007F4;
    g_cpu.R[15] = 0x030007F6u;
    runtime_tick(_cyc_030007F4);
    /* fall-through to 0x030007F6 */
    g_cpu.R[15] = 0x030007F6u;
    runtime_dispatch(0x030007F6u);
    return;
}

/* 0x030007F6  mode=thumb  end=0x0300080C  branches=3 */


/* 0x030007F6 thumb */
void gf_tfunc_030007F6(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030007F6u);
    /* 030007F6  030007f6 T movs r3,#0x0 */
    g_cpu.R[15] = 0x030007F6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030007F6 = 1u;
    _cyc_030007F6 = 1u;
    uint32_t _r_030007F6;
    _r_030007F6 = 0x00000000u;
    arm_set_nzc_logic(_r_030007F6, cpsr_c());
    g_cpu.R[3] = _r_030007F6;
    g_cpu.R[15] = 0x030007F8u;
    runtime_tick(_cyc_030007F6);
    /* 030007F8  030007f8 T ldrsh r0,[r1,+r3] */
    g_cpu.R[15] = 0x030007F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030007F8 = 1u;
    _cyc_030007F8 = 2u;
    uint32_t _base_030007F8 = g_cpu.R[1];
    uint32_t _off_030007F8;
    uint32_t _morm_030007F8 = g_cpu.R[3];
    _off_030007F8 = _morm_030007F8;
    uint32_t _ea_030007F8 = _base_030007F8 + _off_030007F8;
    uint32_t _post_030007F8 = _base_030007F8 + _off_030007F8;
    _cyc_030007F8 += runtime_mem_cycles(_ea_030007F8, 2u, 0u);
    uint32_t _v_030007F8;
    if (_ea_030007F8 & 1u) _v_030007F8 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_030007F8);
    else _v_030007F8 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_030007F8);
    g_cpu.R[0] = _v_030007F8;
    g_cpu.R[15] = 0x030007FAu;
    runtime_tick(_cyc_030007F8);
    /* 030007FA  030007fa T cmps r0,#0x0 */
    g_cpu.R[15] = 0x030007FAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030007FA = 1u;
    _cyc_030007FA = 1u;
    uint32_t _rn_030007FA = g_cpu.R[0];
    uint32_t _r_030007FA;
    _r_030007FA = _rn_030007FA - 0x00000000u;
    arm_set_nzcv_sub(_rn_030007FA, 0x00000000u, _r_030007FA);
    g_cpu.R[15] = 0x030007FCu;
    runtime_tick(_cyc_030007FA);
    /* 030007FC  030007fc T bne 0x0300081c */
    g_cpu.R[15] = 0x030007FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030007FC = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_030007FC = 3u;
        g_cpu.R[15] = 0x0300081Cu;
        runtime_tick(_cyc_030007FC);
        GBARECOMP_TAIL_CALL(gf_tfunc_0300081C);
    }
    g_cpu.R[15] = 0x030007FEu;
    runtime_tick(_cyc_030007FC);
    /* 030007FE  030007fe T ldr r2,[r15,#0x18] */
    g_cpu.R[15] = 0x030007FEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030007FE = 1u;
    _cyc_030007FE = 2u;
    uint32_t _base_030007FE = 0x03000802u & ~3u;
    uint32_t _off_030007FE;
    _off_030007FE = 0x00000018u;
    uint32_t _ea_030007FE = _base_030007FE + _off_030007FE;
    uint32_t _post_030007FE = _base_030007FE + _off_030007FE;
    _cyc_030007FE += runtime_mem_cycles(_ea_030007FE, 4u, 0u);
    uint32_t _v_030007FE;
    { uint32_t _w = bus_read_u32(_ea_030007FE & ~3u); uint32_t _rot = (_ea_030007FE & 3u) * 8u; _v_030007FE = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_030007FE;
    g_cpu.R[15] = 0x03000800u;
    runtime_tick(_cyc_030007FE);
    /* 03000800  03000800 T ldr r0,[r2] */
    g_cpu.R[15] = 0x03000800u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000800 = 1u;
    _cyc_03000800 = 2u;
    uint32_t _base_03000800 = g_cpu.R[2];
    uint32_t _off_03000800;
    _off_03000800 = 0x00000000u;
    uint32_t _ea_03000800 = _base_03000800 + _off_03000800;
    uint32_t _post_03000800 = _base_03000800 + _off_03000800;
    _cyc_03000800 += runtime_mem_cycles(_ea_03000800, 4u, 0u);
    uint32_t _v_03000800;
    { uint32_t _w = bus_read_u32(_ea_03000800 & ~3u); uint32_t _rot = (_ea_03000800 & 3u) * 8u; _v_03000800 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_03000800;
    g_cpu.R[15] = 0x03000802u;
    runtime_tick(_cyc_03000800);
    /* 03000802  03000802 T cmps r0,r1 */
    g_cpu.R[15] = 0x03000802u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000802 = 1u;
    _cyc_03000802 = 1u;
    uint32_t _rm_03000802 = g_cpu.R[1];
    uint32_t _op2_03000802;
    uint32_t _co_03000802;
    _op2_03000802 = _rm_03000802;
    _co_03000802 = cpsr_c();
    uint32_t _rn_03000802 = g_cpu.R[0];
    uint32_t _r_03000802;
    _r_03000802 = _rn_03000802 - _op2_03000802;
    arm_set_nzcv_sub(_rn_03000802, _op2_03000802, _r_03000802);
    g_cpu.R[15] = 0x03000804u;
    runtime_tick(_cyc_03000802);
    /* 03000804  03000804 T bhi 0x0300080c */
    g_cpu.R[15] = 0x03000804u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000804 = 1u;
    if (arm_cond_passes(0x8u)) {
        _cyc_03000804 = 3u;
        g_cpu.R[15] = 0x0300080Cu;
        runtime_tick(_cyc_03000804);
        GBARECOMP_TAIL_CALL(gf_tfunc_0300080C);
    }
    g_cpu.R[15] = 0x03000806u;
    runtime_tick(_cyc_03000804);
    /* 03000806  03000806 T adds r0,r1,#0x0 */
    g_cpu.R[15] = 0x03000806u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000806 = 1u;
    _cyc_03000806 = 1u;
    uint32_t _rn_03000806 = g_cpu.R[1];
    uint32_t _r_03000806;
    _r_03000806 = _rn_03000806 + 0x00000000u;
    arm_set_nzcv_add(_rn_03000806, 0x00000000u, _r_03000806);
    g_cpu.R[0] = _r_03000806;
    g_cpu.R[15] = 0x03000808u;
    runtime_tick(_cyc_03000806);
    /* 03000808  03000808 T adds r0,r0,#0xbc */
    g_cpu.R[15] = 0x03000808u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000808 = 1u;
    _cyc_03000808 = 1u;
    uint32_t _rn_03000808 = g_cpu.R[0];
    uint32_t _r_03000808;
    _r_03000808 = _rn_03000808 + 0x000000BCu;
    arm_set_nzcv_add(_rn_03000808, 0x000000BCu, _r_03000808);
    g_cpu.R[0] = _r_03000808;
    g_cpu.R[15] = 0x0300080Au;
    runtime_tick(_cyc_03000808);
    /* 0300080A  0300080a T str r0,[r2] */
    g_cpu.R[15] = 0x0300080Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300080A = 1u;
    _cyc_0300080A = 1u;
    uint32_t _base_0300080A = g_cpu.R[2];
    uint32_t _off_0300080A;
    _off_0300080A = 0x00000000u;
    uint32_t _ea_0300080A = _base_0300080A + _off_0300080A;
    uint32_t _post_0300080A = _base_0300080A + _off_0300080A;
    _cyc_0300080A += runtime_mem_cycles(_ea_0300080A, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0300080Au, _ea_0300080A & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_0300080A & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0300080Cu;
    runtime_tick(_cyc_0300080A);
    /* fall-through to 0x0300080C */
    g_cpu.R[15] = 0x0300080Cu;
    runtime_dispatch(0x0300080Cu);
    return;
}

/* 0x0300080C  mode=thumb  end=0x03000810  branches=1 */


/* 0x0300080C thumb */
void gf_tfunc_0300080C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0300080Cu);
    /* 0300080C  0300080c T adds r0,r1,#0x0 */
    g_cpu.R[15] = 0x0300080Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300080C = 1u;
    _cyc_0300080C = 1u;
    uint32_t _rn_0300080C = g_cpu.R[1];
    uint32_t _r_0300080C;
    _r_0300080C = _rn_0300080C + 0x00000000u;
    arm_set_nzcv_add(_rn_0300080C, 0x00000000u, _r_0300080C);
    g_cpu.R[0] = _r_0300080C;
    g_cpu.R[15] = 0x0300080Eu;
    runtime_tick(_cyc_0300080C);
    /* 0300080E  0300080e T b 0x03000824 */
    g_cpu.R[15] = 0x0300080Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300080E = 1u;
    _cyc_0300080E = 3u;
    g_cpu.R[15] = 0x03000824u;
    runtime_tick(_cyc_0300080E);
    GBARECOMP_TAIL_CALL(gf_tfunc_03000824);
    g_cpu.R[15] = 0x03000810u;
    runtime_tick(_cyc_0300080E);
    /* fall-through to 0x03000810 */
    g_cpu.R[15] = 0x03000810u;
    runtime_dispatch(0x03000810u);
    return;
}

/* 0x03000824  mode=thumb  end=0x03000826  branches=0  indirect */


/* 0x0300081C thumb */
void gf_tfunc_0300081C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0300081Cu);
    /* 0300081C  0300081c T adds r1,r1,#0xbc */
    g_cpu.R[15] = 0x0300081Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300081C = 1u;
    _cyc_0300081C = 1u;
    uint32_t _rn_0300081C = g_cpu.R[1];
    uint32_t _r_0300081C;
    _r_0300081C = _rn_0300081C + 0x000000BCu;
    arm_set_nzcv_add(_rn_0300081C, 0x000000BCu, _r_0300081C);
    g_cpu.R[1] = _r_0300081C;
    g_cpu.R[15] = 0x0300081Eu;
    runtime_tick(_cyc_0300081C);
    /* 0300081E  0300081e T cmps r1,r2 */
    g_cpu.R[15] = 0x0300081Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300081E = 1u;
    _cyc_0300081E = 1u;
    uint32_t _rm_0300081E = g_cpu.R[2];
    uint32_t _op2_0300081E;
    uint32_t _co_0300081E;
    _op2_0300081E = _rm_0300081E;
    _co_0300081E = cpsr_c();
    uint32_t _rn_0300081E = g_cpu.R[1];
    uint32_t _r_0300081E;
    _r_0300081E = _rn_0300081E - _op2_0300081E;
    arm_set_nzcv_sub(_rn_0300081E, _op2_0300081E, _r_0300081E);
    g_cpu.R[15] = 0x03000820u;
    runtime_tick(_cyc_0300081E);
    /* 03000820  03000820 T bcc 0x030007f6 */
    g_cpu.R[15] = 0x03000820u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000820 = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_03000820 = 3u;
        g_cpu.R[15] = 0x030007F6u;
        runtime_tick(_cyc_03000820);
        GBARECOMP_TAIL_CALL(gf_tfunc_030007F6);
    }
    g_cpu.R[15] = 0x03000822u;
    runtime_tick(_cyc_03000820);
    /* fall-through to 0x03000822 */
    g_cpu.R[15] = 0x03000822u;
    runtime_dispatch(0x03000822u);
    return;
}

/* 0x03000822  mode=thumb  end=0x03000824  branches=0  indirect */


/* 0x03000822 thumb */
void gf_tfunc_03000822(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000822u);
    /* 03000822  03000822 T movs r0,#0x0 */
    g_cpu.R[15] = 0x03000822u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000822 = 1u;
    _cyc_03000822 = 1u;
    uint32_t _r_03000822;
    _r_03000822 = 0x00000000u;
    arm_set_nzc_logic(_r_03000822, cpsr_c());
    g_cpu.R[0] = _r_03000822;
    g_cpu.R[15] = 0x03000824u;
    runtime_tick(_cyc_03000822);
    /* fall-through to 0x03000824 */
    g_cpu.R[15] = 0x03000824u;
    runtime_dispatch(0x03000824u);
    return;
}

/* 0x03000948  mode=arm  end=0x0300097C  branches=1  indirect */


/* 0x03000824 thumb */
void gf_tfunc_03000824(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000824u);
    /* 03000824  03000824 T bx r14 */
    g_cpu.R[15] = 0x03000824u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000824 = 1u;
    _cyc_03000824 = 3u;
    uint32_t _bxt_03000824 = g_cpu.R[14];
    g_cpu.R[15] = _bxt_03000824 & ~1u;
    if (_bxt_03000824 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_03000824);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_03000824);
    g_cpu.R[15] = 0x03000826u;
    runtime_tick(_cyc_03000824);
    /* fall-through to 0x03000826 */
    g_cpu.R[15] = 0x03000826u;
    runtime_dispatch(0x03000826u);
    return;
}

/* 0x03000880  mode=arm  end=0x03000944  branches=15  indirect */


/* 0x03000880 arm */
void gf_afunc_03000880(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000880u);
    /* 03000880  03000880 A mov r3,#0x4000000 */
    g_cpu.R[15] = 0x03000880u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000880 = 1u;
    _cyc_03000880 = 1u;
    uint32_t _r_03000880;
    _r_03000880 = 0x04000000u;
    g_cpu.R[3] = _r_03000880;
    g_cpu.R[15] = 0x03000884u;
    runtime_tick(_cyc_03000880);
    /* 03000884  03000884 A add r3,r3,#0x200 */
    g_cpu.R[15] = 0x03000884u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000884 = 1u;
    _cyc_03000884 = 1u;
    uint32_t _rn_03000884 = g_cpu.R[3];
    uint32_t _r_03000884;
    _r_03000884 = _rn_03000884 + 0x00000200u;
    g_cpu.R[3] = _r_03000884;
    g_cpu.R[15] = 0x03000888u;
    runtime_tick(_cyc_03000884);
    /* 03000888  03000888 A ldr r2,[r3] */
    g_cpu.R[15] = 0x03000888u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000888 = 1u;
    _cyc_03000888 = 2u;
    uint32_t _base_03000888 = g_cpu.R[3];
    uint32_t _off_03000888;
    _off_03000888 = 0x00000000u;
    uint32_t _ea_03000888 = _base_03000888 + _off_03000888;
    uint32_t _post_03000888 = _base_03000888 + _off_03000888;
    _cyc_03000888 += runtime_mem_cycles(_ea_03000888, 4u, 0u);
    uint32_t _v_03000888;
    { uint32_t _w = bus_read_u32(_ea_03000888 & ~3u); uint32_t _rot = (_ea_03000888 & 3u) * 8u; _v_03000888 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_03000888;
    g_cpu.R[15] = 0x0300088Cu;
    runtime_tick(_cyc_03000888);
    /* 0300088C  0300088c A mov r1,r2,lsl #16 */
    g_cpu.R[15] = 0x0300088Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300088C = 1u;
    _cyc_0300088C = 1u;
    uint32_t _rm_0300088C = g_cpu.R[2];
    uint32_t _op2_0300088C;
    uint32_t _co_0300088C;
    _op2_0300088C = _rm_0300088C << 16;
    _co_0300088C = (_rm_0300088C >> 16) & 1u;
    uint32_t _r_0300088C;
    _r_0300088C = _op2_0300088C;
    g_cpu.R[1] = _r_0300088C;
    g_cpu.R[15] = 0x03000890u;
    runtime_tick(_cyc_0300088C);
    /* 03000890  03000890 A mov r1,r1,lsr #16 */
    g_cpu.R[15] = 0x03000890u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000890 = 1u;
    _cyc_03000890 = 1u;
    uint32_t _rm_03000890 = g_cpu.R[1];
    uint32_t _op2_03000890;
    uint32_t _co_03000890;
    _op2_03000890 = _rm_03000890 >> 16;
    _co_03000890 = (_rm_03000890 >> 15) & 1u;
    uint32_t _r_03000890;
    _r_03000890 = _op2_03000890;
    g_cpu.R[1] = _r_03000890;
    g_cpu.R[15] = 0x03000894u;
    runtime_tick(_cyc_03000890);
    /* 03000894  03000894 A mrs r0,spsr */
    g_cpu.R[15] = 0x03000894u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000894 = 1u;
    _cyc_03000894 = 1u;
    g_cpu.R[0] = runtime_mrs_spsr();
    g_cpu.R[15] = 0x03000898u;
    runtime_tick(_cyc_03000894);
    /* 03000898  03000898 A stm r13!,{r0,r1,r3,r14} */
    g_cpu.R[15] = 0x03000898u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000898 = 1u;
    _cyc_03000898 = 1u;
    uint32_t _b_03000898 = g_cpu.R[13];
    uint32_t _a_03000898 = _b_03000898 - 16u;
    uint32_t _fb_03000898 = _b_03000898 - 16u;
    _cyc_03000898 += runtime_mem_cycles(_a_03000898 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000898u, _a_03000898 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_a_03000898 & ~3u, g_cpu.R[0]);
    _a_03000898 += 4u;
    _cyc_03000898 += runtime_mem_cycles(_a_03000898 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000898u, _a_03000898 & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_a_03000898 & ~3u, g_cpu.R[1]);
    _a_03000898 += 4u;
    _cyc_03000898 += runtime_mem_cycles(_a_03000898 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000898u, _a_03000898 & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_a_03000898 & ~3u, g_cpu.R[3]);
    _a_03000898 += 4u;
    _cyc_03000898 += runtime_mem_cycles(_a_03000898 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000898u, _a_03000898 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_03000898 & ~3u, g_cpu.R[14]);
    _a_03000898 += 4u;
    g_cpu.R[13] = _fb_03000898;
    g_cpu.R[15] = 0x0300089Cu;
    runtime_tick(_cyc_03000898);
    /* 0300089C  0300089c A and r1,r2,r2,lsr #16 */
    g_cpu.R[15] = 0x0300089Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300089C = 1u;
    _cyc_0300089C = 1u;
    uint32_t _rm_0300089C = g_cpu.R[2];
    uint32_t _op2_0300089C;
    uint32_t _co_0300089C;
    _op2_0300089C = _rm_0300089C >> 16;
    _co_0300089C = (_rm_0300089C >> 15) & 1u;
    uint32_t _rn_0300089C = g_cpu.R[2];
    uint32_t _r_0300089C;
    _r_0300089C = _rn_0300089C & _op2_0300089C;
    g_cpu.R[1] = _r_0300089C;
    g_cpu.R[15] = 0x030008A0u;
    runtime_tick(_cyc_0300089C);
    /* 030008A0  030008a0 A mov r2,#0x0 */
    g_cpu.R[15] = 0x030008A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030008A0 = 1u;
    _cyc_030008A0 = 1u;
    uint32_t _r_030008A0;
    _r_030008A0 = 0x00000000u;
    g_cpu.R[2] = _r_030008A0;
    g_cpu.R[15] = 0x030008A4u;
    runtime_tick(_cyc_030008A0);
    /* 030008A4  030008a4 A ands r0,r1,#0x1 */
    g_cpu.R[15] = 0x030008A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030008A4 = 1u;
    _cyc_030008A4 = 1u;
    uint32_t _rn_030008A4 = g_cpu.R[1];
    uint32_t _r_030008A4;
    _r_030008A4 = _rn_030008A4 & 0x00000001u;
    arm_set_nzc_logic(_r_030008A4, cpsr_c());
    g_cpu.R[0] = _r_030008A4;
    g_cpu.R[15] = 0x030008A8u;
    runtime_tick(_cyc_030008A4);
    /* 030008A8  030008a8 A bne 0x03000948 */
    g_cpu.R[15] = 0x030008A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030008A8 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_030008A8 = 3u;
        g_cpu.R[15] = 0x03000948u;
        runtime_tick(_cyc_030008A8);
        GBARECOMP_TAIL_CALL(gf_afunc_03000948);
    }
    g_cpu.R[15] = 0x030008ACu;
    runtime_tick(_cyc_030008A8);
    /* 030008AC  030008ac A add r2,r2,#0x4 */
    g_cpu.R[15] = 0x030008ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030008AC = 1u;
    _cyc_030008AC = 1u;
    uint32_t _rn_030008AC = g_cpu.R[2];
    uint32_t _r_030008AC;
    _r_030008AC = _rn_030008AC + 0x00000004u;
    g_cpu.R[2] = _r_030008AC;
    g_cpu.R[15] = 0x030008B0u;
    runtime_tick(_cyc_030008AC);
    /* 030008B0  030008b0 A ands r0,r1,#0x2 */
    g_cpu.R[15] = 0x030008B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030008B0 = 1u;
    _cyc_030008B0 = 1u;
    uint32_t _rn_030008B0 = g_cpu.R[1];
    uint32_t _r_030008B0;
    _r_030008B0 = _rn_030008B0 & 0x00000002u;
    arm_set_nzc_logic(_r_030008B0, cpsr_c());
    g_cpu.R[0] = _r_030008B0;
    g_cpu.R[15] = 0x030008B4u;
    runtime_tick(_cyc_030008B0);
    /* 030008B4  030008b4 A bne 0x03000948 */
    g_cpu.R[15] = 0x030008B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030008B4 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_030008B4 = 3u;
        g_cpu.R[15] = 0x03000948u;
        runtime_tick(_cyc_030008B4);
        GBARECOMP_TAIL_CALL(gf_afunc_03000948);
    }
    g_cpu.R[15] = 0x030008B8u;
    runtime_tick(_cyc_030008B4);
    /* 030008B8  030008b8 A add r2,r2,#0x4 */
    g_cpu.R[15] = 0x030008B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030008B8 = 1u;
    _cyc_030008B8 = 1u;
    uint32_t _rn_030008B8 = g_cpu.R[2];
    uint32_t _r_030008B8;
    _r_030008B8 = _rn_030008B8 + 0x00000004u;
    g_cpu.R[2] = _r_030008B8;
    g_cpu.R[15] = 0x030008BCu;
    runtime_tick(_cyc_030008B8);
    /* 030008BC  030008bc A ands r0,r1,#0x4 */
    g_cpu.R[15] = 0x030008BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030008BC = 1u;
    _cyc_030008BC = 1u;
    uint32_t _rn_030008BC = g_cpu.R[1];
    uint32_t _r_030008BC;
    _r_030008BC = _rn_030008BC & 0x00000004u;
    arm_set_nzc_logic(_r_030008BC, cpsr_c());
    g_cpu.R[0] = _r_030008BC;
    g_cpu.R[15] = 0x030008C0u;
    runtime_tick(_cyc_030008BC);
    /* 030008C0  030008c0 A bne 0x03000948 */
    g_cpu.R[15] = 0x030008C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030008C0 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_030008C0 = 3u;
        g_cpu.R[15] = 0x03000948u;
        runtime_tick(_cyc_030008C0);
        GBARECOMP_TAIL_CALL(gf_afunc_03000948);
    }
    g_cpu.R[15] = 0x030008C4u;
    runtime_tick(_cyc_030008C0);
    /* 030008C4  030008c4 A add r2,r2,#0x4 */
    g_cpu.R[15] = 0x030008C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030008C4 = 1u;
    _cyc_030008C4 = 1u;
    uint32_t _rn_030008C4 = g_cpu.R[2];
    uint32_t _r_030008C4;
    _r_030008C4 = _rn_030008C4 + 0x00000004u;
    g_cpu.R[2] = _r_030008C4;
    g_cpu.R[15] = 0x030008C8u;
    runtime_tick(_cyc_030008C4);
    /* 030008C8  030008c8 A ands r0,r1,#0x8 */
    g_cpu.R[15] = 0x030008C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030008C8 = 1u;
    _cyc_030008C8 = 1u;
    uint32_t _rn_030008C8 = g_cpu.R[1];
    uint32_t _r_030008C8;
    _r_030008C8 = _rn_030008C8 & 0x00000008u;
    arm_set_nzc_logic(_r_030008C8, cpsr_c());
    g_cpu.R[0] = _r_030008C8;
    g_cpu.R[15] = 0x030008CCu;
    runtime_tick(_cyc_030008C8);
    /* 030008CC  030008cc A bne 0x03000948 */
    g_cpu.R[15] = 0x030008CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030008CC = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_030008CC = 3u;
        g_cpu.R[15] = 0x03000948u;
        runtime_tick(_cyc_030008CC);
        GBARECOMP_TAIL_CALL(gf_afunc_03000948);
    }
    g_cpu.R[15] = 0x030008D0u;
    runtime_tick(_cyc_030008CC);
    /* 030008D0  030008d0 A add r2,r2,#0x4 */
    g_cpu.R[15] = 0x030008D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030008D0 = 1u;
    _cyc_030008D0 = 1u;
    uint32_t _rn_030008D0 = g_cpu.R[2];
    uint32_t _r_030008D0;
    _r_030008D0 = _rn_030008D0 + 0x00000004u;
    g_cpu.R[2] = _r_030008D0;
    g_cpu.R[15] = 0x030008D4u;
    runtime_tick(_cyc_030008D0);
    /* 030008D4  030008d4 A ands r0,r1,#0x10 */
    g_cpu.R[15] = 0x030008D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030008D4 = 1u;
    _cyc_030008D4 = 1u;
    uint32_t _rn_030008D4 = g_cpu.R[1];
    uint32_t _r_030008D4;
    _r_030008D4 = _rn_030008D4 & 0x00000010u;
    arm_set_nzc_logic(_r_030008D4, cpsr_c());
    g_cpu.R[0] = _r_030008D4;
    g_cpu.R[15] = 0x030008D8u;
    runtime_tick(_cyc_030008D4);
    /* 030008D8  030008d8 A bne 0x03000948 */
    g_cpu.R[15] = 0x030008D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030008D8 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_030008D8 = 3u;
        g_cpu.R[15] = 0x03000948u;
        runtime_tick(_cyc_030008D8);
        GBARECOMP_TAIL_CALL(gf_afunc_03000948);
    }
    g_cpu.R[15] = 0x030008DCu;
    runtime_tick(_cyc_030008D8);
    /* 030008DC  030008dc A add r2,r2,#0x4 */
    g_cpu.R[15] = 0x030008DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030008DC = 1u;
    _cyc_030008DC = 1u;
    uint32_t _rn_030008DC = g_cpu.R[2];
    uint32_t _r_030008DC;
    _r_030008DC = _rn_030008DC + 0x00000004u;
    g_cpu.R[2] = _r_030008DC;
    g_cpu.R[15] = 0x030008E0u;
    runtime_tick(_cyc_030008DC);
    /* 030008E0  030008e0 A ands r0,r1,#0x20 */
    g_cpu.R[15] = 0x030008E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030008E0 = 1u;
    _cyc_030008E0 = 1u;
    uint32_t _rn_030008E0 = g_cpu.R[1];
    uint32_t _r_030008E0;
    _r_030008E0 = _rn_030008E0 & 0x00000020u;
    arm_set_nzc_logic(_r_030008E0, cpsr_c());
    g_cpu.R[0] = _r_030008E0;
    g_cpu.R[15] = 0x030008E4u;
    runtime_tick(_cyc_030008E0);
    /* 030008E4  030008e4 A bne 0x03000948 */
    g_cpu.R[15] = 0x030008E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030008E4 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_030008E4 = 3u;
        g_cpu.R[15] = 0x03000948u;
        runtime_tick(_cyc_030008E4);
        GBARECOMP_TAIL_CALL(gf_afunc_03000948);
    }
    g_cpu.R[15] = 0x030008E8u;
    runtime_tick(_cyc_030008E4);
    /* 030008E8  030008e8 A add r2,r2,#0x4 */
    g_cpu.R[15] = 0x030008E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030008E8 = 1u;
    _cyc_030008E8 = 1u;
    uint32_t _rn_030008E8 = g_cpu.R[2];
    uint32_t _r_030008E8;
    _r_030008E8 = _rn_030008E8 + 0x00000004u;
    g_cpu.R[2] = _r_030008E8;
    g_cpu.R[15] = 0x030008ECu;
    runtime_tick(_cyc_030008E8);
    /* 030008EC  030008ec A ands r0,r1,#0x40 */
    g_cpu.R[15] = 0x030008ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030008EC = 1u;
    _cyc_030008EC = 1u;
    uint32_t _rn_030008EC = g_cpu.R[1];
    uint32_t _r_030008EC;
    _r_030008EC = _rn_030008EC & 0x00000040u;
    arm_set_nzc_logic(_r_030008EC, cpsr_c());
    g_cpu.R[0] = _r_030008EC;
    g_cpu.R[15] = 0x030008F0u;
    runtime_tick(_cyc_030008EC);
    /* 030008F0  030008f0 A bne 0x03000948 */
    g_cpu.R[15] = 0x030008F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030008F0 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_030008F0 = 3u;
        g_cpu.R[15] = 0x03000948u;
        runtime_tick(_cyc_030008F0);
        GBARECOMP_TAIL_CALL(gf_afunc_03000948);
    }
    g_cpu.R[15] = 0x030008F4u;
    runtime_tick(_cyc_030008F0);
    /* 030008F4  030008f4 A add r2,r2,#0x4 */
    g_cpu.R[15] = 0x030008F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030008F4 = 1u;
    _cyc_030008F4 = 1u;
    uint32_t _rn_030008F4 = g_cpu.R[2];
    uint32_t _r_030008F4;
    _r_030008F4 = _rn_030008F4 + 0x00000004u;
    g_cpu.R[2] = _r_030008F4;
    g_cpu.R[15] = 0x030008F8u;
    runtime_tick(_cyc_030008F4);
    /* 030008F8  030008f8 A ands r0,r1,#0x80 */
    g_cpu.R[15] = 0x030008F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030008F8 = 1u;
    _cyc_030008F8 = 1u;
    uint32_t _rn_030008F8 = g_cpu.R[1];
    uint32_t _r_030008F8;
    _r_030008F8 = _rn_030008F8 & 0x00000080u;
    arm_set_nzc_logic(_r_030008F8, cpsr_c());
    g_cpu.R[0] = _r_030008F8;
    g_cpu.R[15] = 0x030008FCu;
    runtime_tick(_cyc_030008F8);
    /* 030008FC  030008fc A bne 0x03000948 */
    g_cpu.R[15] = 0x030008FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030008FC = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_030008FC = 3u;
        g_cpu.R[15] = 0x03000948u;
        runtime_tick(_cyc_030008FC);
        GBARECOMP_TAIL_CALL(gf_afunc_03000948);
    }
    g_cpu.R[15] = 0x03000900u;
    runtime_tick(_cyc_030008FC);
    /* 03000900  03000900 A add r2,r2,#0x4 */
    g_cpu.R[15] = 0x03000900u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000900 = 1u;
    _cyc_03000900 = 1u;
    uint32_t _rn_03000900 = g_cpu.R[2];
    uint32_t _r_03000900;
    _r_03000900 = _rn_03000900 + 0x00000004u;
    g_cpu.R[2] = _r_03000900;
    g_cpu.R[15] = 0x03000904u;
    runtime_tick(_cyc_03000900);
    /* 03000904  03000904 A ands r0,r1,#0x100 */
    g_cpu.R[15] = 0x03000904u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000904 = 1u;
    _cyc_03000904 = 1u;
    uint32_t _rn_03000904 = g_cpu.R[1];
    uint32_t _r_03000904;
    _r_03000904 = _rn_03000904 & 0x00000100u;
    arm_set_nzc_logic(_r_03000904, 0u);
    g_cpu.R[0] = _r_03000904;
    g_cpu.R[15] = 0x03000908u;
    runtime_tick(_cyc_03000904);
    /* 03000908  03000908 A bne 0x03000948 */
    g_cpu.R[15] = 0x03000908u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000908 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_03000908 = 3u;
        g_cpu.R[15] = 0x03000948u;
        runtime_tick(_cyc_03000908);
        GBARECOMP_TAIL_CALL(gf_afunc_03000948);
    }
    g_cpu.R[15] = 0x0300090Cu;
    runtime_tick(_cyc_03000908);
    /* 0300090C  0300090c A add r2,r2,#0x4 */
    g_cpu.R[15] = 0x0300090Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300090C = 1u;
    _cyc_0300090C = 1u;
    uint32_t _rn_0300090C = g_cpu.R[2];
    uint32_t _r_0300090C;
    _r_0300090C = _rn_0300090C + 0x00000004u;
    g_cpu.R[2] = _r_0300090C;
    g_cpu.R[15] = 0x03000910u;
    runtime_tick(_cyc_0300090C);
    /* 03000910  03000910 A ands r0,r1,#0x200 */
    g_cpu.R[15] = 0x03000910u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000910 = 1u;
    _cyc_03000910 = 1u;
    uint32_t _rn_03000910 = g_cpu.R[1];
    uint32_t _r_03000910;
    _r_03000910 = _rn_03000910 & 0x00000200u;
    arm_set_nzc_logic(_r_03000910, 0u);
    g_cpu.R[0] = _r_03000910;
    g_cpu.R[15] = 0x03000914u;
    runtime_tick(_cyc_03000910);
    /* 03000914  03000914 A bne 0x03000948 */
    g_cpu.R[15] = 0x03000914u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000914 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_03000914 = 3u;
        g_cpu.R[15] = 0x03000948u;
        runtime_tick(_cyc_03000914);
        GBARECOMP_TAIL_CALL(gf_afunc_03000948);
    }
    g_cpu.R[15] = 0x03000918u;
    runtime_tick(_cyc_03000914);
    /* 03000918  03000918 A add r2,r2,#0x4 */
    g_cpu.R[15] = 0x03000918u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000918 = 1u;
    _cyc_03000918 = 1u;
    uint32_t _rn_03000918 = g_cpu.R[2];
    uint32_t _r_03000918;
    _r_03000918 = _rn_03000918 + 0x00000004u;
    g_cpu.R[2] = _r_03000918;
    g_cpu.R[15] = 0x0300091Cu;
    runtime_tick(_cyc_03000918);
    /* 0300091C  0300091c A ands r0,r1,#0x400 */
    g_cpu.R[15] = 0x0300091Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300091C = 1u;
    _cyc_0300091C = 1u;
    uint32_t _rn_0300091C = g_cpu.R[1];
    uint32_t _r_0300091C;
    _r_0300091C = _rn_0300091C & 0x00000400u;
    arm_set_nzc_logic(_r_0300091C, 0u);
    g_cpu.R[0] = _r_0300091C;
    g_cpu.R[15] = 0x03000920u;
    runtime_tick(_cyc_0300091C);
    /* 03000920  03000920 A bne 0x03000948 */
    g_cpu.R[15] = 0x03000920u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000920 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_03000920 = 3u;
        g_cpu.R[15] = 0x03000948u;
        runtime_tick(_cyc_03000920);
        GBARECOMP_TAIL_CALL(gf_afunc_03000948);
    }
    g_cpu.R[15] = 0x03000924u;
    runtime_tick(_cyc_03000920);
    /* 03000924  03000924 A add r2,r2,#0x4 */
    g_cpu.R[15] = 0x03000924u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000924 = 1u;
    _cyc_03000924 = 1u;
    uint32_t _rn_03000924 = g_cpu.R[2];
    uint32_t _r_03000924;
    _r_03000924 = _rn_03000924 + 0x00000004u;
    g_cpu.R[2] = _r_03000924;
    g_cpu.R[15] = 0x03000928u;
    runtime_tick(_cyc_03000924);
    /* 03000928  03000928 A ands r0,r1,#0x800 */
    g_cpu.R[15] = 0x03000928u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000928 = 1u;
    _cyc_03000928 = 1u;
    uint32_t _rn_03000928 = g_cpu.R[1];
    uint32_t _r_03000928;
    _r_03000928 = _rn_03000928 & 0x00000800u;
    arm_set_nzc_logic(_r_03000928, 0u);
    g_cpu.R[0] = _r_03000928;
    g_cpu.R[15] = 0x0300092Cu;
    runtime_tick(_cyc_03000928);
    /* 0300092C  0300092c A bne 0x03000948 */
    g_cpu.R[15] = 0x0300092Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300092C = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_0300092C = 3u;
        g_cpu.R[15] = 0x03000948u;
        runtime_tick(_cyc_0300092C);
        GBARECOMP_TAIL_CALL(gf_afunc_03000948);
    }
    g_cpu.R[15] = 0x03000930u;
    runtime_tick(_cyc_0300092C);
    /* 03000930  03000930 A add r2,r2,#0x4 */
    g_cpu.R[15] = 0x03000930u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000930 = 1u;
    _cyc_03000930 = 1u;
    uint32_t _rn_03000930 = g_cpu.R[2];
    uint32_t _r_03000930;
    _r_03000930 = _rn_03000930 + 0x00000004u;
    g_cpu.R[2] = _r_03000930;
    g_cpu.R[15] = 0x03000934u;
    runtime_tick(_cyc_03000930);
    /* 03000934  03000934 A ands r0,r1,#0x1000 */
    g_cpu.R[15] = 0x03000934u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000934 = 1u;
    _cyc_03000934 = 1u;
    uint32_t _rn_03000934 = g_cpu.R[1];
    uint32_t _r_03000934;
    _r_03000934 = _rn_03000934 & 0x00001000u;
    arm_set_nzc_logic(_r_03000934, 0u);
    g_cpu.R[0] = _r_03000934;
    g_cpu.R[15] = 0x03000938u;
    runtime_tick(_cyc_03000934);
    /* 03000938  03000938 A bne 0x03000948 */
    g_cpu.R[15] = 0x03000938u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000938 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_03000938 = 3u;
        g_cpu.R[15] = 0x03000948u;
        runtime_tick(_cyc_03000938);
        GBARECOMP_TAIL_CALL(gf_afunc_03000948);
    }
    g_cpu.R[15] = 0x0300093Cu;
    runtime_tick(_cyc_03000938);
    /* 0300093C  0300093c A add r2,r2,#0x4 */
    g_cpu.R[15] = 0x0300093Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300093C = 1u;
    _cyc_0300093C = 1u;
    uint32_t _rn_0300093C = g_cpu.R[2];
    uint32_t _r_0300093C;
    _r_0300093C = _rn_0300093C + 0x00000004u;
    g_cpu.R[2] = _r_0300093C;
    g_cpu.R[15] = 0x03000940u;
    runtime_tick(_cyc_0300093C);
    /* 03000940  03000940 A ands r0,r1,#0x2000 */
    g_cpu.R[15] = 0x03000940u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000940 = 1u;
    _cyc_03000940 = 1u;
    uint32_t _rn_03000940 = g_cpu.R[1];
    uint32_t _r_03000940;
    _r_03000940 = _rn_03000940 & 0x00002000u;
    arm_set_nzc_logic(_r_03000940, 0u);
    g_cpu.R[0] = _r_03000940;
    g_cpu.R[15] = 0x03000944u;
    runtime_tick(_cyc_03000940);
    /* fall-through to 0x03000944 */
    g_cpu.R[15] = 0x03000944u;
    runtime_dispatch(0x03000944u);
    return;
}

/* 0x03000944  mode=arm  end=0x03000948  branches=2  indirect */


/* 0x03000944 arm */
void gf_afunc_03000944(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000944u);
    /* 03000944  03000944 A bne 0x03000944 */
    g_cpu.R[15] = 0x03000944u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000944 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_03000944 = 3u;
        g_cpu.R[15] = 0x03000944u;
        runtime_tick(_cyc_03000944);
        return;
    }
    g_cpu.R[15] = 0x03000948u;
    runtime_tick(_cyc_03000944);
    /* fall-through to 0x03000948 */
    g_cpu.R[15] = 0x03000948u;
    runtime_dispatch(0x03000948u);
    return;
}

/* 0x0300097C  mode=arm  end=0x030009A0  branches=0  indirect */


/* 0x03000948 arm */
void gf_afunc_03000948(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000948u);
    /* 03000948  03000948 A strh r0,[r3,#0x2] */
    g_cpu.R[15] = 0x03000948u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000948 = 1u;
    _cyc_03000948 = 1u;
    uint32_t _base_03000948 = g_cpu.R[3];
    uint32_t _off_03000948;
    _off_03000948 = 0x00000002u;
    uint32_t _ea_03000948 = _base_03000948 + _off_03000948;
    uint32_t _post_03000948 = _base_03000948 + _off_03000948;
    _cyc_03000948 += runtime_mem_cycles(_ea_03000948, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000948u, _ea_03000948 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_03000948 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0300094Cu;
    runtime_tick(_cyc_03000948);
    /* 0300094C  0300094c A ldr r1,[r15,#0x54] */
    g_cpu.R[15] = 0x0300094Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300094C = 1u;
    _cyc_0300094C = 2u;
    uint32_t _base_0300094C = 0x03000954u;
    uint32_t _off_0300094C;
    _off_0300094C = 0x00000054u;
    uint32_t _ea_0300094C = _base_0300094C + _off_0300094C;
    uint32_t _post_0300094C = _base_0300094C + _off_0300094C;
    _cyc_0300094C += runtime_mem_cycles(_ea_0300094C, 4u, 0u);
    uint32_t _v_0300094C;
    { uint32_t _w = bus_read_u32(_ea_0300094C & ~3u); uint32_t _rot = (_ea_0300094C & 3u) * 8u; _v_0300094C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0300094C;
    g_cpu.R[15] = 0x03000950u;
    runtime_tick(_cyc_0300094C);
    /* 03000950  03000950 A strh r1,[r3] */
    g_cpu.R[15] = 0x03000950u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000950 = 1u;
    _cyc_03000950 = 1u;
    uint32_t _base_03000950 = g_cpu.R[3];
    uint32_t _off_03000950;
    _off_03000950 = 0x00000000u;
    uint32_t _ea_03000950 = _base_03000950 + _off_03000950;
    uint32_t _post_03000950 = _base_03000950 + _off_03000950;
    _cyc_03000950 += runtime_mem_cycles(_ea_03000950, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000950u, _ea_03000950 & ~1u, (uint32_t)(g_cpu.R[1] & 0xFFFFu), 2u);
    bus_write_u16(_ea_03000950 & ~1u, (uint16_t)(g_cpu.R[1] & 0xFFFFu));
    g_cpu.R[15] = 0x03000954u;
    runtime_tick(_cyc_03000950);
    /* 03000954  03000954 A mrs r3,cpsr */
    g_cpu.R[15] = 0x03000954u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000954 = 1u;
    _cyc_03000954 = 1u;
    g_cpu.R[3] = runtime_mrs_cpsr();
    g_cpu.R[15] = 0x03000958u;
    runtime_tick(_cyc_03000954);
    /* 03000958  03000958 A bic r3,r3,#0xdf */
    g_cpu.R[15] = 0x03000958u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000958 = 1u;
    _cyc_03000958 = 1u;
    uint32_t _rn_03000958 = g_cpu.R[3];
    uint32_t _r_03000958;
    _r_03000958 = _rn_03000958 & ~(0x000000DFu);
    g_cpu.R[3] = _r_03000958;
    g_cpu.R[15] = 0x0300095Cu;
    runtime_tick(_cyc_03000958);
    /* 0300095C  0300095c A orr r3,r3,#0x1f */
    g_cpu.R[15] = 0x0300095Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300095C = 1u;
    _cyc_0300095C = 1u;
    uint32_t _rn_0300095C = g_cpu.R[3];
    uint32_t _r_0300095C;
    _r_0300095C = _rn_0300095C | 0x0000001Fu;
    g_cpu.R[3] = _r_0300095C;
    g_cpu.R[15] = 0x03000960u;
    runtime_tick(_cyc_0300095C);
    /* 03000960  03000960 A msr cpsr_cf,r3 */
    g_cpu.R[15] = 0x03000960u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000960 = 1u;
    _cyc_03000960 = 1u;
    uint32_t _msrv_03000960;
    _msrv_03000960 = g_cpu.R[3];
    runtime_msr_cpsr(_msrv_03000960, 9u);
    g_cpu.R[15] = 0x03000964u;
    runtime_tick(_cyc_03000960);
    /* 03000964  03000964 A ldr r1,[r15,#0x40] */
    g_cpu.R[15] = 0x03000964u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000964 = 1u;
    _cyc_03000964 = 2u;
    uint32_t _base_03000964 = 0x0300096Cu;
    uint32_t _off_03000964;
    _off_03000964 = 0x00000040u;
    uint32_t _ea_03000964 = _base_03000964 + _off_03000964;
    uint32_t _post_03000964 = _base_03000964 + _off_03000964;
    _cyc_03000964 += runtime_mem_cycles(_ea_03000964, 4u, 0u);
    uint32_t _v_03000964;
    { uint32_t _w = bus_read_u32(_ea_03000964 & ~3u); uint32_t _rot = (_ea_03000964 & 3u) * 8u; _v_03000964 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_03000964;
    g_cpu.R[15] = 0x03000968u;
    runtime_tick(_cyc_03000964);
    /* 03000968  03000968 A add r1,r1,r2 */
    g_cpu.R[15] = 0x03000968u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000968 = 1u;
    _cyc_03000968 = 1u;
    uint32_t _rm_03000968 = g_cpu.R[2];
    uint32_t _op2_03000968;
    uint32_t _co_03000968;
    _op2_03000968 = _rm_03000968;
    _co_03000968 = cpsr_c();
    uint32_t _rn_03000968 = g_cpu.R[1];
    uint32_t _r_03000968;
    _r_03000968 = _rn_03000968 + _op2_03000968;
    g_cpu.R[1] = _r_03000968;
    g_cpu.R[15] = 0x0300096Cu;
    runtime_tick(_cyc_03000968);
    /* 0300096C  0300096c A ldr r0,[r1] */
    g_cpu.R[15] = 0x0300096Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300096C = 1u;
    _cyc_0300096C = 2u;
    uint32_t _base_0300096C = g_cpu.R[1];
    uint32_t _off_0300096C;
    _off_0300096C = 0x00000000u;
    uint32_t _ea_0300096C = _base_0300096C + _off_0300096C;
    uint32_t _post_0300096C = _base_0300096C + _off_0300096C;
    _cyc_0300096C += runtime_mem_cycles(_ea_0300096C, 4u, 0u);
    uint32_t _v_0300096C;
    { uint32_t _w = bus_read_u32(_ea_0300096C & ~3u); uint32_t _rot = (_ea_0300096C & 3u) * 8u; _v_0300096C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0300096C;
    g_cpu.R[15] = 0x03000970u;
    runtime_tick(_cyc_0300096C);
    /* 03000970  03000970 A stm r13!,{r14} */
    g_cpu.R[15] = 0x03000970u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000970 = 1u;
    _cyc_03000970 = 1u;
    uint32_t _b_03000970 = g_cpu.R[13];
    uint32_t _a_03000970 = _b_03000970 - 4u;
    uint32_t _fb_03000970 = _b_03000970 - 4u;
    _cyc_03000970 += runtime_mem_cycles(_a_03000970 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000970u, _a_03000970 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_03000970 & ~3u, g_cpu.R[14]);
    _a_03000970 += 4u;
    g_cpu.R[13] = _fb_03000970;
    g_cpu.R[15] = 0x03000974u;
    runtime_tick(_cyc_03000970);
    /* 03000974  03000974 A add r14,r15,#0x0 */
    g_cpu.R[15] = 0x03000974u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000974 = 1u;
    _cyc_03000974 = 1u;
    uint32_t _rn_03000974 = 0x0300097Cu;
    uint32_t _r_03000974;
    _r_03000974 = _rn_03000974 + 0x00000000u;
    g_cpu.R[14] = _r_03000974;
    g_cpu.R[15] = 0x03000978u;
    runtime_tick(_cyc_03000974);
    /* 03000978  03000978 A bx r0 */
    g_cpu.R[15] = 0x03000978u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000978 = 1u;
    _cyc_03000978 = 3u;
    uint32_t _bxt_03000978 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_03000978 & ~1u;
    if (_bxt_03000978 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_03000978);
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_03000978);
    g_cpu.R[15] = 0x0300097Cu;
    runtime_tick(_cyc_03000978);
    /* fall-through to 0x0300097C */
    g_cpu.R[15] = 0x0300097Cu;
    runtime_dispatch(0x0300097Cu);
    return;
}

/* 0x08000000  mode=arm  end=0x08000004  branches=1 */


/* 0x0300097C arm */
void gf_afunc_0300097C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0300097Cu);
    /* 0300097C  0300097c A ldm r13!,{r14} */
    g_cpu.R[15] = 0x0300097Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300097C = 1u;
    _cyc_0300097C = 2u;
    uint32_t _b_0300097C = g_cpu.R[13];
    uint32_t _a_0300097C = _b_0300097C;
    uint32_t _fb_0300097C = _b_0300097C + 4u;
    _cyc_0300097C += runtime_mem_cycles(_a_0300097C & ~3u, 4u, 0u);
    g_cpu.R[14] = bus_read_u32(_a_0300097C & ~3u);
    _a_0300097C += 4u;
    g_cpu.R[13] = _fb_0300097C;
    g_cpu.R[15] = 0x03000980u;
    runtime_tick(_cyc_0300097C);
    /* 03000980  03000980 A mrs r3,cpsr */
    g_cpu.R[15] = 0x03000980u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000980 = 1u;
    _cyc_03000980 = 1u;
    g_cpu.R[3] = runtime_mrs_cpsr();
    g_cpu.R[15] = 0x03000984u;
    runtime_tick(_cyc_03000980);
    /* 03000984  03000984 A bic r3,r3,#0xdf */
    g_cpu.R[15] = 0x03000984u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000984 = 1u;
    _cyc_03000984 = 1u;
    uint32_t _rn_03000984 = g_cpu.R[3];
    uint32_t _r_03000984;
    _r_03000984 = _rn_03000984 & ~(0x000000DFu);
    g_cpu.R[3] = _r_03000984;
    g_cpu.R[15] = 0x03000988u;
    runtime_tick(_cyc_03000984);
    /* 03000988  03000988 A orr r3,r3,#0x92 */
    g_cpu.R[15] = 0x03000988u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000988 = 1u;
    _cyc_03000988 = 1u;
    uint32_t _rn_03000988 = g_cpu.R[3];
    uint32_t _r_03000988;
    _r_03000988 = _rn_03000988 | 0x00000092u;
    g_cpu.R[3] = _r_03000988;
    g_cpu.R[15] = 0x0300098Cu;
    runtime_tick(_cyc_03000988);
    /* 0300098C  0300098c A msr cpsr_cf,r3 */
    g_cpu.R[15] = 0x0300098Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300098C = 1u;
    _cyc_0300098C = 1u;
    uint32_t _msrv_0300098C;
    _msrv_0300098C = g_cpu.R[3];
    runtime_msr_cpsr(_msrv_0300098C, 9u);
    g_cpu.R[15] = 0x03000990u;
    runtime_tick(_cyc_0300098C);
    /* 03000990  03000990 A ldm r13!,{r0,r1,r3,r14} */
    g_cpu.R[15] = 0x03000990u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000990 = 1u;
    _cyc_03000990 = 2u;
    uint32_t _b_03000990 = g_cpu.R[13];
    uint32_t _a_03000990 = _b_03000990;
    uint32_t _fb_03000990 = _b_03000990 + 16u;
    _cyc_03000990 += runtime_mem_cycles(_a_03000990 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_03000990 & ~3u);
    _a_03000990 += 4u;
    _cyc_03000990 += runtime_mem_cycles(_a_03000990 & ~3u, 4u, 1u);
    g_cpu.R[1] = bus_read_u32(_a_03000990 & ~3u);
    _a_03000990 += 4u;
    _cyc_03000990 += runtime_mem_cycles(_a_03000990 & ~3u, 4u, 1u);
    g_cpu.R[3] = bus_read_u32(_a_03000990 & ~3u);
    _a_03000990 += 4u;
    _cyc_03000990 += runtime_mem_cycles(_a_03000990 & ~3u, 4u, 1u);
    g_cpu.R[14] = bus_read_u32(_a_03000990 & ~3u);
    _a_03000990 += 4u;
    g_cpu.R[13] = _fb_03000990;
    g_cpu.R[15] = 0x03000994u;
    runtime_tick(_cyc_03000990);
    /* 03000994  03000994 A strh r1,[r3] */
    g_cpu.R[15] = 0x03000994u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000994 = 1u;
    _cyc_03000994 = 1u;
    uint32_t _base_03000994 = g_cpu.R[3];
    uint32_t _off_03000994;
    _off_03000994 = 0x00000000u;
    uint32_t _ea_03000994 = _base_03000994 + _off_03000994;
    uint32_t _post_03000994 = _base_03000994 + _off_03000994;
    _cyc_03000994 += runtime_mem_cycles(_ea_03000994, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000994u, _ea_03000994 & ~1u, (uint32_t)(g_cpu.R[1] & 0xFFFFu), 2u);
    bus_write_u16(_ea_03000994 & ~1u, (uint16_t)(g_cpu.R[1] & 0xFFFFu));
    g_cpu.R[15] = 0x03000998u;
    runtime_tick(_cyc_03000994);
    /* 03000998  03000998 A msr spsr_cf,r0 */
    g_cpu.R[15] = 0x03000998u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000998 = 1u;
    _cyc_03000998 = 1u;
    uint32_t _msrv_03000998;
    _msrv_03000998 = g_cpu.R[0];
    runtime_msr_spsr(_msrv_03000998, 9u);
    g_cpu.R[15] = 0x0300099Cu;
    runtime_tick(_cyc_03000998);
    /* 0300099C  0300099c A bx r14 */
    g_cpu.R[15] = 0x0300099Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300099C = 1u;
    _cyc_0300099C = 3u;
    uint32_t _bxt_0300099C = g_cpu.R[14];
    g_cpu.R[15] = _bxt_0300099C & ~1u;
    if (_bxt_0300099C & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_0300099C);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_0300099C);
    g_cpu.R[15] = 0x030009A0u;
    runtime_tick(_cyc_0300099C);
    /* fall-through to 0x030009A0 */
    g_cpu.R[15] = 0x030009A0u;
    runtime_dispatch(0x030009A0u);
    return;
}

/* 0x080000C0  mode=arm  end=0x080000F0  branches=1  indirect */


