/* Auto-split from gbarecomp shards. Module: iwram_reloc
 * 91 guest functions. Do not hand-edit function bodies.
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

/* 0x0300019C  mode=thumb  end=0x030001A4  branches=1  indirect */


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

/* 0x03000180  mode=thumb  end=0x0300019C  branches=3  indirect */


/* 0x03000180 thumb */
void gf_tfunc_03000180(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000180u);
    /* 03000180  03000180 T stm r13!,{r4,r14} */
    g_cpu.R[15] = 0x03000180u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000180 = 1u;
    _cyc_03000180 = 1u;
    uint32_t _b_03000180 = g_cpu.R[13];
    uint32_t _a_03000180 = _b_03000180 - 8u;
    uint32_t _fb_03000180 = _b_03000180 - 8u;
    _cyc_03000180 += runtime_mem_cycles(_a_03000180 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000180u, _a_03000180 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_03000180 & ~3u, g_cpu.R[4]);
    _a_03000180 += 4u;
    _cyc_03000180 += runtime_mem_cycles(_a_03000180 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000180u, _a_03000180 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_03000180 & ~3u, g_cpu.R[14]);
    _a_03000180 += 4u;
    g_cpu.R[13] = _fb_03000180;
    g_cpu.R[15] = 0x03000182u;
    runtime_tick(_cyc_03000180);
    /* 03000182  03000182 T adds r3,r0,#0x0 */
    g_cpu.R[15] = 0x03000182u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000182 = 1u;
    _cyc_03000182 = 1u;
    uint32_t _rn_03000182 = g_cpu.R[0];
    uint32_t _r_03000182;
    _r_03000182 = _rn_03000182 + 0x00000000u;
    arm_set_nzcv_add(_rn_03000182, 0x00000000u, _r_03000182);
    g_cpu.R[3] = _r_03000182;
    g_cpu.R[15] = 0x03000184u;
    runtime_tick(_cyc_03000182);
    /* 03000184  03000184 T movs r4,#0x0 */
    g_cpu.R[15] = 0x03000184u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000184 = 1u;
    _cyc_03000184 = 1u;
    uint32_t _r_03000184;
    _r_03000184 = 0x00000000u;
    arm_set_nzc_logic(_r_03000184, cpsr_c());
    g_cpu.R[4] = _r_03000184;
    g_cpu.R[15] = 0x03000186u;
    runtime_tick(_cyc_03000184);
    /* 03000186  03000186 T ldrsh r0,[r1,+r4] */
    g_cpu.R[15] = 0x03000186u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000186 = 1u;
    _cyc_03000186 = 2u;
    uint32_t _base_03000186 = g_cpu.R[1];
    uint32_t _off_03000186;
    uint32_t _morm_03000186 = g_cpu.R[4];
    _off_03000186 = _morm_03000186;
    uint32_t _ea_03000186 = _base_03000186 + _off_03000186;
    uint32_t _post_03000186 = _base_03000186 + _off_03000186;
    _cyc_03000186 += runtime_mem_cycles(_ea_03000186, 2u, 0u);
    uint32_t _v_03000186;
    if (_ea_03000186 & 1u) _v_03000186 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_03000186);
    else _v_03000186 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_03000186);
    g_cpu.R[0] = _v_03000186;
    g_cpu.R[15] = 0x03000188u;
    runtime_tick(_cyc_03000186);
    /* 03000188  03000188 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x03000188u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000188 = 1u;
    _cyc_03000188 = 1u;
    uint32_t _rn_03000188 = g_cpu.R[0];
    uint32_t _r_03000188;
    _r_03000188 = _rn_03000188 - 0x00000000u;
    arm_set_nzcv_sub(_rn_03000188, 0x00000000u, _r_03000188);
    g_cpu.R[15] = 0x0300018Au;
    runtime_tick(_cyc_03000188);
    /* 0300018A  0300018a T ble 0x030001a4 */
    g_cpu.R[15] = 0x0300018Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300018A = 1u;
    if (arm_cond_passes(0xdu)) {
        _cyc_0300018A = 3u;
        g_cpu.R[15] = 0x030001A4u;
        runtime_tick(_cyc_0300018A);
        GBARECOMP_TAIL_CALL(gf_tfunc_030001A4);
    }
    g_cpu.R[15] = 0x0300018Cu;
    runtime_tick(_cyc_0300018A);
    /* 0300018C  0300018c T movs r0,r0,lsl #1 */
    g_cpu.R[15] = 0x0300018Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300018C = 1u;
    _cyc_0300018C = 1u;
    uint32_t _rm_0300018C = g_cpu.R[0];
    uint32_t _op2_0300018C;
    uint32_t _co_0300018C;
    _op2_0300018C = _rm_0300018C << 1;
    _co_0300018C = (_rm_0300018C >> 31) & 1u;
    uint32_t _r_0300018C;
    _r_0300018C = _op2_0300018C;
    arm_set_nzc_logic(_r_0300018C, _co_0300018C);
    g_cpu.R[0] = _r_0300018C;
    g_cpu.R[15] = 0x0300018Eu;
    runtime_tick(_cyc_0300018C);
    /* 0300018E  0300018e T subs r0,r0,#0x2 */
    g_cpu.R[15] = 0x0300018Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300018E = 1u;
    _cyc_0300018E = 1u;
    uint32_t _rn_0300018E = g_cpu.R[0];
    uint32_t _r_0300018E;
    _r_0300018E = _rn_0300018E - 0x00000002u;
    arm_set_nzcv_sub(_rn_0300018E, 0x00000002u, _r_0300018E);
    g_cpu.R[0] = _r_0300018E;
    g_cpu.R[15] = 0x03000190u;
    runtime_tick(_cyc_0300018E);
    /* 03000190  03000190 T adds r0,r3,r0 */
    g_cpu.R[15] = 0x03000190u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000190 = 1u;
    _cyc_03000190 = 1u;
    uint32_t _rm_03000190 = g_cpu.R[0];
    uint32_t _op2_03000190;
    uint32_t _co_03000190;
    _op2_03000190 = _rm_03000190;
    _co_03000190 = cpsr_c();
    uint32_t _rn_03000190 = g_cpu.R[3];
    uint32_t _r_03000190;
    _r_03000190 = _rn_03000190 + _op2_03000190;
    arm_set_nzcv_add(_rn_03000190, _op2_03000190, _r_03000190);
    g_cpu.R[0] = _r_03000190;
    g_cpu.R[15] = 0x03000192u;
    runtime_tick(_cyc_03000190);
    /* 03000192  03000192 T strh r2,[r0] */
    g_cpu.R[15] = 0x03000192u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000192 = 1u;
    _cyc_03000192 = 1u;
    uint32_t _base_03000192 = g_cpu.R[0];
    uint32_t _off_03000192;
    _off_03000192 = 0x00000000u;
    uint32_t _ea_03000192 = _base_03000192 + _off_03000192;
    uint32_t _post_03000192 = _base_03000192 + _off_03000192;
    _cyc_03000192 += runtime_mem_cycles(_ea_03000192, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000192u, _ea_03000192 & ~1u, (uint32_t)(g_cpu.R[2] & 0xFFFFu), 2u);
    bus_write_u16(_ea_03000192 & ~1u, (uint16_t)(g_cpu.R[2] & 0xFFFFu));
    g_cpu.R[15] = 0x03000194u;
    runtime_tick(_cyc_03000192);
    /* 03000194  03000194 T adds r0,r0,#0x2 */
    g_cpu.R[15] = 0x03000194u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000194 = 1u;
    _cyc_03000194 = 1u;
    uint32_t _rn_03000194 = g_cpu.R[0];
    uint32_t _r_03000194;
    _r_03000194 = _rn_03000194 + 0x00000002u;
    arm_set_nzcv_add(_rn_03000194, 0x00000002u, _r_03000194);
    g_cpu.R[0] = _r_03000194;
    g_cpu.R[15] = 0x03000196u;
    runtime_tick(_cyc_03000194);
    /* 03000196  03000196 T cmps r0,r1 */
    g_cpu.R[15] = 0x03000196u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000196 = 1u;
    _cyc_03000196 = 1u;
    uint32_t _rm_03000196 = g_cpu.R[1];
    uint32_t _op2_03000196;
    uint32_t _co_03000196;
    _op2_03000196 = _rm_03000196;
    _co_03000196 = cpsr_c();
    uint32_t _rn_03000196 = g_cpu.R[0];
    uint32_t _r_03000196;
    _r_03000196 = _rn_03000196 - _op2_03000196;
    arm_set_nzcv_sub(_rn_03000196, _op2_03000196, _r_03000196);
    g_cpu.R[15] = 0x03000198u;
    runtime_tick(_cyc_03000196);
    /* 03000198  03000198 T bcs 0x030001a4 */
    g_cpu.R[15] = 0x03000198u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000198 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_03000198 = 3u;
        g_cpu.R[15] = 0x030001A4u;
        runtime_tick(_cyc_03000198);
        GBARECOMP_TAIL_CALL(gf_tfunc_030001A4);
    }
    g_cpu.R[15] = 0x0300019Au;
    runtime_tick(_cyc_03000198);
    /* 0300019A  0300019a T movs r2,#0x0 */
    g_cpu.R[15] = 0x0300019Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300019A = 1u;
    _cyc_0300019A = 1u;
    uint32_t _r_0300019A;
    _r_0300019A = 0x00000000u;
    arm_set_nzc_logic(_r_0300019A, cpsr_c());
    g_cpu.R[2] = _r_0300019A;
    g_cpu.R[15] = 0x0300019Cu;
    runtime_tick(_cyc_0300019A);
    /* fall-through to 0x0300019C */
    g_cpu.R[15] = 0x0300019Cu;
    runtime_dispatch(0x0300019Cu);
    return;
}

/* 0x030001C8  mode=thumb  end=0x030001D0  branches=1  indirect */


/* 0x0300019C thumb */
void gf_tfunc_0300019C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0300019Cu);
L_0300019C:
    /* 0300019C  0300019c T strh r2,[r0] */
    g_cpu.R[15] = 0x0300019Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300019C = 1u;
    _cyc_0300019C = 1u;
    uint32_t _base_0300019C = g_cpu.R[0];
    uint32_t _off_0300019C;
    _off_0300019C = 0x00000000u;
    uint32_t _ea_0300019C = _base_0300019C + _off_0300019C;
    uint32_t _post_0300019C = _base_0300019C + _off_0300019C;
    _cyc_0300019C += runtime_mem_cycles(_ea_0300019C, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0300019Cu, _ea_0300019C & ~1u, (uint32_t)(g_cpu.R[2] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0300019C & ~1u, (uint16_t)(g_cpu.R[2] & 0xFFFFu));
    g_cpu.R[15] = 0x0300019Eu;
    runtime_tick(_cyc_0300019C);
    /* 0300019E  0300019e T adds r0,r0,#0x2 */
    g_cpu.R[15] = 0x0300019Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300019E = 1u;
    _cyc_0300019E = 1u;
    uint32_t _rn_0300019E = g_cpu.R[0];
    uint32_t _r_0300019E;
    _r_0300019E = _rn_0300019E + 0x00000002u;
    arm_set_nzcv_add(_rn_0300019E, 0x00000002u, _r_0300019E);
    g_cpu.R[0] = _r_0300019E;
    g_cpu.R[15] = 0x030001A0u;
    runtime_tick(_cyc_0300019E);
    /* 030001A0  030001a0 T cmps r0,r1 */
    g_cpu.R[15] = 0x030001A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001A0 = 1u;
    _cyc_030001A0 = 1u;
    uint32_t _rm_030001A0 = g_cpu.R[1];
    uint32_t _op2_030001A0;
    uint32_t _co_030001A0;
    _op2_030001A0 = _rm_030001A0;
    _co_030001A0 = cpsr_c();
    uint32_t _rn_030001A0 = g_cpu.R[0];
    uint32_t _r_030001A0;
    _r_030001A0 = _rn_030001A0 - _op2_030001A0;
    arm_set_nzcv_sub(_rn_030001A0, _op2_030001A0, _r_030001A0);
    g_cpu.R[15] = 0x030001A2u;
    runtime_tick(_cyc_030001A0);
    /* 030001A2  030001a2 T bcc 0x0300019c */
    g_cpu.R[15] = 0x030001A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001A2 = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_030001A2 = 3u;
        g_cpu.R[15] = 0x0300019Cu;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x030001A2u, 0x0300019Cu, 0u, 0u);
        runtime_tick(_cyc_030001A2);
        goto L_0300019C;
    }
    g_cpu.R[15] = 0x030001A4u;
    runtime_tick(_cyc_030001A2);
    /* fall-through to 0x030001A4 */
    g_cpu.R[15] = 0x030001A4u;
    runtime_dispatch(0x030001A4u);
    return;
}

/* 0x030001A4  mode=thumb  end=0x030001AA  branches=0  indirect */


/* 0x030001A4 thumb */
void gf_tfunc_030001A4(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030001A4u);
    /* 030001A4  030001a4 T ldm r13!,{r4} */
    g_cpu.R[15] = 0x030001A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001A4 = 1u;
    _cyc_030001A4 = 2u;
    uint32_t _b_030001A4 = g_cpu.R[13];
    uint32_t _a_030001A4 = _b_030001A4;
    uint32_t _fb_030001A4 = _b_030001A4 + 4u;
    _cyc_030001A4 += runtime_mem_cycles(_a_030001A4 & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_030001A4 & ~3u);
    _a_030001A4 += 4u;
    g_cpu.R[13] = _fb_030001A4;
    g_cpu.R[15] = 0x030001A6u;
    runtime_tick(_cyc_030001A4);
    /* 030001A6  030001a6 T ldm r13!,{r0} */
    g_cpu.R[15] = 0x030001A6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001A6 = 1u;
    _cyc_030001A6 = 2u;
    uint32_t _b_030001A6 = g_cpu.R[13];
    uint32_t _a_030001A6 = _b_030001A6;
    uint32_t _fb_030001A6 = _b_030001A6 + 4u;
    _cyc_030001A6 += runtime_mem_cycles(_a_030001A6 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_030001A6 & ~3u);
    _a_030001A6 += 4u;
    g_cpu.R[13] = _fb_030001A6;
    g_cpu.R[15] = 0x030001A8u;
    runtime_tick(_cyc_030001A6);
    /* 030001A8  030001a8 T bx r0 */
    g_cpu.R[15] = 0x030001A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001A8 = 1u;
    _cyc_030001A8 = 3u;
    uint32_t _bxt_030001A8 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_030001A8 & ~1u;
    if (_bxt_030001A8 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_030001A8);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_030001A8);
    g_cpu.R[15] = 0x030001AAu;
    runtime_tick(_cyc_030001A8);
    /* fall-through to 0x030001AA */
    g_cpu.R[15] = 0x030001AAu;
    runtime_dispatch(0x030001AAu);
    return;
}

/* 0x030001AC  mode=thumb  end=0x030001C8  branches=3  indirect */


/* 0x030001AC thumb */
void gf_tfunc_030001AC(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030001ACu);
    /* 030001AC  030001ac T stm r13!,{r4,r14} */
    g_cpu.R[15] = 0x030001ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001AC = 1u;
    _cyc_030001AC = 1u;
    uint32_t _b_030001AC = g_cpu.R[13];
    uint32_t _a_030001AC = _b_030001AC - 8u;
    uint32_t _fb_030001AC = _b_030001AC - 8u;
    _cyc_030001AC += runtime_mem_cycles(_a_030001AC & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030001ACu, _a_030001AC & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_030001AC & ~3u, g_cpu.R[4]);
    _a_030001AC += 4u;
    _cyc_030001AC += runtime_mem_cycles(_a_030001AC & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030001ACu, _a_030001AC & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_030001AC & ~3u, g_cpu.R[14]);
    _a_030001AC += 4u;
    g_cpu.R[13] = _fb_030001AC;
    g_cpu.R[15] = 0x030001AEu;
    runtime_tick(_cyc_030001AC);
    /* 030001AE  030001ae T adds r3,r1,#0x0 */
    g_cpu.R[15] = 0x030001AEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001AE = 1u;
    _cyc_030001AE = 1u;
    uint32_t _rn_030001AE = g_cpu.R[1];
    uint32_t _r_030001AE;
    _r_030001AE = _rn_030001AE + 0x00000000u;
    arm_set_nzcv_add(_rn_030001AE, 0x00000000u, _r_030001AE);
    g_cpu.R[3] = _r_030001AE;
    g_cpu.R[15] = 0x030001B0u;
    runtime_tick(_cyc_030001AE);
    /* 030001B0  030001b0 T movs r4,#0x0 */
    g_cpu.R[15] = 0x030001B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001B0 = 1u;
    _cyc_030001B0 = 1u;
    uint32_t _r_030001B0;
    _r_030001B0 = 0x00000000u;
    arm_set_nzc_logic(_r_030001B0, cpsr_c());
    g_cpu.R[4] = _r_030001B0;
    g_cpu.R[15] = 0x030001B2u;
    runtime_tick(_cyc_030001B0);
    /* 030001B2  030001b2 T ldrsh r1,[r3,+r4] */
    g_cpu.R[15] = 0x030001B2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001B2 = 1u;
    _cyc_030001B2 = 2u;
    uint32_t _base_030001B2 = g_cpu.R[3];
    uint32_t _off_030001B2;
    uint32_t _morm_030001B2 = g_cpu.R[4];
    _off_030001B2 = _morm_030001B2;
    uint32_t _ea_030001B2 = _base_030001B2 + _off_030001B2;
    uint32_t _post_030001B2 = _base_030001B2 + _off_030001B2;
    _cyc_030001B2 += runtime_mem_cycles(_ea_030001B2, 2u, 0u);
    uint32_t _v_030001B2;
    if (_ea_030001B2 & 1u) _v_030001B2 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_030001B2);
    else _v_030001B2 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_030001B2);
    g_cpu.R[1] = _v_030001B2;
    g_cpu.R[15] = 0x030001B4u;
    runtime_tick(_cyc_030001B2);
    /* 030001B4  030001b4 T movs r1,r1,lsl #1 */
    g_cpu.R[15] = 0x030001B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001B4 = 1u;
    _cyc_030001B4 = 1u;
    uint32_t _rm_030001B4 = g_cpu.R[1];
    uint32_t _op2_030001B4;
    uint32_t _co_030001B4;
    _op2_030001B4 = _rm_030001B4 << 1;
    _co_030001B4 = (_rm_030001B4 >> 31) & 1u;
    uint32_t _r_030001B4;
    _r_030001B4 = _op2_030001B4;
    arm_set_nzc_logic(_r_030001B4, _co_030001B4);
    g_cpu.R[1] = _r_030001B4;
    g_cpu.R[15] = 0x030001B6u;
    runtime_tick(_cyc_030001B4);
    /* 030001B6  030001b6 T adds r1,r1,#0x2 */
    g_cpu.R[15] = 0x030001B6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001B6 = 1u;
    _cyc_030001B6 = 1u;
    uint32_t _rn_030001B6 = g_cpu.R[1];
    uint32_t _r_030001B6;
    _r_030001B6 = _rn_030001B6 + 0x00000002u;
    arm_set_nzcv_add(_rn_030001B6, 0x00000002u, _r_030001B6);
    g_cpu.R[1] = _r_030001B6;
    g_cpu.R[15] = 0x030001B8u;
    runtime_tick(_cyc_030001B6);
    /* 030001B8  030001b8 T adds r0,r0,r1 */
    g_cpu.R[15] = 0x030001B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001B8 = 1u;
    _cyc_030001B8 = 1u;
    uint32_t _rm_030001B8 = g_cpu.R[1];
    uint32_t _op2_030001B8;
    uint32_t _co_030001B8;
    _op2_030001B8 = _rm_030001B8;
    _co_030001B8 = cpsr_c();
    uint32_t _rn_030001B8 = g_cpu.R[0];
    uint32_t _r_030001B8;
    _r_030001B8 = _rn_030001B8 + _op2_030001B8;
    arm_set_nzcv_add(_rn_030001B8, _op2_030001B8, _r_030001B8);
    g_cpu.R[0] = _r_030001B8;
    g_cpu.R[15] = 0x030001BAu;
    runtime_tick(_cyc_030001B8);
    /* 030001BA  030001ba T cmps r0,r3 */
    g_cpu.R[15] = 0x030001BAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001BA = 1u;
    _cyc_030001BA = 1u;
    uint32_t _rm_030001BA = g_cpu.R[3];
    uint32_t _op2_030001BA;
    uint32_t _co_030001BA;
    _op2_030001BA = _rm_030001BA;
    _co_030001BA = cpsr_c();
    uint32_t _rn_030001BA = g_cpu.R[0];
    uint32_t _r_030001BA;
    _r_030001BA = _rn_030001BA - _op2_030001BA;
    arm_set_nzcv_sub(_rn_030001BA, _op2_030001BA, _r_030001BA);
    g_cpu.R[15] = 0x030001BCu;
    runtime_tick(_cyc_030001BA);
    /* 030001BC  030001bc T bcs 0x030001d0 */
    g_cpu.R[15] = 0x030001BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001BC = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_030001BC = 3u;
        g_cpu.R[15] = 0x030001D0u;
        runtime_tick(_cyc_030001BC);
        GBARECOMP_TAIL_CALL(gf_tfunc_030001D0);
    }
    g_cpu.R[15] = 0x030001BEu;
    runtime_tick(_cyc_030001BC);
    /* 030001BE  030001be T strh r2,[r0] */
    g_cpu.R[15] = 0x030001BEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001BE = 1u;
    _cyc_030001BE = 1u;
    uint32_t _base_030001BE = g_cpu.R[0];
    uint32_t _off_030001BE;
    _off_030001BE = 0x00000000u;
    uint32_t _ea_030001BE = _base_030001BE + _off_030001BE;
    uint32_t _post_030001BE = _base_030001BE + _off_030001BE;
    _cyc_030001BE += runtime_mem_cycles(_ea_030001BE, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030001BEu, _ea_030001BE & ~1u, (uint32_t)(g_cpu.R[2] & 0xFFFFu), 2u);
    bus_write_u16(_ea_030001BE & ~1u, (uint16_t)(g_cpu.R[2] & 0xFFFFu));
    g_cpu.R[15] = 0x030001C0u;
    runtime_tick(_cyc_030001BE);
    /* 030001C0  030001c0 T adds r0,r0,#0x2 */
    g_cpu.R[15] = 0x030001C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001C0 = 1u;
    _cyc_030001C0 = 1u;
    uint32_t _rn_030001C0 = g_cpu.R[0];
    uint32_t _r_030001C0;
    _r_030001C0 = _rn_030001C0 + 0x00000002u;
    arm_set_nzcv_add(_rn_030001C0, 0x00000002u, _r_030001C0);
    g_cpu.R[0] = _r_030001C0;
    g_cpu.R[15] = 0x030001C2u;
    runtime_tick(_cyc_030001C0);
    /* 030001C2  030001c2 T cmps r0,r3 */
    g_cpu.R[15] = 0x030001C2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001C2 = 1u;
    _cyc_030001C2 = 1u;
    uint32_t _rm_030001C2 = g_cpu.R[3];
    uint32_t _op2_030001C2;
    uint32_t _co_030001C2;
    _op2_030001C2 = _rm_030001C2;
    _co_030001C2 = cpsr_c();
    uint32_t _rn_030001C2 = g_cpu.R[0];
    uint32_t _r_030001C2;
    _r_030001C2 = _rn_030001C2 - _op2_030001C2;
    arm_set_nzcv_sub(_rn_030001C2, _op2_030001C2, _r_030001C2);
    g_cpu.R[15] = 0x030001C4u;
    runtime_tick(_cyc_030001C2);
    /* 030001C4  030001c4 T bcs 0x030001d0 */
    g_cpu.R[15] = 0x030001C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001C4 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_030001C4 = 3u;
        g_cpu.R[15] = 0x030001D0u;
        runtime_tick(_cyc_030001C4);
        GBARECOMP_TAIL_CALL(gf_tfunc_030001D0);
    }
    g_cpu.R[15] = 0x030001C6u;
    runtime_tick(_cyc_030001C4);
    /* 030001C6  030001c6 T movs r1,#0x0 */
    g_cpu.R[15] = 0x030001C6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001C6 = 1u;
    _cyc_030001C6 = 1u;
    uint32_t _r_030001C6;
    _r_030001C6 = 0x00000000u;
    arm_set_nzc_logic(_r_030001C6, cpsr_c());
    g_cpu.R[1] = _r_030001C6;
    g_cpu.R[15] = 0x030001C8u;
    runtime_tick(_cyc_030001C6);
    /* fall-through to 0x030001C8 */
    g_cpu.R[15] = 0x030001C8u;
    runtime_dispatch(0x030001C8u);
    return;
}

/* 0x030001E2  mode=thumb  end=0x030001F2  branches=2 */


/* 0x030001C8 thumb */
void gf_tfunc_030001C8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030001C8u);
L_030001C8:
    /* 030001C8  030001c8 T strh r1,[r0] */
    g_cpu.R[15] = 0x030001C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001C8 = 1u;
    _cyc_030001C8 = 1u;
    uint32_t _base_030001C8 = g_cpu.R[0];
    uint32_t _off_030001C8;
    _off_030001C8 = 0x00000000u;
    uint32_t _ea_030001C8 = _base_030001C8 + _off_030001C8;
    uint32_t _post_030001C8 = _base_030001C8 + _off_030001C8;
    _cyc_030001C8 += runtime_mem_cycles(_ea_030001C8, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030001C8u, _ea_030001C8 & ~1u, (uint32_t)(g_cpu.R[1] & 0xFFFFu), 2u);
    bus_write_u16(_ea_030001C8 & ~1u, (uint16_t)(g_cpu.R[1] & 0xFFFFu));
    g_cpu.R[15] = 0x030001CAu;
    runtime_tick(_cyc_030001C8);
    /* 030001CA  030001ca T adds r0,r0,#0x2 */
    g_cpu.R[15] = 0x030001CAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001CA = 1u;
    _cyc_030001CA = 1u;
    uint32_t _rn_030001CA = g_cpu.R[0];
    uint32_t _r_030001CA;
    _r_030001CA = _rn_030001CA + 0x00000002u;
    arm_set_nzcv_add(_rn_030001CA, 0x00000002u, _r_030001CA);
    g_cpu.R[0] = _r_030001CA;
    g_cpu.R[15] = 0x030001CCu;
    runtime_tick(_cyc_030001CA);
    /* 030001CC  030001cc T cmps r0,r3 */
    g_cpu.R[15] = 0x030001CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001CC = 1u;
    _cyc_030001CC = 1u;
    uint32_t _rm_030001CC = g_cpu.R[3];
    uint32_t _op2_030001CC;
    uint32_t _co_030001CC;
    _op2_030001CC = _rm_030001CC;
    _co_030001CC = cpsr_c();
    uint32_t _rn_030001CC = g_cpu.R[0];
    uint32_t _r_030001CC;
    _r_030001CC = _rn_030001CC - _op2_030001CC;
    arm_set_nzcv_sub(_rn_030001CC, _op2_030001CC, _r_030001CC);
    g_cpu.R[15] = 0x030001CEu;
    runtime_tick(_cyc_030001CC);
    /* 030001CE  030001ce T bcc 0x030001c8 */
    g_cpu.R[15] = 0x030001CEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001CE = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_030001CE = 3u;
        g_cpu.R[15] = 0x030001C8u;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x030001CEu, 0x030001C8u, 0u, 0u);
        runtime_tick(_cyc_030001CE);
        goto L_030001C8;
    }
    g_cpu.R[15] = 0x030001D0u;
    runtime_tick(_cyc_030001CE);
    /* fall-through to 0x030001D0 */
    g_cpu.R[15] = 0x030001D0u;
    runtime_dispatch(0x030001D0u);
    return;
}

/* 0x030001D0  mode=thumb  end=0x030001D6  branches=0  indirect */


/* 0x030001D0 thumb */
void gf_tfunc_030001D0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030001D0u);
    /* 030001D0  030001d0 T ldm r13!,{r4} */
    g_cpu.R[15] = 0x030001D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001D0 = 1u;
    _cyc_030001D0 = 2u;
    uint32_t _b_030001D0 = g_cpu.R[13];
    uint32_t _a_030001D0 = _b_030001D0;
    uint32_t _fb_030001D0 = _b_030001D0 + 4u;
    _cyc_030001D0 += runtime_mem_cycles(_a_030001D0 & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_030001D0 & ~3u);
    _a_030001D0 += 4u;
    g_cpu.R[13] = _fb_030001D0;
    g_cpu.R[15] = 0x030001D2u;
    runtime_tick(_cyc_030001D0);
    /* 030001D2  030001d2 T ldm r13!,{r0} */
    g_cpu.R[15] = 0x030001D2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001D2 = 1u;
    _cyc_030001D2 = 2u;
    uint32_t _b_030001D2 = g_cpu.R[13];
    uint32_t _a_030001D2 = _b_030001D2;
    uint32_t _fb_030001D2 = _b_030001D2 + 4u;
    _cyc_030001D2 += runtime_mem_cycles(_a_030001D2 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_030001D2 & ~3u);
    _a_030001D2 += 4u;
    g_cpu.R[13] = _fb_030001D2;
    g_cpu.R[15] = 0x030001D4u;
    runtime_tick(_cyc_030001D2);
    /* 030001D4  030001d4 T bx r0 */
    g_cpu.R[15] = 0x030001D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001D4 = 1u;
    _cyc_030001D4 = 3u;
    uint32_t _bxt_030001D4 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_030001D4 & ~1u;
    if (_bxt_030001D4 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_030001D4);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_030001D4);
    g_cpu.R[15] = 0x030001D6u;
    runtime_tick(_cyc_030001D4);
    /* fall-through to 0x030001D6 */
    g_cpu.R[15] = 0x030001D6u;
    runtime_dispatch(0x030001D6u);
    return;
}

/* 0x030001D8  mode=thumb  end=0x030001E2  branches=3 */


/* 0x030001D8 thumb */
void gf_tfunc_030001D8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030001D8u);
    /* 030001D8  030001d8 T adds r2,r0,#0x0 */
    g_cpu.R[15] = 0x030001D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001D8 = 1u;
    _cyc_030001D8 = 1u;
    uint32_t _rn_030001D8 = g_cpu.R[0];
    uint32_t _r_030001D8;
    _r_030001D8 = _rn_030001D8 + 0x00000000u;
    arm_set_nzcv_add(_rn_030001D8, 0x00000000u, _r_030001D8);
    g_cpu.R[2] = _r_030001D8;
    g_cpu.R[15] = 0x030001DAu;
    runtime_tick(_cyc_030001D8);
    /* 030001DA  030001da T adds r3,r2,#0x0 */
    g_cpu.R[15] = 0x030001DAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001DA = 1u;
    _cyc_030001DA = 1u;
    uint32_t _rn_030001DA = g_cpu.R[2];
    uint32_t _r_030001DA;
    _r_030001DA = _rn_030001DA + 0x00000000u;
    arm_set_nzcv_add(_rn_030001DA, 0x00000000u, _r_030001DA);
    g_cpu.R[3] = _r_030001DA;
    g_cpu.R[15] = 0x030001DCu;
    runtime_tick(_cyc_030001DA);
    /* 030001DC  030001dc T cmps r2,#0x0 */
    g_cpu.R[15] = 0x030001DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001DC = 1u;
    _cyc_030001DC = 1u;
    uint32_t _rn_030001DC = g_cpu.R[2];
    uint32_t _r_030001DC;
    _r_030001DC = _rn_030001DC - 0x00000000u;
    arm_set_nzcv_sub(_rn_030001DC, 0x00000000u, _r_030001DC);
    g_cpu.R[15] = 0x030001DEu;
    runtime_tick(_cyc_030001DC);
    /* 030001DE  030001de T bge 0x030001e2 */
    g_cpu.R[15] = 0x030001DEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001DE = 1u;
    if (arm_cond_passes(0xau)) {
        _cyc_030001DE = 3u;
        g_cpu.R[15] = 0x030001E2u;
        runtime_tick(_cyc_030001DE);
        GBARECOMP_TAIL_CALL(gf_tfunc_030001E2);
    }
    g_cpu.R[15] = 0x030001E0u;
    runtime_tick(_cyc_030001DE);
    /* 030001E0  030001e0 T rsbs r2,r2,#0x0 */
    g_cpu.R[15] = 0x030001E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001E0 = 1u;
    _cyc_030001E0 = 1u;
    uint32_t _rn_030001E0 = g_cpu.R[2];
    uint32_t _r_030001E0;
    _r_030001E0 = 0x00000000u - _rn_030001E0;
    arm_set_nzcv_sub(0x00000000u, _rn_030001E0, _r_030001E0);
    g_cpu.R[2] = _r_030001E0;
    g_cpu.R[15] = 0x030001E2u;
    runtime_tick(_cyc_030001E0);
    /* fall-through to 0x030001E2 */
    g_cpu.R[15] = 0x030001E2u;
    runtime_dispatch(0x030001E2u);
    return;
}

/* 0x030001FE  mode=thumb  end=0x03000204  branches=1  indirect */


/* 0x030001E2 thumb */
void gf_tfunc_030001E2(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030001E2u);
    /* 030001E2  030001e2 T ldr r0,[r15,#0x10] */
    g_cpu.R[15] = 0x030001E2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001E2 = 1u;
    _cyc_030001E2 = 2u;
    uint32_t _base_030001E2 = 0x030001E6u & ~3u;
    uint32_t _off_030001E2;
    _off_030001E2 = 0x00000010u;
    uint32_t _ea_030001E2 = _base_030001E2 + _off_030001E2;
    uint32_t _post_030001E2 = _base_030001E2 + _off_030001E2;
    _cyc_030001E2 += runtime_mem_cycles(_ea_030001E2, 4u, 0u);
    uint32_t _v_030001E2;
    { uint32_t _w = bus_read_u32(_ea_030001E2 & ~3u); uint32_t _rot = (_ea_030001E2 & 3u) * 8u; _v_030001E2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_030001E2;
    g_cpu.R[15] = 0x030001E4u;
    runtime_tick(_cyc_030001E2);
    /* 030001E4  030001e4 T cmps r2,r0 */
    g_cpu.R[15] = 0x030001E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001E4 = 1u;
    _cyc_030001E4 = 1u;
    uint32_t _rm_030001E4 = g_cpu.R[0];
    uint32_t _op2_030001E4;
    uint32_t _co_030001E4;
    _op2_030001E4 = _rm_030001E4;
    _co_030001E4 = cpsr_c();
    uint32_t _rn_030001E4 = g_cpu.R[2];
    uint32_t _r_030001E4;
    _r_030001E4 = _rn_030001E4 - _op2_030001E4;
    arm_set_nzcv_sub(_rn_030001E4, _op2_030001E4, _r_030001E4);
    g_cpu.R[15] = 0x030001E6u;
    runtime_tick(_cyc_030001E4);
    /* 030001E6  030001e6 T bgt 0x030001fc */
    g_cpu.R[15] = 0x030001E6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001E6 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_030001E6 = 3u;
        g_cpu.R[15] = 0x030001FCu;
        runtime_tick(_cyc_030001E6);
        GBARECOMP_TAIL_CALL(gf_tfunc_030001FC);
    }
    g_cpu.R[15] = 0x030001E8u;
    runtime_tick(_cyc_030001E6);
    /* 030001E8  030001e8 T ldr r1,[r15,#0xc] */
    g_cpu.R[15] = 0x030001E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001E8 = 1u;
    _cyc_030001E8 = 2u;
    uint32_t _base_030001E8 = 0x030001ECu & ~3u;
    uint32_t _off_030001E8;
    _off_030001E8 = 0x0000000Cu;
    uint32_t _ea_030001E8 = _base_030001E8 + _off_030001E8;
    uint32_t _post_030001E8 = _base_030001E8 + _off_030001E8;
    _cyc_030001E8 += runtime_mem_cycles(_ea_030001E8, 4u, 0u);
    uint32_t _v_030001E8;
    { uint32_t _w = bus_read_u32(_ea_030001E8 & ~3u); uint32_t _rot = (_ea_030001E8 & 3u) * 8u; _v_030001E8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_030001E8;
    g_cpu.R[15] = 0x030001EAu;
    runtime_tick(_cyc_030001E8);
    /* 030001EA  030001ea T movs r0,r2,lsl #1 */
    g_cpu.R[15] = 0x030001EAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001EA = 1u;
    _cyc_030001EA = 1u;
    uint32_t _rm_030001EA = g_cpu.R[2];
    uint32_t _op2_030001EA;
    uint32_t _co_030001EA;
    _op2_030001EA = _rm_030001EA << 1;
    _co_030001EA = (_rm_030001EA >> 31) & 1u;
    uint32_t _r_030001EA;
    _r_030001EA = _op2_030001EA;
    arm_set_nzc_logic(_r_030001EA, _co_030001EA);
    g_cpu.R[0] = _r_030001EA;
    g_cpu.R[15] = 0x030001ECu;
    runtime_tick(_cyc_030001EA);
    /* 030001EC  030001ec T adds r0,r0,r1 */
    g_cpu.R[15] = 0x030001ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001EC = 1u;
    _cyc_030001EC = 1u;
    uint32_t _rm_030001EC = g_cpu.R[1];
    uint32_t _op2_030001EC;
    uint32_t _co_030001EC;
    _op2_030001EC = _rm_030001EC;
    _co_030001EC = cpsr_c();
    uint32_t _rn_030001EC = g_cpu.R[0];
    uint32_t _r_030001EC;
    _r_030001EC = _rn_030001EC + _op2_030001EC;
    arm_set_nzcv_add(_rn_030001EC, _op2_030001EC, _r_030001EC);
    g_cpu.R[0] = _r_030001EC;
    g_cpu.R[15] = 0x030001EEu;
    runtime_tick(_cyc_030001EC);
    /* 030001EE  030001ee T ldrh r2,[r0] */
    g_cpu.R[15] = 0x030001EEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001EE = 1u;
    _cyc_030001EE = 2u;
    uint32_t _base_030001EE = g_cpu.R[0];
    uint32_t _off_030001EE;
    _off_030001EE = 0x00000000u;
    uint32_t _ea_030001EE = _base_030001EE + _off_030001EE;
    uint32_t _post_030001EE = _base_030001EE + _off_030001EE;
    _cyc_030001EE += runtime_mem_cycles(_ea_030001EE, 2u, 0u);
    uint32_t _v_030001EE;
    { uint32_t _h = bus_read_u16(_ea_030001EE & ~1u); if (_ea_030001EE & 1u) _v_030001EE = ((_h >> 8) | (_h << 24)); else _v_030001EE = _h; }
    g_cpu.R[2] = _v_030001EE;
    g_cpu.R[15] = 0x030001F0u;
    runtime_tick(_cyc_030001EE);
    /* 030001F0  030001f0 T b 0x030001fe */
    g_cpu.R[15] = 0x030001F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001F0 = 1u;
    _cyc_030001F0 = 3u;
    g_cpu.R[15] = 0x030001FEu;
    runtime_tick(_cyc_030001F0);
    GBARECOMP_TAIL_CALL(gf_tfunc_030001FE);
    g_cpu.R[15] = 0x030001F2u;
    runtime_tick(_cyc_030001F0);
    /* fall-through to 0x030001F2 */
    g_cpu.R[15] = 0x030001F2u;
    runtime_dispatch(0x030001F2u);
    return;
}

/* 0x030001FC  mode=thumb  end=0x030001FE  branches=1  indirect */


/* 0x030001FC thumb */
void gf_tfunc_030001FC(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030001FCu);
    /* 030001FC  030001fc T movs r2,#0x10 */
    g_cpu.R[15] = 0x030001FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001FC = 1u;
    _cyc_030001FC = 1u;
    uint32_t _r_030001FC;
    _r_030001FC = 0x00000010u;
    arm_set_nzc_logic(_r_030001FC, cpsr_c());
    g_cpu.R[2] = _r_030001FC;
    g_cpu.R[15] = 0x030001FEu;
    runtime_tick(_cyc_030001FC);
    /* fall-through to 0x030001FE */
    g_cpu.R[15] = 0x030001FEu;
    runtime_dispatch(0x030001FEu);
    return;
}

/* 0x03000204  mode=thumb  end=0x03000208  branches=0  indirect */


/* 0x030001FE thumb */
void gf_tfunc_030001FE(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030001FEu);
    /* 030001FE  030001fe T cmps r3,#0x0 */
    g_cpu.R[15] = 0x030001FEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030001FE = 1u;
    _cyc_030001FE = 1u;
    uint32_t _rn_030001FE = g_cpu.R[3];
    uint32_t _r_030001FE;
    _r_030001FE = _rn_030001FE - 0x00000000u;
    arm_set_nzcv_sub(_rn_030001FE, 0x00000000u, _r_030001FE);
    g_cpu.R[15] = 0x03000200u;
    runtime_tick(_cyc_030001FE);
    /* 03000200  03000200 T bge 0x03000204 */
    g_cpu.R[15] = 0x03000200u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000200 = 1u;
    if (arm_cond_passes(0xau)) {
        _cyc_03000200 = 3u;
        g_cpu.R[15] = 0x03000204u;
        runtime_tick(_cyc_03000200);
        GBARECOMP_TAIL_CALL(gf_tfunc_03000204);
    }
    g_cpu.R[15] = 0x03000202u;
    runtime_tick(_cyc_03000200);
    /* 03000202  03000202 T rsbs r2,r2,#0x0 */
    g_cpu.R[15] = 0x03000202u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000202 = 1u;
    _cyc_03000202 = 1u;
    uint32_t _rn_03000202 = g_cpu.R[2];
    uint32_t _r_03000202;
    _r_03000202 = 0x00000000u - _rn_03000202;
    arm_set_nzcv_sub(0x00000000u, _rn_03000202, _r_03000202);
    g_cpu.R[2] = _r_03000202;
    g_cpu.R[15] = 0x03000204u;
    runtime_tick(_cyc_03000202);
    /* fall-through to 0x03000204 */
    g_cpu.R[15] = 0x03000204u;
    runtime_dispatch(0x03000204u);
    return;
}

/* 0x030002A4  mode=thumb  end=0x030002AA  branches=0  indirect */


/* 0x03000204 thumb */
void gf_tfunc_03000204(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000204u);
    /* 03000204  03000204 T adds r0,r2,#0x0 */
    g_cpu.R[15] = 0x03000204u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000204 = 1u;
    _cyc_03000204 = 1u;
    uint32_t _rn_03000204 = g_cpu.R[2];
    uint32_t _r_03000204;
    _r_03000204 = _rn_03000204 + 0x00000000u;
    arm_set_nzcv_add(_rn_03000204, 0x00000000u, _r_03000204);
    g_cpu.R[0] = _r_03000204;
    g_cpu.R[15] = 0x03000206u;
    runtime_tick(_cyc_03000204);
    /* 03000206  03000206 T bx r14 */
    g_cpu.R[15] = 0x03000206u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000206 = 1u;
    _cyc_03000206 = 3u;
    uint32_t _bxt_03000206 = g_cpu.R[14];
    g_cpu.R[15] = _bxt_03000206 & ~1u;
    if (_bxt_03000206 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_03000206);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_03000206);
    g_cpu.R[15] = 0x03000208u;
    runtime_tick(_cyc_03000206);
    /* fall-through to 0x03000208 */
    g_cpu.R[15] = 0x03000208u;
    runtime_dispatch(0x03000208u);
    return;
}

/* 0x03000208  mode=thumb  end=0x0300021C  branches=1  indirect */


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

/* 0x03000244  mode=thumb  end=0x0300027C  branches=5  indirect */


/* 0x03000244 thumb */
void gf_tfunc_03000244(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000244u);
    /* 03000244  03000244 T stm r13!,{r4,r5,r6,r7,r14} */
    g_cpu.R[15] = 0x03000244u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000244 = 1u;
    _cyc_03000244 = 1u;
    uint32_t _b_03000244 = g_cpu.R[13];
    uint32_t _a_03000244 = _b_03000244 - 20u;
    uint32_t _fb_03000244 = _b_03000244 - 20u;
    _cyc_03000244 += runtime_mem_cycles(_a_03000244 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000244u, _a_03000244 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_03000244 & ~3u, g_cpu.R[4]);
    _a_03000244 += 4u;
    _cyc_03000244 += runtime_mem_cycles(_a_03000244 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000244u, _a_03000244 & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_03000244 & ~3u, g_cpu.R[5]);
    _a_03000244 += 4u;
    _cyc_03000244 += runtime_mem_cycles(_a_03000244 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000244u, _a_03000244 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_a_03000244 & ~3u, g_cpu.R[6]);
    _a_03000244 += 4u;
    _cyc_03000244 += runtime_mem_cycles(_a_03000244 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000244u, _a_03000244 & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_a_03000244 & ~3u, g_cpu.R[7]);
    _a_03000244 += 4u;
    _cyc_03000244 += runtime_mem_cycles(_a_03000244 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000244u, _a_03000244 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_03000244 & ~3u, g_cpu.R[14]);
    _a_03000244 += 4u;
    g_cpu.R[13] = _fb_03000244;
    g_cpu.R[15] = 0x03000246u;
    runtime_tick(_cyc_03000244);
    /* 03000246  03000246 T adds r2,r0,#0x0 */
    g_cpu.R[15] = 0x03000246u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000246 = 1u;
    _cyc_03000246 = 1u;
    uint32_t _rn_03000246 = g_cpu.R[0];
    uint32_t _r_03000246;
    _r_03000246 = _rn_03000246 + 0x00000000u;
    arm_set_nzcv_add(_rn_03000246, 0x00000000u, _r_03000246);
    g_cpu.R[2] = _r_03000246;
    g_cpu.R[15] = 0x03000248u;
    runtime_tick(_cyc_03000246);
    /* 03000248  03000248 T ldr r3,[r15,#0x60] */
    g_cpu.R[15] = 0x03000248u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000248 = 1u;
    _cyc_03000248 = 2u;
    uint32_t _base_03000248 = 0x0300024Cu & ~3u;
    uint32_t _off_03000248;
    _off_03000248 = 0x00000060u;
    uint32_t _ea_03000248 = _base_03000248 + _off_03000248;
    uint32_t _post_03000248 = _base_03000248 + _off_03000248;
    _cyc_03000248 += runtime_mem_cycles(_ea_03000248, 4u, 0u);
    uint32_t _v_03000248;
    { uint32_t _w = bus_read_u32(_ea_03000248 & ~3u); uint32_t _rot = (_ea_03000248 & 3u) * 8u; _v_03000248 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_03000248;
    g_cpu.R[15] = 0x0300024Au;
    runtime_tick(_cyc_03000248);
    /* 0300024A  0300024a T ldr r0,[r15,#0x64] */
    g_cpu.R[15] = 0x0300024Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300024A = 1u;
    _cyc_0300024A = 2u;
    uint32_t _base_0300024A = 0x0300024Eu & ~3u;
    uint32_t _off_0300024A;
    _off_0300024A = 0x00000064u;
    uint32_t _ea_0300024A = _base_0300024A + _off_0300024A;
    uint32_t _post_0300024A = _base_0300024A + _off_0300024A;
    _cyc_0300024A += runtime_mem_cycles(_ea_0300024A, 4u, 0u);
    uint32_t _v_0300024A;
    { uint32_t _w = bus_read_u32(_ea_0300024A & ~3u); uint32_t _rot = (_ea_0300024A & 3u) * 8u; _v_0300024A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0300024A;
    g_cpu.R[15] = 0x0300024Cu;
    runtime_tick(_cyc_0300024A);
    /* 0300024C  0300024c T ldr r1,[r3] */
    g_cpu.R[15] = 0x0300024Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300024C = 1u;
    _cyc_0300024C = 2u;
    uint32_t _base_0300024C = g_cpu.R[3];
    uint32_t _off_0300024C;
    _off_0300024C = 0x00000000u;
    uint32_t _ea_0300024C = _base_0300024C + _off_0300024C;
    uint32_t _post_0300024C = _base_0300024C + _off_0300024C;
    _cyc_0300024C += runtime_mem_cycles(_ea_0300024C, 4u, 0u);
    uint32_t _v_0300024C;
    { uint32_t _w = bus_read_u32(_ea_0300024C & ~3u); uint32_t _rot = (_ea_0300024C & 3u) * 8u; _v_0300024C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0300024C;
    g_cpu.R[15] = 0x0300024Eu;
    runtime_tick(_cyc_0300024C);
    /* 0300024E  0300024e T ldr r0,[r0] */
    g_cpu.R[15] = 0x0300024Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300024E = 1u;
    _cyc_0300024E = 2u;
    uint32_t _base_0300024E = g_cpu.R[0];
    uint32_t _off_0300024E;
    _off_0300024E = 0x00000000u;
    uint32_t _ea_0300024E = _base_0300024E + _off_0300024E;
    uint32_t _post_0300024E = _base_0300024E + _off_0300024E;
    _cyc_0300024E += runtime_mem_cycles(_ea_0300024E, 4u, 0u);
    uint32_t _v_0300024E;
    { uint32_t _w = bus_read_u32(_ea_0300024E & ~3u); uint32_t _rot = (_ea_0300024E & 3u) * 8u; _v_0300024E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0300024E;
    g_cpu.R[15] = 0x03000250u;
    runtime_tick(_cyc_0300024E);
    /* 03000250  03000250 T cmps r1,r0 */
    g_cpu.R[15] = 0x03000250u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000250 = 1u;
    _cyc_03000250 = 1u;
    uint32_t _rm_03000250 = g_cpu.R[0];
    uint32_t _op2_03000250;
    uint32_t _co_03000250;
    _op2_03000250 = _rm_03000250;
    _co_03000250 = cpsr_c();
    uint32_t _rn_03000250 = g_cpu.R[1];
    uint32_t _r_03000250;
    _r_03000250 = _rn_03000250 - _op2_03000250;
    arm_set_nzcv_sub(_rn_03000250, _op2_03000250, _r_03000250);
    g_cpu.R[15] = 0x03000252u;
    runtime_tick(_cyc_03000250);
    /* 03000252  03000252 T bcs 0x030002a4 */
    g_cpu.R[15] = 0x03000252u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000252 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_03000252 = 3u;
        g_cpu.R[15] = 0x030002A4u;
        runtime_tick(_cyc_03000252);
        GBARECOMP_TAIL_CALL(gf_tfunc_030002A4);
    }
    g_cpu.R[15] = 0x03000254u;
    runtime_tick(_cyc_03000252);
    /* 03000254  03000254 T adds r0,r1,#0x1 */
    g_cpu.R[15] = 0x03000254u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000254 = 1u;
    _cyc_03000254 = 1u;
    uint32_t _rn_03000254 = g_cpu.R[1];
    uint32_t _r_03000254;
    _r_03000254 = _rn_03000254 + 0x00000001u;
    arm_set_nzcv_add(_rn_03000254, 0x00000001u, _r_03000254);
    g_cpu.R[0] = _r_03000254;
    g_cpu.R[15] = 0x03000256u;
    runtime_tick(_cyc_03000254);
    /* 03000256  03000256 T str r0,[r3] */
    g_cpu.R[15] = 0x03000256u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000256 = 1u;
    _cyc_03000256 = 1u;
    uint32_t _base_03000256 = g_cpu.R[3];
    uint32_t _off_03000256;
    _off_03000256 = 0x00000000u;
    uint32_t _ea_03000256 = _base_03000256 + _off_03000256;
    uint32_t _post_03000256 = _base_03000256 + _off_03000256;
    _cyc_03000256 += runtime_mem_cycles(_ea_03000256, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000256u, _ea_03000256 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_03000256 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x03000258u;
    runtime_tick(_cyc_03000256);
    /* 03000258  03000258 T adds r3,r0,#0x0 */
    g_cpu.R[15] = 0x03000258u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000258 = 1u;
    _cyc_03000258 = 1u;
    uint32_t _rn_03000258 = g_cpu.R[0];
    uint32_t _r_03000258;
    _r_03000258 = _rn_03000258 + 0x00000000u;
    arm_set_nzcv_add(_rn_03000258, 0x00000000u, _r_03000258);
    g_cpu.R[3] = _r_03000258;
    g_cpu.R[15] = 0x0300025Au;
    runtime_tick(_cyc_03000258);
    /* 0300025A  0300025a T ldr r5,[r15,#0x58] */
    g_cpu.R[15] = 0x0300025Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300025A = 1u;
    _cyc_0300025A = 2u;
    uint32_t _base_0300025A = 0x0300025Eu & ~3u;
    uint32_t _off_0300025A;
    _off_0300025A = 0x00000058u;
    uint32_t _ea_0300025A = _base_0300025A + _off_0300025A;
    uint32_t _post_0300025A = _base_0300025A + _off_0300025A;
    _cyc_0300025A += runtime_mem_cycles(_ea_0300025A, 4u, 0u);
    uint32_t _v_0300025A;
    { uint32_t _w = bus_read_u32(_ea_0300025A & ~3u); uint32_t _rot = (_ea_0300025A & 3u) * 8u; _v_0300025A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[5] = _v_0300025A;
    g_cpu.R[15] = 0x0300025Cu;
    runtime_tick(_cyc_0300025A);
    /* 0300025C  0300025c T ldr r4,[r5] */
    g_cpu.R[15] = 0x0300025Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300025C = 1u;
    _cyc_0300025C = 2u;
    uint32_t _base_0300025C = g_cpu.R[5];
    uint32_t _off_0300025C;
    _off_0300025C = 0x00000000u;
    uint32_t _ea_0300025C = _base_0300025C + _off_0300025C;
    uint32_t _post_0300025C = _base_0300025C + _off_0300025C;
    _cyc_0300025C += runtime_mem_cycles(_ea_0300025C, 4u, 0u);
    uint32_t _v_0300025C;
    { uint32_t _w = bus_read_u32(_ea_0300025C & ~3u); uint32_t _rot = (_ea_0300025C & 3u) * 8u; _v_0300025C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[4] = _v_0300025C;
    g_cpu.R[15] = 0x0300025Eu;
    runtime_tick(_cyc_0300025C);
    /* 0300025E  0300025e T movs r1,r3,lsl #2 */
    g_cpu.R[15] = 0x0300025Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300025E = 1u;
    _cyc_0300025E = 1u;
    uint32_t _rm_0300025E = g_cpu.R[3];
    uint32_t _op2_0300025E;
    uint32_t _co_0300025E;
    _op2_0300025E = _rm_0300025E << 2;
    _co_0300025E = (_rm_0300025E >> 30) & 1u;
    uint32_t _r_0300025E;
    _r_0300025E = _op2_0300025E;
    arm_set_nzc_logic(_r_0300025E, _co_0300025E);
    g_cpu.R[1] = _r_0300025E;
    g_cpu.R[15] = 0x03000260u;
    runtime_tick(_cyc_0300025E);
    /* 03000260  03000260 T adds r0,r1,r4 */
    g_cpu.R[15] = 0x03000260u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000260 = 1u;
    _cyc_03000260 = 1u;
    uint32_t _rm_03000260 = g_cpu.R[4];
    uint32_t _op2_03000260;
    uint32_t _co_03000260;
    _op2_03000260 = _rm_03000260;
    _co_03000260 = cpsr_c();
    uint32_t _rn_03000260 = g_cpu.R[1];
    uint32_t _r_03000260;
    _r_03000260 = _rn_03000260 + _op2_03000260;
    arm_set_nzcv_add(_rn_03000260, _op2_03000260, _r_03000260);
    g_cpu.R[0] = _r_03000260;
    g_cpu.R[15] = 0x03000262u;
    runtime_tick(_cyc_03000260);
    /* 03000262  03000262 T str r2,[r0] */
    g_cpu.R[15] = 0x03000262u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000262 = 1u;
    _cyc_03000262 = 1u;
    uint32_t _base_03000262 = g_cpu.R[0];
    uint32_t _off_03000262;
    _off_03000262 = 0x00000000u;
    uint32_t _ea_03000262 = _base_03000262 + _off_03000262;
    uint32_t _post_03000262 = _base_03000262 + _off_03000262;
    _cyc_03000262 += runtime_mem_cycles(_ea_03000262, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000262u, _ea_03000262 & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_03000262 & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x03000264u;
    runtime_tick(_cyc_03000262);
    /* 03000264  03000264 T cmps r3,#0x1 */
    g_cpu.R[15] = 0x03000264u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000264 = 1u;
    _cyc_03000264 = 1u;
    uint32_t _rn_03000264 = g_cpu.R[3];
    uint32_t _r_03000264;
    _r_03000264 = _rn_03000264 - 0x00000001u;
    arm_set_nzcv_sub(_rn_03000264, 0x00000001u, _r_03000264);
    g_cpu.R[15] = 0x03000266u;
    runtime_tick(_cyc_03000264);
    /* 03000266  03000266 T bls 0x030002a4 */
    g_cpu.R[15] = 0x03000266u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000266 = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_03000266 = 3u;
        g_cpu.R[15] = 0x030002A4u;
        runtime_tick(_cyc_03000266);
        GBARECOMP_TAIL_CALL(gf_tfunc_030002A4);
    }
    g_cpu.R[15] = 0x03000268u;
    runtime_tick(_cyc_03000266);
    /* 03000268  03000268 T ldr r7,[r15,#0x4c] */
    g_cpu.R[15] = 0x03000268u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000268 = 1u;
    _cyc_03000268 = 2u;
    uint32_t _base_03000268 = 0x0300026Cu & ~3u;
    uint32_t _off_03000268;
    _off_03000268 = 0x0000004Cu;
    uint32_t _ea_03000268 = _base_03000268 + _off_03000268;
    uint32_t _post_03000268 = _base_03000268 + _off_03000268;
    _cyc_03000268 += runtime_mem_cycles(_ea_03000268, 4u, 0u);
    uint32_t _v_03000268;
    { uint32_t _w = bus_read_u32(_ea_03000268 & ~3u); uint32_t _rot = (_ea_03000268 & 3u) * 8u; _v_03000268 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[7] = _v_03000268;
    g_cpu.R[15] = 0x0300026Au;
    runtime_tick(_cyc_03000268);
    /* 0300026A  0300026a T ands r2,r2,r7 */
    g_cpu.R[15] = 0x0300026Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300026A = 1u;
    _cyc_0300026A = 1u;
    uint32_t _rm_0300026A = g_cpu.R[7];
    uint32_t _op2_0300026A;
    uint32_t _co_0300026A;
    _op2_0300026A = _rm_0300026A;
    _co_0300026A = cpsr_c();
    uint32_t _rn_0300026A = g_cpu.R[2];
    uint32_t _r_0300026A;
    _r_0300026A = _rn_0300026A & _op2_0300026A;
    arm_set_nzc_logic(_r_0300026A, _co_0300026A);
    g_cpu.R[2] = _r_0300026A;
    g_cpu.R[15] = 0x0300026Cu;
    runtime_tick(_cyc_0300026A);
    /* 0300026C  0300026c T movs r6,r3,lsr #1 */
    g_cpu.R[15] = 0x0300026Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300026C = 1u;
    _cyc_0300026C = 1u;
    uint32_t _rm_0300026C = g_cpu.R[3];
    uint32_t _op2_0300026C;
    uint32_t _co_0300026C;
    _op2_0300026C = _rm_0300026C >> 1;
    _co_0300026C = (_rm_0300026C >> 0) & 1u;
    uint32_t _r_0300026C;
    _r_0300026C = _op2_0300026C;
    arm_set_nzc_logic(_r_0300026C, _co_0300026C);
    g_cpu.R[6] = _r_0300026C;
    g_cpu.R[15] = 0x0300026Eu;
    runtime_tick(_cyc_0300026C);
    /* 0300026E  0300026e T movs r0,r6,lsl #2 */
    g_cpu.R[15] = 0x0300026Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300026E = 1u;
    _cyc_0300026E = 1u;
    uint32_t _rm_0300026E = g_cpu.R[6];
    uint32_t _op2_0300026E;
    uint32_t _co_0300026E;
    _op2_0300026E = _rm_0300026E << 2;
    _co_0300026E = (_rm_0300026E >> 30) & 1u;
    uint32_t _r_0300026E;
    _r_0300026E = _op2_0300026E;
    arm_set_nzc_logic(_r_0300026E, _co_0300026E);
    g_cpu.R[0] = _r_0300026E;
    g_cpu.R[15] = 0x03000270u;
    runtime_tick(_cyc_0300026E);
    /* 03000270  03000270 T adds r0,r0,r4 */
    g_cpu.R[15] = 0x03000270u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000270 = 1u;
    _cyc_03000270 = 1u;
    uint32_t _rm_03000270 = g_cpu.R[4];
    uint32_t _op2_03000270;
    uint32_t _co_03000270;
    _op2_03000270 = _rm_03000270;
    _co_03000270 = cpsr_c();
    uint32_t _rn_03000270 = g_cpu.R[0];
    uint32_t _r_03000270;
    _r_03000270 = _rn_03000270 + _op2_03000270;
    arm_set_nzcv_add(_rn_03000270, _op2_03000270, _r_03000270);
    g_cpu.R[0] = _r_03000270;
    g_cpu.R[15] = 0x03000272u;
    runtime_tick(_cyc_03000270);
    /* 03000272  03000272 T ldr r0,[r0] */
    g_cpu.R[15] = 0x03000272u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000272 = 1u;
    _cyc_03000272 = 2u;
    uint32_t _base_03000272 = g_cpu.R[0];
    uint32_t _off_03000272;
    _off_03000272 = 0x00000000u;
    uint32_t _ea_03000272 = _base_03000272 + _off_03000272;
    uint32_t _post_03000272 = _base_03000272 + _off_03000272;
    _cyc_03000272 += runtime_mem_cycles(_ea_03000272, 4u, 0u);
    uint32_t _v_03000272;
    { uint32_t _w = bus_read_u32(_ea_03000272 & ~3u); uint32_t _rot = (_ea_03000272 & 3u) * 8u; _v_03000272 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_03000272;
    g_cpu.R[15] = 0x03000274u;
    runtime_tick(_cyc_03000272);
    /* 03000274  03000274 T ands r0,r0,r7 */
    g_cpu.R[15] = 0x03000274u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000274 = 1u;
    _cyc_03000274 = 1u;
    uint32_t _rm_03000274 = g_cpu.R[7];
    uint32_t _op2_03000274;
    uint32_t _co_03000274;
    _op2_03000274 = _rm_03000274;
    _co_03000274 = cpsr_c();
    uint32_t _rn_03000274 = g_cpu.R[0];
    uint32_t _r_03000274;
    _r_03000274 = _rn_03000274 & _op2_03000274;
    arm_set_nzc_logic(_r_03000274, _co_03000274);
    g_cpu.R[0] = _r_03000274;
    g_cpu.R[15] = 0x03000276u;
    runtime_tick(_cyc_03000274);
    /* 03000276  03000276 T cmps r2,r0 */
    g_cpu.R[15] = 0x03000276u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000276 = 1u;
    _cyc_03000276 = 1u;
    uint32_t _rm_03000276 = g_cpu.R[0];
    uint32_t _op2_03000276;
    uint32_t _co_03000276;
    _op2_03000276 = _rm_03000276;
    _co_03000276 = cpsr_c();
    uint32_t _rn_03000276 = g_cpu.R[2];
    uint32_t _r_03000276;
    _r_03000276 = _rn_03000276 - _op2_03000276;
    arm_set_nzcv_sub(_rn_03000276, _op2_03000276, _r_03000276);
    g_cpu.R[15] = 0x03000278u;
    runtime_tick(_cyc_03000276);
    /* 03000278  03000278 T bcs 0x030002a4 */
    g_cpu.R[15] = 0x03000278u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000278 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_03000278 = 3u;
        g_cpu.R[15] = 0x030002A4u;
        runtime_tick(_cyc_03000278);
        GBARECOMP_TAIL_CALL(gf_tfunc_030002A4);
    }
    g_cpu.R[15] = 0x0300027Au;
    runtime_tick(_cyc_03000278);
    /* 0300027A  0300027a T mov r12,r5 */
    g_cpu.R[15] = 0x0300027Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300027A = 1u;
    _cyc_0300027A = 1u;
    uint32_t _rm_0300027A = g_cpu.R[5];
    uint32_t _op2_0300027A;
    uint32_t _co_0300027A;
    _op2_0300027A = _rm_0300027A;
    _co_0300027A = cpsr_c();
    uint32_t _r_0300027A;
    _r_0300027A = _op2_0300027A;
    g_cpu.R[12] = _r_0300027A;
    g_cpu.R[15] = 0x0300027Cu;
    runtime_tick(_cyc_0300027A);
    /* fall-through to 0x0300027C */
    g_cpu.R[15] = 0x0300027Cu;
    runtime_dispatch(0x0300027Cu);
    return;
}

/* 0x0300027C  mode=thumb  end=0x030002A4  branches=2  indirect */


/* 0x0300027C thumb */
void gf_tfunc_0300027C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0300027Cu);
L_0300027C:
    /* 0300027C  0300027c T mov r0,r12 */
    g_cpu.R[15] = 0x0300027Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300027C = 1u;
    _cyc_0300027C = 1u;
    uint32_t _rm_0300027C = g_cpu.R[12];
    uint32_t _op2_0300027C;
    uint32_t _co_0300027C;
    _op2_0300027C = _rm_0300027C;
    _co_0300027C = cpsr_c();
    uint32_t _r_0300027C;
    _r_0300027C = _op2_0300027C;
    g_cpu.R[0] = _r_0300027C;
    g_cpu.R[15] = 0x0300027Eu;
    runtime_tick(_cyc_0300027C);
    /* 0300027E  0300027e T ldr r4,[r0] */
    g_cpu.R[15] = 0x0300027Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300027E = 1u;
    _cyc_0300027E = 2u;
    uint32_t _base_0300027E = g_cpu.R[0];
    uint32_t _off_0300027E;
    _off_0300027E = 0x00000000u;
    uint32_t _ea_0300027E = _base_0300027E + _off_0300027E;
    uint32_t _post_0300027E = _base_0300027E + _off_0300027E;
    _cyc_0300027E += runtime_mem_cycles(_ea_0300027E, 4u, 0u);
    uint32_t _v_0300027E;
    { uint32_t _w = bus_read_u32(_ea_0300027E & ~3u); uint32_t _rot = (_ea_0300027E & 3u) * 8u; _v_0300027E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[4] = _v_0300027E;
    g_cpu.R[15] = 0x03000280u;
    runtime_tick(_cyc_0300027E);
    /* 03000280  03000280 T adds r2,r1,r4 */
    g_cpu.R[15] = 0x03000280u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000280 = 1u;
    _cyc_03000280 = 1u;
    uint32_t _rm_03000280 = g_cpu.R[4];
    uint32_t _op2_03000280;
    uint32_t _co_03000280;
    _op2_03000280 = _rm_03000280;
    _co_03000280 = cpsr_c();
    uint32_t _rn_03000280 = g_cpu.R[1];
    uint32_t _r_03000280;
    _r_03000280 = _rn_03000280 + _op2_03000280;
    arm_set_nzcv_add(_rn_03000280, _op2_03000280, _r_03000280);
    g_cpu.R[2] = _r_03000280;
    g_cpu.R[15] = 0x03000282u;
    runtime_tick(_cyc_03000280);
    /* 03000282  03000282 T ldr r3,[r2] */
    g_cpu.R[15] = 0x03000282u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000282 = 1u;
    _cyc_03000282 = 2u;
    uint32_t _base_03000282 = g_cpu.R[2];
    uint32_t _off_03000282;
    _off_03000282 = 0x00000000u;
    uint32_t _ea_03000282 = _base_03000282 + _off_03000282;
    uint32_t _post_03000282 = _base_03000282 + _off_03000282;
    _cyc_03000282 += runtime_mem_cycles(_ea_03000282, 4u, 0u);
    uint32_t _v_03000282;
    { uint32_t _w = bus_read_u32(_ea_03000282 & ~3u); uint32_t _rot = (_ea_03000282 & 3u) * 8u; _v_03000282 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_03000282;
    g_cpu.R[15] = 0x03000284u;
    runtime_tick(_cyc_03000282);
    /* 03000284  03000284 T movs r5,r6,lsl #2 */
    g_cpu.R[15] = 0x03000284u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000284 = 1u;
    _cyc_03000284 = 1u;
    uint32_t _rm_03000284 = g_cpu.R[6];
    uint32_t _op2_03000284;
    uint32_t _co_03000284;
    _op2_03000284 = _rm_03000284 << 2;
    _co_03000284 = (_rm_03000284 >> 30) & 1u;
    uint32_t _r_03000284;
    _r_03000284 = _op2_03000284;
    arm_set_nzc_logic(_r_03000284, _co_03000284);
    g_cpu.R[5] = _r_03000284;
    g_cpu.R[15] = 0x03000286u;
    runtime_tick(_cyc_03000284);
    /* 03000286  03000286 T adds r1,r5,r4 */
    g_cpu.R[15] = 0x03000286u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000286 = 1u;
    _cyc_03000286 = 1u;
    uint32_t _rm_03000286 = g_cpu.R[4];
    uint32_t _op2_03000286;
    uint32_t _co_03000286;
    _op2_03000286 = _rm_03000286;
    _co_03000286 = cpsr_c();
    uint32_t _rn_03000286 = g_cpu.R[5];
    uint32_t _r_03000286;
    _r_03000286 = _rn_03000286 + _op2_03000286;
    arm_set_nzcv_add(_rn_03000286, _op2_03000286, _r_03000286);
    g_cpu.R[1] = _r_03000286;
    g_cpu.R[15] = 0x03000288u;
    runtime_tick(_cyc_03000286);
    /* 03000288  03000288 T ldr r0,[r1] */
    g_cpu.R[15] = 0x03000288u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000288 = 1u;
    _cyc_03000288 = 2u;
    uint32_t _base_03000288 = g_cpu.R[1];
    uint32_t _off_03000288;
    _off_03000288 = 0x00000000u;
    uint32_t _ea_03000288 = _base_03000288 + _off_03000288;
    uint32_t _post_03000288 = _base_03000288 + _off_03000288;
    _cyc_03000288 += runtime_mem_cycles(_ea_03000288, 4u, 0u);
    uint32_t _v_03000288;
    { uint32_t _w = bus_read_u32(_ea_03000288 & ~3u); uint32_t _rot = (_ea_03000288 & 3u) * 8u; _v_03000288 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_03000288;
    g_cpu.R[15] = 0x0300028Au;
    runtime_tick(_cyc_03000288);
    /* 0300028A  0300028a T str r0,[r2] */
    g_cpu.R[15] = 0x0300028Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300028A = 1u;
    _cyc_0300028A = 1u;
    uint32_t _base_0300028A = g_cpu.R[2];
    uint32_t _off_0300028A;
    _off_0300028A = 0x00000000u;
    uint32_t _ea_0300028A = _base_0300028A + _off_0300028A;
    uint32_t _post_0300028A = _base_0300028A + _off_0300028A;
    _cyc_0300028A += runtime_mem_cycles(_ea_0300028A, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0300028Au, _ea_0300028A & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_0300028A & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0300028Cu;
    runtime_tick(_cyc_0300028A);
    /* 0300028C  0300028c T str r3,[r1] */
    g_cpu.R[15] = 0x0300028Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300028C = 1u;
    _cyc_0300028C = 1u;
    uint32_t _base_0300028C = g_cpu.R[1];
    uint32_t _off_0300028C;
    _off_0300028C = 0x00000000u;
    uint32_t _ea_0300028C = _base_0300028C + _off_0300028C;
    uint32_t _post_0300028C = _base_0300028C + _off_0300028C;
    _cyc_0300028C += runtime_mem_cycles(_ea_0300028C, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0300028Cu, _ea_0300028C & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_ea_0300028C & ~3u, g_cpu.R[3]);
    g_cpu.R[15] = 0x0300028Eu;
    runtime_tick(_cyc_0300028C);
    /* 0300028E  0300028e T cmps r6,#0x1 */
    g_cpu.R[15] = 0x0300028Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300028E = 1u;
    _cyc_0300028E = 1u;
    uint32_t _rn_0300028E = g_cpu.R[6];
    uint32_t _r_0300028E;
    _r_0300028E = _rn_0300028E - 0x00000001u;
    arm_set_nzcv_sub(_rn_0300028E, 0x00000001u, _r_0300028E);
    g_cpu.R[15] = 0x03000290u;
    runtime_tick(_cyc_0300028E);
    /* 03000290  03000290 T bls 0x030002a4 */
    g_cpu.R[15] = 0x03000290u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000290 = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_03000290 = 3u;
        g_cpu.R[15] = 0x030002A4u;
        runtime_tick(_cyc_03000290);
        GBARECOMP_TAIL_CALL(gf_tfunc_030002A4);
    }
    g_cpu.R[15] = 0x03000292u;
    runtime_tick(_cyc_03000290);
    /* 03000292  03000292 T adds r1,r5,#0x0 */
    g_cpu.R[15] = 0x03000292u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000292 = 1u;
    _cyc_03000292 = 1u;
    uint32_t _rn_03000292 = g_cpu.R[5];
    uint32_t _r_03000292;
    _r_03000292 = _rn_03000292 + 0x00000000u;
    arm_set_nzcv_add(_rn_03000292, 0x00000000u, _r_03000292);
    g_cpu.R[1] = _r_03000292;
    g_cpu.R[15] = 0x03000294u;
    runtime_tick(_cyc_03000292);
    /* 03000294  03000294 T ands r3,r3,r7 */
    g_cpu.R[15] = 0x03000294u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000294 = 1u;
    _cyc_03000294 = 1u;
    uint32_t _rm_03000294 = g_cpu.R[7];
    uint32_t _op2_03000294;
    uint32_t _co_03000294;
    _op2_03000294 = _rm_03000294;
    _co_03000294 = cpsr_c();
    uint32_t _rn_03000294 = g_cpu.R[3];
    uint32_t _r_03000294;
    _r_03000294 = _rn_03000294 & _op2_03000294;
    arm_set_nzc_logic(_r_03000294, _co_03000294);
    g_cpu.R[3] = _r_03000294;
    g_cpu.R[15] = 0x03000296u;
    runtime_tick(_cyc_03000294);
    /* 03000296  03000296 T movs r6,r6,lsr #1 */
    g_cpu.R[15] = 0x03000296u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000296 = 1u;
    _cyc_03000296 = 1u;
    uint32_t _rm_03000296 = g_cpu.R[6];
    uint32_t _op2_03000296;
    uint32_t _co_03000296;
    _op2_03000296 = _rm_03000296 >> 1;
    _co_03000296 = (_rm_03000296 >> 0) & 1u;
    uint32_t _r_03000296;
    _r_03000296 = _op2_03000296;
    arm_set_nzc_logic(_r_03000296, _co_03000296);
    g_cpu.R[6] = _r_03000296;
    g_cpu.R[15] = 0x03000298u;
    runtime_tick(_cyc_03000296);
    /* 03000298  03000298 T movs r0,r6,lsl #2 */
    g_cpu.R[15] = 0x03000298u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000298 = 1u;
    _cyc_03000298 = 1u;
    uint32_t _rm_03000298 = g_cpu.R[6];
    uint32_t _op2_03000298;
    uint32_t _co_03000298;
    _op2_03000298 = _rm_03000298 << 2;
    _co_03000298 = (_rm_03000298 >> 30) & 1u;
    uint32_t _r_03000298;
    _r_03000298 = _op2_03000298;
    arm_set_nzc_logic(_r_03000298, _co_03000298);
    g_cpu.R[0] = _r_03000298;
    g_cpu.R[15] = 0x0300029Au;
    runtime_tick(_cyc_03000298);
    /* 0300029A  0300029a T adds r0,r0,r4 */
    g_cpu.R[15] = 0x0300029Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300029A = 1u;
    _cyc_0300029A = 1u;
    uint32_t _rm_0300029A = g_cpu.R[4];
    uint32_t _op2_0300029A;
    uint32_t _co_0300029A;
    _op2_0300029A = _rm_0300029A;
    _co_0300029A = cpsr_c();
    uint32_t _rn_0300029A = g_cpu.R[0];
    uint32_t _r_0300029A;
    _r_0300029A = _rn_0300029A + _op2_0300029A;
    arm_set_nzcv_add(_rn_0300029A, _op2_0300029A, _r_0300029A);
    g_cpu.R[0] = _r_0300029A;
    g_cpu.R[15] = 0x0300029Cu;
    runtime_tick(_cyc_0300029A);
    /* 0300029C  0300029c T ldr r0,[r0] */
    g_cpu.R[15] = 0x0300029Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300029C = 1u;
    _cyc_0300029C = 2u;
    uint32_t _base_0300029C = g_cpu.R[0];
    uint32_t _off_0300029C;
    _off_0300029C = 0x00000000u;
    uint32_t _ea_0300029C = _base_0300029C + _off_0300029C;
    uint32_t _post_0300029C = _base_0300029C + _off_0300029C;
    _cyc_0300029C += runtime_mem_cycles(_ea_0300029C, 4u, 0u);
    uint32_t _v_0300029C;
    { uint32_t _w = bus_read_u32(_ea_0300029C & ~3u); uint32_t _rot = (_ea_0300029C & 3u) * 8u; _v_0300029C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0300029C;
    g_cpu.R[15] = 0x0300029Eu;
    runtime_tick(_cyc_0300029C);
    /* 0300029E  0300029e T ands r0,r0,r7 */
    g_cpu.R[15] = 0x0300029Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300029E = 1u;
    _cyc_0300029E = 1u;
    uint32_t _rm_0300029E = g_cpu.R[7];
    uint32_t _op2_0300029E;
    uint32_t _co_0300029E;
    _op2_0300029E = _rm_0300029E;
    _co_0300029E = cpsr_c();
    uint32_t _rn_0300029E = g_cpu.R[0];
    uint32_t _r_0300029E;
    _r_0300029E = _rn_0300029E & _op2_0300029E;
    arm_set_nzc_logic(_r_0300029E, _co_0300029E);
    g_cpu.R[0] = _r_0300029E;
    g_cpu.R[15] = 0x030002A0u;
    runtime_tick(_cyc_0300029E);
    /* 030002A0  030002a0 T cmps r3,r0 */
    g_cpu.R[15] = 0x030002A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002A0 = 1u;
    _cyc_030002A0 = 1u;
    uint32_t _rm_030002A0 = g_cpu.R[0];
    uint32_t _op2_030002A0;
    uint32_t _co_030002A0;
    _op2_030002A0 = _rm_030002A0;
    _co_030002A0 = cpsr_c();
    uint32_t _rn_030002A0 = g_cpu.R[3];
    uint32_t _r_030002A0;
    _r_030002A0 = _rn_030002A0 - _op2_030002A0;
    arm_set_nzcv_sub(_rn_030002A0, _op2_030002A0, _r_030002A0);
    g_cpu.R[15] = 0x030002A2u;
    runtime_tick(_cyc_030002A0);
    /* 030002A2  030002a2 T bcc 0x0300027c */
    g_cpu.R[15] = 0x030002A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002A2 = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_030002A2 = 3u;
        g_cpu.R[15] = 0x0300027Cu;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x030002A2u, 0x0300027Cu, 0u, 0u);
        runtime_tick(_cyc_030002A2);
        goto L_0300027C;
    }
    g_cpu.R[15] = 0x030002A4u;
    runtime_tick(_cyc_030002A2);
    /* fall-through to 0x030002A4 */
    g_cpu.R[15] = 0x030002A4u;
    runtime_dispatch(0x030002A4u);
    return;
}

/* 0x030002BC  mode=thumb  end=0x030002E8  branches=1  indirect */


/* 0x030002A4 thumb */
void gf_tfunc_030002A4(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030002A4u);
    /* 030002A4  030002a4 T ldm r13!,{r4,r5,r6,r7} */
    g_cpu.R[15] = 0x030002A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002A4 = 1u;
    _cyc_030002A4 = 2u;
    uint32_t _b_030002A4 = g_cpu.R[13];
    uint32_t _a_030002A4 = _b_030002A4;
    uint32_t _fb_030002A4 = _b_030002A4 + 16u;
    _cyc_030002A4 += runtime_mem_cycles(_a_030002A4 & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_030002A4 & ~3u);
    _a_030002A4 += 4u;
    _cyc_030002A4 += runtime_mem_cycles(_a_030002A4 & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_030002A4 & ~3u);
    _a_030002A4 += 4u;
    _cyc_030002A4 += runtime_mem_cycles(_a_030002A4 & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_030002A4 & ~3u);
    _a_030002A4 += 4u;
    _cyc_030002A4 += runtime_mem_cycles(_a_030002A4 & ~3u, 4u, 1u);
    g_cpu.R[7] = bus_read_u32(_a_030002A4 & ~3u);
    _a_030002A4 += 4u;
    g_cpu.R[13] = _fb_030002A4;
    g_cpu.R[15] = 0x030002A6u;
    runtime_tick(_cyc_030002A4);
    /* 030002A6  030002a6 T ldm r13!,{r0} */
    g_cpu.R[15] = 0x030002A6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002A6 = 1u;
    _cyc_030002A6 = 2u;
    uint32_t _b_030002A6 = g_cpu.R[13];
    uint32_t _a_030002A6 = _b_030002A6;
    uint32_t _fb_030002A6 = _b_030002A6 + 4u;
    _cyc_030002A6 += runtime_mem_cycles(_a_030002A6 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_030002A6 & ~3u);
    _a_030002A6 += 4u;
    g_cpu.R[13] = _fb_030002A6;
    g_cpu.R[15] = 0x030002A8u;
    runtime_tick(_cyc_030002A6);
    /* 030002A8  030002a8 T bx r0 */
    g_cpu.R[15] = 0x030002A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002A8 = 1u;
    _cyc_030002A8 = 3u;
    uint32_t _bxt_030002A8 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_030002A8 & ~1u;
    if (_bxt_030002A8 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_030002A8);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_030002A8);
    g_cpu.R[15] = 0x030002AAu;
    runtime_tick(_cyc_030002A8);
    /* fall-through to 0x030002AA */
    g_cpu.R[15] = 0x030002AAu;
    runtime_dispatch(0x030002AAu);
    return;
}

/* 0x030002E8  mode=thumb  end=0x030002EE  branches=0  indirect */


/* 0x030002BC thumb */
void gf_tfunc_030002BC(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030002BCu);
    /* 030002BC  030002bc T stm r13!,{r4,r5,r6,r14} */
    g_cpu.R[15] = 0x030002BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002BC = 1u;
    _cyc_030002BC = 1u;
    uint32_t _b_030002BC = g_cpu.R[13];
    uint32_t _a_030002BC = _b_030002BC - 16u;
    uint32_t _fb_030002BC = _b_030002BC - 16u;
    _cyc_030002BC += runtime_mem_cycles(_a_030002BC & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030002BCu, _a_030002BC & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_030002BC & ~3u, g_cpu.R[4]);
    _a_030002BC += 4u;
    _cyc_030002BC += runtime_mem_cycles(_a_030002BC & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030002BCu, _a_030002BC & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_030002BC & ~3u, g_cpu.R[5]);
    _a_030002BC += 4u;
    _cyc_030002BC += runtime_mem_cycles(_a_030002BC & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030002BCu, _a_030002BC & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_a_030002BC & ~3u, g_cpu.R[6]);
    _a_030002BC += 4u;
    _cyc_030002BC += runtime_mem_cycles(_a_030002BC & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030002BCu, _a_030002BC & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_030002BC & ~3u, g_cpu.R[14]);
    _a_030002BC += 4u;
    g_cpu.R[13] = _fb_030002BC;
    g_cpu.R[15] = 0x030002BEu;
    runtime_tick(_cyc_030002BC);
    /* 030002BE  030002be T adds r4,r0,#0x0 */
    g_cpu.R[15] = 0x030002BEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002BE = 1u;
    _cyc_030002BE = 1u;
    uint32_t _rn_030002BE = g_cpu.R[0];
    uint32_t _r_030002BE;
    _r_030002BE = _rn_030002BE + 0x00000000u;
    arm_set_nzcv_add(_rn_030002BE, 0x00000000u, _r_030002BE);
    g_cpu.R[4] = _r_030002BE;
    g_cpu.R[15] = 0x030002C0u;
    runtime_tick(_cyc_030002BE);
    /* 030002C0  030002c0 T adds r5,r1,#0x0 */
    g_cpu.R[15] = 0x030002C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002C0 = 1u;
    _cyc_030002C0 = 1u;
    uint32_t _rn_030002C0 = g_cpu.R[1];
    uint32_t _r_030002C0;
    _r_030002C0 = _rn_030002C0 + 0x00000000u;
    arm_set_nzcv_add(_rn_030002C0, 0x00000000u, _r_030002C0);
    g_cpu.R[5] = _r_030002C0;
    g_cpu.R[15] = 0x030002C2u;
    runtime_tick(_cyc_030002C0);
    /* 030002C2  030002c2 T ldr r6,[r15,#0x2c] */
    g_cpu.R[15] = 0x030002C2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002C2 = 1u;
    _cyc_030002C2 = 2u;
    uint32_t _base_030002C2 = 0x030002C6u & ~3u;
    uint32_t _off_030002C2;
    _off_030002C2 = 0x0000002Cu;
    uint32_t _ea_030002C2 = _base_030002C2 + _off_030002C2;
    uint32_t _post_030002C2 = _base_030002C2 + _off_030002C2;
    _cyc_030002C2 += runtime_mem_cycles(_ea_030002C2, 4u, 0u);
    uint32_t _v_030002C2;
    { uint32_t _w = bus_read_u32(_ea_030002C2 & ~3u); uint32_t _rot = (_ea_030002C2 & 3u) * 8u; _v_030002C2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[6] = _v_030002C2;
    g_cpu.R[15] = 0x030002C4u;
    runtime_tick(_cyc_030002C2);
    /* 030002C4  030002c4 T ldr r0,[r15,#0x2c] */
    g_cpu.R[15] = 0x030002C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002C4 = 1u;
    _cyc_030002C4 = 2u;
    uint32_t _base_030002C4 = 0x030002C8u & ~3u;
    uint32_t _off_030002C4;
    _off_030002C4 = 0x0000002Cu;
    uint32_t _ea_030002C4 = _base_030002C4 + _off_030002C4;
    uint32_t _post_030002C4 = _base_030002C4 + _off_030002C4;
    _cyc_030002C4 += runtime_mem_cycles(_ea_030002C4, 4u, 0u);
    uint32_t _v_030002C4;
    { uint32_t _w = bus_read_u32(_ea_030002C4 & ~3u); uint32_t _rot = (_ea_030002C4 & 3u) * 8u; _v_030002C4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_030002C4;
    g_cpu.R[15] = 0x030002C6u;
    runtime_tick(_cyc_030002C4);
    /* 030002C6  030002c6 T ldr r3,[r6] */
    g_cpu.R[15] = 0x030002C6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002C6 = 1u;
    _cyc_030002C6 = 2u;
    uint32_t _base_030002C6 = g_cpu.R[6];
    uint32_t _off_030002C6;
    _off_030002C6 = 0x00000000u;
    uint32_t _ea_030002C6 = _base_030002C6 + _off_030002C6;
    uint32_t _post_030002C6 = _base_030002C6 + _off_030002C6;
    _cyc_030002C6 += runtime_mem_cycles(_ea_030002C6, 4u, 0u);
    uint32_t _v_030002C6;
    { uint32_t _w = bus_read_u32(_ea_030002C6 & ~3u); uint32_t _rot = (_ea_030002C6 & 3u) * 8u; _v_030002C6 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_030002C6;
    g_cpu.R[15] = 0x030002C8u;
    runtime_tick(_cyc_030002C6);
    /* 030002C8  030002c8 T ldr r0,[r0] */
    g_cpu.R[15] = 0x030002C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002C8 = 1u;
    _cyc_030002C8 = 2u;
    uint32_t _base_030002C8 = g_cpu.R[0];
    uint32_t _off_030002C8;
    _off_030002C8 = 0x00000000u;
    uint32_t _ea_030002C8 = _base_030002C8 + _off_030002C8;
    uint32_t _post_030002C8 = _base_030002C8 + _off_030002C8;
    _cyc_030002C8 += runtime_mem_cycles(_ea_030002C8, 4u, 0u);
    uint32_t _v_030002C8;
    { uint32_t _w = bus_read_u32(_ea_030002C8 & ~3u); uint32_t _rot = (_ea_030002C8 & 3u) * 8u; _v_030002C8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_030002C8;
    g_cpu.R[15] = 0x030002CAu;
    runtime_tick(_cyc_030002C8);
    /* 030002CA  030002ca T cmps r3,r0 */
    g_cpu.R[15] = 0x030002CAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002CA = 1u;
    _cyc_030002CA = 1u;
    uint32_t _rm_030002CA = g_cpu.R[0];
    uint32_t _op2_030002CA;
    uint32_t _co_030002CA;
    _op2_030002CA = _rm_030002CA;
    _co_030002CA = cpsr_c();
    uint32_t _rn_030002CA = g_cpu.R[3];
    uint32_t _r_030002CA;
    _r_030002CA = _rn_030002CA - _op2_030002CA;
    arm_set_nzcv_sub(_rn_030002CA, _op2_030002CA, _r_030002CA);
    g_cpu.R[15] = 0x030002CCu;
    runtime_tick(_cyc_030002CA);
    /* 030002CC  030002cc T bcs 0x030002e8 */
    g_cpu.R[15] = 0x030002CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002CC = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_030002CC = 3u;
        g_cpu.R[15] = 0x030002E8u;
        runtime_tick(_cyc_030002CC);
        GBARECOMP_TAIL_CALL(gf_tfunc_030002E8);
    }
    g_cpu.R[15] = 0x030002CEu;
    runtime_tick(_cyc_030002CC);
    /* 030002CE  030002ce T ldr r0,[r15,#0x28] */
    g_cpu.R[15] = 0x030002CEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002CE = 1u;
    _cyc_030002CE = 2u;
    uint32_t _base_030002CE = 0x030002D2u & ~3u;
    uint32_t _off_030002CE;
    _off_030002CE = 0x00000028u;
    uint32_t _ea_030002CE = _base_030002CE + _off_030002CE;
    uint32_t _post_030002CE = _base_030002CE + _off_030002CE;
    _cyc_030002CE += runtime_mem_cycles(_ea_030002CE, 4u, 0u);
    uint32_t _v_030002CE;
    { uint32_t _w = bus_read_u32(_ea_030002CE & ~3u); uint32_t _rot = (_ea_030002CE & 3u) * 8u; _v_030002CE = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_030002CE;
    g_cpu.R[15] = 0x030002D0u;
    runtime_tick(_cyc_030002CE);
    /* 030002D0  030002d0 T movs r1,r3,lsl #3 */
    g_cpu.R[15] = 0x030002D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002D0 = 1u;
    _cyc_030002D0 = 1u;
    uint32_t _rm_030002D0 = g_cpu.R[3];
    uint32_t _op2_030002D0;
    uint32_t _co_030002D0;
    _op2_030002D0 = _rm_030002D0 << 3;
    _co_030002D0 = (_rm_030002D0 >> 29) & 1u;
    uint32_t _r_030002D0;
    _r_030002D0 = _op2_030002D0;
    arm_set_nzc_logic(_r_030002D0, _co_030002D0);
    g_cpu.R[1] = _r_030002D0;
    g_cpu.R[15] = 0x030002D2u;
    runtime_tick(_cyc_030002D0);
    /* 030002D2  030002d2 T ldr r2,[r0] */
    g_cpu.R[15] = 0x030002D2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002D2 = 1u;
    _cyc_030002D2 = 2u;
    uint32_t _base_030002D2 = g_cpu.R[0];
    uint32_t _off_030002D2;
    _off_030002D2 = 0x00000000u;
    uint32_t _ea_030002D2 = _base_030002D2 + _off_030002D2;
    uint32_t _post_030002D2 = _base_030002D2 + _off_030002D2;
    _cyc_030002D2 += runtime_mem_cycles(_ea_030002D2, 4u, 0u);
    uint32_t _v_030002D2;
    { uint32_t _w = bus_read_u32(_ea_030002D2 & ~3u); uint32_t _rot = (_ea_030002D2 & 3u) * 8u; _v_030002D2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_030002D2;
    g_cpu.R[15] = 0x030002D4u;
    runtime_tick(_cyc_030002D2);
    /* 030002D4  030002d4 T adds r2,r2,r1 */
    g_cpu.R[15] = 0x030002D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002D4 = 1u;
    _cyc_030002D4 = 1u;
    uint32_t _rm_030002D4 = g_cpu.R[1];
    uint32_t _op2_030002D4;
    uint32_t _co_030002D4;
    _op2_030002D4 = _rm_030002D4;
    _co_030002D4 = cpsr_c();
    uint32_t _rn_030002D4 = g_cpu.R[2];
    uint32_t _r_030002D4;
    _r_030002D4 = _rn_030002D4 + _op2_030002D4;
    arm_set_nzcv_add(_rn_030002D4, _op2_030002D4, _r_030002D4);
    g_cpu.R[2] = _r_030002D4;
    g_cpu.R[15] = 0x030002D6u;
    runtime_tick(_cyc_030002D4);
    /* 030002D6  030002d6 T str r4,[r2] */
    g_cpu.R[15] = 0x030002D6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002D6 = 1u;
    _cyc_030002D6 = 1u;
    uint32_t _base_030002D6 = g_cpu.R[2];
    uint32_t _off_030002D6;
    _off_030002D6 = 0x00000000u;
    uint32_t _ea_030002D6 = _base_030002D6 + _off_030002D6;
    uint32_t _post_030002D6 = _base_030002D6 + _off_030002D6;
    _cyc_030002D6 += runtime_mem_cycles(_ea_030002D6, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030002D6u, _ea_030002D6 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_ea_030002D6 & ~3u, g_cpu.R[4]);
    g_cpu.R[15] = 0x030002D8u;
    runtime_tick(_cyc_030002D6);
    /* 030002D8  030002d8 T ldr r1,[r15,#0x20] */
    g_cpu.R[15] = 0x030002D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002D8 = 1u;
    _cyc_030002D8 = 2u;
    uint32_t _base_030002D8 = 0x030002DCu & ~3u;
    uint32_t _off_030002D8;
    _off_030002D8 = 0x00000020u;
    uint32_t _ea_030002D8 = _base_030002D8 + _off_030002D8;
    uint32_t _post_030002D8 = _base_030002D8 + _off_030002D8;
    _cyc_030002D8 += runtime_mem_cycles(_ea_030002D8, 4u, 0u);
    uint32_t _v_030002D8;
    { uint32_t _w = bus_read_u32(_ea_030002D8 & ~3u); uint32_t _rot = (_ea_030002D8 & 3u) * 8u; _v_030002D8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_030002D8;
    g_cpu.R[15] = 0x030002DAu;
    runtime_tick(_cyc_030002D8);
    /* 030002DA  030002da T movs r0,r5,lsl #2 */
    g_cpu.R[15] = 0x030002DAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002DA = 1u;
    _cyc_030002DA = 1u;
    uint32_t _rm_030002DA = g_cpu.R[5];
    uint32_t _op2_030002DA;
    uint32_t _co_030002DA;
    _op2_030002DA = _rm_030002DA << 2;
    _co_030002DA = (_rm_030002DA >> 30) & 1u;
    uint32_t _r_030002DA;
    _r_030002DA = _op2_030002DA;
    arm_set_nzc_logic(_r_030002DA, _co_030002DA);
    g_cpu.R[0] = _r_030002DA;
    g_cpu.R[15] = 0x030002DCu;
    runtime_tick(_cyc_030002DA);
    /* 030002DC  030002dc T adds r0,r0,r1 */
    g_cpu.R[15] = 0x030002DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002DC = 1u;
    _cyc_030002DC = 1u;
    uint32_t _rm_030002DC = g_cpu.R[1];
    uint32_t _op2_030002DC;
    uint32_t _co_030002DC;
    _op2_030002DC = _rm_030002DC;
    _co_030002DC = cpsr_c();
    uint32_t _rn_030002DC = g_cpu.R[0];
    uint32_t _r_030002DC;
    _r_030002DC = _rn_030002DC + _op2_030002DC;
    arm_set_nzcv_add(_rn_030002DC, _op2_030002DC, _r_030002DC);
    g_cpu.R[0] = _r_030002DC;
    g_cpu.R[15] = 0x030002DEu;
    runtime_tick(_cyc_030002DC);
    /* 030002DE  030002de T ldr r1,[r0] */
    g_cpu.R[15] = 0x030002DEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002DE = 1u;
    _cyc_030002DE = 2u;
    uint32_t _base_030002DE = g_cpu.R[0];
    uint32_t _off_030002DE;
    _off_030002DE = 0x00000000u;
    uint32_t _ea_030002DE = _base_030002DE + _off_030002DE;
    uint32_t _post_030002DE = _base_030002DE + _off_030002DE;
    _cyc_030002DE += runtime_mem_cycles(_ea_030002DE, 4u, 0u);
    uint32_t _v_030002DE;
    { uint32_t _w = bus_read_u32(_ea_030002DE & ~3u); uint32_t _rot = (_ea_030002DE & 3u) * 8u; _v_030002DE = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_030002DE;
    g_cpu.R[15] = 0x030002E0u;
    runtime_tick(_cyc_030002DE);
    /* 030002E0  030002e0 T str r1,[r2,#0x4] */
    g_cpu.R[15] = 0x030002E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002E0 = 1u;
    _cyc_030002E0 = 1u;
    uint32_t _base_030002E0 = g_cpu.R[2];
    uint32_t _off_030002E0;
    _off_030002E0 = 0x00000004u;
    uint32_t _ea_030002E0 = _base_030002E0 + _off_030002E0;
    uint32_t _post_030002E0 = _base_030002E0 + _off_030002E0;
    _cyc_030002E0 += runtime_mem_cycles(_ea_030002E0, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030002E0u, _ea_030002E0 & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_ea_030002E0 & ~3u, g_cpu.R[1]);
    g_cpu.R[15] = 0x030002E2u;
    runtime_tick(_cyc_030002E0);
    /* 030002E2  030002e2 T str r2,[r0] */
    g_cpu.R[15] = 0x030002E2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002E2 = 1u;
    _cyc_030002E2 = 1u;
    uint32_t _base_030002E2 = g_cpu.R[0];
    uint32_t _off_030002E2;
    _off_030002E2 = 0x00000000u;
    uint32_t _ea_030002E2 = _base_030002E2 + _off_030002E2;
    uint32_t _post_030002E2 = _base_030002E2 + _off_030002E2;
    _cyc_030002E2 += runtime_mem_cycles(_ea_030002E2, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030002E2u, _ea_030002E2 & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_030002E2 & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x030002E4u;
    runtime_tick(_cyc_030002E2);
    /* 030002E4  030002e4 T adds r0,r3,#0x1 */
    g_cpu.R[15] = 0x030002E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002E4 = 1u;
    _cyc_030002E4 = 1u;
    uint32_t _rn_030002E4 = g_cpu.R[3];
    uint32_t _r_030002E4;
    _r_030002E4 = _rn_030002E4 + 0x00000001u;
    arm_set_nzcv_add(_rn_030002E4, 0x00000001u, _r_030002E4);
    g_cpu.R[0] = _r_030002E4;
    g_cpu.R[15] = 0x030002E6u;
    runtime_tick(_cyc_030002E4);
    /* 030002E6  030002e6 T str r0,[r6] */
    g_cpu.R[15] = 0x030002E6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002E6 = 1u;
    _cyc_030002E6 = 1u;
    uint32_t _base_030002E6 = g_cpu.R[6];
    uint32_t _off_030002E6;
    _off_030002E6 = 0x00000000u;
    uint32_t _ea_030002E6 = _base_030002E6 + _off_030002E6;
    uint32_t _post_030002E6 = _base_030002E6 + _off_030002E6;
    _cyc_030002E6 += runtime_mem_cycles(_ea_030002E6, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030002E6u, _ea_030002E6 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_030002E6 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x030002E8u;
    runtime_tick(_cyc_030002E6);
    /* fall-through to 0x030002E8 */
    g_cpu.R[15] = 0x030002E8u;
    runtime_dispatch(0x030002E8u);
    return;
}

/* 0x03000308  mode=thumb  end=0x0300031A  branches=7  indirect */


/* 0x030002E8 thumb */
void gf_tfunc_030002E8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030002E8u);
    /* 030002E8  030002e8 T ldm r13!,{r4,r5,r6} */
    g_cpu.R[15] = 0x030002E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002E8 = 1u;
    _cyc_030002E8 = 2u;
    uint32_t _b_030002E8 = g_cpu.R[13];
    uint32_t _a_030002E8 = _b_030002E8;
    uint32_t _fb_030002E8 = _b_030002E8 + 12u;
    _cyc_030002E8 += runtime_mem_cycles(_a_030002E8 & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_030002E8 & ~3u);
    _a_030002E8 += 4u;
    _cyc_030002E8 += runtime_mem_cycles(_a_030002E8 & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_030002E8 & ~3u);
    _a_030002E8 += 4u;
    _cyc_030002E8 += runtime_mem_cycles(_a_030002E8 & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_030002E8 & ~3u);
    _a_030002E8 += 4u;
    g_cpu.R[13] = _fb_030002E8;
    g_cpu.R[15] = 0x030002EAu;
    runtime_tick(_cyc_030002E8);
    /* 030002EA  030002ea T ldm r13!,{r0} */
    g_cpu.R[15] = 0x030002EAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002EA = 1u;
    _cyc_030002EA = 2u;
    uint32_t _b_030002EA = g_cpu.R[13];
    uint32_t _a_030002EA = _b_030002EA;
    uint32_t _fb_030002EA = _b_030002EA + 4u;
    _cyc_030002EA += runtime_mem_cycles(_a_030002EA & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_030002EA & ~3u);
    _a_030002EA += 4u;
    g_cpu.R[13] = _fb_030002EA;
    g_cpu.R[15] = 0x030002ECu;
    runtime_tick(_cyc_030002EA);
    /* 030002EC  030002ec T bx r0 */
    g_cpu.R[15] = 0x030002ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030002EC = 1u;
    _cyc_030002EC = 3u;
    uint32_t _bxt_030002EC = g_cpu.R[0];
    g_cpu.R[15] = _bxt_030002EC & ~1u;
    if (_bxt_030002EC & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_030002EC);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_030002EC);
    g_cpu.R[15] = 0x030002EEu;
    runtime_tick(_cyc_030002EC);
    /* fall-through to 0x030002EE */
    g_cpu.R[15] = 0x030002EEu;
    runtime_dispatch(0x030002EEu);
    return;
}

/* 0x03000300  mode=thumb  end=0x03000308  branches=7  indirect */


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
    /* fall-through to 0x03000308 */
    g_cpu.R[15] = 0x03000308u;
    runtime_dispatch(0x03000308u);
    return;
}

/* 0x0300033C  mode=thumb  end=0x0300035A  branches=5  indirect */


/* 0x03000308 thumb */
void gf_tfunc_03000308(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000308u);
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

/* 0x0300031A  mode=thumb  end=0x0300033C  branches=6  indirect */


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

/* 0x030003B8  mode=thumb  end=0x030003FE  branches=2 */


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

/* 0x030003B0  mode=thumb  end=0x030003B8  branches=2 */


/* 0x030003B0 thumb */
void gf_tfunc_030003B0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030003B0u);
    /* 030003B0  030003b0 T stm r13!,{r4,r5,r6,r7,r14} */
    g_cpu.R[15] = 0x030003B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003B0 = 1u;
    _cyc_030003B0 = 1u;
    uint32_t _b_030003B0 = g_cpu.R[13];
    uint32_t _a_030003B0 = _b_030003B0 - 20u;
    uint32_t _fb_030003B0 = _b_030003B0 - 20u;
    _cyc_030003B0 += runtime_mem_cycles(_a_030003B0 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030003B0u, _a_030003B0 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_030003B0 & ~3u, g_cpu.R[4]);
    _a_030003B0 += 4u;
    _cyc_030003B0 += runtime_mem_cycles(_a_030003B0 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030003B0u, _a_030003B0 & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_030003B0 & ~3u, g_cpu.R[5]);
    _a_030003B0 += 4u;
    _cyc_030003B0 += runtime_mem_cycles(_a_030003B0 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030003B0u, _a_030003B0 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_a_030003B0 & ~3u, g_cpu.R[6]);
    _a_030003B0 += 4u;
    _cyc_030003B0 += runtime_mem_cycles(_a_030003B0 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030003B0u, _a_030003B0 & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_a_030003B0 & ~3u, g_cpu.R[7]);
    _a_030003B0 += 4u;
    _cyc_030003B0 += runtime_mem_cycles(_a_030003B0 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030003B0u, _a_030003B0 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_030003B0 & ~3u, g_cpu.R[14]);
    _a_030003B0 += 4u;
    g_cpu.R[13] = _fb_030003B0;
    g_cpu.R[15] = 0x030003B2u;
    runtime_tick(_cyc_030003B0);
    /* 030003B2  030003b2 T mov r7,r10 */
    g_cpu.R[15] = 0x030003B2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003B2 = 1u;
    _cyc_030003B2 = 1u;
    uint32_t _rm_030003B2 = g_cpu.R[10];
    uint32_t _op2_030003B2;
    uint32_t _co_030003B2;
    _op2_030003B2 = _rm_030003B2;
    _co_030003B2 = cpsr_c();
    uint32_t _r_030003B2;
    _r_030003B2 = _op2_030003B2;
    g_cpu.R[7] = _r_030003B2;
    g_cpu.R[15] = 0x030003B4u;
    runtime_tick(_cyc_030003B2);
    /* 030003B4  030003b4 T mov r6,r9 */
    g_cpu.R[15] = 0x030003B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003B4 = 1u;
    _cyc_030003B4 = 1u;
    uint32_t _rm_030003B4 = g_cpu.R[9];
    uint32_t _op2_030003B4;
    uint32_t _co_030003B4;
    _op2_030003B4 = _rm_030003B4;
    _co_030003B4 = cpsr_c();
    uint32_t _r_030003B4;
    _r_030003B4 = _op2_030003B4;
    g_cpu.R[6] = _r_030003B4;
    g_cpu.R[15] = 0x030003B6u;
    runtime_tick(_cyc_030003B4);
    /* 030003B6  030003b6 T mov r5,r8 */
    g_cpu.R[15] = 0x030003B6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003B6 = 1u;
    _cyc_030003B6 = 1u;
    uint32_t _rm_030003B6 = g_cpu.R[8];
    uint32_t _op2_030003B6;
    uint32_t _co_030003B6;
    _op2_030003B6 = _rm_030003B6;
    _co_030003B6 = cpsr_c();
    uint32_t _r_030003B6;
    _r_030003B6 = _op2_030003B6;
    g_cpu.R[5] = _r_030003B6;
    g_cpu.R[15] = 0x030003B8u;
    runtime_tick(_cyc_030003B6);
    /* fall-through to 0x030003B8 */
    g_cpu.R[15] = 0x030003B8u;
    runtime_dispatch(0x030003B8u);
    return;
}

/* 0x030003FE  mode=thumb  end=0x03000418  branches=4 */


/* 0x030003B8 thumb */
void gf_tfunc_030003B8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030003B8u);
    /* 030003B8  030003b8 T stm r13!,{r5,r6,r7} */
    g_cpu.R[15] = 0x030003B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003B8 = 1u;
    _cyc_030003B8 = 1u;
    uint32_t _b_030003B8 = g_cpu.R[13];
    uint32_t _a_030003B8 = _b_030003B8 - 12u;
    uint32_t _fb_030003B8 = _b_030003B8 - 12u;
    _cyc_030003B8 += runtime_mem_cycles(_a_030003B8 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030003B8u, _a_030003B8 & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_030003B8 & ~3u, g_cpu.R[5]);
    _a_030003B8 += 4u;
    _cyc_030003B8 += runtime_mem_cycles(_a_030003B8 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030003B8u, _a_030003B8 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_a_030003B8 & ~3u, g_cpu.R[6]);
    _a_030003B8 += 4u;
    _cyc_030003B8 += runtime_mem_cycles(_a_030003B8 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030003B8u, _a_030003B8 & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_a_030003B8 & ~3u, g_cpu.R[7]);
    _a_030003B8 += 4u;
    g_cpu.R[13] = _fb_030003B8;
    g_cpu.R[15] = 0x030003BAu;
    runtime_tick(_cyc_030003B8);
    /* 030003BA  030003ba T sub r13,r13,#0x24 */
    g_cpu.R[15] = 0x030003BAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003BA = 1u;
    _cyc_030003BA = 1u;
    uint32_t _rn_030003BA = g_cpu.R[13];
    uint32_t _r_030003BA;
    _r_030003BA = _rn_030003BA - 0x00000024u;
    g_cpu.R[13] = _r_030003BA;
    g_cpu.R[15] = 0x030003BCu;
    runtime_tick(_cyc_030003BA);
    /* 030003BC  030003bc T mov r8,r0 */
    g_cpu.R[15] = 0x030003BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003BC = 1u;
    _cyc_030003BC = 1u;
    uint32_t _rm_030003BC = g_cpu.R[0];
    uint32_t _op2_030003BC;
    uint32_t _co_030003BC;
    _op2_030003BC = _rm_030003BC;
    _co_030003BC = cpsr_c();
    uint32_t _r_030003BC;
    _r_030003BC = _op2_030003BC;
    g_cpu.R[8] = _r_030003BC;
    g_cpu.R[15] = 0x030003BEu;
    runtime_tick(_cyc_030003BC);
    /* 030003BE  030003be T movs r1,#0xc */
    g_cpu.R[15] = 0x030003BEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003BE = 1u;
    _cyc_030003BE = 1u;
    uint32_t _r_030003BE;
    _r_030003BE = 0x0000000Cu;
    arm_set_nzc_logic(_r_030003BE, cpsr_c());
    g_cpu.R[1] = _r_030003BE;
    g_cpu.R[15] = 0x030003C0u;
    runtime_tick(_cyc_030003BE);
    /* 030003C0  030003c0 T ldrsh r0,[r0,+r1] */
    g_cpu.R[15] = 0x030003C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003C0 = 1u;
    _cyc_030003C0 = 2u;
    uint32_t _base_030003C0 = g_cpu.R[0];
    uint32_t _off_030003C0;
    uint32_t _morm_030003C0 = g_cpu.R[1];
    _off_030003C0 = _morm_030003C0;
    uint32_t _ea_030003C0 = _base_030003C0 + _off_030003C0;
    uint32_t _post_030003C0 = _base_030003C0 + _off_030003C0;
    _cyc_030003C0 += runtime_mem_cycles(_ea_030003C0, 2u, 0u);
    uint32_t _v_030003C0;
    if (_ea_030003C0 & 1u) _v_030003C0 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_030003C0);
    else _v_030003C0 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_030003C0);
    g_cpu.R[0] = _v_030003C0;
    g_cpu.R[15] = 0x030003C2u;
    runtime_tick(_cyc_030003C0);
    /* 030003C2  030003c2 T mov r10,r0 */
    g_cpu.R[15] = 0x030003C2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003C2 = 1u;
    _cyc_030003C2 = 1u;
    uint32_t _rm_030003C2 = g_cpu.R[0];
    uint32_t _op2_030003C2;
    uint32_t _co_030003C2;
    _op2_030003C2 = _rm_030003C2;
    _co_030003C2 = cpsr_c();
    uint32_t _r_030003C2;
    _r_030003C2 = _op2_030003C2;
    g_cpu.R[10] = _r_030003C2;
    g_cpu.R[15] = 0x030003C4u;
    runtime_tick(_cyc_030003C2);
    /* 030003C4  030003c4 T mov r2,r8 */
    g_cpu.R[15] = 0x030003C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003C4 = 1u;
    _cyc_030003C4 = 1u;
    uint32_t _rm_030003C4 = g_cpu.R[8];
    uint32_t _op2_030003C4;
    uint32_t _co_030003C4;
    _op2_030003C4 = _rm_030003C4;
    _co_030003C4 = cpsr_c();
    uint32_t _r_030003C4;
    _r_030003C4 = _op2_030003C4;
    g_cpu.R[2] = _r_030003C4;
    g_cpu.R[15] = 0x030003C6u;
    runtime_tick(_cyc_030003C4);
    /* 030003C6  030003c6 T movs r3,#0xe */
    g_cpu.R[15] = 0x030003C6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003C6 = 1u;
    _cyc_030003C6 = 1u;
    uint32_t _r_030003C6;
    _r_030003C6 = 0x0000000Eu;
    arm_set_nzc_logic(_r_030003C6, cpsr_c());
    g_cpu.R[3] = _r_030003C6;
    g_cpu.R[15] = 0x030003C8u;
    runtime_tick(_cyc_030003C6);
    /* 030003C8  030003c8 T ldrsh r2,[r2,+r3] */
    g_cpu.R[15] = 0x030003C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003C8 = 1u;
    _cyc_030003C8 = 2u;
    uint32_t _base_030003C8 = g_cpu.R[2];
    uint32_t _off_030003C8;
    uint32_t _morm_030003C8 = g_cpu.R[3];
    _off_030003C8 = _morm_030003C8;
    uint32_t _ea_030003C8 = _base_030003C8 + _off_030003C8;
    uint32_t _post_030003C8 = _base_030003C8 + _off_030003C8;
    _cyc_030003C8 += runtime_mem_cycles(_ea_030003C8, 2u, 0u);
    uint32_t _v_030003C8;
    if (_ea_030003C8 & 1u) _v_030003C8 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_030003C8);
    else _v_030003C8 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_030003C8);
    g_cpu.R[2] = _v_030003C8;
    g_cpu.R[15] = 0x030003CAu;
    runtime_tick(_cyc_030003C8);
    /* 030003CA  030003ca T str r2,[r13,#0x4] */
    g_cpu.R[15] = 0x030003CAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003CA = 1u;
    _cyc_030003CA = 1u;
    uint32_t _base_030003CA = g_cpu.R[13];
    uint32_t _off_030003CA;
    _off_030003CA = 0x00000004u;
    uint32_t _ea_030003CA = _base_030003CA + _off_030003CA;
    uint32_t _post_030003CA = _base_030003CA + _off_030003CA;
    _cyc_030003CA += runtime_mem_cycles(_ea_030003CA, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030003CAu, _ea_030003CA & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_030003CA & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x030003CCu;
    runtime_tick(_cyc_030003CA);
    /* 030003CC  030003cc T mov r4,r8 */
    g_cpu.R[15] = 0x030003CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003CC = 1u;
    _cyc_030003CC = 1u;
    uint32_t _rm_030003CC = g_cpu.R[8];
    uint32_t _op2_030003CC;
    uint32_t _co_030003CC;
    _op2_030003CC = _rm_030003CC;
    _co_030003CC = cpsr_c();
    uint32_t _r_030003CC;
    _r_030003CC = _op2_030003CC;
    g_cpu.R[4] = _r_030003CC;
    g_cpu.R[15] = 0x030003CEu;
    runtime_tick(_cyc_030003CC);
    /* 030003CE  030003ce T ldrh r4,[r4,#0x10] */
    g_cpu.R[15] = 0x030003CEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003CE = 1u;
    _cyc_030003CE = 2u;
    uint32_t _base_030003CE = g_cpu.R[4];
    uint32_t _off_030003CE;
    _off_030003CE = 0x00000010u;
    uint32_t _ea_030003CE = _base_030003CE + _off_030003CE;
    uint32_t _post_030003CE = _base_030003CE + _off_030003CE;
    _cyc_030003CE += runtime_mem_cycles(_ea_030003CE, 2u, 0u);
    uint32_t _v_030003CE;
    { uint32_t _h = bus_read_u16(_ea_030003CE & ~1u); if (_ea_030003CE & 1u) _v_030003CE = ((_h >> 8) | (_h << 24)); else _v_030003CE = _h; }
    g_cpu.R[4] = _v_030003CE;
    g_cpu.R[15] = 0x030003D0u;
    runtime_tick(_cyc_030003CE);
    /* 030003D0  030003d0 T mov r9,r4 */
    g_cpu.R[15] = 0x030003D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003D0 = 1u;
    _cyc_030003D0 = 1u;
    uint32_t _rm_030003D0 = g_cpu.R[4];
    uint32_t _op2_030003D0;
    uint32_t _co_030003D0;
    _op2_030003D0 = _rm_030003D0;
    _co_030003D0 = cpsr_c();
    uint32_t _r_030003D0;
    _r_030003D0 = _op2_030003D0;
    g_cpu.R[9] = _r_030003D0;
    g_cpu.R[15] = 0x030003D2u;
    runtime_tick(_cyc_030003D0);
    /* 030003D2  030003d2 T mov r6,r8 */
    g_cpu.R[15] = 0x030003D2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003D2 = 1u;
    _cyc_030003D2 = 1u;
    uint32_t _rm_030003D2 = g_cpu.R[8];
    uint32_t _op2_030003D2;
    uint32_t _co_030003D2;
    _op2_030003D2 = _rm_030003D2;
    _co_030003D2 = cpsr_c();
    uint32_t _r_030003D2;
    _r_030003D2 = _op2_030003D2;
    g_cpu.R[6] = _r_030003D2;
    g_cpu.R[15] = 0x030003D4u;
    runtime_tick(_cyc_030003D2);
    /* 030003D4  030003d4 T ldrh r2,[r6,#0x2] */
    g_cpu.R[15] = 0x030003D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003D4 = 1u;
    _cyc_030003D4 = 2u;
    uint32_t _base_030003D4 = g_cpu.R[6];
    uint32_t _off_030003D4;
    _off_030003D4 = 0x00000002u;
    uint32_t _ea_030003D4 = _base_030003D4 + _off_030003D4;
    uint32_t _post_030003D4 = _base_030003D4 + _off_030003D4;
    _cyc_030003D4 += runtime_mem_cycles(_ea_030003D4, 2u, 0u);
    uint32_t _v_030003D4;
    { uint32_t _h = bus_read_u16(_ea_030003D4 & ~1u); if (_ea_030003D4 & 1u) _v_030003D4 = ((_h >> 8) | (_h << 24)); else _v_030003D4 = _h; }
    g_cpu.R[2] = _v_030003D4;
    g_cpu.R[15] = 0x030003D6u;
    runtime_tick(_cyc_030003D4);
    /* 030003D6  030003d6 T movs r0,#0x30 */
    g_cpu.R[15] = 0x030003D6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003D6 = 1u;
    _cyc_030003D6 = 1u;
    uint32_t _r_030003D6;
    _r_030003D6 = 0x00000030u;
    arm_set_nzc_logic(_r_030003D6, cpsr_c());
    g_cpu.R[0] = _r_030003D6;
    g_cpu.R[15] = 0x030003D8u;
    runtime_tick(_cyc_030003D6);
    /* 030003D8  030003d8 T ands r0,r0,r2 */
    g_cpu.R[15] = 0x030003D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003D8 = 1u;
    _cyc_030003D8 = 1u;
    uint32_t _rm_030003D8 = g_cpu.R[2];
    uint32_t _op2_030003D8;
    uint32_t _co_030003D8;
    _op2_030003D8 = _rm_030003D8;
    _co_030003D8 = cpsr_c();
    uint32_t _rn_030003D8 = g_cpu.R[0];
    uint32_t _r_030003D8;
    _r_030003D8 = _rn_030003D8 & _op2_030003D8;
    arm_set_nzc_logic(_r_030003D8, _co_030003D8);
    g_cpu.R[0] = _r_030003D8;
    g_cpu.R[15] = 0x030003DAu;
    runtime_tick(_cyc_030003D8);
    /* 030003DA  030003da T str r0,[r13,#0x20] */
    g_cpu.R[15] = 0x030003DAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003DA = 1u;
    _cyc_030003DA = 1u;
    uint32_t _base_030003DA = g_cpu.R[13];
    uint32_t _off_030003DA;
    _off_030003DA = 0x00000020u;
    uint32_t _ea_030003DA = _base_030003DA + _off_030003DA;
    uint32_t _post_030003DA = _base_030003DA + _off_030003DA;
    _cyc_030003DA += runtime_mem_cycles(_ea_030003DA, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030003DAu, _ea_030003DA & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_030003DA & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x030003DCu;
    runtime_tick(_cyc_030003DA);
    /* 030003DC  030003dc T movs r0,#0xc0 */
    g_cpu.R[15] = 0x030003DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003DC = 1u;
    _cyc_030003DC = 1u;
    uint32_t _r_030003DC;
    _r_030003DC = 0x000000C0u;
    arm_set_nzc_logic(_r_030003DC, cpsr_c());
    g_cpu.R[0] = _r_030003DC;
    g_cpu.R[15] = 0x030003DEu;
    runtime_tick(_cyc_030003DC);
    /* 030003DE  030003de T ands r0,r0,r2 */
    g_cpu.R[15] = 0x030003DEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003DE = 1u;
    _cyc_030003DE = 1u;
    uint32_t _rm_030003DE = g_cpu.R[2];
    uint32_t _op2_030003DE;
    uint32_t _co_030003DE;
    _op2_030003DE = _rm_030003DE;
    _co_030003DE = cpsr_c();
    uint32_t _rn_030003DE = g_cpu.R[0];
    uint32_t _r_030003DE;
    _r_030003DE = _rn_030003DE & _op2_030003DE;
    arm_set_nzc_logic(_r_030003DE, _co_030003DE);
    g_cpu.R[0] = _r_030003DE;
    g_cpu.R[15] = 0x030003E0u;
    runtime_tick(_cyc_030003DE);
    /* 030003E0  030003e0 T movs r0,r0,lsr #2 */
    g_cpu.R[15] = 0x030003E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003E0 = 1u;
    _cyc_030003E0 = 1u;
    uint32_t _rm_030003E0 = g_cpu.R[0];
    uint32_t _op2_030003E0;
    uint32_t _co_030003E0;
    _op2_030003E0 = _rm_030003E0 >> 2;
    _co_030003E0 = (_rm_030003E0 >> 1) & 1u;
    uint32_t _r_030003E0;
    _r_030003E0 = _op2_030003E0;
    arm_set_nzc_logic(_r_030003E0, _co_030003E0);
    g_cpu.R[0] = _r_030003E0;
    g_cpu.R[15] = 0x030003E2u;
    runtime_tick(_cyc_030003E0);
    /* 030003E2  030003e2 T ldr r1,[r13,#0x20] */
    g_cpu.R[15] = 0x030003E2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003E2 = 1u;
    _cyc_030003E2 = 2u;
    uint32_t _base_030003E2 = g_cpu.R[13];
    uint32_t _off_030003E2;
    _off_030003E2 = 0x00000020u;
    uint32_t _ea_030003E2 = _base_030003E2 + _off_030003E2;
    uint32_t _post_030003E2 = _base_030003E2 + _off_030003E2;
    _cyc_030003E2 += runtime_mem_cycles(_ea_030003E2, 4u, 0u);
    uint32_t _v_030003E2;
    { uint32_t _w = bus_read_u32(_ea_030003E2 & ~3u); uint32_t _rot = (_ea_030003E2 & 3u) * 8u; _v_030003E2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_030003E2;
    g_cpu.R[15] = 0x030003E4u;
    runtime_tick(_cyc_030003E2);
    /* 030003E4  030003e4 T eors r1,r1,r0 */
    g_cpu.R[15] = 0x030003E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003E4 = 1u;
    _cyc_030003E4 = 1u;
    uint32_t _rm_030003E4 = g_cpu.R[0];
    uint32_t _op2_030003E4;
    uint32_t _co_030003E4;
    _op2_030003E4 = _rm_030003E4;
    _co_030003E4 = cpsr_c();
    uint32_t _rn_030003E4 = g_cpu.R[1];
    uint32_t _r_030003E4;
    _r_030003E4 = _rn_030003E4 ^ _op2_030003E4;
    arm_set_nzc_logic(_r_030003E4, _co_030003E4);
    g_cpu.R[1] = _r_030003E4;
    g_cpu.R[15] = 0x030003E6u;
    runtime_tick(_cyc_030003E4);
    /* 030003E6  030003e6 T str r1,[r13,#0x20] */
    g_cpu.R[15] = 0x030003E6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003E6 = 1u;
    _cyc_030003E6 = 1u;
    uint32_t _base_030003E6 = g_cpu.R[13];
    uint32_t _off_030003E6;
    _off_030003E6 = 0x00000020u;
    uint32_t _ea_030003E6 = _base_030003E6 + _off_030003E6;
    uint32_t _post_030003E6 = _base_030003E6 + _off_030003E6;
    _cyc_030003E6 += runtime_mem_cycles(_ea_030003E6, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030003E6u, _ea_030003E6 & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_ea_030003E6 & ~3u, g_cpu.R[1]);
    g_cpu.R[15] = 0x030003E8u;
    runtime_tick(_cyc_030003E6);
    /* 030003E8  030003e8 T mov r0,r8 */
    g_cpu.R[15] = 0x030003E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003E8 = 1u;
    _cyc_030003E8 = 1u;
    uint32_t _rm_030003E8 = g_cpu.R[8];
    uint32_t _op2_030003E8;
    uint32_t _co_030003E8;
    _op2_030003E8 = _rm_030003E8;
    _co_030003E8 = cpsr_c();
    uint32_t _r_030003E8;
    _r_030003E8 = _op2_030003E8;
    g_cpu.R[0] = _r_030003E8;
    g_cpu.R[15] = 0x030003EAu;
    runtime_tick(_cyc_030003E8);
    /* 030003EA  030003ea T adds r0,r0,#0x2a */
    g_cpu.R[15] = 0x030003EAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003EA = 1u;
    _cyc_030003EA = 1u;
    uint32_t _rn_030003EA = g_cpu.R[0];
    uint32_t _r_030003EA;
    _r_030003EA = _rn_030003EA + 0x0000002Au;
    arm_set_nzcv_add(_rn_030003EA, 0x0000002Au, _r_030003EA);
    g_cpu.R[0] = _r_030003EA;
    g_cpu.R[15] = 0x030003ECu;
    runtime_tick(_cyc_030003EA);
    /* 030003EC  030003ec T ldrb r1,[r0] */
    g_cpu.R[15] = 0x030003ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003EC = 1u;
    _cyc_030003EC = 2u;
    uint32_t _base_030003EC = g_cpu.R[0];
    uint32_t _off_030003EC;
    _off_030003EC = 0x00000000u;
    uint32_t _ea_030003EC = _base_030003EC + _off_030003EC;
    uint32_t _post_030003EC = _base_030003EC + _off_030003EC;
    _cyc_030003EC += runtime_mem_cycles(_ea_030003EC, 1u, 0u);
    uint32_t _v_030003EC;
    _v_030003EC = bus_read_u8(_ea_030003EC);
    g_cpu.R[1] = _v_030003EC;
    g_cpu.R[15] = 0x030003EEu;
    runtime_tick(_cyc_030003EC);
    /* 030003EE  030003ee T movs r0,#0x10 */
    g_cpu.R[15] = 0x030003EEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003EE = 1u;
    _cyc_030003EE = 1u;
    uint32_t _r_030003EE;
    _r_030003EE = 0x00000010u;
    arm_set_nzc_logic(_r_030003EE, cpsr_c());
    g_cpu.R[0] = _r_030003EE;
    g_cpu.R[15] = 0x030003F0u;
    runtime_tick(_cyc_030003EE);
    /* 030003F0  030003f0 T ands r0,r0,r1 */
    g_cpu.R[15] = 0x030003F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003F0 = 1u;
    _cyc_030003F0 = 1u;
    uint32_t _rm_030003F0 = g_cpu.R[1];
    uint32_t _op2_030003F0;
    uint32_t _co_030003F0;
    _op2_030003F0 = _rm_030003F0;
    _co_030003F0 = cpsr_c();
    uint32_t _rn_030003F0 = g_cpu.R[0];
    uint32_t _r_030003F0;
    _r_030003F0 = _rn_030003F0 & _op2_030003F0;
    arm_set_nzc_logic(_r_030003F0, _co_030003F0);
    g_cpu.R[0] = _r_030003F0;
    g_cpu.R[15] = 0x030003F2u;
    runtime_tick(_cyc_030003F0);
    /* 030003F2  030003f2 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x030003F2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003F2 = 1u;
    _cyc_030003F2 = 1u;
    uint32_t _rn_030003F2 = g_cpu.R[0];
    uint32_t _r_030003F2;
    _r_030003F2 = _rn_030003F2 - 0x00000000u;
    arm_set_nzcv_sub(_rn_030003F2, 0x00000000u, _r_030003F2);
    g_cpu.R[15] = 0x030003F4u;
    runtime_tick(_cyc_030003F2);
    /* 030003F4  030003f4 T beq 0x030003fe */
    g_cpu.R[15] = 0x030003F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003F4 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_030003F4 = 3u;
        g_cpu.R[15] = 0x030003FEu;
        runtime_tick(_cyc_030003F4);
        GBARECOMP_TAIL_CALL(gf_tfunc_030003FE);
    }
    g_cpu.R[15] = 0x030003F6u;
    runtime_tick(_cyc_030003F4);
    /* 030003F6  030003f6 T movs r3,#0xc0 */
    g_cpu.R[15] = 0x030003F6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003F6 = 1u;
    _cyc_030003F6 = 1u;
    uint32_t _r_030003F6;
    _r_030003F6 = 0x000000C0u;
    arm_set_nzc_logic(_r_030003F6, cpsr_c());
    g_cpu.R[3] = _r_030003F6;
    g_cpu.R[15] = 0x030003F8u;
    runtime_tick(_cyc_030003F6);
    /* 030003F8  030003f8 T movs r3,r3,lsl #2 */
    g_cpu.R[15] = 0x030003F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003F8 = 1u;
    _cyc_030003F8 = 1u;
    uint32_t _rm_030003F8 = g_cpu.R[3];
    uint32_t _op2_030003F8;
    uint32_t _co_030003F8;
    _op2_030003F8 = _rm_030003F8 << 2;
    _co_030003F8 = (_rm_030003F8 >> 30) & 1u;
    uint32_t _r_030003F8;
    _r_030003F8 = _op2_030003F8;
    arm_set_nzc_logic(_r_030003F8, _co_030003F8);
    g_cpu.R[3] = _r_030003F8;
    g_cpu.R[15] = 0x030003FAu;
    runtime_tick(_cyc_030003F8);
    /* 030003FA  030003fa T ands r3,r3,r2 */
    g_cpu.R[15] = 0x030003FAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003FA = 1u;
    _cyc_030003FA = 1u;
    uint32_t _rm_030003FA = g_cpu.R[2];
    uint32_t _op2_030003FA;
    uint32_t _co_030003FA;
    _op2_030003FA = _rm_030003FA;
    _co_030003FA = cpsr_c();
    uint32_t _rn_030003FA = g_cpu.R[3];
    uint32_t _r_030003FA;
    _r_030003FA = _rn_030003FA & _op2_030003FA;
    arm_set_nzc_logic(_r_030003FA, _co_030003FA);
    g_cpu.R[3] = _r_030003FA;
    g_cpu.R[15] = 0x030003FCu;
    runtime_tick(_cyc_030003FA);
    /* 030003FC  030003fc T b 0x0300043e */
    g_cpu.R[15] = 0x030003FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003FC = 1u;
    _cyc_030003FC = 3u;
    g_cpu.R[15] = 0x0300043Eu;
    runtime_tick(_cyc_030003FC);
    GBARECOMP_TAIL_CALL(gf_tfunc_0300043E);
    g_cpu.R[15] = 0x030003FEu;
    runtime_tick(_cyc_030003FC);
    /* fall-through to 0x030003FE */
    g_cpu.R[15] = 0x030003FEu;
    runtime_dispatch(0x030003FEu);
    return;
}

/* 0x03000418  mode=thumb  end=0x03000432  branches=4 */


/* 0x030003FE thumb */
void gf_tfunc_030003FE(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030003FEu);
    /* 030003FE  030003fe T mov r4,r9 */
    g_cpu.R[15] = 0x030003FEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030003FE = 1u;
    _cyc_030003FE = 1u;
    uint32_t _rm_030003FE = g_cpu.R[9];
    uint32_t _op2_030003FE;
    uint32_t _co_030003FE;
    _op2_030003FE = _rm_030003FE;
    _co_030003FE = cpsr_c();
    uint32_t _r_030003FE;
    _r_030003FE = _op2_030003FE;
    g_cpu.R[4] = _r_030003FE;
    g_cpu.R[15] = 0x03000400u;
    runtime_tick(_cyc_030003FE);
    /* 03000400  03000400 T cmps r4,#0x0 */
    g_cpu.R[15] = 0x03000400u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000400 = 1u;
    _cyc_03000400 = 1u;
    uint32_t _rn_03000400 = g_cpu.R[4];
    uint32_t _r_03000400;
    _r_03000400 = _rn_03000400 - 0x00000000u;
    arm_set_nzcv_sub(_rn_03000400, 0x00000000u, _r_03000400);
    g_cpu.R[15] = 0x03000402u;
    runtime_tick(_cyc_03000400);
    /* 03000402  03000402 T bne 0x03000432 */
    g_cpu.R[15] = 0x03000402u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000402 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_03000402 = 3u;
        g_cpu.R[15] = 0x03000432u;
        runtime_tick(_cyc_03000402);
        GBARECOMP_TAIL_CALL(gf_tfunc_03000432);
    }
    g_cpu.R[15] = 0x03000404u;
    runtime_tick(_cyc_03000402);
    /* 03000404  03000404 T movs r0,#0x80 */
    g_cpu.R[15] = 0x03000404u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000404 = 1u;
    _cyc_03000404 = 1u;
    uint32_t _r_03000404;
    _r_03000404 = 0x00000080u;
    arm_set_nzc_logic(_r_03000404, cpsr_c());
    g_cpu.R[0] = _r_03000404;
    g_cpu.R[15] = 0x03000406u;
    runtime_tick(_cyc_03000404);
    /* 03000406  03000406 T movs r0,r0,lsl #1 */
    g_cpu.R[15] = 0x03000406u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000406 = 1u;
    _cyc_03000406 = 1u;
    uint32_t _rm_03000406 = g_cpu.R[0];
    uint32_t _op2_03000406;
    uint32_t _co_03000406;
    _op2_03000406 = _rm_03000406 << 1;
    _co_03000406 = (_rm_03000406 >> 31) & 1u;
    uint32_t _r_03000406;
    _r_03000406 = _op2_03000406;
    arm_set_nzc_logic(_r_03000406, _co_03000406);
    g_cpu.R[0] = _r_03000406;
    g_cpu.R[15] = 0x03000408u;
    runtime_tick(_cyc_03000406);
    /* 03000408  03000408 T cmps r10,r0 */
    g_cpu.R[15] = 0x03000408u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000408 = 1u;
    _cyc_03000408 = 1u;
    uint32_t _rm_03000408 = g_cpu.R[0];
    uint32_t _op2_03000408;
    uint32_t _co_03000408;
    _op2_03000408 = _rm_03000408;
    _co_03000408 = cpsr_c();
    uint32_t _rn_03000408 = g_cpu.R[10];
    uint32_t _r_03000408;
    _r_03000408 = _rn_03000408 - _op2_03000408;
    arm_set_nzcv_sub(_rn_03000408, _op2_03000408, _r_03000408);
    g_cpu.R[15] = 0x0300040Au;
    runtime_tick(_cyc_03000408);
    /* 0300040A  0300040a T bne 0x03000418 */
    g_cpu.R[15] = 0x0300040Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300040A = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_0300040A = 3u;
        g_cpu.R[15] = 0x03000418u;
        runtime_tick(_cyc_0300040A);
        GBARECOMP_TAIL_CALL(gf_tfunc_03000418);
    }
    g_cpu.R[15] = 0x0300040Cu;
    runtime_tick(_cyc_0300040A);
    /* 0300040C  0300040c T ldr r6,[r13,#0x4] */
    g_cpu.R[15] = 0x0300040Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300040C = 1u;
    _cyc_0300040C = 2u;
    uint32_t _base_0300040C = g_cpu.R[13];
    uint32_t _off_0300040C;
    _off_0300040C = 0x00000004u;
    uint32_t _ea_0300040C = _base_0300040C + _off_0300040C;
    uint32_t _post_0300040C = _base_0300040C + _off_0300040C;
    _cyc_0300040C += runtime_mem_cycles(_ea_0300040C, 4u, 0u);
    uint32_t _v_0300040C;
    { uint32_t _w = bus_read_u32(_ea_0300040C & ~3u); uint32_t _rot = (_ea_0300040C & 3u) * 8u; _v_0300040C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[6] = _v_0300040C;
    g_cpu.R[15] = 0x0300040Eu;
    runtime_tick(_cyc_0300040C);
    /* 0300040E  0300040e T cmps r6,r10 */
    g_cpu.R[15] = 0x0300040Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300040E = 1u;
    _cyc_0300040E = 1u;
    uint32_t _rm_0300040E = g_cpu.R[10];
    uint32_t _op2_0300040E;
    uint32_t _co_0300040E;
    _op2_0300040E = _rm_0300040E;
    _co_0300040E = cpsr_c();
    uint32_t _rn_0300040E = g_cpu.R[6];
    uint32_t _r_0300040E;
    _r_0300040E = _rn_0300040E - _op2_0300040E;
    arm_set_nzcv_sub(_rn_0300040E, _op2_0300040E, _r_0300040E);
    g_cpu.R[15] = 0x03000410u;
    runtime_tick(_cyc_0300040E);
    /* 03000410  03000410 T bne 0x03000418 */
    g_cpu.R[15] = 0x03000410u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000410 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_03000410 = 3u;
        g_cpu.R[15] = 0x03000418u;
        runtime_tick(_cyc_03000410);
        GBARECOMP_TAIL_CALL(gf_tfunc_03000418);
    }
    g_cpu.R[15] = 0x03000412u;
    runtime_tick(_cyc_03000410);
    /* 03000412  03000412 T movs r0,#0x0 */
    g_cpu.R[15] = 0x03000412u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000412 = 1u;
    _cyc_03000412 = 1u;
    uint32_t _r_03000412;
    _r_03000412 = 0x00000000u;
    arm_set_nzc_logic(_r_03000412, cpsr_c());
    g_cpu.R[0] = _r_03000412;
    g_cpu.R[15] = 0x03000414u;
    runtime_tick(_cyc_03000412);
    /* 03000414  03000414 T str r0,[r13,#0x18] */
    g_cpu.R[15] = 0x03000414u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000414 = 1u;
    _cyc_03000414 = 1u;
    uint32_t _base_03000414 = g_cpu.R[13];
    uint32_t _off_03000414;
    _off_03000414 = 0x00000018u;
    uint32_t _ea_03000414 = _base_03000414 + _off_03000414;
    uint32_t _post_03000414 = _base_03000414 + _off_03000414;
    _cyc_03000414 += runtime_mem_cycles(_ea_03000414, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000414u, _ea_03000414 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_03000414 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x03000416u;
    runtime_tick(_cyc_03000414);
    /* 03000416  03000416 T b 0x03000502 */
    g_cpu.R[15] = 0x03000416u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000416 = 1u;
    _cyc_03000416 = 3u;
    g_cpu.R[15] = 0x03000502u;
    runtime_tick(_cyc_03000416);
    GBARECOMP_TAIL_CALL(gf_tfunc_03000502);
    g_cpu.R[15] = 0x03000418u;
    runtime_tick(_cyc_03000416);
    /* fall-through to 0x03000418 */
    g_cpu.R[15] = 0x03000418u;
    runtime_dispatch(0x03000418u);
    return;
}

/* 0x03000432  mode=thumb  end=0x0300043A  branches=1 */


/* 0x03000418 thumb */
void gf_tfunc_03000418(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000418u);
    /* 03000418  03000418 T mov r1,r9 */
    g_cpu.R[15] = 0x03000418u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000418 = 1u;
    _cyc_03000418 = 1u;
    uint32_t _rm_03000418 = g_cpu.R[9];
    uint32_t _op2_03000418;
    uint32_t _co_03000418;
    _op2_03000418 = _rm_03000418;
    _co_03000418 = cpsr_c();
    uint32_t _r_03000418;
    _r_03000418 = _op2_03000418;
    g_cpu.R[1] = _r_03000418;
    g_cpu.R[15] = 0x0300041Au;
    runtime_tick(_cyc_03000418);
    /* 0300041A  0300041a T cmps r1,#0x0 */
    g_cpu.R[15] = 0x0300041Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300041A = 1u;
    _cyc_0300041A = 1u;
    uint32_t _rn_0300041A = g_cpu.R[1];
    uint32_t _r_0300041A;
    _r_0300041A = _rn_0300041A - 0x00000000u;
    arm_set_nzcv_sub(_rn_0300041A, 0x00000000u, _r_0300041A);
    g_cpu.R[15] = 0x0300041Cu;
    runtime_tick(_cyc_0300041A);
    /* 0300041C  0300041c T bne 0x03000432 */
    g_cpu.R[15] = 0x0300041Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300041C = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_0300041C = 3u;
        g_cpu.R[15] = 0x03000432u;
        runtime_tick(_cyc_0300041C);
        GBARECOMP_TAIL_CALL(gf_tfunc_03000432);
    }
    g_cpu.R[15] = 0x0300041Eu;
    runtime_tick(_cyc_0300041C);
    /* 0300041E  0300041e T mov r0,r10 */
    g_cpu.R[15] = 0x0300041Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300041E = 1u;
    _cyc_0300041E = 1u;
    uint32_t _rm_0300041E = g_cpu.R[10];
    uint32_t _op2_0300041E;
    uint32_t _co_0300041E;
    _op2_0300041E = _rm_0300041E;
    _co_0300041E = cpsr_c();
    uint32_t _r_0300041E;
    _r_0300041E = _op2_0300041E;
    g_cpu.R[0] = _r_0300041E;
    g_cpu.R[15] = 0x03000420u;
    runtime_tick(_cyc_0300041E);
    /* 03000420  03000420 T adds r0,r0,#0xff */
    g_cpu.R[15] = 0x03000420u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000420 = 1u;
    _cyc_03000420 = 1u;
    uint32_t _rn_03000420 = g_cpu.R[0];
    uint32_t _r_03000420;
    _r_03000420 = _rn_03000420 + 0x000000FFu;
    arm_set_nzcv_add(_rn_03000420, 0x000000FFu, _r_03000420);
    g_cpu.R[0] = _r_03000420;
    g_cpu.R[15] = 0x03000422u;
    runtime_tick(_cyc_03000420);
    /* 03000422  03000422 T movs r1,#0xff */
    g_cpu.R[15] = 0x03000422u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000422 = 1u;
    _cyc_03000422 = 1u;
    uint32_t _r_03000422;
    _r_03000422 = 0x000000FFu;
    arm_set_nzc_logic(_r_03000422, cpsr_c());
    g_cpu.R[1] = _r_03000422;
    g_cpu.R[15] = 0x03000424u;
    runtime_tick(_cyc_03000422);
    /* 03000424  03000424 T movs r1,r1,lsl #1 */
    g_cpu.R[15] = 0x03000424u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000424 = 1u;
    _cyc_03000424 = 1u;
    uint32_t _rm_03000424 = g_cpu.R[1];
    uint32_t _op2_03000424;
    uint32_t _co_03000424;
    _op2_03000424 = _rm_03000424 << 1;
    _co_03000424 = (_rm_03000424 >> 31) & 1u;
    uint32_t _r_03000424;
    _r_03000424 = _op2_03000424;
    arm_set_nzc_logic(_r_03000424, _co_03000424);
    g_cpu.R[1] = _r_03000424;
    g_cpu.R[15] = 0x03000426u;
    runtime_tick(_cyc_03000424);
    /* 03000426  03000426 T cmps r0,r1 */
    g_cpu.R[15] = 0x03000426u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000426 = 1u;
    _cyc_03000426 = 1u;
    uint32_t _rm_03000426 = g_cpu.R[1];
    uint32_t _op2_03000426;
    uint32_t _co_03000426;
    _op2_03000426 = _rm_03000426;
    _co_03000426 = cpsr_c();
    uint32_t _rn_03000426 = g_cpu.R[0];
    uint32_t _r_03000426;
    _r_03000426 = _rn_03000426 - _op2_03000426;
    arm_set_nzcv_sub(_rn_03000426, _op2_03000426, _r_03000426);
    g_cpu.R[15] = 0x03000428u;
    runtime_tick(_cyc_03000426);
    /* 03000428  03000428 T bls 0x03000432 */
    g_cpu.R[15] = 0x03000428u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000428 = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_03000428 = 3u;
        g_cpu.R[15] = 0x03000432u;
        runtime_tick(_cyc_03000428);
        GBARECOMP_TAIL_CALL(gf_tfunc_03000432);
    }
    g_cpu.R[15] = 0x0300042Au;
    runtime_tick(_cyc_03000428);
    /* 0300042A  0300042a T ldr r0,[r13,#0x4] */
    g_cpu.R[15] = 0x0300042Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300042A = 1u;
    _cyc_0300042A = 2u;
    uint32_t _base_0300042A = g_cpu.R[13];
    uint32_t _off_0300042A;
    _off_0300042A = 0x00000004u;
    uint32_t _ea_0300042A = _base_0300042A + _off_0300042A;
    uint32_t _post_0300042A = _base_0300042A + _off_0300042A;
    _cyc_0300042A += runtime_mem_cycles(_ea_0300042A, 4u, 0u);
    uint32_t _v_0300042A;
    { uint32_t _w = bus_read_u32(_ea_0300042A & ~3u); uint32_t _rot = (_ea_0300042A & 3u) * 8u; _v_0300042A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0300042A;
    g_cpu.R[15] = 0x0300042Cu;
    runtime_tick(_cyc_0300042A);
    /* 0300042C  0300042c T adds r0,r0,#0xff */
    g_cpu.R[15] = 0x0300042Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300042C = 1u;
    _cyc_0300042C = 1u;
    uint32_t _rn_0300042C = g_cpu.R[0];
    uint32_t _r_0300042C;
    _r_0300042C = _rn_0300042C + 0x000000FFu;
    arm_set_nzcv_add(_rn_0300042C, 0x000000FFu, _r_0300042C);
    g_cpu.R[0] = _r_0300042C;
    g_cpu.R[15] = 0x0300042Eu;
    runtime_tick(_cyc_0300042C);
    /* 0300042E  0300042e T cmps r0,r1 */
    g_cpu.R[15] = 0x0300042Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300042E = 1u;
    _cyc_0300042E = 1u;
    uint32_t _rm_0300042E = g_cpu.R[1];
    uint32_t _op2_0300042E;
    uint32_t _co_0300042E;
    _op2_0300042E = _rm_0300042E;
    _co_0300042E = cpsr_c();
    uint32_t _rn_0300042E = g_cpu.R[0];
    uint32_t _r_0300042E;
    _r_0300042E = _rn_0300042E - _op2_0300042E;
    arm_set_nzcv_sub(_rn_0300042E, _op2_0300042E, _r_0300042E);
    g_cpu.R[15] = 0x03000430u;
    runtime_tick(_cyc_0300042E);
    /* 03000430  03000430 T bhi 0x0300043a */
    g_cpu.R[15] = 0x03000430u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000430 = 1u;
    if (arm_cond_passes(0x8u)) {
        _cyc_03000430 = 3u;
        g_cpu.R[15] = 0x0300043Au;
        runtime_tick(_cyc_03000430);
        GBARECOMP_TAIL_CALL(gf_tfunc_0300043A);
    }
    g_cpu.R[15] = 0x03000432u;
    runtime_tick(_cyc_03000430);
    /* fall-through to 0x03000432 */
    g_cpu.R[15] = 0x03000432u;
    runtime_dispatch(0x03000432u);
    return;
}

/* 0x03000446  mode=thumb  end=0x03000450  branches=2 */


/* 0x03000432 thumb */
void gf_tfunc_03000432(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000432u);
    /* 03000432  03000432 T movs r2,#0xc0 */
    g_cpu.R[15] = 0x03000432u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000432 = 1u;
    _cyc_03000432 = 1u;
    uint32_t _r_03000432;
    _r_03000432 = 0x000000C0u;
    arm_set_nzc_logic(_r_03000432, cpsr_c());
    g_cpu.R[2] = _r_03000432;
    g_cpu.R[15] = 0x03000434u;
    runtime_tick(_cyc_03000432);
    /* 03000434  03000434 T movs r2,r2,lsl #2 */
    g_cpu.R[15] = 0x03000434u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000434 = 1u;
    _cyc_03000434 = 1u;
    uint32_t _rm_03000434 = g_cpu.R[2];
    uint32_t _op2_03000434;
    uint32_t _co_03000434;
    _op2_03000434 = _rm_03000434 << 2;
    _co_03000434 = (_rm_03000434 >> 30) & 1u;
    uint32_t _r_03000434;
    _r_03000434 = _op2_03000434;
    arm_set_nzc_logic(_r_03000434, _co_03000434);
    g_cpu.R[2] = _r_03000434;
    g_cpu.R[15] = 0x03000436u;
    runtime_tick(_cyc_03000434);
    /* 03000436  03000436 T str r2,[r13,#0x18] */
    g_cpu.R[15] = 0x03000436u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000436 = 1u;
    _cyc_03000436 = 1u;
    uint32_t _base_03000436 = g_cpu.R[13];
    uint32_t _off_03000436;
    _off_03000436 = 0x00000018u;
    uint32_t _ea_03000436 = _base_03000436 + _off_03000436;
    uint32_t _post_03000436 = _base_03000436 + _off_03000436;
    _cyc_03000436 += runtime_mem_cycles(_ea_03000436, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000436u, _ea_03000436 & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_03000436 & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x03000438u;
    runtime_tick(_cyc_03000436);
    /* 03000438  03000438 T b 0x03000446 */
    g_cpu.R[15] = 0x03000438u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000438 = 1u;
    _cyc_03000438 = 3u;
    g_cpu.R[15] = 0x03000446u;
    runtime_tick(_cyc_03000438);
    GBARECOMP_TAIL_CALL(gf_tfunc_03000446);
    g_cpu.R[15] = 0x0300043Au;
    runtime_tick(_cyc_03000438);
    /* fall-through to 0x0300043A */
    g_cpu.R[15] = 0x0300043Au;
    runtime_dispatch(0x0300043Au);
    return;
}

/* 0x0300043A  mode=thumb  end=0x0300043E  branches=3 */


/* 0x0300043A thumb */
void gf_tfunc_0300043A(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0300043Au);
    /* 0300043A  0300043a T movs r3,#0x80 */
    g_cpu.R[15] = 0x0300043Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300043A = 1u;
    _cyc_0300043A = 1u;
    uint32_t _r_0300043A;
    _r_0300043A = 0x00000080u;
    arm_set_nzc_logic(_r_0300043A, cpsr_c());
    g_cpu.R[3] = _r_0300043A;
    g_cpu.R[15] = 0x0300043Cu;
    runtime_tick(_cyc_0300043A);
    /* 0300043C  0300043c T movs r3,r3,lsl #1 */
    g_cpu.R[15] = 0x0300043Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300043C = 1u;
    _cyc_0300043C = 1u;
    uint32_t _rm_0300043C = g_cpu.R[3];
    uint32_t _op2_0300043C;
    uint32_t _co_0300043C;
    _op2_0300043C = _rm_0300043C << 1;
    _co_0300043C = (_rm_0300043C >> 31) & 1u;
    uint32_t _r_0300043C;
    _r_0300043C = _op2_0300043C;
    arm_set_nzc_logic(_r_0300043C, _co_0300043C);
    g_cpu.R[3] = _r_0300043C;
    g_cpu.R[15] = 0x0300043Eu;
    runtime_tick(_cyc_0300043C);
    /* fall-through to 0x0300043E */
    g_cpu.R[15] = 0x0300043Eu;
    runtime_dispatch(0x0300043Eu);
    return;
}

/* 0x0300043E  mode=thumb  end=0x03000446  branches=3 */


/* 0x0300043E thumb */
void gf_tfunc_0300043E(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0300043Eu);
    /* 0300043E  0300043e T str r3,[r13,#0x18] */
    g_cpu.R[15] = 0x0300043Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300043E = 1u;
    _cyc_0300043E = 1u;
    uint32_t _base_0300043E = g_cpu.R[13];
    uint32_t _off_0300043E;
    _off_0300043E = 0x00000018u;
    uint32_t _ea_0300043E = _base_0300043E + _off_0300043E;
    uint32_t _post_0300043E = _base_0300043E + _off_0300043E;
    _cyc_0300043E += runtime_mem_cycles(_ea_0300043E, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0300043Eu, _ea_0300043E & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_ea_0300043E & ~3u, g_cpu.R[3]);
    g_cpu.R[15] = 0x03000440u;
    runtime_tick(_cyc_0300043E);
    /* 03000440  03000440 T ldr r4,[r13,#0x18] */
    g_cpu.R[15] = 0x03000440u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000440 = 1u;
    _cyc_03000440 = 2u;
    uint32_t _base_03000440 = g_cpu.R[13];
    uint32_t _off_03000440;
    _off_03000440 = 0x00000018u;
    uint32_t _ea_03000440 = _base_03000440 + _off_03000440;
    uint32_t _post_03000440 = _base_03000440 + _off_03000440;
    _cyc_03000440 += runtime_mem_cycles(_ea_03000440, 4u, 0u);
    uint32_t _v_03000440;
    { uint32_t _w = bus_read_u32(_ea_03000440 & ~3u); uint32_t _rot = (_ea_03000440 & 3u) * 8u; _v_03000440 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[4] = _v_03000440;
    g_cpu.R[15] = 0x03000442u;
    runtime_tick(_cyc_03000440);
    /* 03000442  03000442 T cmps r4,#0x0 */
    g_cpu.R[15] = 0x03000442u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000442 = 1u;
    _cyc_03000442 = 1u;
    uint32_t _rn_03000442 = g_cpu.R[4];
    uint32_t _r_03000442;
    _r_03000442 = _rn_03000442 - 0x00000000u;
    arm_set_nzcv_sub(_rn_03000442, 0x00000000u, _r_03000442);
    g_cpu.R[15] = 0x03000444u;
    runtime_tick(_cyc_03000442);
    /* 03000444  03000444 T beq 0x03000502 */
    g_cpu.R[15] = 0x03000444u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000444 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_03000444 = 3u;
        g_cpu.R[15] = 0x03000502u;
        runtime_tick(_cyc_03000444);
        GBARECOMP_TAIL_CALL(gf_tfunc_03000502);
    }
    g_cpu.R[15] = 0x03000446u;
    runtime_tick(_cyc_03000444);
    /* fall-through to 0x03000446 */
    g_cpu.R[15] = 0x03000446u;
    runtime_dispatch(0x03000446u);
    return;
}

/* 0x03000450  mode=thumb  end=0x03000458  branches=2 */


/* 0x03000446 thumb */
void gf_tfunc_03000446(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000446u);
    /* 03000446  03000446 T ldr r0,[r15,#0x34] */
    g_cpu.R[15] = 0x03000446u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000446 = 1u;
    _cyc_03000446 = 2u;
    uint32_t _base_03000446 = 0x0300044Au & ~3u;
    uint32_t _off_03000446;
    _off_03000446 = 0x00000034u;
    uint32_t _ea_03000446 = _base_03000446 + _off_03000446;
    uint32_t _post_03000446 = _base_03000446 + _off_03000446;
    _cyc_03000446 += runtime_mem_cycles(_ea_03000446, 4u, 0u);
    uint32_t _v_03000446;
    { uint32_t _w = bus_read_u32(_ea_03000446 & ~3u); uint32_t _rot = (_ea_03000446 & 3u) * 8u; _v_03000446 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_03000446;
    g_cpu.R[15] = 0x03000448u;
    runtime_tick(_cyc_03000446);
    /* 03000448  03000448 T ldr r0,[r0] */
    g_cpu.R[15] = 0x03000448u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000448 = 1u;
    _cyc_03000448 = 2u;
    uint32_t _base_03000448 = g_cpu.R[0];
    uint32_t _off_03000448;
    _off_03000448 = 0x00000000u;
    uint32_t _ea_03000448 = _base_03000448 + _off_03000448;
    uint32_t _post_03000448 = _base_03000448 + _off_03000448;
    _cyc_03000448 += runtime_mem_cycles(_ea_03000448, 4u, 0u);
    uint32_t _v_03000448;
    { uint32_t _w = bus_read_u32(_ea_03000448 & ~3u); uint32_t _rot = (_ea_03000448 & 3u) * 8u; _v_03000448 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_03000448;
    g_cpu.R[15] = 0x0300044Au;
    runtime_tick(_cyc_03000448);
    /* 0300044A  0300044a T cmps r0,#0x1f */
    g_cpu.R[15] = 0x0300044Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300044A = 1u;
    _cyc_0300044A = 1u;
    uint32_t _rn_0300044A = g_cpu.R[0];
    uint32_t _r_0300044A;
    _r_0300044A = _rn_0300044A - 0x0000001Fu;
    arm_set_nzcv_sub(_rn_0300044A, 0x0000001Fu, _r_0300044A);
    g_cpu.R[15] = 0x0300044Cu;
    runtime_tick(_cyc_0300044A);
    /* 0300044C  0300044c T bls 0x03000450 */
    g_cpu.R[15] = 0x0300044Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300044C = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_0300044C = 3u;
        g_cpu.R[15] = 0x03000450u;
        runtime_tick(_cyc_0300044C);
        GBARECOMP_TAIL_CALL(gf_tfunc_03000450);
    }
    g_cpu.R[15] = 0x0300044Eu;
    runtime_tick(_cyc_0300044C);
    /* 0300044E  0300044e T b 0x03000738 */
    g_cpu.R[15] = 0x0300044Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300044E = 1u;
    _cyc_0300044E = 3u;
    g_cpu.R[15] = 0x03000738u;
    runtime_tick(_cyc_0300044E);
    GBARECOMP_TAIL_CALL(gf_tfunc_03000738);
    g_cpu.R[15] = 0x03000450u;
    runtime_tick(_cyc_0300044E);
    /* fall-through to 0x03000450 */
    g_cpu.R[15] = 0x03000450u;
    runtime_dispatch(0x03000450u);
    return;
}

/* 0x03000480  mode=thumb  end=0x03000492  branches=2 */


/* 0x03000450 thumb */
void gf_tfunc_03000450(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000450u);
    /* 03000450  03000450 T mov r6,r10 */
    g_cpu.R[15] = 0x03000450u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000450 = 1u;
    _cyc_03000450 = 1u;
    uint32_t _rm_03000450 = g_cpu.R[10];
    uint32_t _op2_03000450;
    uint32_t _co_03000450;
    _op2_03000450 = _rm_03000450;
    _co_03000450 = cpsr_c();
    uint32_t _r_03000450;
    _r_03000450 = _op2_03000450;
    g_cpu.R[6] = _r_03000450;
    g_cpu.R[15] = 0x03000452u;
    runtime_tick(_cyc_03000450);
    /* 03000452  03000452 T cmps r6,#0x0 */
    g_cpu.R[15] = 0x03000452u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000452 = 1u;
    _cyc_03000452 = 1u;
    uint32_t _rn_03000452 = g_cpu.R[6];
    uint32_t _r_03000452;
    _r_03000452 = _rn_03000452 - 0x00000000u;
    arm_set_nzcv_sub(_rn_03000452, 0x00000000u, _r_03000452);
    g_cpu.R[15] = 0x03000454u;
    runtime_tick(_cyc_03000452);
    /* 03000454  03000454 T bne 0x03000458 */
    g_cpu.R[15] = 0x03000454u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000454 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_03000454 = 3u;
        g_cpu.R[15] = 0x03000458u;
        runtime_tick(_cyc_03000454);
        GBARECOMP_TAIL_CALL(gf_tfunc_03000458);
    }
    g_cpu.R[15] = 0x03000456u;
    runtime_tick(_cyc_03000454);
    /* 03000456  03000456 T b 0x03000738 */
    g_cpu.R[15] = 0x03000456u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000456 = 1u;
    _cyc_03000456 = 3u;
    g_cpu.R[15] = 0x03000738u;
    runtime_tick(_cyc_03000456);
    GBARECOMP_TAIL_CALL(gf_tfunc_03000738);
    g_cpu.R[15] = 0x03000458u;
    runtime_tick(_cyc_03000456);
    /* fall-through to 0x03000458 */
    g_cpu.R[15] = 0x03000458u;
    runtime_dispatch(0x03000458u);
    return;
}

/* 0x03000458  mode=thumb  end=0x03000460  branches=2 */


/* 0x03000458 thumb */
void gf_tfunc_03000458(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000458u);
    /* 03000458  03000458 T ldr r0,[r13,#0x4] */
    g_cpu.R[15] = 0x03000458u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000458 = 1u;
    _cyc_03000458 = 2u;
    uint32_t _base_03000458 = g_cpu.R[13];
    uint32_t _off_03000458;
    _off_03000458 = 0x00000004u;
    uint32_t _ea_03000458 = _base_03000458 + _off_03000458;
    uint32_t _post_03000458 = _base_03000458 + _off_03000458;
    _cyc_03000458 += runtime_mem_cycles(_ea_03000458, 4u, 0u);
    uint32_t _v_03000458;
    { uint32_t _w = bus_read_u32(_ea_03000458 & ~3u); uint32_t _rot = (_ea_03000458 & 3u) * 8u; _v_03000458 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_03000458;
    g_cpu.R[15] = 0x0300045Au;
    runtime_tick(_cyc_03000458);
    /* 0300045A  0300045a T cmps r0,#0x0 */
    g_cpu.R[15] = 0x0300045Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300045A = 1u;
    _cyc_0300045A = 1u;
    uint32_t _rn_0300045A = g_cpu.R[0];
    uint32_t _r_0300045A;
    _r_0300045A = _rn_0300045A - 0x00000000u;
    arm_set_nzcv_sub(_rn_0300045A, 0x00000000u, _r_0300045A);
    g_cpu.R[15] = 0x0300045Cu;
    runtime_tick(_cyc_0300045A);
    /* 0300045C  0300045c T bne 0x03000460 */
    g_cpu.R[15] = 0x0300045Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300045C = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_0300045C = 3u;
        g_cpu.R[15] = 0x03000460u;
        runtime_tick(_cyc_0300045C);
        GBARECOMP_TAIL_CALL(gf_tfunc_03000460);
    }
    g_cpu.R[15] = 0x0300045Eu;
    runtime_tick(_cyc_0300045C);
    /* 0300045E  0300045e T b 0x03000738 */
    g_cpu.R[15] = 0x0300045Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300045E = 1u;
    _cyc_0300045E = 3u;
    g_cpu.R[15] = 0x03000738u;
    runtime_tick(_cyc_0300045E);
    GBARECOMP_TAIL_CALL(gf_tfunc_03000738);
    g_cpu.R[15] = 0x03000460u;
    runtime_tick(_cyc_0300045E);
    /* fall-through to 0x03000460 */
    g_cpu.R[15] = 0x03000460u;
    runtime_dispatch(0x03000460u);
    return;
}

/* 0x03000460  mode=thumb  end=0x0300047A  branches=3 */


/* 0x03000460 thumb */
void gf_tfunc_03000460(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000460u);
    /* 03000460  03000460 T cmps r6,#0x0 */
    g_cpu.R[15] = 0x03000460u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000460 = 1u;
    _cyc_03000460 = 1u;
    uint32_t _rn_03000460 = g_cpu.R[6];
    uint32_t _r_03000460;
    _r_03000460 = _rn_03000460 - 0x00000000u;
    arm_set_nzcv_sub(_rn_03000460, 0x00000000u, _r_03000460);
    g_cpu.R[15] = 0x03000462u;
    runtime_tick(_cyc_03000460);
    /* 03000462  03000462 T blt 0x03000480 */
    g_cpu.R[15] = 0x03000462u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000462 = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_03000462 = 3u;
        g_cpu.R[15] = 0x03000480u;
        runtime_tick(_cyc_03000462);
        GBARECOMP_TAIL_CALL(gf_tfunc_03000480);
    }
    g_cpu.R[15] = 0x03000464u;
    runtime_tick(_cyc_03000462);
    /* 03000464  03000464 T movs r0,#0x10 */
    g_cpu.R[15] = 0x03000464u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000464 = 1u;
    _cyc_03000464 = 1u;
    uint32_t _r_03000464;
    _r_03000464 = 0x00000010u;
    arm_set_nzc_logic(_r_03000464, cpsr_c());
    g_cpu.R[0] = _r_03000464;
    g_cpu.R[15] = 0x03000466u;
    runtime_tick(_cyc_03000464);
    /* 03000466  03000466 T ldr r1,[r13,#0x20] */
    g_cpu.R[15] = 0x03000466u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000466 = 1u;
    _cyc_03000466 = 2u;
    uint32_t _base_03000466 = g_cpu.R[13];
    uint32_t _off_03000466;
    _off_03000466 = 0x00000020u;
    uint32_t _ea_03000466 = _base_03000466 + _off_03000466;
    uint32_t _post_03000466 = _base_03000466 + _off_03000466;
    _cyc_03000466 += runtime_mem_cycles(_ea_03000466, 4u, 0u);
    uint32_t _v_03000466;
    { uint32_t _w = bus_read_u32(_ea_03000466 & ~3u); uint32_t _rot = (_ea_03000466 & 3u) * 8u; _v_03000466 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_03000466;
    g_cpu.R[15] = 0x03000468u;
    runtime_tick(_cyc_03000466);
    /* 03000468  03000468 T ands r0,r0,r1 */
    g_cpu.R[15] = 0x03000468u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000468 = 1u;
    _cyc_03000468 = 1u;
    uint32_t _rm_03000468 = g_cpu.R[1];
    uint32_t _op2_03000468;
    uint32_t _co_03000468;
    _op2_03000468 = _rm_03000468;
    _co_03000468 = cpsr_c();
    uint32_t _rn_03000468 = g_cpu.R[0];
    uint32_t _r_03000468;
    _r_03000468 = _rn_03000468 & _op2_03000468;
    arm_set_nzc_logic(_r_03000468, _co_03000468);
    g_cpu.R[0] = _r_03000468;
    g_cpu.R[15] = 0x0300046Au;
    runtime_tick(_cyc_03000468);
    /* 0300046A  0300046a T cmps r0,#0x0 */
    g_cpu.R[15] = 0x0300046Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300046A = 1u;
    _cyc_0300046A = 1u;
    uint32_t _rn_0300046A = g_cpu.R[0];
    uint32_t _r_0300046A;
    _r_0300046A = _rn_0300046A - 0x00000000u;
    arm_set_nzcv_sub(_rn_0300046A, 0x00000000u, _r_0300046A);
    g_cpu.R[15] = 0x0300046Cu;
    runtime_tick(_cyc_0300046A);
    /* 0300046C  0300046c T beq 0x03000498 */
    g_cpu.R[15] = 0x0300046Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300046C = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0300046C = 3u;
        g_cpu.R[15] = 0x03000498u;
        runtime_tick(_cyc_0300046C);
        GBARECOMP_TAIL_CALL(gf_tfunc_03000498);
    }
    g_cpu.R[15] = 0x0300046Eu;
    runtime_tick(_cyc_0300046C);
    /* 0300046E  0300046e T rsbs r6,r6,#0x0 */
    g_cpu.R[15] = 0x0300046Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300046E = 1u;
    _cyc_0300046E = 1u;
    uint32_t _rn_0300046E = g_cpu.R[6];
    uint32_t _r_0300046E;
    _r_0300046E = 0x00000000u - _rn_0300046E;
    arm_set_nzcv_sub(0x00000000u, _rn_0300046E, _r_0300046E);
    g_cpu.R[6] = _r_0300046E;
    g_cpu.R[15] = 0x03000470u;
    runtime_tick(_cyc_0300046E);
    /* 03000470  03000470 T mov r10,r6 */
    g_cpu.R[15] = 0x03000470u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000470 = 1u;
    _cyc_03000470 = 1u;
    uint32_t _rm_03000470 = g_cpu.R[6];
    uint32_t _op2_03000470;
    uint32_t _co_03000470;
    _op2_03000470 = _rm_03000470;
    _co_03000470 = cpsr_c();
    uint32_t _r_03000470;
    _r_03000470 = _op2_03000470;
    g_cpu.R[10] = _r_03000470;
    g_cpu.R[15] = 0x03000472u;
    runtime_tick(_cyc_03000470);
    /* 03000472  03000472 T mov r2,r9 */
    g_cpu.R[15] = 0x03000472u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000472 = 1u;
    _cyc_03000472 = 1u;
    uint32_t _rm_03000472 = g_cpu.R[9];
    uint32_t _op2_03000472;
    uint32_t _co_03000472;
    _op2_03000472 = _rm_03000472;
    _co_03000472 = cpsr_c();
    uint32_t _r_03000472;
    _r_03000472 = _op2_03000472;
    g_cpu.R[2] = _r_03000472;
    g_cpu.R[15] = 0x03000474u;
    runtime_tick(_cyc_03000472);
    /* 03000474  03000474 T rsbs r2,r2,#0x0 */
    g_cpu.R[15] = 0x03000474u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000474 = 1u;
    _cyc_03000474 = 1u;
    uint32_t _rn_03000474 = g_cpu.R[2];
    uint32_t _r_03000474;
    _r_03000474 = 0x00000000u - _rn_03000474;
    arm_set_nzcv_sub(0x00000000u, _rn_03000474, _r_03000474);
    g_cpu.R[2] = _r_03000474;
    g_cpu.R[15] = 0x03000476u;
    runtime_tick(_cyc_03000474);
    /* 03000476  03000476 T mov r9,r2 */
    g_cpu.R[15] = 0x03000476u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000476 = 1u;
    _cyc_03000476 = 1u;
    uint32_t _rm_03000476 = g_cpu.R[2];
    uint32_t _op2_03000476;
    uint32_t _co_03000476;
    _op2_03000476 = _rm_03000476;
    _co_03000476 = cpsr_c();
    uint32_t _r_03000476;
    _r_03000476 = _op2_03000476;
    g_cpu.R[9] = _r_03000476;
    g_cpu.R[15] = 0x03000478u;
    runtime_tick(_cyc_03000476);
    /* 03000478  03000478 T b 0x03000498 */
    g_cpu.R[15] = 0x03000478u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000478 = 1u;
    _cyc_03000478 = 3u;
    g_cpu.R[15] = 0x03000498u;
    runtime_tick(_cyc_03000478);
    GBARECOMP_TAIL_CALL(gf_tfunc_03000498);
    g_cpu.R[15] = 0x0300047Au;
    runtime_tick(_cyc_03000478);
    /* fall-through to 0x0300047A */
    g_cpu.R[15] = 0x0300047Au;
    runtime_dispatch(0x0300047Au);
    return;
}

/* 0x03000492  mode=thumb  end=0x03000498  branches=3 */


/* 0x03000480 thumb */
void gf_tfunc_03000480(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000480u);
    /* 03000480  03000480 T movs r0,#0x10 */
    g_cpu.R[15] = 0x03000480u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000480 = 1u;
    _cyc_03000480 = 1u;
    uint32_t _r_03000480;
    _r_03000480 = 0x00000010u;
    arm_set_nzc_logic(_r_03000480, cpsr_c());
    g_cpu.R[0] = _r_03000480;
    g_cpu.R[15] = 0x03000482u;
    runtime_tick(_cyc_03000480);
    /* 03000482  03000482 T ldr r3,[r13,#0x20] */
    g_cpu.R[15] = 0x03000482u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000482 = 1u;
    _cyc_03000482 = 2u;
    uint32_t _base_03000482 = g_cpu.R[13];
    uint32_t _off_03000482;
    _off_03000482 = 0x00000020u;
    uint32_t _ea_03000482 = _base_03000482 + _off_03000482;
    uint32_t _post_03000482 = _base_03000482 + _off_03000482;
    _cyc_03000482 += runtime_mem_cycles(_ea_03000482, 4u, 0u);
    uint32_t _v_03000482;
    { uint32_t _w = bus_read_u32(_ea_03000482 & ~3u); uint32_t _rot = (_ea_03000482 & 3u) * 8u; _v_03000482 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_03000482;
    g_cpu.R[15] = 0x03000484u;
    runtime_tick(_cyc_03000482);
    /* 03000484  03000484 T ands r0,r0,r3 */
    g_cpu.R[15] = 0x03000484u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000484 = 1u;
    _cyc_03000484 = 1u;
    uint32_t _rm_03000484 = g_cpu.R[3];
    uint32_t _op2_03000484;
    uint32_t _co_03000484;
    _op2_03000484 = _rm_03000484;
    _co_03000484 = cpsr_c();
    uint32_t _rn_03000484 = g_cpu.R[0];
    uint32_t _r_03000484;
    _r_03000484 = _rn_03000484 & _op2_03000484;
    arm_set_nzc_logic(_r_03000484, _co_03000484);
    g_cpu.R[0] = _r_03000484;
    g_cpu.R[15] = 0x03000486u;
    runtime_tick(_cyc_03000484);
    /* 03000486  03000486 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x03000486u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000486 = 1u;
    _cyc_03000486 = 1u;
    uint32_t _rn_03000486 = g_cpu.R[0];
    uint32_t _r_03000486;
    _r_03000486 = _rn_03000486 - 0x00000000u;
    arm_set_nzcv_sub(_rn_03000486, 0x00000000u, _r_03000486);
    g_cpu.R[15] = 0x03000488u;
    runtime_tick(_cyc_03000486);
    /* 03000488  03000488 T beq 0x03000492 */
    g_cpu.R[15] = 0x03000488u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000488 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_03000488 = 3u;
        g_cpu.R[15] = 0x03000492u;
        runtime_tick(_cyc_03000488);
        GBARECOMP_TAIL_CALL(gf_tfunc_03000492);
    }
    g_cpu.R[15] = 0x0300048Au;
    runtime_tick(_cyc_03000488);
    /* 0300048A  0300048a T mov r4,r10 */
    g_cpu.R[15] = 0x0300048Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300048A = 1u;
    _cyc_0300048A = 1u;
    uint32_t _rm_0300048A = g_cpu.R[10];
    uint32_t _op2_0300048A;
    uint32_t _co_0300048A;
    _op2_0300048A = _rm_0300048A;
    _co_0300048A = cpsr_c();
    uint32_t _r_0300048A;
    _r_0300048A = _op2_0300048A;
    g_cpu.R[4] = _r_0300048A;
    g_cpu.R[15] = 0x0300048Cu;
    runtime_tick(_cyc_0300048A);
    /* 0300048C  0300048c T rsbs r4,r4,#0x0 */
    g_cpu.R[15] = 0x0300048Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300048C = 1u;
    _cyc_0300048C = 1u;
    uint32_t _rn_0300048C = g_cpu.R[4];
    uint32_t _r_0300048C;
    _r_0300048C = 0x00000000u - _rn_0300048C;
    arm_set_nzcv_sub(0x00000000u, _rn_0300048C, _r_0300048C);
    g_cpu.R[4] = _r_0300048C;
    g_cpu.R[15] = 0x0300048Eu;
    runtime_tick(_cyc_0300048C);
    /* 0300048E  0300048e T mov r10,r4 */
    g_cpu.R[15] = 0x0300048Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300048E = 1u;
    _cyc_0300048E = 1u;
    uint32_t _rm_0300048E = g_cpu.R[4];
    uint32_t _op2_0300048E;
    uint32_t _co_0300048E;
    _op2_0300048E = _rm_0300048E;
    _co_0300048E = cpsr_c();
    uint32_t _r_0300048E;
    _r_0300048E = _op2_0300048E;
    g_cpu.R[10] = _r_0300048E;
    g_cpu.R[15] = 0x03000490u;
    runtime_tick(_cyc_0300048E);
    /* 03000490  03000490 T b 0x03000498 */
    g_cpu.R[15] = 0x03000490u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000490 = 1u;
    _cyc_03000490 = 3u;
    g_cpu.R[15] = 0x03000498u;
    runtime_tick(_cyc_03000490);
    GBARECOMP_TAIL_CALL(gf_tfunc_03000498);
    g_cpu.R[15] = 0x03000492u;
    runtime_tick(_cyc_03000490);
    /* fall-through to 0x03000492 */
    g_cpu.R[15] = 0x03000492u;
    runtime_dispatch(0x03000492u);
    return;
}

/* 0x03000498  mode=thumb  end=0x030004B6  branches=3 */


/* 0x03000492 thumb */
void gf_tfunc_03000492(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000492u);
    /* 03000492  03000492 T mov r6,r9 */
    g_cpu.R[15] = 0x03000492u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000492 = 1u;
    _cyc_03000492 = 1u;
    uint32_t _rm_03000492 = g_cpu.R[9];
    uint32_t _op2_03000492;
    uint32_t _co_03000492;
    _op2_03000492 = _rm_03000492;
    _co_03000492 = cpsr_c();
    uint32_t _r_03000492;
    _r_03000492 = _op2_03000492;
    g_cpu.R[6] = _r_03000492;
    g_cpu.R[15] = 0x03000494u;
    runtime_tick(_cyc_03000492);
    /* 03000494  03000494 T rsbs r6,r6,#0x0 */
    g_cpu.R[15] = 0x03000494u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000494 = 1u;
    _cyc_03000494 = 1u;
    uint32_t _rn_03000494 = g_cpu.R[6];
    uint32_t _r_03000494;
    _r_03000494 = 0x00000000u - _rn_03000494;
    arm_set_nzcv_sub(0x00000000u, _rn_03000494, _r_03000494);
    g_cpu.R[6] = _r_03000494;
    g_cpu.R[15] = 0x03000496u;
    runtime_tick(_cyc_03000494);
    /* 03000496  03000496 T mov r9,r6 */
    g_cpu.R[15] = 0x03000496u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000496 = 1u;
    _cyc_03000496 = 1u;
    uint32_t _rm_03000496 = g_cpu.R[6];
    uint32_t _op2_03000496;
    uint32_t _co_03000496;
    _op2_03000496 = _rm_03000496;
    _co_03000496 = cpsr_c();
    uint32_t _r_03000496;
    _r_03000496 = _op2_03000496;
    g_cpu.R[9] = _r_03000496;
    g_cpu.R[15] = 0x03000498u;
    runtime_tick(_cyc_03000496);
    /* fall-through to 0x03000498 */
    g_cpu.R[15] = 0x03000498u;
    runtime_dispatch(0x03000498u);
    return;
}

/* 0x030004B6  mode=thumb  end=0x030004C8  branches=2 */


/* 0x03000498 thumb */
void gf_tfunc_03000498(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000498u);
    /* 03000498  03000498 T ldr r0,[r13,#0x4] */
    g_cpu.R[15] = 0x03000498u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000498 = 1u;
    _cyc_03000498 = 2u;
    uint32_t _base_03000498 = g_cpu.R[13];
    uint32_t _off_03000498;
    _off_03000498 = 0x00000004u;
    uint32_t _ea_03000498 = _base_03000498 + _off_03000498;
    uint32_t _post_03000498 = _base_03000498 + _off_03000498;
    _cyc_03000498 += runtime_mem_cycles(_ea_03000498, 4u, 0u);
    uint32_t _v_03000498;
    { uint32_t _w = bus_read_u32(_ea_03000498 & ~3u); uint32_t _rot = (_ea_03000498 & 3u) * 8u; _v_03000498 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_03000498;
    g_cpu.R[15] = 0x0300049Au;
    runtime_tick(_cyc_03000498);
    /* 0300049A  0300049a T cmps r0,#0x0 */
    g_cpu.R[15] = 0x0300049Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300049A = 1u;
    _cyc_0300049A = 1u;
    uint32_t _rn_0300049A = g_cpu.R[0];
    uint32_t _r_0300049A;
    _r_0300049A = _rn_0300049A - 0x00000000u;
    arm_set_nzcv_sub(_rn_0300049A, 0x00000000u, _r_0300049A);
    g_cpu.R[15] = 0x0300049Cu;
    runtime_tick(_cyc_0300049A);
    /* 0300049C  0300049c T blt 0x030004b6 */
    g_cpu.R[15] = 0x0300049Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300049C = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_0300049C = 3u;
        g_cpu.R[15] = 0x030004B6u;
        runtime_tick(_cyc_0300049C);
        GBARECOMP_TAIL_CALL(gf_tfunc_030004B6);
    }
    g_cpu.R[15] = 0x0300049Eu;
    runtime_tick(_cyc_0300049C);
    /* 0300049E  0300049e T movs r0,#0x20 */
    g_cpu.R[15] = 0x0300049Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300049E = 1u;
    _cyc_0300049E = 1u;
    uint32_t _r_0300049E;
    _r_0300049E = 0x00000020u;
    arm_set_nzc_logic(_r_0300049E, cpsr_c());
    g_cpu.R[0] = _r_0300049E;
    g_cpu.R[15] = 0x030004A0u;
    runtime_tick(_cyc_0300049E);
    /* 030004A0  030004a0 T ldr r1,[r13,#0x20] */
    g_cpu.R[15] = 0x030004A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004A0 = 1u;
    _cyc_030004A0 = 2u;
    uint32_t _base_030004A0 = g_cpu.R[13];
    uint32_t _off_030004A0;
    _off_030004A0 = 0x00000020u;
    uint32_t _ea_030004A0 = _base_030004A0 + _off_030004A0;
    uint32_t _post_030004A0 = _base_030004A0 + _off_030004A0;
    _cyc_030004A0 += runtime_mem_cycles(_ea_030004A0, 4u, 0u);
    uint32_t _v_030004A0;
    { uint32_t _w = bus_read_u32(_ea_030004A0 & ~3u); uint32_t _rot = (_ea_030004A0 & 3u) * 8u; _v_030004A0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_030004A0;
    g_cpu.R[15] = 0x030004A2u;
    runtime_tick(_cyc_030004A0);
    /* 030004A2  030004a2 T ands r0,r0,r1 */
    g_cpu.R[15] = 0x030004A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004A2 = 1u;
    _cyc_030004A2 = 1u;
    uint32_t _rm_030004A2 = g_cpu.R[1];
    uint32_t _op2_030004A2;
    uint32_t _co_030004A2;
    _op2_030004A2 = _rm_030004A2;
    _co_030004A2 = cpsr_c();
    uint32_t _rn_030004A2 = g_cpu.R[0];
    uint32_t _r_030004A2;
    _r_030004A2 = _rn_030004A2 & _op2_030004A2;
    arm_set_nzc_logic(_r_030004A2, _co_030004A2);
    g_cpu.R[0] = _r_030004A2;
    g_cpu.R[15] = 0x030004A4u;
    runtime_tick(_cyc_030004A2);
    /* 030004A4  030004a4 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x030004A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004A4 = 1u;
    _cyc_030004A4 = 1u;
    uint32_t _rn_030004A4 = g_cpu.R[0];
    uint32_t _r_030004A4;
    _r_030004A4 = _rn_030004A4 - 0x00000000u;
    arm_set_nzcv_sub(_rn_030004A4, 0x00000000u, _r_030004A4);
    g_cpu.R[15] = 0x030004A6u;
    runtime_tick(_cyc_030004A4);
    /* 030004A6  030004a6 T beq 0x030004ce */
    g_cpu.R[15] = 0x030004A6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004A6 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_030004A6 = 3u;
        g_cpu.R[15] = 0x030004CEu;
        runtime_tick(_cyc_030004A6);
        GBARECOMP_TAIL_CALL(gf_tfunc_030004CE);
    }
    g_cpu.R[15] = 0x030004A8u;
    runtime_tick(_cyc_030004A6);
    /* 030004A8  030004a8 T ldr r2,[r13,#0x4] */
    g_cpu.R[15] = 0x030004A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004A8 = 1u;
    _cyc_030004A8 = 2u;
    uint32_t _base_030004A8 = g_cpu.R[13];
    uint32_t _off_030004A8;
    _off_030004A8 = 0x00000004u;
    uint32_t _ea_030004A8 = _base_030004A8 + _off_030004A8;
    uint32_t _post_030004A8 = _base_030004A8 + _off_030004A8;
    _cyc_030004A8 += runtime_mem_cycles(_ea_030004A8, 4u, 0u);
    uint32_t _v_030004A8;
    { uint32_t _w = bus_read_u32(_ea_030004A8 & ~3u); uint32_t _rot = (_ea_030004A8 & 3u) * 8u; _v_030004A8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_030004A8;
    g_cpu.R[15] = 0x030004AAu;
    runtime_tick(_cyc_030004A8);
    /* 030004AA  030004aa T rsbs r2,r2,#0x0 */
    g_cpu.R[15] = 0x030004AAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004AA = 1u;
    _cyc_030004AA = 1u;
    uint32_t _rn_030004AA = g_cpu.R[2];
    uint32_t _r_030004AA;
    _r_030004AA = 0x00000000u - _rn_030004AA;
    arm_set_nzcv_sub(0x00000000u, _rn_030004AA, _r_030004AA);
    g_cpu.R[2] = _r_030004AA;
    g_cpu.R[15] = 0x030004ACu;
    runtime_tick(_cyc_030004AA);
    /* 030004AC  030004ac T str r2,[r13,#0x4] */
    g_cpu.R[15] = 0x030004ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004AC = 1u;
    _cyc_030004AC = 1u;
    uint32_t _base_030004AC = g_cpu.R[13];
    uint32_t _off_030004AC;
    _off_030004AC = 0x00000004u;
    uint32_t _ea_030004AC = _base_030004AC + _off_030004AC;
    uint32_t _post_030004AC = _base_030004AC + _off_030004AC;
    _cyc_030004AC += runtime_mem_cycles(_ea_030004AC, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030004ACu, _ea_030004AC & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_030004AC & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x030004AEu;
    runtime_tick(_cyc_030004AC);
    /* 030004AE  030004ae T mov r3,r9 */
    g_cpu.R[15] = 0x030004AEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004AE = 1u;
    _cyc_030004AE = 1u;
    uint32_t _rm_030004AE = g_cpu.R[9];
    uint32_t _op2_030004AE;
    uint32_t _co_030004AE;
    _op2_030004AE = _rm_030004AE;
    _co_030004AE = cpsr_c();
    uint32_t _r_030004AE;
    _r_030004AE = _op2_030004AE;
    g_cpu.R[3] = _r_030004AE;
    g_cpu.R[15] = 0x030004B0u;
    runtime_tick(_cyc_030004AE);
    /* 030004B0  030004b0 T rsbs r3,r3,#0x0 */
    g_cpu.R[15] = 0x030004B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004B0 = 1u;
    _cyc_030004B0 = 1u;
    uint32_t _rn_030004B0 = g_cpu.R[3];
    uint32_t _r_030004B0;
    _r_030004B0 = 0x00000000u - _rn_030004B0;
    arm_set_nzcv_sub(0x00000000u, _rn_030004B0, _r_030004B0);
    g_cpu.R[3] = _r_030004B0;
    g_cpu.R[15] = 0x030004B2u;
    runtime_tick(_cyc_030004B0);
    /* 030004B2  030004b2 T mov r9,r3 */
    g_cpu.R[15] = 0x030004B2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004B2 = 1u;
    _cyc_030004B2 = 1u;
    uint32_t _rm_030004B2 = g_cpu.R[3];
    uint32_t _op2_030004B2;
    uint32_t _co_030004B2;
    _op2_030004B2 = _rm_030004B2;
    _co_030004B2 = cpsr_c();
    uint32_t _r_030004B2;
    _r_030004B2 = _op2_030004B2;
    g_cpu.R[9] = _r_030004B2;
    g_cpu.R[15] = 0x030004B4u;
    runtime_tick(_cyc_030004B2);
    /* 030004B4  030004b4 T b 0x030004ce */
    g_cpu.R[15] = 0x030004B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004B4 = 1u;
    _cyc_030004B4 = 3u;
    g_cpu.R[15] = 0x030004CEu;
    runtime_tick(_cyc_030004B4);
    GBARECOMP_TAIL_CALL(gf_tfunc_030004CE);
    g_cpu.R[15] = 0x030004B6u;
    runtime_tick(_cyc_030004B4);
    /* fall-through to 0x030004B6 */
    g_cpu.R[15] = 0x030004B6u;
    runtime_dispatch(0x030004B6u);
    return;
}

/* 0x030004C8  mode=thumb  end=0x030004CE  branches=12 */


/* 0x030004B6 thumb */
void gf_tfunc_030004B6(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030004B6u);
    /* 030004B6  030004b6 T movs r0,#0x20 */
    g_cpu.R[15] = 0x030004B6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004B6 = 1u;
    _cyc_030004B6 = 1u;
    uint32_t _r_030004B6;
    _r_030004B6 = 0x00000020u;
    arm_set_nzc_logic(_r_030004B6, cpsr_c());
    g_cpu.R[0] = _r_030004B6;
    g_cpu.R[15] = 0x030004B8u;
    runtime_tick(_cyc_030004B6);
    /* 030004B8  030004b8 T ldr r4,[r13,#0x20] */
    g_cpu.R[15] = 0x030004B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004B8 = 1u;
    _cyc_030004B8 = 2u;
    uint32_t _base_030004B8 = g_cpu.R[13];
    uint32_t _off_030004B8;
    _off_030004B8 = 0x00000020u;
    uint32_t _ea_030004B8 = _base_030004B8 + _off_030004B8;
    uint32_t _post_030004B8 = _base_030004B8 + _off_030004B8;
    _cyc_030004B8 += runtime_mem_cycles(_ea_030004B8, 4u, 0u);
    uint32_t _v_030004B8;
    { uint32_t _w = bus_read_u32(_ea_030004B8 & ~3u); uint32_t _rot = (_ea_030004B8 & 3u) * 8u; _v_030004B8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[4] = _v_030004B8;
    g_cpu.R[15] = 0x030004BAu;
    runtime_tick(_cyc_030004B8);
    /* 030004BA  030004ba T ands r0,r0,r4 */
    g_cpu.R[15] = 0x030004BAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004BA = 1u;
    _cyc_030004BA = 1u;
    uint32_t _rm_030004BA = g_cpu.R[4];
    uint32_t _op2_030004BA;
    uint32_t _co_030004BA;
    _op2_030004BA = _rm_030004BA;
    _co_030004BA = cpsr_c();
    uint32_t _rn_030004BA = g_cpu.R[0];
    uint32_t _r_030004BA;
    _r_030004BA = _rn_030004BA & _op2_030004BA;
    arm_set_nzc_logic(_r_030004BA, _co_030004BA);
    g_cpu.R[0] = _r_030004BA;
    g_cpu.R[15] = 0x030004BCu;
    runtime_tick(_cyc_030004BA);
    /* 030004BC  030004bc T cmps r0,#0x0 */
    g_cpu.R[15] = 0x030004BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004BC = 1u;
    _cyc_030004BC = 1u;
    uint32_t _rn_030004BC = g_cpu.R[0];
    uint32_t _r_030004BC;
    _r_030004BC = _rn_030004BC - 0x00000000u;
    arm_set_nzcv_sub(_rn_030004BC, 0x00000000u, _r_030004BC);
    g_cpu.R[15] = 0x030004BEu;
    runtime_tick(_cyc_030004BC);
    /* 030004BE  030004be T beq 0x030004c8 */
    g_cpu.R[15] = 0x030004BEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004BE = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_030004BE = 3u;
        g_cpu.R[15] = 0x030004C8u;
        runtime_tick(_cyc_030004BE);
        GBARECOMP_TAIL_CALL(gf_tfunc_030004C8);
    }
    g_cpu.R[15] = 0x030004C0u;
    runtime_tick(_cyc_030004BE);
    /* 030004C0  030004c0 T ldr r6,[r13,#0x4] */
    g_cpu.R[15] = 0x030004C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004C0 = 1u;
    _cyc_030004C0 = 2u;
    uint32_t _base_030004C0 = g_cpu.R[13];
    uint32_t _off_030004C0;
    _off_030004C0 = 0x00000004u;
    uint32_t _ea_030004C0 = _base_030004C0 + _off_030004C0;
    uint32_t _post_030004C0 = _base_030004C0 + _off_030004C0;
    _cyc_030004C0 += runtime_mem_cycles(_ea_030004C0, 4u, 0u);
    uint32_t _v_030004C0;
    { uint32_t _w = bus_read_u32(_ea_030004C0 & ~3u); uint32_t _rot = (_ea_030004C0 & 3u) * 8u; _v_030004C0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[6] = _v_030004C0;
    g_cpu.R[15] = 0x030004C2u;
    runtime_tick(_cyc_030004C0);
    /* 030004C2  030004c2 T rsbs r6,r6,#0x0 */
    g_cpu.R[15] = 0x030004C2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004C2 = 1u;
    _cyc_030004C2 = 1u;
    uint32_t _rn_030004C2 = g_cpu.R[6];
    uint32_t _r_030004C2;
    _r_030004C2 = 0x00000000u - _rn_030004C2;
    arm_set_nzcv_sub(0x00000000u, _rn_030004C2, _r_030004C2);
    g_cpu.R[6] = _r_030004C2;
    g_cpu.R[15] = 0x030004C4u;
    runtime_tick(_cyc_030004C2);
    /* 030004C4  030004c4 T str r6,[r13,#0x4] */
    g_cpu.R[15] = 0x030004C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004C4 = 1u;
    _cyc_030004C4 = 1u;
    uint32_t _base_030004C4 = g_cpu.R[13];
    uint32_t _off_030004C4;
    _off_030004C4 = 0x00000004u;
    uint32_t _ea_030004C4 = _base_030004C4 + _off_030004C4;
    uint32_t _post_030004C4 = _base_030004C4 + _off_030004C4;
    _cyc_030004C4 += runtime_mem_cycles(_ea_030004C4, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030004C4u, _ea_030004C4 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_ea_030004C4 & ~3u, g_cpu.R[6]);
    g_cpu.R[15] = 0x030004C6u;
    runtime_tick(_cyc_030004C4);
    /* 030004C6  030004c6 T b 0x030004ce */
    g_cpu.R[15] = 0x030004C6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004C6 = 1u;
    _cyc_030004C6 = 3u;
    g_cpu.R[15] = 0x030004CEu;
    runtime_tick(_cyc_030004C6);
    GBARECOMP_TAIL_CALL(gf_tfunc_030004CE);
    g_cpu.R[15] = 0x030004C8u;
    runtime_tick(_cyc_030004C6);
    /* fall-through to 0x030004C8 */
    g_cpu.R[15] = 0x030004C8u;
    runtime_dispatch(0x030004C8u);
    return;
}

/* 0x030004DC  mode=thumb  end=0x030004E4  branches=8 */


/* 0x030004C8 thumb */
void gf_tfunc_030004C8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030004C8u);
    /* 030004C8  030004c8 T mov r0,r9 */
    g_cpu.R[15] = 0x030004C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004C8 = 1u;
    _cyc_030004C8 = 1u;
    uint32_t _rm_030004C8 = g_cpu.R[9];
    uint32_t _op2_030004C8;
    uint32_t _co_030004C8;
    _op2_030004C8 = _rm_030004C8;
    _co_030004C8 = cpsr_c();
    uint32_t _r_030004C8;
    _r_030004C8 = _op2_030004C8;
    g_cpu.R[0] = _r_030004C8;
    g_cpu.R[15] = 0x030004CAu;
    runtime_tick(_cyc_030004C8);
    /* 030004CA  030004ca T rsbs r0,r0,#0x0 */
    g_cpu.R[15] = 0x030004CAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004CA = 1u;
    _cyc_030004CA = 1u;
    uint32_t _rn_030004CA = g_cpu.R[0];
    uint32_t _r_030004CA;
    _r_030004CA = 0x00000000u - _rn_030004CA;
    arm_set_nzcv_sub(0x00000000u, _rn_030004CA, _r_030004CA);
    g_cpu.R[0] = _r_030004CA;
    g_cpu.R[15] = 0x030004CCu;
    runtime_tick(_cyc_030004CA);
    /* 030004CC  030004cc T mov r9,r0 */
    g_cpu.R[15] = 0x030004CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004CC = 1u;
    _cyc_030004CC = 1u;
    uint32_t _rm_030004CC = g_cpu.R[0];
    uint32_t _op2_030004CC;
    uint32_t _co_030004CC;
    _op2_030004CC = _rm_030004CC;
    _co_030004CC = cpsr_c();
    uint32_t _r_030004CC;
    _r_030004CC = _op2_030004CC;
    g_cpu.R[9] = _r_030004CC;
    g_cpu.R[15] = 0x030004CEu;
    runtime_tick(_cyc_030004CC);
    /* fall-through to 0x030004CE */
    g_cpu.R[15] = 0x030004CEu;
    runtime_dispatch(0x030004CEu);
    return;
}

/* 0x030004CE  mode=thumb  end=0x030004D4  branches=12 */


/* 0x030004CE thumb */
void gf_tfunc_030004CE(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030004CEu);
    /* 030004CE  030004ce T mov r0,r10 */
    g_cpu.R[15] = 0x030004CEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004CE = 1u;
    _cyc_030004CE = 1u;
    uint32_t _rm_030004CE = g_cpu.R[10];
    uint32_t _op2_030004CE;
    uint32_t _co_030004CE;
    _op2_030004CE = _rm_030004CE;
    _co_030004CE = cpsr_c();
    uint32_t _r_030004CE;
    _r_030004CE = _op2_030004CE;
    g_cpu.R[0] = _r_030004CE;
    g_cpu.R[15] = 0x030004D0u;
    runtime_tick(_cyc_030004CE);
    /* 030004D0  030004d0 T bl.hi 0x02fff4d4 */
    g_cpu.R[15] = 0x030004D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004D0 = 1u;
    _cyc_030004D0 = 1u;
    g_cpu.R[14] = 0x02FFF4D4u;
    g_cpu.R[15] = 0x030004D2u;
    runtime_tick(_cyc_030004D0);
    /* 030004D2  030004d2 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x030004D2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004D2 = 1u;
    _cyc_030004D2 = 3u;
    uint32_t _blt_030004D2 = (g_cpu.R[14] + 0x00000D04u) & ~1u;
    g_cpu.R[14] = 0x030004D5u;
    g_cpu.R[15] = _blt_030004D2;
    runtime_call_push_return(0x030004D4u);
    runtime_tick(_cyc_030004D2);
    _cyc_030004D2 = 0u;
    runtime_dispatch(_blt_030004D2);
    if (g_cpu.R[15] != 0x030004D4u) { runtime_call_cancel_return(0x030004D4u); return; }
    g_cpu.R[15] = 0x030004D4u;
    runtime_tick(_cyc_030004D2);
    /* fall-through to 0x030004D4 */
    g_cpu.R[15] = 0x030004D4u;
    runtime_dispatch(0x030004D4u);
    return;
}

/* 0x030004D4  mode=thumb  end=0x030004DC  branches=10 */


/* 0x030004D4 thumb */
void gf_tfunc_030004D4(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030004D4u);
    /* 030004D4  030004d4 T str r0,[r13,#0x10] */
    g_cpu.R[15] = 0x030004D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004D4 = 1u;
    _cyc_030004D4 = 1u;
    uint32_t _base_030004D4 = g_cpu.R[13];
    uint32_t _off_030004D4;
    _off_030004D4 = 0x00000010u;
    uint32_t _ea_030004D4 = _base_030004D4 + _off_030004D4;
    uint32_t _post_030004D4 = _base_030004D4 + _off_030004D4;
    _cyc_030004D4 += runtime_mem_cycles(_ea_030004D4, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030004D4u, _ea_030004D4 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_030004D4 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x030004D6u;
    runtime_tick(_cyc_030004D4);
    /* 030004D6  030004d6 T ldr r0,[r13,#0x4] */
    g_cpu.R[15] = 0x030004D6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004D6 = 1u;
    _cyc_030004D6 = 2u;
    uint32_t _base_030004D6 = g_cpu.R[13];
    uint32_t _off_030004D6;
    _off_030004D6 = 0x00000004u;
    uint32_t _ea_030004D6 = _base_030004D6 + _off_030004D6;
    uint32_t _post_030004D6 = _base_030004D6 + _off_030004D6;
    _cyc_030004D6 += runtime_mem_cycles(_ea_030004D6, 4u, 0u);
    uint32_t _v_030004D6;
    { uint32_t _w = bus_read_u32(_ea_030004D6 & ~3u); uint32_t _rot = (_ea_030004D6 & 3u) * 8u; _v_030004D6 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_030004D6;
    g_cpu.R[15] = 0x030004D8u;
    runtime_tick(_cyc_030004D6);
    /* 030004D8  030004d8 T bl.hi 0x02fff4dc */
    g_cpu.R[15] = 0x030004D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004D8 = 1u;
    _cyc_030004D8 = 1u;
    g_cpu.R[14] = 0x02FFF4DCu;
    g_cpu.R[15] = 0x030004DAu;
    runtime_tick(_cyc_030004D8);
    /* 030004DA  030004da T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x030004DAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004DA = 1u;
    _cyc_030004DA = 3u;
    uint32_t _blt_030004DA = (g_cpu.R[14] + 0x00000CFCu) & ~1u;
    g_cpu.R[14] = 0x030004DDu;
    g_cpu.R[15] = _blt_030004DA;
    runtime_call_push_return(0x030004DCu);
    runtime_tick(_cyc_030004DA);
    _cyc_030004DA = 0u;
    runtime_dispatch(_blt_030004DA);
    if (g_cpu.R[15] != 0x030004DCu) { runtime_call_cancel_return(0x030004DCu); return; }
    g_cpu.R[15] = 0x030004DCu;
    runtime_tick(_cyc_030004DA);
    /* fall-through to 0x030004DC */
    g_cpu.R[15] = 0x030004DCu;
    runtime_dispatch(0x030004DCu);
    return;
}

/* 0x030004EA  mode=thumb  end=0x030004F8  branches=5 */


/* 0x030004DC thumb */
void gf_tfunc_030004DC(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030004DCu);
    /* 030004DC  030004dc T str r0,[r13,#0x14] */
    g_cpu.R[15] = 0x030004DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004DC = 1u;
    _cyc_030004DC = 1u;
    uint32_t _base_030004DC = g_cpu.R[13];
    uint32_t _off_030004DC;
    _off_030004DC = 0x00000014u;
    uint32_t _ea_030004DC = _base_030004DC + _off_030004DC;
    uint32_t _post_030004DC = _base_030004DC + _off_030004DC;
    _cyc_030004DC += runtime_mem_cycles(_ea_030004DC, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030004DCu, _ea_030004DC & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_030004DC & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x030004DEu;
    runtime_tick(_cyc_030004DC);
    /* 030004DE  030004de T mov r0,r9 */
    g_cpu.R[15] = 0x030004DEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004DE = 1u;
    _cyc_030004DE = 1u;
    uint32_t _rm_030004DE = g_cpu.R[9];
    uint32_t _op2_030004DE;
    uint32_t _co_030004DE;
    _op2_030004DE = _rm_030004DE;
    _co_030004DE = cpsr_c();
    uint32_t _r_030004DE;
    _r_030004DE = _op2_030004DE;
    g_cpu.R[0] = _r_030004DE;
    g_cpu.R[15] = 0x030004E0u;
    runtime_tick(_cyc_030004DE);
    /* 030004E0  030004e0 T bl.hi 0x030004e4 */
    g_cpu.R[15] = 0x030004E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004E0 = 1u;
    _cyc_030004E0 = 1u;
    g_cpu.R[14] = 0x030004E4u;
    g_cpu.R[15] = 0x030004E2u;
    runtime_tick(_cyc_030004E0);
    /* 030004E2  030004e2 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x030004E2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004E2 = 1u;
    _cyc_030004E2 = 3u;
    uint32_t _blt_030004E2 = (g_cpu.R[14] + 0x000002B0u) & ~1u;
    g_cpu.R[14] = 0x030004E5u;
    g_cpu.R[15] = _blt_030004E2;
    runtime_call_push_return(0x030004E4u);
    runtime_tick(_cyc_030004E2);
    _cyc_030004E2 = 0u;
    runtime_dispatch(_blt_030004E2);
    if (g_cpu.R[15] != 0x030004E4u) { runtime_call_cancel_return(0x030004E4u); return; }
    g_cpu.R[15] = 0x030004E4u;
    runtime_tick(_cyc_030004E2);
    /* fall-through to 0x030004E4 */
    g_cpu.R[15] = 0x030004E4u;
    runtime_dispatch(0x030004E4u);
    return;
}

/* 0x030004E4  mode=thumb  end=0x030004EA  branches=6 */


/* 0x030004E4 thumb */
void gf_tfunc_030004E4(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030004E4u);
    /* 030004E4  030004e4 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x030004E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004E4 = 1u;
    _cyc_030004E4 = 1u;
    uint32_t _rn_030004E4 = g_cpu.R[0];
    uint32_t _r_030004E4;
    _r_030004E4 = _rn_030004E4 - 0x00000000u;
    arm_set_nzcv_sub(_rn_030004E4, 0x00000000u, _r_030004E4);
    g_cpu.R[15] = 0x030004E6u;
    runtime_tick(_cyc_030004E4);
    /* 030004E6  030004e6 T bge 0x030004ea */
    g_cpu.R[15] = 0x030004E6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004E6 = 1u;
    if (arm_cond_passes(0xau)) {
        _cyc_030004E6 = 3u;
        g_cpu.R[15] = 0x030004EAu;
        runtime_tick(_cyc_030004E6);
        GBARECOMP_TAIL_CALL(gf_tfunc_030004EA);
    }
    g_cpu.R[15] = 0x030004E8u;
    runtime_tick(_cyc_030004E6);
    /* 030004E8  030004e8 T adds r0,r0,#0xff */
    g_cpu.R[15] = 0x030004E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004E8 = 1u;
    _cyc_030004E8 = 1u;
    uint32_t _rn_030004E8 = g_cpu.R[0];
    uint32_t _r_030004E8;
    _r_030004E8 = _rn_030004E8 + 0x000000FFu;
    arm_set_nzcv_add(_rn_030004E8, 0x000000FFu, _r_030004E8);
    g_cpu.R[0] = _r_030004E8;
    g_cpu.R[15] = 0x030004EAu;
    runtime_tick(_cyc_030004E8);
    /* fall-through to 0x030004EA */
    g_cpu.R[15] = 0x030004EAu;
    runtime_dispatch(0x030004EAu);
    return;
}

/* 0x030004FE  mode=thumb  end=0x03000502  branches=2 */


/* 0x030004EA thumb */
void gf_tfunc_030004EA(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030004EAu);
    /* 030004EA  030004ea T movs r0,r0,asr #8 */
    g_cpu.R[15] = 0x030004EAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004EA = 1u;
    _cyc_030004EA = 1u;
    uint32_t _rm_030004EA = g_cpu.R[0];
    uint32_t _op2_030004EA;
    uint32_t _co_030004EA;
    _op2_030004EA = (uint32_t)((int32_t)_rm_030004EA >> 8);
    _co_030004EA = (_rm_030004EA >> 7) & 1u;
    uint32_t _r_030004EA;
    _r_030004EA = _op2_030004EA;
    arm_set_nzc_logic(_r_030004EA, _co_030004EA);
    g_cpu.R[0] = _r_030004EA;
    g_cpu.R[15] = 0x030004ECu;
    runtime_tick(_cyc_030004EA);
    /* 030004EC  030004ec T str r0,[r13,#0x8] */
    g_cpu.R[15] = 0x030004ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004EC = 1u;
    _cyc_030004EC = 1u;
    uint32_t _base_030004EC = g_cpu.R[13];
    uint32_t _off_030004EC;
    _off_030004EC = 0x00000008u;
    uint32_t _ea_030004EC = _base_030004EC + _off_030004EC;
    uint32_t _post_030004EC = _base_030004EC + _off_030004EC;
    _cyc_030004EC += runtime_mem_cycles(_ea_030004EC, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030004ECu, _ea_030004EC & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_030004EC & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x030004EEu;
    runtime_tick(_cyc_030004EC);
    /* 030004EE  030004ee T movs r0,#0x80 */
    g_cpu.R[15] = 0x030004EEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004EE = 1u;
    _cyc_030004EE = 1u;
    uint32_t _r_030004EE;
    _r_030004EE = 0x00000080u;
    arm_set_nzc_logic(_r_030004EE, cpsr_c());
    g_cpu.R[0] = _r_030004EE;
    g_cpu.R[15] = 0x030004F0u;
    runtime_tick(_cyc_030004EE);
    /* 030004F0  030004f0 T movs r0,r0,lsl #7 */
    g_cpu.R[15] = 0x030004F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004F0 = 1u;
    _cyc_030004F0 = 1u;
    uint32_t _rm_030004F0 = g_cpu.R[0];
    uint32_t _op2_030004F0;
    uint32_t _co_030004F0;
    _op2_030004F0 = _rm_030004F0 << 7;
    _co_030004F0 = (_rm_030004F0 >> 25) & 1u;
    uint32_t _r_030004F0;
    _r_030004F0 = _op2_030004F0;
    arm_set_nzc_logic(_r_030004F0, _co_030004F0);
    g_cpu.R[0] = _r_030004F0;
    g_cpu.R[15] = 0x030004F2u;
    runtime_tick(_cyc_030004F0);
    /* 030004F2  030004f2 T add r0,r0,r9 */
    g_cpu.R[15] = 0x030004F2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004F2 = 1u;
    _cyc_030004F2 = 1u;
    uint32_t _rm_030004F2 = g_cpu.R[9];
    uint32_t _op2_030004F2;
    uint32_t _co_030004F2;
    _op2_030004F2 = _rm_030004F2;
    _co_030004F2 = cpsr_c();
    uint32_t _rn_030004F2 = g_cpu.R[0];
    uint32_t _r_030004F2;
    _r_030004F2 = _rn_030004F2 + _op2_030004F2;
    g_cpu.R[0] = _r_030004F2;
    g_cpu.R[15] = 0x030004F4u;
    runtime_tick(_cyc_030004F2);
    /* 030004F4  030004f4 T bl.hi 0x030004f8 */
    g_cpu.R[15] = 0x030004F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004F4 = 1u;
    _cyc_030004F4 = 1u;
    g_cpu.R[14] = 0x030004F8u;
    g_cpu.R[15] = 0x030004F6u;
    runtime_tick(_cyc_030004F4);
    /* 030004F6  030004f6 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x030004F6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004F6 = 1u;
    _cyc_030004F6 = 3u;
    uint32_t _blt_030004F6 = (g_cpu.R[14] + 0x0000029Cu) & ~1u;
    g_cpu.R[14] = 0x030004F9u;
    g_cpu.R[15] = _blt_030004F6;
    runtime_call_push_return(0x030004F8u);
    runtime_tick(_cyc_030004F6);
    _cyc_030004F6 = 0u;
    runtime_dispatch(_blt_030004F6);
    if (g_cpu.R[15] != 0x030004F8u) { runtime_call_cancel_return(0x030004F8u); return; }
    g_cpu.R[15] = 0x030004F8u;
    runtime_tick(_cyc_030004F6);
    /* fall-through to 0x030004F8 */
    g_cpu.R[15] = 0x030004F8u;
    runtime_dispatch(0x030004F8u);
    return;
}

/* 0x030004F8  mode=thumb  end=0x030004FE  branches=3 */


/* 0x030004F8 thumb */
void gf_tfunc_030004F8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030004F8u);
    /* 030004F8  030004f8 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x030004F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004F8 = 1u;
    _cyc_030004F8 = 1u;
    uint32_t _rn_030004F8 = g_cpu.R[0];
    uint32_t _r_030004F8;
    _r_030004F8 = _rn_030004F8 - 0x00000000u;
    arm_set_nzcv_sub(_rn_030004F8, 0x00000000u, _r_030004F8);
    g_cpu.R[15] = 0x030004FAu;
    runtime_tick(_cyc_030004F8);
    /* 030004FA  030004fa T bge 0x030004fe */
    g_cpu.R[15] = 0x030004FAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004FA = 1u;
    if (arm_cond_passes(0xau)) {
        _cyc_030004FA = 3u;
        g_cpu.R[15] = 0x030004FEu;
        runtime_tick(_cyc_030004FA);
        GBARECOMP_TAIL_CALL(gf_tfunc_030004FE);
    }
    g_cpu.R[15] = 0x030004FCu;
    runtime_tick(_cyc_030004FA);
    /* 030004FC  030004fc T adds r0,r0,#0xff */
    g_cpu.R[15] = 0x030004FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004FC = 1u;
    _cyc_030004FC = 1u;
    uint32_t _rn_030004FC = g_cpu.R[0];
    uint32_t _r_030004FC;
    _r_030004FC = _rn_030004FC + 0x000000FFu;
    arm_set_nzcv_add(_rn_030004FC, 0x000000FFu, _r_030004FC);
    g_cpu.R[0] = _r_030004FC;
    g_cpu.R[15] = 0x030004FEu;
    runtime_tick(_cyc_030004FC);
    /* fall-through to 0x030004FE */
    g_cpu.R[15] = 0x030004FEu;
    runtime_dispatch(0x030004FEu);
    return;
}

/* 0x03000502  mode=thumb  end=0x03000514  branches=2 */


/* 0x030004FE thumb */
void gf_tfunc_030004FE(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030004FEu);
    /* 030004FE  030004fe T movs r0,r0,asr #8 */
    g_cpu.R[15] = 0x030004FEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030004FE = 1u;
    _cyc_030004FE = 1u;
    uint32_t _rm_030004FE = g_cpu.R[0];
    uint32_t _op2_030004FE;
    uint32_t _co_030004FE;
    _op2_030004FE = (uint32_t)((int32_t)_rm_030004FE >> 8);
    _co_030004FE = (_rm_030004FE >> 7) & 1u;
    uint32_t _r_030004FE;
    _r_030004FE = _op2_030004FE;
    arm_set_nzc_logic(_r_030004FE, _co_030004FE);
    g_cpu.R[0] = _r_030004FE;
    g_cpu.R[15] = 0x03000500u;
    runtime_tick(_cyc_030004FE);
    /* 03000500  03000500 T str r0,[r13,#0xc] */
    g_cpu.R[15] = 0x03000500u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000500 = 1u;
    _cyc_03000500 = 1u;
    uint32_t _base_03000500 = g_cpu.R[13];
    uint32_t _off_03000500;
    _off_03000500 = 0x0000000Cu;
    uint32_t _ea_03000500 = _base_03000500 + _off_03000500;
    uint32_t _post_03000500 = _base_03000500 + _off_03000500;
    _cyc_03000500 += runtime_mem_cycles(_ea_03000500, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000500u, _ea_03000500 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_03000500 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x03000502u;
    runtime_tick(_cyc_03000500);
    /* fall-through to 0x03000502 */
    g_cpu.R[15] = 0x03000502u;
    runtime_dispatch(0x03000502u);
    return;
}

/* 0x03000514  mode=thumb  end=0x03000546  branches=2 */


/* 0x03000502 thumb */
void gf_tfunc_03000502(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000502u);
    /* 03000502  03000502 T mov r1,r8 */
    g_cpu.R[15] = 0x03000502u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000502 = 1u;
    _cyc_03000502 = 1u;
    uint32_t _rm_03000502 = g_cpu.R[8];
    uint32_t _op2_03000502;
    uint32_t _co_03000502;
    _op2_03000502 = _rm_03000502;
    _co_03000502 = cpsr_c();
    uint32_t _r_03000502;
    _r_03000502 = _op2_03000502;
    g_cpu.R[1] = _r_03000502;
    g_cpu.R[15] = 0x03000504u;
    runtime_tick(_cyc_03000502);
    /* 03000504  03000504 T ldrh r0,[r1,#0x28] */
    g_cpu.R[15] = 0x03000504u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000504 = 1u;
    _cyc_03000504 = 2u;
    uint32_t _base_03000504 = g_cpu.R[1];
    uint32_t _off_03000504;
    _off_03000504 = 0x00000028u;
    uint32_t _ea_03000504 = _base_03000504 + _off_03000504;
    uint32_t _post_03000504 = _base_03000504 + _off_03000504;
    _cyc_03000504 += runtime_mem_cycles(_ea_03000504, 2u, 0u);
    uint32_t _v_03000504;
    { uint32_t _h = bus_read_u16(_ea_03000504 & ~1u); if (_ea_03000504 & 1u) _v_03000504 = ((_h >> 8) | (_h << 24)); else _v_03000504 = _h; }
    g_cpu.R[0] = _v_03000504;
    g_cpu.R[15] = 0x03000506u;
    runtime_tick(_cyc_03000504);
    /* 03000506  03000506 T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x03000506u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000506 = 1u;
    _cyc_03000506 = 1u;
    uint32_t _rm_03000506 = g_cpu.R[0];
    uint32_t _op2_03000506;
    uint32_t _co_03000506;
    _op2_03000506 = _rm_03000506 << 3;
    _co_03000506 = (_rm_03000506 >> 29) & 1u;
    uint32_t _r_03000506;
    _r_03000506 = _op2_03000506;
    arm_set_nzc_logic(_r_03000506, _co_03000506);
    g_cpu.R[0] = _r_03000506;
    g_cpu.R[15] = 0x03000508u;
    runtime_tick(_cyc_03000506);
    /* 03000508  03000508 T ldr r1,[r1,#0x24] */
    g_cpu.R[15] = 0x03000508u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000508 = 1u;
    _cyc_03000508 = 2u;
    uint32_t _base_03000508 = g_cpu.R[1];
    uint32_t _off_03000508;
    _off_03000508 = 0x00000024u;
    uint32_t _ea_03000508 = _base_03000508 + _off_03000508;
    uint32_t _post_03000508 = _base_03000508 + _off_03000508;
    _cyc_03000508 += runtime_mem_cycles(_ea_03000508, 4u, 0u);
    uint32_t _v_03000508;
    { uint32_t _w = bus_read_u32(_ea_03000508 & ~3u); uint32_t _rot = (_ea_03000508 & 3u) * 8u; _v_03000508 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_03000508;
    g_cpu.R[15] = 0x0300050Au;
    runtime_tick(_cyc_03000508);
    /* 0300050A  0300050a T adds r1,r1,r0 */
    g_cpu.R[15] = 0x0300050Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300050A = 1u;
    _cyc_0300050A = 1u;
    uint32_t _rm_0300050A = g_cpu.R[0];
    uint32_t _op2_0300050A;
    uint32_t _co_0300050A;
    _op2_0300050A = _rm_0300050A;
    _co_0300050A = cpsr_c();
    uint32_t _rn_0300050A = g_cpu.R[1];
    uint32_t _r_0300050A;
    _r_0300050A = _rn_0300050A + _op2_0300050A;
    arm_set_nzcv_add(_rn_0300050A, _op2_0300050A, _r_0300050A);
    g_cpu.R[1] = _r_0300050A;
    g_cpu.R[15] = 0x0300050Cu;
    runtime_tick(_cyc_0300050A);
    /* 0300050C  0300050c T mov r12,r1 */
    g_cpu.R[15] = 0x0300050Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300050C = 1u;
    _cyc_0300050C = 1u;
    uint32_t _rm_0300050C = g_cpu.R[1];
    uint32_t _op2_0300050C;
    uint32_t _co_0300050C;
    _op2_0300050C = _rm_0300050C;
    _co_0300050C = cpsr_c();
    uint32_t _r_0300050C;
    _r_0300050C = _op2_0300050C;
    g_cpu.R[12] = _r_0300050C;
    g_cpu.R[15] = 0x0300050Eu;
    runtime_tick(_cyc_0300050C);
    /* 0300050E  0300050e T ldr r0,[r15,#0x38] */
    g_cpu.R[15] = 0x0300050Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300050E = 1u;
    _cyc_0300050E = 2u;
    uint32_t _base_0300050E = 0x03000512u & ~3u;
    uint32_t _off_0300050E;
    _off_0300050E = 0x00000038u;
    uint32_t _ea_0300050E = _base_0300050E + _off_0300050E;
    uint32_t _post_0300050E = _base_0300050E + _off_0300050E;
    _cyc_0300050E += runtime_mem_cycles(_ea_0300050E, 4u, 0u);
    uint32_t _v_0300050E;
    { uint32_t _w = bus_read_u32(_ea_0300050E & ~3u); uint32_t _rot = (_ea_0300050E & 3u) * 8u; _v_0300050E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0300050E;
    g_cpu.R[15] = 0x03000510u;
    runtime_tick(_cyc_0300050E);
    /* 03000510  03000510 T ldr r2,[r0] */
    g_cpu.R[15] = 0x03000510u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000510 = 1u;
    _cyc_03000510 = 2u;
    uint32_t _base_03000510 = g_cpu.R[0];
    uint32_t _off_03000510;
    _off_03000510 = 0x00000000u;
    uint32_t _ea_03000510 = _base_03000510 + _off_03000510;
    uint32_t _post_03000510 = _base_03000510 + _off_03000510;
    _cyc_03000510 += runtime_mem_cycles(_ea_03000510, 4u, 0u);
    uint32_t _v_03000510;
    { uint32_t _w = bus_read_u32(_ea_03000510 & ~3u); uint32_t _rot = (_ea_03000510 & 3u) * 8u; _v_03000510 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_03000510;
    g_cpu.R[15] = 0x03000512u;
    runtime_tick(_cyc_03000510);
    /* 03000512  03000512 T str r2,[r13] */
    g_cpu.R[15] = 0x03000512u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000512 = 1u;
    _cyc_03000512 = 1u;
    uint32_t _base_03000512 = g_cpu.R[13];
    uint32_t _off_03000512;
    _off_03000512 = 0x00000000u;
    uint32_t _ea_03000512 = _base_03000512 + _off_03000512;
    uint32_t _post_03000512 = _base_03000512 + _off_03000512;
    _cyc_03000512 += runtime_mem_cycles(_ea_03000512, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000512u, _ea_03000512 & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_03000512 & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x03000514u;
    runtime_tick(_cyc_03000512);
    /* fall-through to 0x03000514 */
    g_cpu.R[15] = 0x03000514u;
    runtime_dispatch(0x03000514u);
    return;
}

/* 0x030005C8  mode=thumb  end=0x03000606  branches=2 */


/* 0x03000514 thumb */
void gf_tfunc_03000514(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000514u);
    /* 03000514  03000514 T mov r3,r12 */
    g_cpu.R[15] = 0x03000514u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000514 = 1u;
    _cyc_03000514 = 1u;
    uint32_t _rm_03000514 = g_cpu.R[12];
    uint32_t _op2_03000514;
    uint32_t _co_03000514;
    _op2_03000514 = _rm_03000514;
    _co_03000514 = cpsr_c();
    uint32_t _r_03000514;
    _r_03000514 = _op2_03000514;
    g_cpu.R[3] = _r_03000514;
    g_cpu.R[15] = 0x03000516u;
    runtime_tick(_cyc_03000514);
    /* 03000516  03000516 T ldrh r2,[r3,#0x6] */
    g_cpu.R[15] = 0x03000516u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000516 = 1u;
    _cyc_03000516 = 2u;
    uint32_t _base_03000516 = g_cpu.R[3];
    uint32_t _off_03000516;
    _off_03000516 = 0x00000006u;
    uint32_t _ea_03000516 = _base_03000516 + _off_03000516;
    uint32_t _post_03000516 = _base_03000516 + _off_03000516;
    _cyc_03000516 += runtime_mem_cycles(_ea_03000516, 2u, 0u);
    uint32_t _v_03000516;
    { uint32_t _h = bus_read_u16(_ea_03000516 & ~1u); if (_ea_03000516 & 1u) _v_03000516 = ((_h >> 8) | (_h << 24)); else _v_03000516 = _h; }
    g_cpu.R[2] = _v_03000516;
    g_cpu.R[15] = 0x03000518u;
    runtime_tick(_cyc_03000516);
    /* 03000518  03000518 T movs r7,#0xe0 */
    g_cpu.R[15] = 0x03000518u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000518 = 1u;
    _cyc_03000518 = 1u;
    uint32_t _r_03000518;
    _r_03000518 = 0x000000E0u;
    arm_set_nzc_logic(_r_03000518, cpsr_c());
    g_cpu.R[7] = _r_03000518;
    g_cpu.R[15] = 0x0300051Au;
    runtime_tick(_cyc_03000518);
    /* 0300051A  0300051a T movs r7,r7,lsl #8 */
    g_cpu.R[15] = 0x0300051Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300051A = 1u;
    _cyc_0300051A = 1u;
    uint32_t _rm_0300051A = g_cpu.R[7];
    uint32_t _op2_0300051A;
    uint32_t _co_0300051A;
    _op2_0300051A = _rm_0300051A << 8;
    _co_0300051A = (_rm_0300051A >> 24) & 1u;
    uint32_t _r_0300051A;
    _r_0300051A = _op2_0300051A;
    arm_set_nzc_logic(_r_0300051A, _co_0300051A);
    g_cpu.R[7] = _r_0300051A;
    g_cpu.R[15] = 0x0300051Cu;
    runtime_tick(_cyc_0300051A);
    /* 0300051C  0300051c T ands r7,r7,r2 */
    g_cpu.R[15] = 0x0300051Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300051C = 1u;
    _cyc_0300051C = 1u;
    uint32_t _rm_0300051C = g_cpu.R[2];
    uint32_t _op2_0300051C;
    uint32_t _co_0300051C;
    _op2_0300051C = _rm_0300051C;
    _co_0300051C = cpsr_c();
    uint32_t _rn_0300051C = g_cpu.R[7];
    uint32_t _r_0300051C;
    _r_0300051C = _rn_0300051C & _op2_0300051C;
    arm_set_nzc_logic(_r_0300051C, _co_0300051C);
    g_cpu.R[7] = _r_0300051C;
    g_cpu.R[15] = 0x0300051Eu;
    runtime_tick(_cyc_0300051C);
    /* 0300051E  0300051e T mov r4,r8 */
    g_cpu.R[15] = 0x0300051Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300051E = 1u;
    _cyc_0300051E = 1u;
    uint32_t _rm_0300051E = g_cpu.R[8];
    uint32_t _op2_0300051E;
    uint32_t _co_0300051E;
    _op2_0300051E = _rm_0300051E;
    _co_0300051E = cpsr_c();
    uint32_t _r_0300051E;
    _r_0300051E = _op2_0300051E;
    g_cpu.R[4] = _r_0300051E;
    g_cpu.R[15] = 0x03000520u;
    runtime_tick(_cyc_0300051E);
    /* 03000520  03000520 T ldrh r1,[r4,#0x2] */
    g_cpu.R[15] = 0x03000520u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000520 = 1u;
    _cyc_03000520 = 2u;
    uint32_t _base_03000520 = g_cpu.R[4];
    uint32_t _off_03000520;
    _off_03000520 = 0x00000002u;
    uint32_t _ea_03000520 = _base_03000520 + _off_03000520;
    uint32_t _post_03000520 = _base_03000520 + _off_03000520;
    _cyc_03000520 += runtime_mem_cycles(_ea_03000520, 2u, 0u);
    uint32_t _v_03000520;
    { uint32_t _h = bus_read_u16(_ea_03000520 & ~1u); if (_ea_03000520 & 1u) _v_03000520 = ((_h >> 8) | (_h << 24)); else _v_03000520 = _h; }
    g_cpu.R[1] = _v_03000520;
    g_cpu.R[15] = 0x03000522u;
    runtime_tick(_cyc_03000520);
    /* 03000522  03000522 T movs r0,#0xe0 */
    g_cpu.R[15] = 0x03000522u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000522 = 1u;
    _cyc_03000522 = 1u;
    uint32_t _r_03000522;
    _r_03000522 = 0x000000E0u;
    arm_set_nzc_logic(_r_03000522, cpsr_c());
    g_cpu.R[0] = _r_03000522;
    g_cpu.R[15] = 0x03000524u;
    runtime_tick(_cyc_03000522);
    /* 03000524  03000524 T movs r0,r0,lsl #5 */
    g_cpu.R[15] = 0x03000524u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000524 = 1u;
    _cyc_03000524 = 1u;
    uint32_t _rm_03000524 = g_cpu.R[0];
    uint32_t _op2_03000524;
    uint32_t _co_03000524;
    _op2_03000524 = _rm_03000524 << 5;
    _co_03000524 = (_rm_03000524 >> 27) & 1u;
    uint32_t _r_03000524;
    _r_03000524 = _op2_03000524;
    arm_set_nzc_logic(_r_03000524, _co_03000524);
    g_cpu.R[0] = _r_03000524;
    g_cpu.R[15] = 0x03000526u;
    runtime_tick(_cyc_03000524);
    /* 03000526  03000526 T ands r0,r0,r1 */
    g_cpu.R[15] = 0x03000526u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000526 = 1u;
    _cyc_03000526 = 1u;
    uint32_t _rm_03000526 = g_cpu.R[1];
    uint32_t _op2_03000526;
    uint32_t _co_03000526;
    _op2_03000526 = _rm_03000526;
    _co_03000526 = cpsr_c();
    uint32_t _rn_03000526 = g_cpu.R[0];
    uint32_t _r_03000526;
    _r_03000526 = _rn_03000526 & _op2_03000526;
    arm_set_nzc_logic(_r_03000526, _co_03000526);
    g_cpu.R[0] = _r_03000526;
    g_cpu.R[15] = 0x03000528u;
    runtime_tick(_cyc_03000526);
    /* 03000528  03000528 T orrs r7,r7,r0 */
    g_cpu.R[15] = 0x03000528u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000528 = 1u;
    _cyc_03000528 = 1u;
    uint32_t _rm_03000528 = g_cpu.R[0];
    uint32_t _op2_03000528;
    uint32_t _co_03000528;
    _op2_03000528 = _rm_03000528;
    _co_03000528 = cpsr_c();
    uint32_t _rn_03000528 = g_cpu.R[7];
    uint32_t _r_03000528;
    _r_03000528 = _rn_03000528 | _op2_03000528;
    arm_set_nzc_logic(_r_03000528, _co_03000528);
    g_cpu.R[7] = _r_03000528;
    g_cpu.R[15] = 0x0300052Au;
    runtime_tick(_cyc_03000528);
    /* 0300052A  0300052a T ldr r6,[r13,#0x18] */
    g_cpu.R[15] = 0x0300052Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300052A = 1u;
    _cyc_0300052A = 2u;
    uint32_t _base_0300052A = g_cpu.R[13];
    uint32_t _off_0300052A;
    _off_0300052A = 0x00000018u;
    uint32_t _ea_0300052A = _base_0300052A + _off_0300052A;
    uint32_t _post_0300052A = _base_0300052A + _off_0300052A;
    _cyc_0300052A += runtime_mem_cycles(_ea_0300052A, 4u, 0u);
    uint32_t _v_0300052A;
    { uint32_t _w = bus_read_u32(_ea_0300052A & ~3u); uint32_t _rot = (_ea_0300052A & 3u) * 8u; _v_0300052A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[6] = _v_0300052A;
    g_cpu.R[15] = 0x0300052Cu;
    runtime_tick(_cyc_0300052A);
    /* 0300052C  0300052c T orrs r7,r7,r6 */
    g_cpu.R[15] = 0x0300052Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300052C = 1u;
    _cyc_0300052C = 1u;
    uint32_t _rm_0300052C = g_cpu.R[6];
    uint32_t _op2_0300052C;
    uint32_t _co_0300052C;
    _op2_0300052C = _rm_0300052C;
    _co_0300052C = cpsr_c();
    uint32_t _rn_0300052C = g_cpu.R[7];
    uint32_t _r_0300052C;
    _r_0300052C = _rn_0300052C | _op2_0300052C;
    arm_set_nzc_logic(_r_0300052C, _co_0300052C);
    g_cpu.R[7] = _r_0300052C;
    g_cpu.R[15] = 0x0300052Eu;
    runtime_tick(_cyc_0300052C);
    /* 0300052E  0300052e T movs r0,#0xf0 */
    g_cpu.R[15] = 0x0300052Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300052E = 1u;
    _cyc_0300052E = 1u;
    uint32_t _r_0300052E;
    _r_0300052E = 0x000000F0u;
    arm_set_nzc_logic(_r_0300052E, cpsr_c());
    g_cpu.R[0] = _r_0300052E;
    g_cpu.R[15] = 0x03000530u;
    runtime_tick(_cyc_0300052E);
    /* 03000530  03000530 T ands r0,r0,r2 */
    g_cpu.R[15] = 0x03000530u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000530 = 1u;
    _cyc_03000530 = 1u;
    uint32_t _rm_03000530 = g_cpu.R[2];
    uint32_t _op2_03000530;
    uint32_t _co_03000530;
    _op2_03000530 = _rm_03000530;
    _co_03000530 = cpsr_c();
    uint32_t _rn_03000530 = g_cpu.R[0];
    uint32_t _r_03000530;
    _r_03000530 = _rn_03000530 & _op2_03000530;
    arm_set_nzc_logic(_r_03000530, _co_03000530);
    g_cpu.R[0] = _r_03000530;
    g_cpu.R[15] = 0x03000532u;
    runtime_tick(_cyc_03000530);
    /* 03000532  03000532 T movs r0,r0,lsl #24 */
    g_cpu.R[15] = 0x03000532u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000532 = 1u;
    _cyc_03000532 = 1u;
    uint32_t _rm_03000532 = g_cpu.R[0];
    uint32_t _op2_03000532;
    uint32_t _co_03000532;
    _op2_03000532 = _rm_03000532 << 24;
    _co_03000532 = (_rm_03000532 >> 8) & 1u;
    uint32_t _r_03000532;
    _r_03000532 = _op2_03000532;
    arm_set_nzc_logic(_r_03000532, _co_03000532);
    g_cpu.R[0] = _r_03000532;
    g_cpu.R[15] = 0x03000534u;
    runtime_tick(_cyc_03000532);
    /* 03000534  03000534 T orrs r7,r7,r0 */
    g_cpu.R[15] = 0x03000534u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000534 = 1u;
    _cyc_03000534 = 1u;
    uint32_t _rm_03000534 = g_cpu.R[0];
    uint32_t _op2_03000534;
    uint32_t _co_03000534;
    _op2_03000534 = _rm_03000534;
    _co_03000534 = cpsr_c();
    uint32_t _rn_03000534 = g_cpu.R[7];
    uint32_t _r_03000534;
    _r_03000534 = _rn_03000534 | _op2_03000534;
    arm_set_nzc_logic(_r_03000534, _co_03000534);
    g_cpu.R[7] = _r_03000534;
    g_cpu.R[15] = 0x03000536u;
    runtime_tick(_cyc_03000534);
    /* 03000536  03000536 T movs r0,#0x4 */
    g_cpu.R[15] = 0x03000536u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000536 = 1u;
    _cyc_03000536 = 1u;
    uint32_t _r_03000536;
    _r_03000536 = 0x00000004u;
    arm_set_nzc_logic(_r_03000536, cpsr_c());
    g_cpu.R[0] = _r_03000536;
    g_cpu.R[15] = 0x03000538u;
    runtime_tick(_cyc_03000536);
    /* 03000538  03000538 T ands r0,r0,r2 */
    g_cpu.R[15] = 0x03000538u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000538 = 1u;
    _cyc_03000538 = 1u;
    uint32_t _rm_03000538 = g_cpu.R[2];
    uint32_t _op2_03000538;
    uint32_t _co_03000538;
    _op2_03000538 = _rm_03000538;
    _co_03000538 = cpsr_c();
    uint32_t _rn_03000538 = g_cpu.R[0];
    uint32_t _r_03000538;
    _r_03000538 = _rn_03000538 & _op2_03000538;
    arm_set_nzc_logic(_r_03000538, _co_03000538);
    g_cpu.R[0] = _r_03000538;
    g_cpu.R[15] = 0x0300053Au;
    runtime_tick(_cyc_03000538);
    /* 0300053A  0300053a T cmps r0,#0x0 */
    g_cpu.R[15] = 0x0300053Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300053A = 1u;
    _cyc_0300053A = 1u;
    uint32_t _rn_0300053A = g_cpu.R[0];
    uint32_t _r_0300053A;
    _r_0300053A = _rn_0300053A - 0x00000000u;
    arm_set_nzcv_sub(_rn_0300053A, 0x00000000u, _r_0300053A);
    g_cpu.R[15] = 0x0300053Cu;
    runtime_tick(_cyc_0300053A);
    /* 0300053C  0300053c T beq 0x0300054c */
    g_cpu.R[15] = 0x0300053Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300053C = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0300053C = 3u;
        g_cpu.R[15] = 0x0300054Cu;
        runtime_tick(_cyc_0300053C);
        GBARECOMP_TAIL_CALL(gf_tfunc_0300054C);
    }
    g_cpu.R[15] = 0x0300053Eu;
    runtime_tick(_cyc_0300053C);
    /* 0300053E  0300053e T ldrh r0,[r4] */
    g_cpu.R[15] = 0x0300053Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300053E = 1u;
    _cyc_0300053E = 2u;
    uint32_t _base_0300053E = g_cpu.R[4];
    uint32_t _off_0300053E;
    _off_0300053E = 0x00000000u;
    uint32_t _ea_0300053E = _base_0300053E + _off_0300053E;
    uint32_t _post_0300053E = _base_0300053E + _off_0300053E;
    _cyc_0300053E += runtime_mem_cycles(_ea_0300053E, 2u, 0u);
    uint32_t _v_0300053E;
    { uint32_t _h = bus_read_u16(_ea_0300053E & ~1u); if (_ea_0300053E & 1u) _v_0300053E = ((_h >> 8) | (_h << 24)); else _v_0300053E = _h; }
    g_cpu.R[0] = _v_0300053E;
    g_cpu.R[15] = 0x03000540u;
    runtime_tick(_cyc_0300053E);
    /* 03000540  03000540 T ldrh r1,[r3,#0x4] */
    g_cpu.R[15] = 0x03000540u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000540 = 1u;
    _cyc_03000540 = 2u;
    uint32_t _base_03000540 = g_cpu.R[3];
    uint32_t _off_03000540;
    _off_03000540 = 0x00000004u;
    uint32_t _ea_03000540 = _base_03000540 + _off_03000540;
    uint32_t _post_03000540 = _base_03000540 + _off_03000540;
    _cyc_03000540 += runtime_mem_cycles(_ea_03000540, 2u, 0u);
    uint32_t _v_03000540;
    { uint32_t _h = bus_read_u16(_ea_03000540 & ~1u); if (_ea_03000540 & 1u) _v_03000540 = ((_h >> 8) | (_h << 24)); else _v_03000540 = _h; }
    g_cpu.R[1] = _v_03000540;
    g_cpu.R[15] = 0x03000542u;
    runtime_tick(_cyc_03000540);
    /* 03000542  03000542 T adds r0,r0,r1 */
    g_cpu.R[15] = 0x03000542u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000542 = 1u;
    _cyc_03000542 = 1u;
    uint32_t _rm_03000542 = g_cpu.R[1];
    uint32_t _op2_03000542;
    uint32_t _co_03000542;
    _op2_03000542 = _rm_03000542;
    _co_03000542 = cpsr_c();
    uint32_t _rn_03000542 = g_cpu.R[0];
    uint32_t _r_03000542;
    _r_03000542 = _rn_03000542 + _op2_03000542;
    arm_set_nzcv_add(_rn_03000542, _op2_03000542, _r_03000542);
    g_cpu.R[0] = _r_03000542;
    g_cpu.R[15] = 0x03000544u;
    runtime_tick(_cyc_03000542);
    /* 03000544  03000544 T b 0x0300055c */
    g_cpu.R[15] = 0x03000544u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000544 = 1u;
    _cyc_03000544 = 3u;
    g_cpu.R[15] = 0x0300055Cu;
    runtime_tick(_cyc_03000544);
    GBARECOMP_TAIL_CALL(gf_tfunc_0300055C);
    g_cpu.R[15] = 0x03000546u;
    runtime_tick(_cyc_03000544);
    /* fall-through to 0x03000546 */
    g_cpu.R[15] = 0x03000546u;
    runtime_dispatch(0x03000546u);
    return;
}

/* 0x0300054C  mode=thumb  end=0x0300055C  branches=4 */


/* 0x0300054C thumb */
void gf_tfunc_0300054C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0300054Cu);
    /* 0300054C  0300054c T mov r2,r8 */
    g_cpu.R[15] = 0x0300054Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300054C = 1u;
    _cyc_0300054C = 1u;
    uint32_t _rm_0300054C = g_cpu.R[8];
    uint32_t _op2_0300054C;
    uint32_t _co_0300054C;
    _op2_0300054C = _rm_0300054C;
    _co_0300054C = cpsr_c();
    uint32_t _r_0300054C;
    _r_0300054C = _op2_0300054C;
    g_cpu.R[2] = _r_0300054C;
    g_cpu.R[15] = 0x0300054Eu;
    runtime_tick(_cyc_0300054C);
    /* 0300054E  0300054e T ldrh r1,[r2] */
    g_cpu.R[15] = 0x0300054Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300054E = 1u;
    _cyc_0300054E = 2u;
    uint32_t _base_0300054E = g_cpu.R[2];
    uint32_t _off_0300054E;
    _off_0300054E = 0x00000000u;
    uint32_t _ea_0300054E = _base_0300054E + _off_0300054E;
    uint32_t _post_0300054E = _base_0300054E + _off_0300054E;
    _cyc_0300054E += runtime_mem_cycles(_ea_0300054E, 2u, 0u);
    uint32_t _v_0300054E;
    { uint32_t _h = bus_read_u16(_ea_0300054E & ~1u); if (_ea_0300054E & 1u) _v_0300054E = ((_h >> 8) | (_h << 24)); else _v_0300054E = _h; }
    g_cpu.R[1] = _v_0300054E;
    g_cpu.R[15] = 0x03000550u;
    runtime_tick(_cyc_0300054E);
    /* 03000550  03000550 T movs r0,#0xfc */
    g_cpu.R[15] = 0x03000550u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000550 = 1u;
    _cyc_03000550 = 1u;
    uint32_t _r_03000550;
    _r_03000550 = 0x000000FCu;
    arm_set_nzc_logic(_r_03000550, cpsr_c());
    g_cpu.R[0] = _r_03000550;
    g_cpu.R[15] = 0x03000552u;
    runtime_tick(_cyc_03000550);
    /* 03000552  03000552 T movs r0,r0,lsl #8 */
    g_cpu.R[15] = 0x03000552u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000552 = 1u;
    _cyc_03000552 = 1u;
    uint32_t _rm_03000552 = g_cpu.R[0];
    uint32_t _op2_03000552;
    uint32_t _co_03000552;
    _op2_03000552 = _rm_03000552 << 8;
    _co_03000552 = (_rm_03000552 >> 24) & 1u;
    uint32_t _r_03000552;
    _r_03000552 = _op2_03000552;
    arm_set_nzc_logic(_r_03000552, _co_03000552);
    g_cpu.R[0] = _r_03000552;
    g_cpu.R[15] = 0x03000554u;
    runtime_tick(_cyc_03000552);
    /* 03000554  03000554 T ands r0,r0,r1 */
    g_cpu.R[15] = 0x03000554u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000554 = 1u;
    _cyc_03000554 = 1u;
    uint32_t _rm_03000554 = g_cpu.R[1];
    uint32_t _op2_03000554;
    uint32_t _co_03000554;
    _op2_03000554 = _rm_03000554;
    _co_03000554 = cpsr_c();
    uint32_t _rn_03000554 = g_cpu.R[0];
    uint32_t _r_03000554;
    _r_03000554 = _rn_03000554 & _op2_03000554;
    arm_set_nzc_logic(_r_03000554, _co_03000554);
    g_cpu.R[0] = _r_03000554;
    g_cpu.R[15] = 0x03000556u;
    runtime_tick(_cyc_03000554);
    /* 03000556  03000556 T mov r3,r12 */
    g_cpu.R[15] = 0x03000556u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000556 = 1u;
    _cyc_03000556 = 1u;
    uint32_t _rm_03000556 = g_cpu.R[12];
    uint32_t _op2_03000556;
    uint32_t _co_03000556;
    _op2_03000556 = _rm_03000556;
    _co_03000556 = cpsr_c();
    uint32_t _r_03000556;
    _r_03000556 = _op2_03000556;
    g_cpu.R[3] = _r_03000556;
    g_cpu.R[15] = 0x03000558u;
    runtime_tick(_cyc_03000556);
    /* 03000558  03000558 T ldrh r3,[r3,#0x4] */
    g_cpu.R[15] = 0x03000558u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000558 = 1u;
    _cyc_03000558 = 2u;
    uint32_t _base_03000558 = g_cpu.R[3];
    uint32_t _off_03000558;
    _off_03000558 = 0x00000004u;
    uint32_t _ea_03000558 = _base_03000558 + _off_03000558;
    uint32_t _post_03000558 = _base_03000558 + _off_03000558;
    _cyc_03000558 += runtime_mem_cycles(_ea_03000558, 2u, 0u);
    uint32_t _v_03000558;
    { uint32_t _h = bus_read_u16(_ea_03000558 & ~1u); if (_ea_03000558 & 1u) _v_03000558 = ((_h >> 8) | (_h << 24)); else _v_03000558 = _h; }
    g_cpu.R[3] = _v_03000558;
    g_cpu.R[15] = 0x0300055Au;
    runtime_tick(_cyc_03000558);
    /* 0300055A  0300055a T adds r0,r0,r3 */
    g_cpu.R[15] = 0x0300055Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300055A = 1u;
    _cyc_0300055A = 1u;
    uint32_t _rm_0300055A = g_cpu.R[3];
    uint32_t _op2_0300055A;
    uint32_t _co_0300055A;
    _op2_0300055A = _rm_0300055A;
    _co_0300055A = cpsr_c();
    uint32_t _rn_0300055A = g_cpu.R[0];
    uint32_t _r_0300055A;
    _r_0300055A = _rn_0300055A + _op2_0300055A;
    arm_set_nzcv_add(_rn_0300055A, _op2_0300055A, _r_0300055A);
    g_cpu.R[0] = _r_0300055A;
    g_cpu.R[15] = 0x0300055Cu;
    runtime_tick(_cyc_0300055A);
    /* fall-through to 0x0300055C */
    g_cpu.R[15] = 0x0300055Cu;
    runtime_dispatch(0x0300055Cu);
    return;
}

/* 0x0300055C  mode=thumb  end=0x030005AC  branches=4 */


/* 0x0300055C thumb */
void gf_tfunc_0300055C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0300055Cu);
    /* 0300055C  0300055c T movs r0,r0,lsl #16 */
    g_cpu.R[15] = 0x0300055Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300055C = 1u;
    _cyc_0300055C = 1u;
    uint32_t _rm_0300055C = g_cpu.R[0];
    uint32_t _op2_0300055C;
    uint32_t _co_0300055C;
    _op2_0300055C = _rm_0300055C << 16;
    _co_0300055C = (_rm_0300055C >> 16) & 1u;
    uint32_t _r_0300055C;
    _r_0300055C = _op2_0300055C;
    arm_set_nzc_logic(_r_0300055C, _co_0300055C);
    g_cpu.R[0] = _r_0300055C;
    g_cpu.R[15] = 0x0300055Eu;
    runtime_tick(_cyc_0300055C);
    /* 0300055E  0300055e T movs r0,r0,lsr #16 */
    g_cpu.R[15] = 0x0300055Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300055E = 1u;
    _cyc_0300055E = 1u;
    uint32_t _rm_0300055E = g_cpu.R[0];
    uint32_t _op2_0300055E;
    uint32_t _co_0300055E;
    _op2_0300055E = _rm_0300055E >> 16;
    _co_0300055E = (_rm_0300055E >> 15) & 1u;
    uint32_t _r_0300055E;
    _r_0300055E = _op2_0300055E;
    arm_set_nzc_logic(_r_0300055E, _co_0300055E);
    g_cpu.R[0] = _r_0300055E;
    g_cpu.R[15] = 0x03000560u;
    runtime_tick(_cyc_0300055E);
    /* 03000560  03000560 T str r0,[r13,#0x1c] */
    g_cpu.R[15] = 0x03000560u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000560 = 1u;
    _cyc_03000560 = 1u;
    uint32_t _base_03000560 = g_cpu.R[13];
    uint32_t _off_03000560;
    _off_03000560 = 0x0000001Cu;
    uint32_t _ea_03000560 = _base_03000560 + _off_03000560;
    uint32_t _post_03000560 = _base_03000560 + _off_03000560;
    _cyc_03000560 += runtime_mem_cycles(_ea_03000560, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000560u, _ea_03000560 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_03000560 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x03000562u;
    runtime_tick(_cyc_03000560);
    /* 03000562  03000562 T mov r4,r12 */
    g_cpu.R[15] = 0x03000562u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000562 = 1u;
    _cyc_03000562 = 1u;
    uint32_t _rm_03000562 = g_cpu.R[12];
    uint32_t _op2_03000562;
    uint32_t _co_03000562;
    _op2_03000562 = _rm_03000562;
    _co_03000562 = cpsr_c();
    uint32_t _r_03000562;
    _r_03000562 = _op2_03000562;
    g_cpu.R[4] = _r_03000562;
    g_cpu.R[15] = 0x03000564u;
    runtime_tick(_cyc_03000562);
    /* 03000564  03000564 T movs r6,#0x0 */
    g_cpu.R[15] = 0x03000564u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000564 = 1u;
    _cyc_03000564 = 1u;
    uint32_t _r_03000564;
    _r_03000564 = 0x00000000u;
    arm_set_nzc_logic(_r_03000564, cpsr_c());
    g_cpu.R[6] = _r_03000564;
    g_cpu.R[15] = 0x03000566u;
    runtime_tick(_cyc_03000564);
    /* 03000566  03000566 T ldrsh r3,[r4,+r6] */
    g_cpu.R[15] = 0x03000566u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000566 = 1u;
    _cyc_03000566 = 2u;
    uint32_t _base_03000566 = g_cpu.R[4];
    uint32_t _off_03000566;
    uint32_t _morm_03000566 = g_cpu.R[6];
    _off_03000566 = _morm_03000566;
    uint32_t _ea_03000566 = _base_03000566 + _off_03000566;
    uint32_t _post_03000566 = _base_03000566 + _off_03000566;
    _cyc_03000566 += runtime_mem_cycles(_ea_03000566, 2u, 0u);
    uint32_t _v_03000566;
    if (_ea_03000566 & 1u) _v_03000566 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_03000566);
    else _v_03000566 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_03000566);
    g_cpu.R[3] = _v_03000566;
    g_cpu.R[15] = 0x03000568u;
    runtime_tick(_cyc_03000566);
    /* 03000568  03000568 T movs r0,#0x2 */
    g_cpu.R[15] = 0x03000568u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000568 = 1u;
    _cyc_03000568 = 1u;
    uint32_t _r_03000568;
    _r_03000568 = 0x00000002u;
    arm_set_nzc_logic(_r_03000568, cpsr_c());
    g_cpu.R[0] = _r_03000568;
    g_cpu.R[15] = 0x0300056Au;
    runtime_tick(_cyc_03000568);
    /* 0300056A  0300056a T ldrsh r2,[r4,+r0] */
    g_cpu.R[15] = 0x0300056Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300056A = 1u;
    _cyc_0300056A = 2u;
    uint32_t _base_0300056A = g_cpu.R[4];
    uint32_t _off_0300056A;
    uint32_t _morm_0300056A = g_cpu.R[0];
    _off_0300056A = _morm_0300056A;
    uint32_t _ea_0300056A = _base_0300056A + _off_0300056A;
    uint32_t _post_0300056A = _base_0300056A + _off_0300056A;
    _cyc_0300056A += runtime_mem_cycles(_ea_0300056A, 2u, 0u);
    uint32_t _v_0300056A;
    if (_ea_0300056A & 1u) _v_0300056A = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_0300056A);
    else _v_0300056A = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_0300056A);
    g_cpu.R[2] = _v_0300056A;
    g_cpu.R[15] = 0x0300056Cu;
    runtime_tick(_cyc_0300056A);
    /* 0300056C  0300056c T ldr r1,[r13,#0x18] */
    g_cpu.R[15] = 0x0300056Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300056C = 1u;
    _cyc_0300056C = 2u;
    uint32_t _base_0300056C = g_cpu.R[13];
    uint32_t _off_0300056C;
    _off_0300056C = 0x00000018u;
    uint32_t _ea_0300056C = _base_0300056C + _off_0300056C;
    uint32_t _post_0300056C = _base_0300056C + _off_0300056C;
    _cyc_0300056C += runtime_mem_cycles(_ea_0300056C, 4u, 0u);
    uint32_t _v_0300056C;
    { uint32_t _w = bus_read_u32(_ea_0300056C & ~3u); uint32_t _rot = (_ea_0300056C & 3u) * 8u; _v_0300056C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0300056C;
    g_cpu.R[15] = 0x0300056Eu;
    runtime_tick(_cyc_0300056C);
    /* 0300056E  0300056e T cmps r1,#0x0 */
    g_cpu.R[15] = 0x0300056Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300056E = 1u;
    _cyc_0300056E = 1u;
    uint32_t _rn_0300056E = g_cpu.R[1];
    uint32_t _r_0300056E;
    _r_0300056E = _rn_0300056E - 0x00000000u;
    arm_set_nzcv_sub(_rn_0300056E, 0x00000000u, _r_0300056E);
    g_cpu.R[15] = 0x03000570u;
    runtime_tick(_cyc_0300056E);
    /* 03000570  03000570 T bne 0x030005c8 */
    g_cpu.R[15] = 0x03000570u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000570 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_03000570 = 3u;
        g_cpu.R[15] = 0x030005C8u;
        runtime_tick(_cyc_03000570);
        GBARECOMP_TAIL_CALL(gf_tfunc_030005C8);
    }
    g_cpu.R[15] = 0x03000572u;
    runtime_tick(_cyc_03000570);
    /* 03000572  03000572 T ldr r4,[r13,#0x20] */
    g_cpu.R[15] = 0x03000572u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000572 = 1u;
    _cyc_03000572 = 2u;
    uint32_t _base_03000572 = g_cpu.R[13];
    uint32_t _off_03000572;
    _off_03000572 = 0x00000020u;
    uint32_t _ea_03000572 = _base_03000572 + _off_03000572;
    uint32_t _post_03000572 = _base_03000572 + _off_03000572;
    _cyc_03000572 += runtime_mem_cycles(_ea_03000572, 4u, 0u);
    uint32_t _v_03000572;
    { uint32_t _w = bus_read_u32(_ea_03000572 & ~3u); uint32_t _rot = (_ea_03000572 & 3u) * 8u; _v_03000572 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[4] = _v_03000572;
    g_cpu.R[15] = 0x03000574u;
    runtime_tick(_cyc_03000572);
    /* 03000574  03000574 T movs r0,r4,lsl #24 */
    g_cpu.R[15] = 0x03000574u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000574 = 1u;
    _cyc_03000574 = 1u;
    uint32_t _rm_03000574 = g_cpu.R[4];
    uint32_t _op2_03000574;
    uint32_t _co_03000574;
    _op2_03000574 = _rm_03000574 << 24;
    _co_03000574 = (_rm_03000574 >> 8) & 1u;
    uint32_t _r_03000574;
    _r_03000574 = _op2_03000574;
    arm_set_nzc_logic(_r_03000574, _co_03000574);
    g_cpu.R[0] = _r_03000574;
    g_cpu.R[15] = 0x03000576u;
    runtime_tick(_cyc_03000574);
    /* 03000576  03000576 T eors r7,r7,r0 */
    g_cpu.R[15] = 0x03000576u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000576 = 1u;
    _cyc_03000576 = 1u;
    uint32_t _rm_03000576 = g_cpu.R[0];
    uint32_t _op2_03000576;
    uint32_t _co_03000576;
    _op2_03000576 = _rm_03000576;
    _co_03000576 = cpsr_c();
    uint32_t _rn_03000576 = g_cpu.R[7];
    uint32_t _r_03000576;
    _r_03000576 = _rn_03000576 ^ _op2_03000576;
    arm_set_nzc_logic(_r_03000576, _co_03000576);
    g_cpu.R[7] = _r_03000576;
    g_cpu.R[15] = 0x03000578u;
    runtime_tick(_cyc_03000576);
    /* 03000578  03000578 T adds r1,r7,#0x0 */
    g_cpu.R[15] = 0x03000578u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000578 = 1u;
    _cyc_03000578 = 1u;
    uint32_t _rn_03000578 = g_cpu.R[7];
    uint32_t _r_03000578;
    _r_03000578 = _rn_03000578 + 0x00000000u;
    arm_set_nzcv_add(_rn_03000578, 0x00000000u, _r_03000578);
    g_cpu.R[1] = _r_03000578;
    g_cpu.R[15] = 0x0300057Au;
    runtime_tick(_cyc_03000578);
    /* 0300057A  0300057a T movs r6,#0xc0 */
    g_cpu.R[15] = 0x0300057Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300057A = 1u;
    _cyc_0300057A = 1u;
    uint32_t _r_0300057A;
    _r_0300057A = 0x000000C0u;
    arm_set_nzc_logic(_r_0300057A, cpsr_c());
    g_cpu.R[6] = _r_0300057A;
    g_cpu.R[15] = 0x0300057Cu;
    runtime_tick(_cyc_0300057A);
    /* 0300057C  0300057c T movs r6,r6,lsl #8 */
    g_cpu.R[15] = 0x0300057Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300057C = 1u;
    _cyc_0300057C = 1u;
    uint32_t _rm_0300057C = g_cpu.R[6];
    uint32_t _op2_0300057C;
    uint32_t _co_0300057C;
    _op2_0300057C = _rm_0300057C << 8;
    _co_0300057C = (_rm_0300057C >> 24) & 1u;
    uint32_t _r_0300057C;
    _r_0300057C = _op2_0300057C;
    arm_set_nzc_logic(_r_0300057C, _co_0300057C);
    g_cpu.R[6] = _r_0300057C;
    g_cpu.R[15] = 0x0300057Eu;
    runtime_tick(_cyc_0300057C);
    /* 0300057E  0300057e T ands r1,r1,r6 */
    g_cpu.R[15] = 0x0300057Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300057E = 1u;
    _cyc_0300057E = 1u;
    uint32_t _rm_0300057E = g_cpu.R[6];
    uint32_t _op2_0300057E;
    uint32_t _co_0300057E;
    _op2_0300057E = _rm_0300057E;
    _co_0300057E = cpsr_c();
    uint32_t _rn_0300057E = g_cpu.R[1];
    uint32_t _r_0300057E;
    _r_0300057E = _rn_0300057E & _op2_0300057E;
    arm_set_nzc_logic(_r_0300057E, _co_0300057E);
    g_cpu.R[1] = _r_0300057E;
    g_cpu.R[15] = 0x03000580u;
    runtime_tick(_cyc_0300057E);
    /* 03000580  03000580 T movs r1,r1,lsr #12 */
    g_cpu.R[15] = 0x03000580u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000580 = 1u;
    _cyc_03000580 = 1u;
    uint32_t _rm_03000580 = g_cpu.R[1];
    uint32_t _op2_03000580;
    uint32_t _co_03000580;
    _op2_03000580 = _rm_03000580 >> 12;
    _co_03000580 = (_rm_03000580 >> 11) & 1u;
    uint32_t _r_03000580;
    _r_03000580 = _op2_03000580;
    arm_set_nzc_logic(_r_03000580, _co_03000580);
    g_cpu.R[1] = _r_03000580;
    g_cpu.R[15] = 0x03000582u;
    runtime_tick(_cyc_03000580);
    /* 03000582  03000582 T adds r0,r7,#0x0 */
    g_cpu.R[15] = 0x03000582u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000582 = 1u;
    _cyc_03000582 = 1u;
    uint32_t _rn_03000582 = g_cpu.R[7];
    uint32_t _r_03000582;
    _r_03000582 = _rn_03000582 + 0x00000000u;
    arm_set_nzcv_add(_rn_03000582, 0x00000000u, _r_03000582);
    g_cpu.R[0] = _r_03000582;
    g_cpu.R[15] = 0x03000584u;
    runtime_tick(_cyc_03000582);
    /* 03000584  03000584 T movs r4,#0xc0 */
    g_cpu.R[15] = 0x03000584u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000584 = 1u;
    _cyc_03000584 = 1u;
    uint32_t _r_03000584;
    _r_03000584 = 0x000000C0u;
    arm_set_nzc_logic(_r_03000584, cpsr_c());
    g_cpu.R[4] = _r_03000584;
    g_cpu.R[15] = 0x03000586u;
    runtime_tick(_cyc_03000584);
    /* 03000586  03000586 T movs r4,r4,lsl #24 */
    g_cpu.R[15] = 0x03000586u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000586 = 1u;
    _cyc_03000586 = 1u;
    uint32_t _rm_03000586 = g_cpu.R[4];
    uint32_t _op2_03000586;
    uint32_t _co_03000586;
    _op2_03000586 = _rm_03000586 << 24;
    _co_03000586 = (_rm_03000586 >> 8) & 1u;
    uint32_t _r_03000586;
    _r_03000586 = _op2_03000586;
    arm_set_nzc_logic(_r_03000586, _co_03000586);
    g_cpu.R[4] = _r_03000586;
    g_cpu.R[15] = 0x03000588u;
    runtime_tick(_cyc_03000586);
    /* 03000588  03000588 T ands r0,r0,r4 */
    g_cpu.R[15] = 0x03000588u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000588 = 1u;
    _cyc_03000588 = 1u;
    uint32_t _rm_03000588 = g_cpu.R[4];
    uint32_t _op2_03000588;
    uint32_t _co_03000588;
    _op2_03000588 = _rm_03000588;
    _co_03000588 = cpsr_c();
    uint32_t _rn_03000588 = g_cpu.R[0];
    uint32_t _r_03000588;
    _r_03000588 = _rn_03000588 & _op2_03000588;
    arm_set_nzc_logic(_r_03000588, _co_03000588);
    g_cpu.R[0] = _r_03000588;
    g_cpu.R[15] = 0x0300058Au;
    runtime_tick(_cyc_03000588);
    /* 0300058A  0300058a T movs r0,r0,lsr #30 */
    g_cpu.R[15] = 0x0300058Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300058A = 1u;
    _cyc_0300058A = 1u;
    uint32_t _rm_0300058A = g_cpu.R[0];
    uint32_t _op2_0300058A;
    uint32_t _co_0300058A;
    _op2_0300058A = _rm_0300058A >> 30;
    _co_0300058A = (_rm_0300058A >> 29) & 1u;
    uint32_t _r_0300058A;
    _r_0300058A = _op2_0300058A;
    arm_set_nzc_logic(_r_0300058A, _co_0300058A);
    g_cpu.R[0] = _r_0300058A;
    g_cpu.R[15] = 0x0300058Cu;
    runtime_tick(_cyc_0300058A);
    /* 0300058C  0300058c T adds r1,r1,r0 */
    g_cpu.R[15] = 0x0300058Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300058C = 1u;
    _cyc_0300058C = 1u;
    uint32_t _rm_0300058C = g_cpu.R[0];
    uint32_t _op2_0300058C;
    uint32_t _co_0300058C;
    _op2_0300058C = _rm_0300058C;
    _co_0300058C = cpsr_c();
    uint32_t _rn_0300058C = g_cpu.R[1];
    uint32_t _r_0300058C;
    _r_0300058C = _rn_0300058C + _op2_0300058C;
    arm_set_nzcv_add(_rn_0300058C, _op2_0300058C, _r_0300058C);
    g_cpu.R[1] = _r_0300058C;
    g_cpu.R[15] = 0x0300058Eu;
    runtime_tick(_cyc_0300058C);
    /* 0300058E  0300058e T movs r1,r1,lsl #2 */
    g_cpu.R[15] = 0x0300058Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300058E = 1u;
    _cyc_0300058E = 1u;
    uint32_t _rm_0300058E = g_cpu.R[1];
    uint32_t _op2_0300058E;
    uint32_t _co_0300058E;
    _op2_0300058E = _rm_0300058E << 2;
    _co_0300058E = (_rm_0300058E >> 30) & 1u;
    uint32_t _r_0300058E;
    _r_0300058E = _op2_0300058E;
    arm_set_nzc_logic(_r_0300058E, _co_0300058E);
    g_cpu.R[1] = _r_0300058E;
    g_cpu.R[15] = 0x03000590u;
    runtime_tick(_cyc_0300058E);
    /* 03000590  03000590 T ldr r6,[r15,#0x2c] */
    g_cpu.R[15] = 0x03000590u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000590 = 1u;
    _cyc_03000590 = 2u;
    uint32_t _base_03000590 = 0x03000594u & ~3u;
    uint32_t _off_03000590;
    _off_03000590 = 0x0000002Cu;
    uint32_t _ea_03000590 = _base_03000590 + _off_03000590;
    uint32_t _post_03000590 = _base_03000590 + _off_03000590;
    _cyc_03000590 += runtime_mem_cycles(_ea_03000590, 4u, 0u);
    uint32_t _v_03000590;
    { uint32_t _w = bus_read_u32(_ea_03000590 & ~3u); uint32_t _rot = (_ea_03000590 & 3u) * 8u; _v_03000590 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[6] = _v_03000590;
    g_cpu.R[15] = 0x03000592u;
    runtime_tick(_cyc_03000590);
    /* 03000592  03000592 T adds r0,r1,r6 */
    g_cpu.R[15] = 0x03000592u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000592 = 1u;
    _cyc_03000592 = 1u;
    uint32_t _rm_03000592 = g_cpu.R[6];
    uint32_t _op2_03000592;
    uint32_t _co_03000592;
    _op2_03000592 = _rm_03000592;
    _co_03000592 = cpsr_c();
    uint32_t _rn_03000592 = g_cpu.R[1];
    uint32_t _r_03000592;
    _r_03000592 = _rn_03000592 + _op2_03000592;
    arm_set_nzcv_add(_rn_03000592, _op2_03000592, _r_03000592);
    g_cpu.R[0] = _r_03000592;
    g_cpu.R[15] = 0x03000594u;
    runtime_tick(_cyc_03000592);
    /* 03000594  03000594 T ldr r5,[r0] */
    g_cpu.R[15] = 0x03000594u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000594 = 1u;
    _cyc_03000594 = 2u;
    uint32_t _base_03000594 = g_cpu.R[0];
    uint32_t _off_03000594;
    _off_03000594 = 0x00000000u;
    uint32_t _ea_03000594 = _base_03000594 + _off_03000594;
    uint32_t _post_03000594 = _base_03000594 + _off_03000594;
    _cyc_03000594 += runtime_mem_cycles(_ea_03000594, 4u, 0u);
    uint32_t _v_03000594;
    { uint32_t _w = bus_read_u32(_ea_03000594 & ~3u); uint32_t _rot = (_ea_03000594 & 3u) * 8u; _v_03000594 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[5] = _v_03000594;
    g_cpu.R[15] = 0x03000596u;
    runtime_tick(_cyc_03000594);
    /* 03000596  03000596 T ldr r0,[r15,#0x2c] */
    g_cpu.R[15] = 0x03000596u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000596 = 1u;
    _cyc_03000596 = 2u;
    uint32_t _base_03000596 = 0x0300059Au & ~3u;
    uint32_t _off_03000596;
    _off_03000596 = 0x0000002Cu;
    uint32_t _ea_03000596 = _base_03000596 + _off_03000596;
    uint32_t _post_03000596 = _base_03000596 + _off_03000596;
    _cyc_03000596 += runtime_mem_cycles(_ea_03000596, 4u, 0u);
    uint32_t _v_03000596;
    { uint32_t _w = bus_read_u32(_ea_03000596 & ~3u); uint32_t _rot = (_ea_03000596 & 3u) * 8u; _v_03000596 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_03000596;
    g_cpu.R[15] = 0x03000598u;
    runtime_tick(_cyc_03000596);
    /* 03000598  03000598 T adds r1,r1,r0 */
    g_cpu.R[15] = 0x03000598u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000598 = 1u;
    _cyc_03000598 = 1u;
    uint32_t _rm_03000598 = g_cpu.R[0];
    uint32_t _op2_03000598;
    uint32_t _co_03000598;
    _op2_03000598 = _rm_03000598;
    _co_03000598 = cpsr_c();
    uint32_t _rn_03000598 = g_cpu.R[1];
    uint32_t _r_03000598;
    _r_03000598 = _rn_03000598 + _op2_03000598;
    arm_set_nzcv_add(_rn_03000598, _op2_03000598, _r_03000598);
    g_cpu.R[1] = _r_03000598;
    g_cpu.R[15] = 0x0300059Au;
    runtime_tick(_cyc_03000598);
    /* 0300059A  0300059a T ldr r4,[r1] */
    g_cpu.R[15] = 0x0300059Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300059A = 1u;
    _cyc_0300059A = 2u;
    uint32_t _base_0300059A = g_cpu.R[1];
    uint32_t _off_0300059A;
    _off_0300059A = 0x00000000u;
    uint32_t _ea_0300059A = _base_0300059A + _off_0300059A;
    uint32_t _post_0300059A = _base_0300059A + _off_0300059A;
    _cyc_0300059A += runtime_mem_cycles(_ea_0300059A, 4u, 0u);
    uint32_t _v_0300059A;
    { uint32_t _w = bus_read_u32(_ea_0300059A & ~3u); uint32_t _rot = (_ea_0300059A & 3u) * 8u; _v_0300059A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[4] = _v_0300059A;
    g_cpu.R[15] = 0x0300059Cu;
    runtime_tick(_cyc_0300059A);
    /* 0300059C  0300059c T movs r0,#0x10 */
    g_cpu.R[15] = 0x0300059Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300059C = 1u;
    _cyc_0300059C = 1u;
    uint32_t _r_0300059C;
    _r_0300059C = 0x00000010u;
    arm_set_nzc_logic(_r_0300059C, cpsr_c());
    g_cpu.R[0] = _r_0300059C;
    g_cpu.R[15] = 0x0300059Eu;
    runtime_tick(_cyc_0300059C);
    /* 0300059E  0300059e T ldr r1,[r13,#0x20] */
    g_cpu.R[15] = 0x0300059Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300059E = 1u;
    _cyc_0300059E = 2u;
    uint32_t _base_0300059E = g_cpu.R[13];
    uint32_t _off_0300059E;
    _off_0300059E = 0x00000020u;
    uint32_t _ea_0300059E = _base_0300059E + _off_0300059E;
    uint32_t _post_0300059E = _base_0300059E + _off_0300059E;
    _cyc_0300059E += runtime_mem_cycles(_ea_0300059E, 4u, 0u);
    uint32_t _v_0300059E;
    { uint32_t _w = bus_read_u32(_ea_0300059E & ~3u); uint32_t _rot = (_ea_0300059E & 3u) * 8u; _v_0300059E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0300059E;
    g_cpu.R[15] = 0x030005A0u;
    runtime_tick(_cyc_0300059E);
    /* 030005A0  030005a0 T ands r0,r0,r1 */
    g_cpu.R[15] = 0x030005A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005A0 = 1u;
    _cyc_030005A0 = 1u;
    uint32_t _rm_030005A0 = g_cpu.R[1];
    uint32_t _op2_030005A0;
    uint32_t _co_030005A0;
    _op2_030005A0 = _rm_030005A0;
    _co_030005A0 = cpsr_c();
    uint32_t _rn_030005A0 = g_cpu.R[0];
    uint32_t _r_030005A0;
    _r_030005A0 = _rn_030005A0 & _op2_030005A0;
    arm_set_nzc_logic(_r_030005A0, _co_030005A0);
    g_cpu.R[0] = _r_030005A0;
    g_cpu.R[15] = 0x030005A2u;
    runtime_tick(_cyc_030005A0);
    /* 030005A2  030005a2 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x030005A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005A2 = 1u;
    _cyc_030005A2 = 1u;
    uint32_t _rn_030005A2 = g_cpu.R[0];
    uint32_t _r_030005A2;
    _r_030005A2 = _rn_030005A2 - 0x00000000u;
    arm_set_nzcv_sub(_rn_030005A2, 0x00000000u, _r_030005A2);
    g_cpu.R[15] = 0x030005A4u;
    runtime_tick(_cyc_030005A2);
    /* 030005A4  030005a4 T beq 0x030005ac */
    g_cpu.R[15] = 0x030005A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005A4 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_030005A4 = 3u;
        g_cpu.R[15] = 0x030005ACu;
        runtime_tick(_cyc_030005A4);
        GBARECOMP_TAIL_CALL(gf_tfunc_030005AC);
    }
    g_cpu.R[15] = 0x030005A6u;
    runtime_tick(_cyc_030005A4);
    /* 030005A6  030005a6 T rsbs r1,r3,#0x0 */
    g_cpu.R[15] = 0x030005A6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005A6 = 1u;
    _cyc_030005A6 = 1u;
    uint32_t _rn_030005A6 = g_cpu.R[3];
    uint32_t _r_030005A6;
    _r_030005A6 = 0x00000000u - _rn_030005A6;
    arm_set_nzcv_sub(0x00000000u, _rn_030005A6, _r_030005A6);
    g_cpu.R[1] = _r_030005A6;
    g_cpu.R[15] = 0x030005A8u;
    runtime_tick(_cyc_030005A6);
    /* 030005A8  030005a8 T movs r0,r4,lsl #1 */
    g_cpu.R[15] = 0x030005A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005A8 = 1u;
    _cyc_030005A8 = 1u;
    uint32_t _rm_030005A8 = g_cpu.R[4];
    uint32_t _op2_030005A8;
    uint32_t _co_030005A8;
    _op2_030005A8 = _rm_030005A8 << 1;
    _co_030005A8 = (_rm_030005A8 >> 31) & 1u;
    uint32_t _r_030005A8;
    _r_030005A8 = _op2_030005A8;
    arm_set_nzc_logic(_r_030005A8, _co_030005A8);
    g_cpu.R[0] = _r_030005A8;
    g_cpu.R[15] = 0x030005AAu;
    runtime_tick(_cyc_030005A8);
    /* 030005AA  030005aa T subs r3,r1,r0 */
    g_cpu.R[15] = 0x030005AAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005AA = 1u;
    _cyc_030005AA = 1u;
    uint32_t _rm_030005AA = g_cpu.R[0];
    uint32_t _op2_030005AA;
    uint32_t _co_030005AA;
    _op2_030005AA = _rm_030005AA;
    _co_030005AA = cpsr_c();
    uint32_t _rn_030005AA = g_cpu.R[1];
    uint32_t _r_030005AA;
    _r_030005AA = _rn_030005AA - _op2_030005AA;
    arm_set_nzcv_sub(_rn_030005AA, _op2_030005AA, _r_030005AA);
    g_cpu.R[3] = _r_030005AA;
    g_cpu.R[15] = 0x030005ACu;
    runtime_tick(_cyc_030005AA);
    /* fall-through to 0x030005AC */
    g_cpu.R[15] = 0x030005ACu;
    runtime_dispatch(0x030005ACu);
    return;
}

/* 0x030005AC  mode=thumb  end=0x030005BE  branches=2 */


/* 0x030005AC thumb */
void gf_tfunc_030005AC(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030005ACu);
    /* 030005AC  030005ac T movs r0,#0x20 */
    g_cpu.R[15] = 0x030005ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005AC = 1u;
    _cyc_030005AC = 1u;
    uint32_t _r_030005AC;
    _r_030005AC = 0x00000020u;
    arm_set_nzc_logic(_r_030005AC, cpsr_c());
    g_cpu.R[0] = _r_030005AC;
    g_cpu.R[15] = 0x030005AEu;
    runtime_tick(_cyc_030005AC);
    /* 030005AE  030005ae T ldr r6,[r13,#0x20] */
    g_cpu.R[15] = 0x030005AEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005AE = 1u;
    _cyc_030005AE = 2u;
    uint32_t _base_030005AE = g_cpu.R[13];
    uint32_t _off_030005AE;
    _off_030005AE = 0x00000020u;
    uint32_t _ea_030005AE = _base_030005AE + _off_030005AE;
    uint32_t _post_030005AE = _base_030005AE + _off_030005AE;
    _cyc_030005AE += runtime_mem_cycles(_ea_030005AE, 4u, 0u);
    uint32_t _v_030005AE;
    { uint32_t _w = bus_read_u32(_ea_030005AE & ~3u); uint32_t _rot = (_ea_030005AE & 3u) * 8u; _v_030005AE = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[6] = _v_030005AE;
    g_cpu.R[15] = 0x030005B0u;
    runtime_tick(_cyc_030005AE);
    /* 030005B0  030005b0 T ands r0,r0,r6 */
    g_cpu.R[15] = 0x030005B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005B0 = 1u;
    _cyc_030005B0 = 1u;
    uint32_t _rm_030005B0 = g_cpu.R[6];
    uint32_t _op2_030005B0;
    uint32_t _co_030005B0;
    _op2_030005B0 = _rm_030005B0;
    _co_030005B0 = cpsr_c();
    uint32_t _rn_030005B0 = g_cpu.R[0];
    uint32_t _r_030005B0;
    _r_030005B0 = _rn_030005B0 & _op2_030005B0;
    arm_set_nzc_logic(_r_030005B0, _co_030005B0);
    g_cpu.R[0] = _r_030005B0;
    g_cpu.R[15] = 0x030005B2u;
    runtime_tick(_cyc_030005B0);
    /* 030005B2  030005b2 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x030005B2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005B2 = 1u;
    _cyc_030005B2 = 1u;
    uint32_t _rn_030005B2 = g_cpu.R[0];
    uint32_t _r_030005B2;
    _r_030005B2 = _rn_030005B2 - 0x00000000u;
    arm_set_nzcv_sub(_rn_030005B2, 0x00000000u, _r_030005B2);
    g_cpu.R[15] = 0x030005B4u;
    runtime_tick(_cyc_030005B2);
    /* 030005B4  030005b4 T beq 0x0300068e */
    g_cpu.R[15] = 0x030005B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005B4 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_030005B4 = 3u;
        g_cpu.R[15] = 0x0300068Eu;
        runtime_tick(_cyc_030005B4);
        GBARECOMP_TAIL_CALL(gf_tfunc_0300068E);
    }
    g_cpu.R[15] = 0x030005B6u;
    runtime_tick(_cyc_030005B4);
    /* 030005B6  030005b6 T rsbs r1,r2,#0x0 */
    g_cpu.R[15] = 0x030005B6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005B6 = 1u;
    _cyc_030005B6 = 1u;
    uint32_t _rn_030005B6 = g_cpu.R[2];
    uint32_t _r_030005B6;
    _r_030005B6 = 0x00000000u - _rn_030005B6;
    arm_set_nzcv_sub(0x00000000u, _rn_030005B6, _r_030005B6);
    g_cpu.R[1] = _r_030005B6;
    g_cpu.R[15] = 0x030005B8u;
    runtime_tick(_cyc_030005B6);
    /* 030005B8  030005b8 T movs r0,r5,lsl #1 */
    g_cpu.R[15] = 0x030005B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005B8 = 1u;
    _cyc_030005B8 = 1u;
    uint32_t _rm_030005B8 = g_cpu.R[5];
    uint32_t _op2_030005B8;
    uint32_t _co_030005B8;
    _op2_030005B8 = _rm_030005B8 << 1;
    _co_030005B8 = (_rm_030005B8 >> 31) & 1u;
    uint32_t _r_030005B8;
    _r_030005B8 = _op2_030005B8;
    arm_set_nzc_logic(_r_030005B8, _co_030005B8);
    g_cpu.R[0] = _r_030005B8;
    g_cpu.R[15] = 0x030005BAu;
    runtime_tick(_cyc_030005B8);
    /* 030005BA  030005ba T subs r2,r1,r0 */
    g_cpu.R[15] = 0x030005BAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005BA = 1u;
    _cyc_030005BA = 1u;
    uint32_t _rm_030005BA = g_cpu.R[0];
    uint32_t _op2_030005BA;
    uint32_t _co_030005BA;
    _op2_030005BA = _rm_030005BA;
    _co_030005BA = cpsr_c();
    uint32_t _rn_030005BA = g_cpu.R[1];
    uint32_t _r_030005BA;
    _r_030005BA = _rn_030005BA - _op2_030005BA;
    arm_set_nzcv_sub(_rn_030005BA, _op2_030005BA, _r_030005BA);
    g_cpu.R[2] = _r_030005BA;
    g_cpu.R[15] = 0x030005BCu;
    runtime_tick(_cyc_030005BA);
    /* 030005BC  030005bc T b 0x0300068e */
    g_cpu.R[15] = 0x030005BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005BC = 1u;
    _cyc_030005BC = 3u;
    g_cpu.R[15] = 0x0300068Eu;
    runtime_tick(_cyc_030005BC);
    GBARECOMP_TAIL_CALL(gf_tfunc_0300068E);
    g_cpu.R[15] = 0x030005BEu;
    runtime_tick(_cyc_030005BC);
    /* fall-through to 0x030005BE */
    g_cpu.R[15] = 0x030005BEu;
    runtime_dispatch(0x030005BEu);
    return;
}

/* 0x03000634  mode=thumb  end=0x0300064C  branches=11 */


/* 0x030005C8 thumb */
void gf_tfunc_030005C8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030005C8u);
    /* 030005C8  030005c8 T movs r0,#0x80 */
    g_cpu.R[15] = 0x030005C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005C8 = 1u;
    _cyc_030005C8 = 1u;
    uint32_t _r_030005C8;
    _r_030005C8 = 0x00000080u;
    arm_set_nzc_logic(_r_030005C8, cpsr_c());
    g_cpu.R[0] = _r_030005C8;
    g_cpu.R[15] = 0x030005CAu;
    runtime_tick(_cyc_030005C8);
    /* 030005CA  030005ca T movs r0,r0,lsl #2 */
    g_cpu.R[15] = 0x030005CAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005CA = 1u;
    _cyc_030005CA = 1u;
    uint32_t _rm_030005CA = g_cpu.R[0];
    uint32_t _op2_030005CA;
    uint32_t _co_030005CA;
    _op2_030005CA = _rm_030005CA << 2;
    _co_030005CA = (_rm_030005CA >> 30) & 1u;
    uint32_t _r_030005CA;
    _r_030005CA = _op2_030005CA;
    arm_set_nzc_logic(_r_030005CA, _co_030005CA);
    g_cpu.R[0] = _r_030005CA;
    g_cpu.R[15] = 0x030005CCu;
    runtime_tick(_cyc_030005CA);
    /* 030005CC  030005cc T ldr r1,[r13,#0x18] */
    g_cpu.R[15] = 0x030005CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005CC = 1u;
    _cyc_030005CC = 2u;
    uint32_t _base_030005CC = g_cpu.R[13];
    uint32_t _off_030005CC;
    _off_030005CC = 0x00000018u;
    uint32_t _ea_030005CC = _base_030005CC + _off_030005CC;
    uint32_t _post_030005CC = _base_030005CC + _off_030005CC;
    _cyc_030005CC += runtime_mem_cycles(_ea_030005CC, 4u, 0u);
    uint32_t _v_030005CC;
    { uint32_t _w = bus_read_u32(_ea_030005CC & ~3u); uint32_t _rot = (_ea_030005CC & 3u) * 8u; _v_030005CC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_030005CC;
    g_cpu.R[15] = 0x030005CEu;
    runtime_tick(_cyc_030005CC);
    /* 030005CE  030005ce T ands r0,r0,r1 */
    g_cpu.R[15] = 0x030005CEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005CE = 1u;
    _cyc_030005CE = 1u;
    uint32_t _rm_030005CE = g_cpu.R[1];
    uint32_t _op2_030005CE;
    uint32_t _co_030005CE;
    _op2_030005CE = _rm_030005CE;
    _co_030005CE = cpsr_c();
    uint32_t _rn_030005CE = g_cpu.R[0];
    uint32_t _r_030005CE;
    _r_030005CE = _rn_030005CE & _op2_030005CE;
    arm_set_nzc_logic(_r_030005CE, _co_030005CE);
    g_cpu.R[0] = _r_030005CE;
    g_cpu.R[15] = 0x030005D0u;
    runtime_tick(_cyc_030005CE);
    /* 030005D0  030005d0 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x030005D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005D0 = 1u;
    _cyc_030005D0 = 1u;
    uint32_t _rn_030005D0 = g_cpu.R[0];
    uint32_t _r_030005D0;
    _r_030005D0 = _rn_030005D0 - 0x00000000u;
    arm_set_nzcv_sub(_rn_030005D0, 0x00000000u, _r_030005D0);
    g_cpu.R[15] = 0x030005D2u;
    runtime_tick(_cyc_030005D0);
    /* 030005D2  030005d2 T beq 0x03000610 */
    g_cpu.R[15] = 0x030005D2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005D2 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_030005D2 = 3u;
        g_cpu.R[15] = 0x03000610u;
        runtime_tick(_cyc_030005D2);
        GBARECOMP_TAIL_CALL(gf_tfunc_03000610);
    }
    g_cpu.R[15] = 0x030005D4u;
    runtime_tick(_cyc_030005D2);
    /* 030005D4  030005d4 T adds r1,r7,#0x0 */
    g_cpu.R[15] = 0x030005D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005D4 = 1u;
    _cyc_030005D4 = 1u;
    uint32_t _rn_030005D4 = g_cpu.R[7];
    uint32_t _r_030005D4;
    _r_030005D4 = _rn_030005D4 + 0x00000000u;
    arm_set_nzcv_add(_rn_030005D4, 0x00000000u, _r_030005D4);
    g_cpu.R[1] = _r_030005D4;
    g_cpu.R[15] = 0x030005D6u;
    runtime_tick(_cyc_030005D4);
    /* 030005D6  030005d6 T movs r4,#0xc0 */
    g_cpu.R[15] = 0x030005D6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005D6 = 1u;
    _cyc_030005D6 = 1u;
    uint32_t _r_030005D6;
    _r_030005D6 = 0x000000C0u;
    arm_set_nzc_logic(_r_030005D6, cpsr_c());
    g_cpu.R[4] = _r_030005D6;
    g_cpu.R[15] = 0x030005D8u;
    runtime_tick(_cyc_030005D6);
    /* 030005D8  030005d8 T movs r4,r4,lsl #8 */
    g_cpu.R[15] = 0x030005D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005D8 = 1u;
    _cyc_030005D8 = 1u;
    uint32_t _rm_030005D8 = g_cpu.R[4];
    uint32_t _op2_030005D8;
    uint32_t _co_030005D8;
    _op2_030005D8 = _rm_030005D8 << 8;
    _co_030005D8 = (_rm_030005D8 >> 24) & 1u;
    uint32_t _r_030005D8;
    _r_030005D8 = _op2_030005D8;
    arm_set_nzc_logic(_r_030005D8, _co_030005D8);
    g_cpu.R[4] = _r_030005D8;
    g_cpu.R[15] = 0x030005DAu;
    runtime_tick(_cyc_030005D8);
    /* 030005DA  030005da T ands r1,r1,r4 */
    g_cpu.R[15] = 0x030005DAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005DA = 1u;
    _cyc_030005DA = 1u;
    uint32_t _rm_030005DA = g_cpu.R[4];
    uint32_t _op2_030005DA;
    uint32_t _co_030005DA;
    _op2_030005DA = _rm_030005DA;
    _co_030005DA = cpsr_c();
    uint32_t _rn_030005DA = g_cpu.R[1];
    uint32_t _r_030005DA;
    _r_030005DA = _rn_030005DA & _op2_030005DA;
    arm_set_nzc_logic(_r_030005DA, _co_030005DA);
    g_cpu.R[1] = _r_030005DA;
    g_cpu.R[15] = 0x030005DCu;
    runtime_tick(_cyc_030005DA);
    /* 030005DC  030005dc T movs r1,r1,lsr #12 */
    g_cpu.R[15] = 0x030005DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005DC = 1u;
    _cyc_030005DC = 1u;
    uint32_t _rm_030005DC = g_cpu.R[1];
    uint32_t _op2_030005DC;
    uint32_t _co_030005DC;
    _op2_030005DC = _rm_030005DC >> 12;
    _co_030005DC = (_rm_030005DC >> 11) & 1u;
    uint32_t _r_030005DC;
    _r_030005DC = _op2_030005DC;
    arm_set_nzc_logic(_r_030005DC, _co_030005DC);
    g_cpu.R[1] = _r_030005DC;
    g_cpu.R[15] = 0x030005DEu;
    runtime_tick(_cyc_030005DC);
    /* 030005DE  030005de T adds r0,r7,#0x0 */
    g_cpu.R[15] = 0x030005DEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005DE = 1u;
    _cyc_030005DE = 1u;
    uint32_t _rn_030005DE = g_cpu.R[7];
    uint32_t _r_030005DE;
    _r_030005DE = _rn_030005DE + 0x00000000u;
    arm_set_nzcv_add(_rn_030005DE, 0x00000000u, _r_030005DE);
    g_cpu.R[0] = _r_030005DE;
    g_cpu.R[15] = 0x030005E0u;
    runtime_tick(_cyc_030005DE);
    /* 030005E0  030005e0 T movs r6,#0xc0 */
    g_cpu.R[15] = 0x030005E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005E0 = 1u;
    _cyc_030005E0 = 1u;
    uint32_t _r_030005E0;
    _r_030005E0 = 0x000000C0u;
    arm_set_nzc_logic(_r_030005E0, cpsr_c());
    g_cpu.R[6] = _r_030005E0;
    g_cpu.R[15] = 0x030005E2u;
    runtime_tick(_cyc_030005E0);
    /* 030005E2  030005e2 T movs r6,r6,lsl #24 */
    g_cpu.R[15] = 0x030005E2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005E2 = 1u;
    _cyc_030005E2 = 1u;
    uint32_t _rm_030005E2 = g_cpu.R[6];
    uint32_t _op2_030005E2;
    uint32_t _co_030005E2;
    _op2_030005E2 = _rm_030005E2 << 24;
    _co_030005E2 = (_rm_030005E2 >> 8) & 1u;
    uint32_t _r_030005E2;
    _r_030005E2 = _op2_030005E2;
    arm_set_nzc_logic(_r_030005E2, _co_030005E2);
    g_cpu.R[6] = _r_030005E2;
    g_cpu.R[15] = 0x030005E4u;
    runtime_tick(_cyc_030005E2);
    /* 030005E4  030005e4 T ands r0,r0,r6 */
    g_cpu.R[15] = 0x030005E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005E4 = 1u;
    _cyc_030005E4 = 1u;
    uint32_t _rm_030005E4 = g_cpu.R[6];
    uint32_t _op2_030005E4;
    uint32_t _co_030005E4;
    _op2_030005E4 = _rm_030005E4;
    _co_030005E4 = cpsr_c();
    uint32_t _rn_030005E4 = g_cpu.R[0];
    uint32_t _r_030005E4;
    _r_030005E4 = _rn_030005E4 & _op2_030005E4;
    arm_set_nzc_logic(_r_030005E4, _co_030005E4);
    g_cpu.R[0] = _r_030005E4;
    g_cpu.R[15] = 0x030005E6u;
    runtime_tick(_cyc_030005E4);
    /* 030005E6  030005e6 T movs r0,r0,lsr #30 */
    g_cpu.R[15] = 0x030005E6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005E6 = 1u;
    _cyc_030005E6 = 1u;
    uint32_t _rm_030005E6 = g_cpu.R[0];
    uint32_t _op2_030005E6;
    uint32_t _co_030005E6;
    _op2_030005E6 = _rm_030005E6 >> 30;
    _co_030005E6 = (_rm_030005E6 >> 29) & 1u;
    uint32_t _r_030005E6;
    _r_030005E6 = _op2_030005E6;
    arm_set_nzc_logic(_r_030005E6, _co_030005E6);
    g_cpu.R[0] = _r_030005E6;
    g_cpu.R[15] = 0x030005E8u;
    runtime_tick(_cyc_030005E6);
    /* 030005E8  030005e8 T adds r1,r1,r0 */
    g_cpu.R[15] = 0x030005E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005E8 = 1u;
    _cyc_030005E8 = 1u;
    uint32_t _rm_030005E8 = g_cpu.R[0];
    uint32_t _op2_030005E8;
    uint32_t _co_030005E8;
    _op2_030005E8 = _rm_030005E8;
    _co_030005E8 = cpsr_c();
    uint32_t _rn_030005E8 = g_cpu.R[1];
    uint32_t _r_030005E8;
    _r_030005E8 = _rn_030005E8 + _op2_030005E8;
    arm_set_nzcv_add(_rn_030005E8, _op2_030005E8, _r_030005E8);
    g_cpu.R[1] = _r_030005E8;
    g_cpu.R[15] = 0x030005EAu;
    runtime_tick(_cyc_030005E8);
    /* 030005EA  030005ea T movs r1,r1,lsl #2 */
    g_cpu.R[15] = 0x030005EAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005EA = 1u;
    _cyc_030005EA = 1u;
    uint32_t _rm_030005EA = g_cpu.R[1];
    uint32_t _op2_030005EA;
    uint32_t _co_030005EA;
    _op2_030005EA = _rm_030005EA << 2;
    _co_030005EA = (_rm_030005EA >> 30) & 1u;
    uint32_t _r_030005EA;
    _r_030005EA = _op2_030005EA;
    arm_set_nzc_logic(_r_030005EA, _co_030005EA);
    g_cpu.R[1] = _r_030005EA;
    g_cpu.R[15] = 0x030005ECu;
    runtime_tick(_cyc_030005EA);
    /* 030005EC  030005ec T ldr r4,[r15,#0x18] */
    g_cpu.R[15] = 0x030005ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005EC = 1u;
    _cyc_030005EC = 2u;
    uint32_t _base_030005EC = 0x030005F0u & ~3u;
    uint32_t _off_030005EC;
    _off_030005EC = 0x00000018u;
    uint32_t _ea_030005EC = _base_030005EC + _off_030005EC;
    uint32_t _post_030005EC = _base_030005EC + _off_030005EC;
    _cyc_030005EC += runtime_mem_cycles(_ea_030005EC, 4u, 0u);
    uint32_t _v_030005EC;
    { uint32_t _w = bus_read_u32(_ea_030005EC & ~3u); uint32_t _rot = (_ea_030005EC & 3u) * 8u; _v_030005EC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[4] = _v_030005EC;
    g_cpu.R[15] = 0x030005EEu;
    runtime_tick(_cyc_030005EC);
    /* 030005EE  030005ee T adds r0,r1,r4 */
    g_cpu.R[15] = 0x030005EEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005EE = 1u;
    _cyc_030005EE = 1u;
    uint32_t _rm_030005EE = g_cpu.R[4];
    uint32_t _op2_030005EE;
    uint32_t _co_030005EE;
    _op2_030005EE = _rm_030005EE;
    _co_030005EE = cpsr_c();
    uint32_t _rn_030005EE = g_cpu.R[1];
    uint32_t _r_030005EE;
    _r_030005EE = _rn_030005EE + _op2_030005EE;
    arm_set_nzcv_add(_rn_030005EE, _op2_030005EE, _r_030005EE);
    g_cpu.R[0] = _r_030005EE;
    g_cpu.R[15] = 0x030005F0u;
    runtime_tick(_cyc_030005EE);
    /* 030005F0  030005f0 T ldr r0,[r0] */
    g_cpu.R[15] = 0x030005F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005F0 = 1u;
    _cyc_030005F0 = 2u;
    uint32_t _base_030005F0 = g_cpu.R[0];
    uint32_t _off_030005F0;
    _off_030005F0 = 0x00000000u;
    uint32_t _ea_030005F0 = _base_030005F0 + _off_030005F0;
    uint32_t _post_030005F0 = _base_030005F0 + _off_030005F0;
    _cyc_030005F0 += runtime_mem_cycles(_ea_030005F0, 4u, 0u);
    uint32_t _v_030005F0;
    { uint32_t _w = bus_read_u32(_ea_030005F0 & ~3u); uint32_t _rot = (_ea_030005F0 & 3u) * 8u; _v_030005F0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_030005F0;
    g_cpu.R[15] = 0x030005F2u;
    runtime_tick(_cyc_030005F0);
    /* 030005F2  030005f2 T movs r5,r0,lsl #1 */
    g_cpu.R[15] = 0x030005F2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005F2 = 1u;
    _cyc_030005F2 = 1u;
    uint32_t _rm_030005F2 = g_cpu.R[0];
    uint32_t _op2_030005F2;
    uint32_t _co_030005F2;
    _op2_030005F2 = _rm_030005F2 << 1;
    _co_030005F2 = (_rm_030005F2 >> 31) & 1u;
    uint32_t _r_030005F2;
    _r_030005F2 = _op2_030005F2;
    arm_set_nzc_logic(_r_030005F2, _co_030005F2);
    g_cpu.R[5] = _r_030005F2;
    g_cpu.R[15] = 0x030005F4u;
    runtime_tick(_cyc_030005F2);
    /* 030005F4  030005f4 T ldr r6,[r15,#0x14] */
    g_cpu.R[15] = 0x030005F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005F4 = 1u;
    _cyc_030005F4 = 2u;
    uint32_t _base_030005F4 = 0x030005F8u & ~3u;
    uint32_t _off_030005F4;
    _off_030005F4 = 0x00000014u;
    uint32_t _ea_030005F4 = _base_030005F4 + _off_030005F4;
    uint32_t _post_030005F4 = _base_030005F4 + _off_030005F4;
    _cyc_030005F4 += runtime_mem_cycles(_ea_030005F4, 4u, 0u);
    uint32_t _v_030005F4;
    { uint32_t _w = bus_read_u32(_ea_030005F4 & ~3u); uint32_t _rot = (_ea_030005F4 & 3u) * 8u; _v_030005F4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[6] = _v_030005F4;
    g_cpu.R[15] = 0x030005F6u;
    runtime_tick(_cyc_030005F4);
    /* 030005F6  030005f6 T adds r1,r1,r6 */
    g_cpu.R[15] = 0x030005F6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005F6 = 1u;
    _cyc_030005F6 = 1u;
    uint32_t _rm_030005F6 = g_cpu.R[6];
    uint32_t _op2_030005F6;
    uint32_t _co_030005F6;
    _op2_030005F6 = _rm_030005F6;
    _co_030005F6 = cpsr_c();
    uint32_t _rn_030005F6 = g_cpu.R[1];
    uint32_t _r_030005F6;
    _r_030005F6 = _rn_030005F6 + _op2_030005F6;
    arm_set_nzcv_add(_rn_030005F6, _op2_030005F6, _r_030005F6);
    g_cpu.R[1] = _r_030005F6;
    g_cpu.R[15] = 0x030005F8u;
    runtime_tick(_cyc_030005F6);
    /* 030005F8  030005f8 T ldr r0,[r1] */
    g_cpu.R[15] = 0x030005F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005F8 = 1u;
    _cyc_030005F8 = 2u;
    uint32_t _base_030005F8 = g_cpu.R[1];
    uint32_t _off_030005F8;
    _off_030005F8 = 0x00000000u;
    uint32_t _ea_030005F8 = _base_030005F8 + _off_030005F8;
    uint32_t _post_030005F8 = _base_030005F8 + _off_030005F8;
    _cyc_030005F8 += runtime_mem_cycles(_ea_030005F8, 4u, 0u);
    uint32_t _v_030005F8;
    { uint32_t _w = bus_read_u32(_ea_030005F8 & ~3u); uint32_t _rot = (_ea_030005F8 & 3u) * 8u; _v_030005F8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_030005F8;
    g_cpu.R[15] = 0x030005FAu;
    runtime_tick(_cyc_030005F8);
    /* 030005FA  030005fa T movs r4,r0,lsl #1 */
    g_cpu.R[15] = 0x030005FAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005FA = 1u;
    _cyc_030005FA = 1u;
    uint32_t _rm_030005FA = g_cpu.R[0];
    uint32_t _op2_030005FA;
    uint32_t _co_030005FA;
    _op2_030005FA = _rm_030005FA << 1;
    _co_030005FA = (_rm_030005FA >> 31) & 1u;
    uint32_t _r_030005FA;
    _r_030005FA = _op2_030005FA;
    arm_set_nzc_logic(_r_030005FA, _co_030005FA);
    g_cpu.R[4] = _r_030005FA;
    g_cpu.R[15] = 0x030005FCu;
    runtime_tick(_cyc_030005FA);
    /* 030005FC  030005fc T movs r0,r4,asr #1 */
    g_cpu.R[15] = 0x030005FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005FC = 1u;
    _cyc_030005FC = 1u;
    uint32_t _rm_030005FC = g_cpu.R[4];
    uint32_t _op2_030005FC;
    uint32_t _co_030005FC;
    _op2_030005FC = (uint32_t)((int32_t)_rm_030005FC >> 1);
    _co_030005FC = (_rm_030005FC >> 0) & 1u;
    uint32_t _r_030005FC;
    _r_030005FC = _op2_030005FC;
    arm_set_nzc_logic(_r_030005FC, _co_030005FC);
    g_cpu.R[0] = _r_030005FC;
    g_cpu.R[15] = 0x030005FEu;
    runtime_tick(_cyc_030005FC);
    /* 030005FE  030005fe T subs r3,r3,r0 */
    g_cpu.R[15] = 0x030005FEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030005FE = 1u;
    _cyc_030005FE = 1u;
    uint32_t _rm_030005FE = g_cpu.R[0];
    uint32_t _op2_030005FE;
    uint32_t _co_030005FE;
    _op2_030005FE = _rm_030005FE;
    _co_030005FE = cpsr_c();
    uint32_t _rn_030005FE = g_cpu.R[3];
    uint32_t _r_030005FE;
    _r_030005FE = _rn_030005FE - _op2_030005FE;
    arm_set_nzcv_sub(_rn_030005FE, _op2_030005FE, _r_030005FE);
    g_cpu.R[3] = _r_030005FE;
    g_cpu.R[15] = 0x03000600u;
    runtime_tick(_cyc_030005FE);
    /* 03000600  03000600 T movs r0,r5,asr #1 */
    g_cpu.R[15] = 0x03000600u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000600 = 1u;
    _cyc_03000600 = 1u;
    uint32_t _rm_03000600 = g_cpu.R[5];
    uint32_t _op2_03000600;
    uint32_t _co_03000600;
    _op2_03000600 = (uint32_t)((int32_t)_rm_03000600 >> 1);
    _co_03000600 = (_rm_03000600 >> 0) & 1u;
    uint32_t _r_03000600;
    _r_03000600 = _op2_03000600;
    arm_set_nzc_logic(_r_03000600, _co_03000600);
    g_cpu.R[0] = _r_03000600;
    g_cpu.R[15] = 0x03000602u;
    runtime_tick(_cyc_03000600);
    /* 03000602  03000602 T subs r2,r2,r0 */
    g_cpu.R[15] = 0x03000602u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000602 = 1u;
    _cyc_03000602 = 1u;
    uint32_t _rm_03000602 = g_cpu.R[0];
    uint32_t _op2_03000602;
    uint32_t _co_03000602;
    _op2_03000602 = _rm_03000602;
    _co_03000602 = cpsr_c();
    uint32_t _rn_03000602 = g_cpu.R[2];
    uint32_t _r_03000602;
    _r_03000602 = _rn_03000602 - _op2_03000602;
    arm_set_nzcv_sub(_rn_03000602, _op2_03000602, _r_03000602);
    g_cpu.R[2] = _r_03000602;
    g_cpu.R[15] = 0x03000604u;
    runtime_tick(_cyc_03000602);
    /* 03000604  03000604 T b 0x03000634 */
    g_cpu.R[15] = 0x03000604u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000604 = 1u;
    _cyc_03000604 = 3u;
    g_cpu.R[15] = 0x03000634u;
    runtime_tick(_cyc_03000604);
    GBARECOMP_TAIL_CALL(gf_tfunc_03000634);
    g_cpu.R[15] = 0x03000606u;
    runtime_tick(_cyc_03000604);
    /* fall-through to 0x03000606 */
    g_cpu.R[15] = 0x03000606u;
    runtime_dispatch(0x03000606u);
    return;
}

/* 0x03000610  mode=thumb  end=0x03000634  branches=11 */


/* 0x03000610 thumb */
void gf_tfunc_03000610(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000610u);
    /* 03000610  03000610 T adds r0,r7,#0x0 */
    g_cpu.R[15] = 0x03000610u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000610 = 1u;
    _cyc_03000610 = 1u;
    uint32_t _rn_03000610 = g_cpu.R[7];
    uint32_t _r_03000610;
    _r_03000610 = _rn_03000610 + 0x00000000u;
    arm_set_nzcv_add(_rn_03000610, 0x00000000u, _r_03000610);
    g_cpu.R[0] = _r_03000610;
    g_cpu.R[15] = 0x03000612u;
    runtime_tick(_cyc_03000610);
    /* 03000612  03000612 T movs r1,#0xc0 */
    g_cpu.R[15] = 0x03000612u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000612 = 1u;
    _cyc_03000612 = 1u;
    uint32_t _r_03000612;
    _r_03000612 = 0x000000C0u;
    arm_set_nzc_logic(_r_03000612, cpsr_c());
    g_cpu.R[1] = _r_03000612;
    g_cpu.R[15] = 0x03000614u;
    runtime_tick(_cyc_03000612);
    /* 03000614  03000614 T movs r1,r1,lsl #8 */
    g_cpu.R[15] = 0x03000614u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000614 = 1u;
    _cyc_03000614 = 1u;
    uint32_t _rm_03000614 = g_cpu.R[1];
    uint32_t _op2_03000614;
    uint32_t _co_03000614;
    _op2_03000614 = _rm_03000614 << 8;
    _co_03000614 = (_rm_03000614 >> 24) & 1u;
    uint32_t _r_03000614;
    _r_03000614 = _op2_03000614;
    arm_set_nzc_logic(_r_03000614, _co_03000614);
    g_cpu.R[1] = _r_03000614;
    g_cpu.R[15] = 0x03000616u;
    runtime_tick(_cyc_03000614);
    /* 03000616  03000616 T ands r0,r0,r1 */
    g_cpu.R[15] = 0x03000616u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000616 = 1u;
    _cyc_03000616 = 1u;
    uint32_t _rm_03000616 = g_cpu.R[1];
    uint32_t _op2_03000616;
    uint32_t _co_03000616;
    _op2_03000616 = _rm_03000616;
    _co_03000616 = cpsr_c();
    uint32_t _rn_03000616 = g_cpu.R[0];
    uint32_t _r_03000616;
    _r_03000616 = _rn_03000616 & _op2_03000616;
    arm_set_nzc_logic(_r_03000616, _co_03000616);
    g_cpu.R[0] = _r_03000616;
    g_cpu.R[15] = 0x03000618u;
    runtime_tick(_cyc_03000616);
    /* 03000618  03000618 T movs r0,r0,lsr #12 */
    g_cpu.R[15] = 0x03000618u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000618 = 1u;
    _cyc_03000618 = 1u;
    uint32_t _rm_03000618 = g_cpu.R[0];
    uint32_t _op2_03000618;
    uint32_t _co_03000618;
    _op2_03000618 = _rm_03000618 >> 12;
    _co_03000618 = (_rm_03000618 >> 11) & 1u;
    uint32_t _r_03000618;
    _r_03000618 = _op2_03000618;
    arm_set_nzc_logic(_r_03000618, _co_03000618);
    g_cpu.R[0] = _r_03000618;
    g_cpu.R[15] = 0x0300061Au;
    runtime_tick(_cyc_03000618);
    /* 0300061A  0300061a T adds r1,r7,#0x0 */
    g_cpu.R[15] = 0x0300061Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300061A = 1u;
    _cyc_0300061A = 1u;
    uint32_t _rn_0300061A = g_cpu.R[7];
    uint32_t _r_0300061A;
    _r_0300061A = _rn_0300061A + 0x00000000u;
    arm_set_nzcv_add(_rn_0300061A, 0x00000000u, _r_0300061A);
    g_cpu.R[1] = _r_0300061A;
    g_cpu.R[15] = 0x0300061Cu;
    runtime_tick(_cyc_0300061A);
    /* 0300061C  0300061c T movs r4,#0xc0 */
    g_cpu.R[15] = 0x0300061Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300061C = 1u;
    _cyc_0300061C = 1u;
    uint32_t _r_0300061C;
    _r_0300061C = 0x000000C0u;
    arm_set_nzc_logic(_r_0300061C, cpsr_c());
    g_cpu.R[4] = _r_0300061C;
    g_cpu.R[15] = 0x0300061Eu;
    runtime_tick(_cyc_0300061C);
    /* 0300061E  0300061e T movs r4,r4,lsl #24 */
    g_cpu.R[15] = 0x0300061Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300061E = 1u;
    _cyc_0300061E = 1u;
    uint32_t _rm_0300061E = g_cpu.R[4];
    uint32_t _op2_0300061E;
    uint32_t _co_0300061E;
    _op2_0300061E = _rm_0300061E << 24;
    _co_0300061E = (_rm_0300061E >> 8) & 1u;
    uint32_t _r_0300061E;
    _r_0300061E = _op2_0300061E;
    arm_set_nzc_logic(_r_0300061E, _co_0300061E);
    g_cpu.R[4] = _r_0300061E;
    g_cpu.R[15] = 0x03000620u;
    runtime_tick(_cyc_0300061E);
    /* 03000620  03000620 T ands r1,r1,r4 */
    g_cpu.R[15] = 0x03000620u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000620 = 1u;
    _cyc_03000620 = 1u;
    uint32_t _rm_03000620 = g_cpu.R[4];
    uint32_t _op2_03000620;
    uint32_t _co_03000620;
    _op2_03000620 = _rm_03000620;
    _co_03000620 = cpsr_c();
    uint32_t _rn_03000620 = g_cpu.R[1];
    uint32_t _r_03000620;
    _r_03000620 = _rn_03000620 & _op2_03000620;
    arm_set_nzc_logic(_r_03000620, _co_03000620);
    g_cpu.R[1] = _r_03000620;
    g_cpu.R[15] = 0x03000622u;
    runtime_tick(_cyc_03000620);
    /* 03000622  03000622 T movs r1,r1,lsr #30 */
    g_cpu.R[15] = 0x03000622u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000622 = 1u;
    _cyc_03000622 = 1u;
    uint32_t _rm_03000622 = g_cpu.R[1];
    uint32_t _op2_03000622;
    uint32_t _co_03000622;
    _op2_03000622 = _rm_03000622 >> 30;
    _co_03000622 = (_rm_03000622 >> 29) & 1u;
    uint32_t _r_03000622;
    _r_03000622 = _op2_03000622;
    arm_set_nzc_logic(_r_03000622, _co_03000622);
    g_cpu.R[1] = _r_03000622;
    g_cpu.R[15] = 0x03000624u;
    runtime_tick(_cyc_03000622);
    /* 03000624  03000624 T adds r0,r0,r1 */
    g_cpu.R[15] = 0x03000624u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000624 = 1u;
    _cyc_03000624 = 1u;
    uint32_t _rm_03000624 = g_cpu.R[1];
    uint32_t _op2_03000624;
    uint32_t _co_03000624;
    _op2_03000624 = _rm_03000624;
    _co_03000624 = cpsr_c();
    uint32_t _rn_03000624 = g_cpu.R[0];
    uint32_t _r_03000624;
    _r_03000624 = _rn_03000624 + _op2_03000624;
    arm_set_nzcv_add(_rn_03000624, _op2_03000624, _r_03000624);
    g_cpu.R[0] = _r_03000624;
    g_cpu.R[15] = 0x03000626u;
    runtime_tick(_cyc_03000624);
    /* 03000626  03000626 T movs r0,r0,lsl #2 */
    g_cpu.R[15] = 0x03000626u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000626 = 1u;
    _cyc_03000626 = 1u;
    uint32_t _rm_03000626 = g_cpu.R[0];
    uint32_t _op2_03000626;
    uint32_t _co_03000626;
    _op2_03000626 = _rm_03000626 << 2;
    _co_03000626 = (_rm_03000626 >> 30) & 1u;
    uint32_t _r_03000626;
    _r_03000626 = _op2_03000626;
    arm_set_nzc_logic(_r_03000626, _co_03000626);
    g_cpu.R[0] = _r_03000626;
    g_cpu.R[15] = 0x03000628u;
    runtime_tick(_cyc_03000626);
    /* 03000628  03000628 T ldr r6,[r15,#0xc4] */
    g_cpu.R[15] = 0x03000628u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000628 = 1u;
    _cyc_03000628 = 2u;
    uint32_t _base_03000628 = 0x0300062Cu & ~3u;
    uint32_t _off_03000628;
    _off_03000628 = 0x000000C4u;
    uint32_t _ea_03000628 = _base_03000628 + _off_03000628;
    uint32_t _post_03000628 = _base_03000628 + _off_03000628;
    _cyc_03000628 += runtime_mem_cycles(_ea_03000628, 4u, 0u);
    uint32_t _v_03000628;
    { uint32_t _w = bus_read_u32(_ea_03000628 & ~3u); uint32_t _rot = (_ea_03000628 & 3u) * 8u; _v_03000628 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[6] = _v_03000628;
    g_cpu.R[15] = 0x0300062Au;
    runtime_tick(_cyc_03000628);
    /* 0300062A  0300062a T adds r1,r0,r6 */
    g_cpu.R[15] = 0x0300062Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300062A = 1u;
    _cyc_0300062A = 1u;
    uint32_t _rm_0300062A = g_cpu.R[6];
    uint32_t _op2_0300062A;
    uint32_t _co_0300062A;
    _op2_0300062A = _rm_0300062A;
    _co_0300062A = cpsr_c();
    uint32_t _rn_0300062A = g_cpu.R[0];
    uint32_t _r_0300062A;
    _r_0300062A = _rn_0300062A + _op2_0300062A;
    arm_set_nzcv_add(_rn_0300062A, _op2_0300062A, _r_0300062A);
    g_cpu.R[1] = _r_0300062A;
    g_cpu.R[15] = 0x0300062Cu;
    runtime_tick(_cyc_0300062A);
    /* 0300062C  0300062c T ldr r5,[r1] */
    g_cpu.R[15] = 0x0300062Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300062C = 1u;
    _cyc_0300062C = 2u;
    uint32_t _base_0300062C = g_cpu.R[1];
    uint32_t _off_0300062C;
    _off_0300062C = 0x00000000u;
    uint32_t _ea_0300062C = _base_0300062C + _off_0300062C;
    uint32_t _post_0300062C = _base_0300062C + _off_0300062C;
    _cyc_0300062C += runtime_mem_cycles(_ea_0300062C, 4u, 0u);
    uint32_t _v_0300062C;
    { uint32_t _w = bus_read_u32(_ea_0300062C & ~3u); uint32_t _rot = (_ea_0300062C & 3u) * 8u; _v_0300062C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[5] = _v_0300062C;
    g_cpu.R[15] = 0x0300062Eu;
    runtime_tick(_cyc_0300062C);
    /* 0300062E  0300062e T ldr r1,[r15,#0xc4] */
    g_cpu.R[15] = 0x0300062Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300062E = 1u;
    _cyc_0300062E = 2u;
    uint32_t _base_0300062E = 0x03000632u & ~3u;
    uint32_t _off_0300062E;
    _off_0300062E = 0x000000C4u;
    uint32_t _ea_0300062E = _base_0300062E + _off_0300062E;
    uint32_t _post_0300062E = _base_0300062E + _off_0300062E;
    _cyc_0300062E += runtime_mem_cycles(_ea_0300062E, 4u, 0u);
    uint32_t _v_0300062E;
    { uint32_t _w = bus_read_u32(_ea_0300062E & ~3u); uint32_t _rot = (_ea_0300062E & 3u) * 8u; _v_0300062E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0300062E;
    g_cpu.R[15] = 0x03000630u;
    runtime_tick(_cyc_0300062E);
    /* 03000630  03000630 T adds r0,r0,r1 */
    g_cpu.R[15] = 0x03000630u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000630 = 1u;
    _cyc_03000630 = 1u;
    uint32_t _rm_03000630 = g_cpu.R[1];
    uint32_t _op2_03000630;
    uint32_t _co_03000630;
    _op2_03000630 = _rm_03000630;
    _co_03000630 = cpsr_c();
    uint32_t _rn_03000630 = g_cpu.R[0];
    uint32_t _r_03000630;
    _r_03000630 = _rn_03000630 + _op2_03000630;
    arm_set_nzcv_add(_rn_03000630, _op2_03000630, _r_03000630);
    g_cpu.R[0] = _r_03000630;
    g_cpu.R[15] = 0x03000632u;
    runtime_tick(_cyc_03000630);
    /* 03000632  03000632 T ldr r4,[r0] */
    g_cpu.R[15] = 0x03000632u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000632 = 1u;
    _cyc_03000632 = 2u;
    uint32_t _base_03000632 = g_cpu.R[0];
    uint32_t _off_03000632;
    _off_03000632 = 0x00000000u;
    uint32_t _ea_03000632 = _base_03000632 + _off_03000632;
    uint32_t _post_03000632 = _base_03000632 + _off_03000632;
    _cyc_03000632 += runtime_mem_cycles(_ea_03000632, 4u, 0u);
    uint32_t _v_03000632;
    { uint32_t _w = bus_read_u32(_ea_03000632 & ~3u); uint32_t _rot = (_ea_03000632 & 3u) * 8u; _v_03000632 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[4] = _v_03000632;
    g_cpu.R[15] = 0x03000634u;
    runtime_tick(_cyc_03000632);
    /* fall-through to 0x03000634 */
    g_cpu.R[15] = 0x03000634u;
    runtime_dispatch(0x03000634u);
    return;
}

/* 0x0300064C  mode=thumb  end=0x0300065A  branches=10 */


/* 0x03000634 thumb */
void gf_tfunc_03000634(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000634u);
    /* 03000634  03000634 T ldr r0,[r15,#0xc0] */
    g_cpu.R[15] = 0x03000634u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000634 = 1u;
    _cyc_03000634 = 2u;
    uint32_t _base_03000634 = 0x03000638u & ~3u;
    uint32_t _off_03000634;
    _off_03000634 = 0x000000C0u;
    uint32_t _ea_03000634 = _base_03000634 + _off_03000634;
    uint32_t _post_03000634 = _base_03000634 + _off_03000634;
    _cyc_03000634 += runtime_mem_cycles(_ea_03000634, 4u, 0u);
    uint32_t _v_03000634;
    { uint32_t _w = bus_read_u32(_ea_03000634 & ~3u); uint32_t _rot = (_ea_03000634 & 3u) * 8u; _v_03000634 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_03000634;
    g_cpu.R[15] = 0x03000636u;
    runtime_tick(_cyc_03000634);
    /* 03000636  03000636 T ands r7,r7,r0 */
    g_cpu.R[15] = 0x03000636u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000636 = 1u;
    _cyc_03000636 = 1u;
    uint32_t _rm_03000636 = g_cpu.R[0];
    uint32_t _op2_03000636;
    uint32_t _co_03000636;
    _op2_03000636 = _rm_03000636;
    _co_03000636 = cpsr_c();
    uint32_t _rn_03000636 = g_cpu.R[7];
    uint32_t _r_03000636;
    _r_03000636 = _rn_03000636 & _op2_03000636;
    arm_set_nzc_logic(_r_03000636, _co_03000636);
    g_cpu.R[7] = _r_03000636;
    g_cpu.R[15] = 0x03000638u;
    runtime_tick(_cyc_03000636);
    /* 03000638  03000638 T ldr r6,[r15,#0xc0] */
    g_cpu.R[15] = 0x03000638u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000638 = 1u;
    _cyc_03000638 = 2u;
    uint32_t _base_03000638 = 0x0300063Cu & ~3u;
    uint32_t _off_03000638;
    _off_03000638 = 0x000000C0u;
    uint32_t _ea_03000638 = _base_03000638 + _off_03000638;
    uint32_t _post_03000638 = _base_03000638 + _off_03000638;
    _cyc_03000638 += runtime_mem_cycles(_ea_03000638, 4u, 0u);
    uint32_t _v_03000638;
    { uint32_t _w = bus_read_u32(_ea_03000638 & ~3u); uint32_t _rot = (_ea_03000638 & 3u) * 8u; _v_03000638 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[6] = _v_03000638;
    g_cpu.R[15] = 0x0300063Au;
    runtime_tick(_cyc_03000638);
    /* 0300063A  0300063a T ldr r0,[r6] */
    g_cpu.R[15] = 0x0300063Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300063A = 1u;
    _cyc_0300063A = 2u;
    uint32_t _base_0300063A = g_cpu.R[6];
    uint32_t _off_0300063A;
    _off_0300063A = 0x00000000u;
    uint32_t _ea_0300063A = _base_0300063A + _off_0300063A;
    uint32_t _post_0300063A = _base_0300063A + _off_0300063A;
    _cyc_0300063A += runtime_mem_cycles(_ea_0300063A, 4u, 0u);
    uint32_t _v_0300063A;
    { uint32_t _w = bus_read_u32(_ea_0300063A & ~3u); uint32_t _rot = (_ea_0300063A & 3u) * 8u; _v_0300063A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0300063A;
    g_cpu.R[15] = 0x0300063Cu;
    runtime_tick(_cyc_0300063A);
    /* 0300063C  0300063c T movs r0,r0,lsl #25 */
    g_cpu.R[15] = 0x0300063Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300063C = 1u;
    _cyc_0300063C = 1u;
    uint32_t _rm_0300063C = g_cpu.R[0];
    uint32_t _op2_0300063C;
    uint32_t _co_0300063C;
    _op2_0300063C = _rm_0300063C << 25;
    _co_0300063C = (_rm_0300063C >> 7) & 1u;
    uint32_t _r_0300063C;
    _r_0300063C = _op2_0300063C;
    arm_set_nzc_logic(_r_0300063C, _co_0300063C);
    g_cpu.R[0] = _r_0300063C;
    g_cpu.R[15] = 0x0300063Eu;
    runtime_tick(_cyc_0300063C);
    /* 0300063E  0300063e T orrs r7,r7,r0 */
    g_cpu.R[15] = 0x0300063Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300063E = 1u;
    _cyc_0300063E = 1u;
    uint32_t _rm_0300063E = g_cpu.R[0];
    uint32_t _op2_0300063E;
    uint32_t _co_0300063E;
    _op2_0300063E = _rm_0300063E;
    _co_0300063E = cpsr_c();
    uint32_t _rn_0300063E = g_cpu.R[7];
    uint32_t _r_0300063E;
    _r_0300063E = _rn_0300063E | _op2_0300063E;
    arm_set_nzc_logic(_r_0300063E, _co_0300063E);
    g_cpu.R[7] = _r_0300063E;
    g_cpu.R[15] = 0x03000640u;
    runtime_tick(_cyc_0300063E);
    /* 03000640  03000640 T adds r0,r3,r4 */
    g_cpu.R[15] = 0x03000640u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000640 = 1u;
    _cyc_03000640 = 1u;
    uint32_t _rm_03000640 = g_cpu.R[4];
    uint32_t _op2_03000640;
    uint32_t _co_03000640;
    _op2_03000640 = _rm_03000640;
    _co_03000640 = cpsr_c();
    uint32_t _rn_03000640 = g_cpu.R[3];
    uint32_t _r_03000640;
    _r_03000640 = _rn_03000640 + _op2_03000640;
    arm_set_nzcv_add(_rn_03000640, _op2_03000640, _r_03000640);
    g_cpu.R[0] = _r_03000640;
    g_cpu.R[15] = 0x03000642u;
    runtime_tick(_cyc_03000640);
    /* 03000642  03000642 T ldr r1,[r13,#0x10] */
    g_cpu.R[15] = 0x03000642u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000642 = 1u;
    _cyc_03000642 = 2u;
    uint32_t _base_03000642 = g_cpu.R[13];
    uint32_t _off_03000642;
    _off_03000642 = 0x00000010u;
    uint32_t _ea_03000642 = _base_03000642 + _off_03000642;
    uint32_t _post_03000642 = _base_03000642 + _off_03000642;
    _cyc_03000642 += runtime_mem_cycles(_ea_03000642, 4u, 0u);
    uint32_t _v_03000642;
    { uint32_t _w = bus_read_u32(_ea_03000642 & ~3u); uint32_t _rot = (_ea_03000642 & 3u) * 8u; _v_03000642 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_03000642;
    g_cpu.R[15] = 0x03000644u;
    runtime_tick(_cyc_03000642);
    /* 03000644  03000644 T muls r0,r0,r1 */
    g_cpu.R[15] = 0x03000644u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000644 = 1u;
    _cyc_03000644 = 1u;
    _cyc_03000644 += runtime_mul_cycles(g_cpu.R[0], 1u, 0u);
    uint32_t _r_03000644 = g_cpu.R[0] * g_cpu.R[1];
    g_cpu.R[0] = _r_03000644;
    arm_set_nz(_r_03000644);
    g_cpu.R[15] = 0x03000646u;
    runtime_tick(_cyc_03000644);
    /* 03000646  03000646 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x03000646u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000646 = 1u;
    _cyc_03000646 = 1u;
    uint32_t _rn_03000646 = g_cpu.R[0];
    uint32_t _r_03000646;
    _r_03000646 = _rn_03000646 - 0x00000000u;
    arm_set_nzcv_sub(_rn_03000646, 0x00000000u, _r_03000646);
    g_cpu.R[15] = 0x03000648u;
    runtime_tick(_cyc_03000646);
    /* 03000648  03000648 T bge 0x0300064c */
    g_cpu.R[15] = 0x03000648u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000648 = 1u;
    if (arm_cond_passes(0xau)) {
        _cyc_03000648 = 3u;
        g_cpu.R[15] = 0x0300064Cu;
        runtime_tick(_cyc_03000648);
        GBARECOMP_TAIL_CALL(gf_tfunc_0300064C);
    }
    g_cpu.R[15] = 0x0300064Au;
    runtime_tick(_cyc_03000648);
    /* 0300064A  0300064a T adds r0,r0,#0xff */
    g_cpu.R[15] = 0x0300064Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300064A = 1u;
    _cyc_0300064A = 1u;
    uint32_t _rn_0300064A = g_cpu.R[0];
    uint32_t _r_0300064A;
    _r_0300064A = _rn_0300064A + 0x000000FFu;
    arm_set_nzcv_add(_rn_0300064A, 0x000000FFu, _r_0300064A);
    g_cpu.R[0] = _r_0300064A;
    g_cpu.R[15] = 0x0300064Cu;
    runtime_tick(_cyc_0300064A);
    /* fall-through to 0x0300064C */
    g_cpu.R[15] = 0x0300064Cu;
    runtime_dispatch(0x0300064Cu);
    return;
}

/* 0x0300065A  mode=thumb  end=0x03000670  branches=9 */


/* 0x0300064C thumb */
void gf_tfunc_0300064C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0300064Cu);
    /* 0300064C  0300064c T movs r6,r0,asr #8 */
    g_cpu.R[15] = 0x0300064Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300064C = 1u;
    _cyc_0300064C = 1u;
    uint32_t _rm_0300064C = g_cpu.R[0];
    uint32_t _op2_0300064C;
    uint32_t _co_0300064C;
    _op2_0300064C = (uint32_t)((int32_t)_rm_0300064C >> 8);
    _co_0300064C = (_rm_0300064C >> 7) & 1u;
    uint32_t _r_0300064C;
    _r_0300064C = _op2_0300064C;
    arm_set_nzc_logic(_r_0300064C, _co_0300064C);
    g_cpu.R[6] = _r_0300064C;
    g_cpu.R[15] = 0x0300064Eu;
    runtime_tick(_cyc_0300064C);
    /* 0300064E  0300064e T adds r0,r2,r5 */
    g_cpu.R[15] = 0x0300064Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300064E = 1u;
    _cyc_0300064E = 1u;
    uint32_t _rm_0300064E = g_cpu.R[5];
    uint32_t _op2_0300064E;
    uint32_t _co_0300064E;
    _op2_0300064E = _rm_0300064E;
    _co_0300064E = cpsr_c();
    uint32_t _rn_0300064E = g_cpu.R[2];
    uint32_t _r_0300064E;
    _r_0300064E = _rn_0300064E + _op2_0300064E;
    arm_set_nzcv_add(_rn_0300064E, _op2_0300064E, _r_0300064E);
    g_cpu.R[0] = _r_0300064E;
    g_cpu.R[15] = 0x03000650u;
    runtime_tick(_cyc_0300064E);
    /* 03000650  03000650 T ldr r2,[r13,#0x14] */
    g_cpu.R[15] = 0x03000650u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000650 = 1u;
    _cyc_03000650 = 2u;
    uint32_t _base_03000650 = g_cpu.R[13];
    uint32_t _off_03000650;
    _off_03000650 = 0x00000014u;
    uint32_t _ea_03000650 = _base_03000650 + _off_03000650;
    uint32_t _post_03000650 = _base_03000650 + _off_03000650;
    _cyc_03000650 += runtime_mem_cycles(_ea_03000650, 4u, 0u);
    uint32_t _v_03000650;
    { uint32_t _w = bus_read_u32(_ea_03000650 & ~3u); uint32_t _rot = (_ea_03000650 & 3u) * 8u; _v_03000650 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_03000650;
    g_cpu.R[15] = 0x03000652u;
    runtime_tick(_cyc_03000650);
    /* 03000652  03000652 T muls r0,r0,r2 */
    g_cpu.R[15] = 0x03000652u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000652 = 1u;
    _cyc_03000652 = 1u;
    _cyc_03000652 += runtime_mul_cycles(g_cpu.R[0], 1u, 0u);
    uint32_t _r_03000652 = g_cpu.R[0] * g_cpu.R[2];
    g_cpu.R[0] = _r_03000652;
    arm_set_nz(_r_03000652);
    g_cpu.R[15] = 0x03000654u;
    runtime_tick(_cyc_03000652);
    /* 03000654  03000654 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x03000654u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000654 = 1u;
    _cyc_03000654 = 1u;
    uint32_t _rn_03000654 = g_cpu.R[0];
    uint32_t _r_03000654;
    _r_03000654 = _rn_03000654 - 0x00000000u;
    arm_set_nzcv_sub(_rn_03000654, 0x00000000u, _r_03000654);
    g_cpu.R[15] = 0x03000656u;
    runtime_tick(_cyc_03000654);
    /* 03000656  03000656 T bge 0x0300065a */
    g_cpu.R[15] = 0x03000656u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000656 = 1u;
    if (arm_cond_passes(0xau)) {
        _cyc_03000656 = 3u;
        g_cpu.R[15] = 0x0300065Au;
        runtime_tick(_cyc_03000656);
        GBARECOMP_TAIL_CALL(gf_tfunc_0300065A);
    }
    g_cpu.R[15] = 0x03000658u;
    runtime_tick(_cyc_03000656);
    /* 03000658  03000658 T adds r0,r0,#0xff */
    g_cpu.R[15] = 0x03000658u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000658 = 1u;
    _cyc_03000658 = 1u;
    uint32_t _rn_03000658 = g_cpu.R[0];
    uint32_t _r_03000658;
    _r_03000658 = _rn_03000658 + 0x000000FFu;
    arm_set_nzcv_add(_rn_03000658, 0x000000FFu, _r_03000658);
    g_cpu.R[0] = _r_03000658;
    g_cpu.R[15] = 0x0300065Au;
    runtime_tick(_cyc_03000658);
    /* fall-through to 0x0300065A */
    g_cpu.R[15] = 0x0300065Au;
    runtime_dispatch(0x0300065Au);
    return;
}

/* 0x03000670  mode=thumb  end=0x0300068A  branches=8 */


/* 0x0300065A thumb */
void gf_tfunc_0300065A(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0300065Au);
    /* 0300065A  0300065a T movs r2,r0,asr #8 */
    g_cpu.R[15] = 0x0300065Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300065A = 1u;
    _cyc_0300065A = 1u;
    uint32_t _rm_0300065A = g_cpu.R[0];
    uint32_t _op2_0300065A;
    uint32_t _co_0300065A;
    _op2_0300065A = (uint32_t)((int32_t)_rm_0300065A >> 8);
    _co_0300065A = (_rm_0300065A >> 7) & 1u;
    uint32_t _r_0300065A;
    _r_0300065A = _op2_0300065A;
    arm_set_nzc_logic(_r_0300065A, _co_0300065A);
    g_cpu.R[2] = _r_0300065A;
    g_cpu.R[15] = 0x0300065Cu;
    runtime_tick(_cyc_0300065A);
    /* 0300065C  0300065c T ldr r3,[r13,#0xc] */
    g_cpu.R[15] = 0x0300065Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300065C = 1u;
    _cyc_0300065C = 2u;
    uint32_t _base_0300065C = g_cpu.R[13];
    uint32_t _off_0300065C;
    _off_0300065C = 0x0000000Cu;
    uint32_t _ea_0300065C = _base_0300065C + _off_0300065C;
    uint32_t _post_0300065C = _base_0300065C + _off_0300065C;
    _cyc_0300065C += runtime_mem_cycles(_ea_0300065C, 4u, 0u);
    uint32_t _v_0300065C;
    { uint32_t _w = bus_read_u32(_ea_0300065C & ~3u); uint32_t _rot = (_ea_0300065C & 3u) * 8u; _v_0300065C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_0300065C;
    g_cpu.R[15] = 0x0300065Eu;
    runtime_tick(_cyc_0300065C);
    /* 0300065E  0300065e T adds r1,r6,#0x0 */
    g_cpu.R[15] = 0x0300065Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300065E = 1u;
    _cyc_0300065E = 1u;
    uint32_t _rn_0300065E = g_cpu.R[6];
    uint32_t _r_0300065E;
    _r_0300065E = _rn_0300065E + 0x00000000u;
    arm_set_nzcv_add(_rn_0300065E, 0x00000000u, _r_0300065E);
    g_cpu.R[1] = _r_0300065E;
    g_cpu.R[15] = 0x03000660u;
    runtime_tick(_cyc_0300065E);
    /* 03000660  03000660 T muls r1,r1,r3 */
    g_cpu.R[15] = 0x03000660u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000660 = 1u;
    _cyc_03000660 = 1u;
    _cyc_03000660 += runtime_mul_cycles(g_cpu.R[1], 1u, 0u);
    uint32_t _r_03000660 = g_cpu.R[1] * g_cpu.R[3];
    g_cpu.R[1] = _r_03000660;
    arm_set_nz(_r_03000660);
    g_cpu.R[15] = 0x03000662u;
    runtime_tick(_cyc_03000660);
    /* 03000662  03000662 T ldr r3,[r13,#0x8] */
    g_cpu.R[15] = 0x03000662u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000662 = 1u;
    _cyc_03000662 = 2u;
    uint32_t _base_03000662 = g_cpu.R[13];
    uint32_t _off_03000662;
    _off_03000662 = 0x00000008u;
    uint32_t _ea_03000662 = _base_03000662 + _off_03000662;
    uint32_t _post_03000662 = _base_03000662 + _off_03000662;
    _cyc_03000662 += runtime_mem_cycles(_ea_03000662, 4u, 0u);
    uint32_t _v_03000662;
    { uint32_t _w = bus_read_u32(_ea_03000662 & ~3u); uint32_t _rot = (_ea_03000662 & 3u) * 8u; _v_03000662 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_03000662;
    g_cpu.R[15] = 0x03000664u;
    runtime_tick(_cyc_03000662);
    /* 03000664  03000664 T adds r0,r2,#0x0 */
    g_cpu.R[15] = 0x03000664u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000664 = 1u;
    _cyc_03000664 = 1u;
    uint32_t _rn_03000664 = g_cpu.R[2];
    uint32_t _r_03000664;
    _r_03000664 = _rn_03000664 + 0x00000000u;
    arm_set_nzcv_add(_rn_03000664, 0x00000000u, _r_03000664);
    g_cpu.R[0] = _r_03000664;
    g_cpu.R[15] = 0x03000666u;
    runtime_tick(_cyc_03000664);
    /* 03000666  03000666 T muls r0,r0,r3 */
    g_cpu.R[15] = 0x03000666u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000666 = 1u;
    _cyc_03000666 = 1u;
    _cyc_03000666 += runtime_mul_cycles(g_cpu.R[0], 1u, 0u);
    uint32_t _r_03000666 = g_cpu.R[0] * g_cpu.R[3];
    g_cpu.R[0] = _r_03000666;
    arm_set_nz(_r_03000666);
    g_cpu.R[15] = 0x03000668u;
    runtime_tick(_cyc_03000666);
    /* 03000668  03000668 T adds r0,r1,r0 */
    g_cpu.R[15] = 0x03000668u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000668 = 1u;
    _cyc_03000668 = 1u;
    uint32_t _rm_03000668 = g_cpu.R[0];
    uint32_t _op2_03000668;
    uint32_t _co_03000668;
    _op2_03000668 = _rm_03000668;
    _co_03000668 = cpsr_c();
    uint32_t _rn_03000668 = g_cpu.R[1];
    uint32_t _r_03000668;
    _r_03000668 = _rn_03000668 + _op2_03000668;
    arm_set_nzcv_add(_rn_03000668, _op2_03000668, _r_03000668);
    g_cpu.R[0] = _r_03000668;
    g_cpu.R[15] = 0x0300066Au;
    runtime_tick(_cyc_03000668);
    /* 0300066A  0300066a T cmps r0,#0x0 */
    g_cpu.R[15] = 0x0300066Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300066A = 1u;
    _cyc_0300066A = 1u;
    uint32_t _rn_0300066A = g_cpu.R[0];
    uint32_t _r_0300066A;
    _r_0300066A = _rn_0300066A - 0x00000000u;
    arm_set_nzcv_sub(_rn_0300066A, 0x00000000u, _r_0300066A);
    g_cpu.R[15] = 0x0300066Cu;
    runtime_tick(_cyc_0300066A);
    /* 0300066C  0300066c T bge 0x03000670 */
    g_cpu.R[15] = 0x0300066Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300066C = 1u;
    if (arm_cond_passes(0xau)) {
        _cyc_0300066C = 3u;
        g_cpu.R[15] = 0x03000670u;
        runtime_tick(_cyc_0300066C);
        GBARECOMP_TAIL_CALL(gf_tfunc_03000670);
    }
    g_cpu.R[15] = 0x0300066Eu;
    runtime_tick(_cyc_0300066C);
    /* 0300066E  0300066e T adds r0,r0,#0xff */
    g_cpu.R[15] = 0x0300066Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300066E = 1u;
    _cyc_0300066E = 1u;
    uint32_t _rn_0300066E = g_cpu.R[0];
    uint32_t _r_0300066E;
    _r_0300066E = _rn_0300066E + 0x000000FFu;
    arm_set_nzcv_add(_rn_0300066E, 0x000000FFu, _r_0300066E);
    g_cpu.R[0] = _r_0300066E;
    g_cpu.R[15] = 0x03000670u;
    runtime_tick(_cyc_0300066E);
    /* fall-through to 0x03000670 */
    g_cpu.R[15] = 0x03000670u;
    runtime_dispatch(0x03000670u);
    return;
}

/* 0x0300068A  mode=thumb  end=0x0300068E  branches=7 */


/* 0x03000670 thumb */
void gf_tfunc_03000670(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000670u);
    /* 03000670  03000670 T movs r0,r0,asr #8 */
    g_cpu.R[15] = 0x03000670u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000670 = 1u;
    _cyc_03000670 = 1u;
    uint32_t _rm_03000670 = g_cpu.R[0];
    uint32_t _op2_03000670;
    uint32_t _co_03000670;
    _op2_03000670 = (uint32_t)((int32_t)_rm_03000670 >> 8);
    _co_03000670 = (_rm_03000670 >> 7) & 1u;
    uint32_t _r_03000670;
    _r_03000670 = _op2_03000670;
    arm_set_nzc_logic(_r_03000670, _co_03000670);
    g_cpu.R[0] = _r_03000670;
    g_cpu.R[15] = 0x03000672u;
    runtime_tick(_cyc_03000670);
    /* 03000672  03000672 T subs r3,r0,r4 */
    g_cpu.R[15] = 0x03000672u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000672 = 1u;
    _cyc_03000672 = 1u;
    uint32_t _rm_03000672 = g_cpu.R[4];
    uint32_t _op2_03000672;
    uint32_t _co_03000672;
    _op2_03000672 = _rm_03000672;
    _co_03000672 = cpsr_c();
    uint32_t _rn_03000672 = g_cpu.R[0];
    uint32_t _r_03000672;
    _r_03000672 = _rn_03000672 - _op2_03000672;
    arm_set_nzcv_sub(_rn_03000672, _op2_03000672, _r_03000672);
    g_cpu.R[3] = _r_03000672;
    g_cpu.R[15] = 0x03000674u;
    runtime_tick(_cyc_03000672);
    /* 03000674  03000674 T rsbs r0,r6,#0x0 */
    g_cpu.R[15] = 0x03000674u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000674 = 1u;
    _cyc_03000674 = 1u;
    uint32_t _rn_03000674 = g_cpu.R[6];
    uint32_t _r_03000674;
    _r_03000674 = 0x00000000u - _rn_03000674;
    arm_set_nzcv_sub(0x00000000u, _rn_03000674, _r_03000674);
    g_cpu.R[0] = _r_03000674;
    g_cpu.R[15] = 0x03000676u;
    runtime_tick(_cyc_03000674);
    /* 03000676  03000676 T ldr r6,[r13,#0x8] */
    g_cpu.R[15] = 0x03000676u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000676 = 1u;
    _cyc_03000676 = 2u;
    uint32_t _base_03000676 = g_cpu.R[13];
    uint32_t _off_03000676;
    _off_03000676 = 0x00000008u;
    uint32_t _ea_03000676 = _base_03000676 + _off_03000676;
    uint32_t _post_03000676 = _base_03000676 + _off_03000676;
    _cyc_03000676 += runtime_mem_cycles(_ea_03000676, 4u, 0u);
    uint32_t _v_03000676;
    { uint32_t _w = bus_read_u32(_ea_03000676 & ~3u); uint32_t _rot = (_ea_03000676 & 3u) * 8u; _v_03000676 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[6] = _v_03000676;
    g_cpu.R[15] = 0x03000678u;
    runtime_tick(_cyc_03000676);
    /* 03000678  03000678 T adds r1,r0,#0x0 */
    g_cpu.R[15] = 0x03000678u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000678 = 1u;
    _cyc_03000678 = 1u;
    uint32_t _rn_03000678 = g_cpu.R[0];
    uint32_t _r_03000678;
    _r_03000678 = _rn_03000678 + 0x00000000u;
    arm_set_nzcv_add(_rn_03000678, 0x00000000u, _r_03000678);
    g_cpu.R[1] = _r_03000678;
    g_cpu.R[15] = 0x0300067Au;
    runtime_tick(_cyc_03000678);
    /* 0300067A  0300067a T muls r1,r1,r6 */
    g_cpu.R[15] = 0x0300067Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300067A = 1u;
    _cyc_0300067A = 1u;
    _cyc_0300067A += runtime_mul_cycles(g_cpu.R[1], 1u, 0u);
    uint32_t _r_0300067A = g_cpu.R[1] * g_cpu.R[6];
    g_cpu.R[1] = _r_0300067A;
    arm_set_nz(_r_0300067A);
    g_cpu.R[15] = 0x0300067Cu;
    runtime_tick(_cyc_0300067A);
    /* 0300067C  0300067c T ldr r6,[r13,#0xc] */
    g_cpu.R[15] = 0x0300067Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300067C = 1u;
    _cyc_0300067C = 2u;
    uint32_t _base_0300067C = g_cpu.R[13];
    uint32_t _off_0300067C;
    _off_0300067C = 0x0000000Cu;
    uint32_t _ea_0300067C = _base_0300067C + _off_0300067C;
    uint32_t _post_0300067C = _base_0300067C + _off_0300067C;
    _cyc_0300067C += runtime_mem_cycles(_ea_0300067C, 4u, 0u);
    uint32_t _v_0300067C;
    { uint32_t _w = bus_read_u32(_ea_0300067C & ~3u); uint32_t _rot = (_ea_0300067C & 3u) * 8u; _v_0300067C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[6] = _v_0300067C;
    g_cpu.R[15] = 0x0300067Eu;
    runtime_tick(_cyc_0300067C);
    /* 0300067E  0300067e T adds r0,r2,#0x0 */
    g_cpu.R[15] = 0x0300067Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300067E = 1u;
    _cyc_0300067E = 1u;
    uint32_t _rn_0300067E = g_cpu.R[2];
    uint32_t _r_0300067E;
    _r_0300067E = _rn_0300067E + 0x00000000u;
    arm_set_nzcv_add(_rn_0300067E, 0x00000000u, _r_0300067E);
    g_cpu.R[0] = _r_0300067E;
    g_cpu.R[15] = 0x03000680u;
    runtime_tick(_cyc_0300067E);
    /* 03000680  03000680 T muls r0,r0,r6 */
    g_cpu.R[15] = 0x03000680u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000680 = 1u;
    _cyc_03000680 = 1u;
    _cyc_03000680 += runtime_mul_cycles(g_cpu.R[0], 1u, 0u);
    uint32_t _r_03000680 = g_cpu.R[0] * g_cpu.R[6];
    g_cpu.R[0] = _r_03000680;
    arm_set_nz(_r_03000680);
    g_cpu.R[15] = 0x03000682u;
    runtime_tick(_cyc_03000680);
    /* 03000682  03000682 T adds r0,r1,r0 */
    g_cpu.R[15] = 0x03000682u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000682 = 1u;
    _cyc_03000682 = 1u;
    uint32_t _rm_03000682 = g_cpu.R[0];
    uint32_t _op2_03000682;
    uint32_t _co_03000682;
    _op2_03000682 = _rm_03000682;
    _co_03000682 = cpsr_c();
    uint32_t _rn_03000682 = g_cpu.R[1];
    uint32_t _r_03000682;
    _r_03000682 = _rn_03000682 + _op2_03000682;
    arm_set_nzcv_add(_rn_03000682, _op2_03000682, _r_03000682);
    g_cpu.R[0] = _r_03000682;
    g_cpu.R[15] = 0x03000684u;
    runtime_tick(_cyc_03000682);
    /* 03000684  03000684 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x03000684u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000684 = 1u;
    _cyc_03000684 = 1u;
    uint32_t _rn_03000684 = g_cpu.R[0];
    uint32_t _r_03000684;
    _r_03000684 = _rn_03000684 - 0x00000000u;
    arm_set_nzcv_sub(_rn_03000684, 0x00000000u, _r_03000684);
    g_cpu.R[15] = 0x03000686u;
    runtime_tick(_cyc_03000684);
    /* 03000686  03000686 T bge 0x0300068a */
    g_cpu.R[15] = 0x03000686u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000686 = 1u;
    if (arm_cond_passes(0xau)) {
        _cyc_03000686 = 3u;
        g_cpu.R[15] = 0x0300068Au;
        runtime_tick(_cyc_03000686);
        GBARECOMP_TAIL_CALL(gf_tfunc_0300068A);
    }
    g_cpu.R[15] = 0x03000688u;
    runtime_tick(_cyc_03000686);
    /* 03000688  03000688 T adds r0,r0,#0xff */
    g_cpu.R[15] = 0x03000688u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000688 = 1u;
    _cyc_03000688 = 1u;
    uint32_t _rn_03000688 = g_cpu.R[0];
    uint32_t _r_03000688;
    _r_03000688 = _rn_03000688 + 0x000000FFu;
    arm_set_nzcv_add(_rn_03000688, 0x000000FFu, _r_03000688);
    g_cpu.R[0] = _r_03000688;
    g_cpu.R[15] = 0x0300068Au;
    runtime_tick(_cyc_03000688);
    /* fall-through to 0x0300068A */
    g_cpu.R[15] = 0x0300068Au;
    runtime_dispatch(0x0300068Au);
    return;
}

/* 0x030006DE  mode=thumb  end=0x030006F0  branches=2 */


/* 0x0300068A thumb */
void gf_tfunc_0300068A(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0300068Au);
    /* 0300068A  0300068a T movs r0,r0,asr #8 */
    g_cpu.R[15] = 0x0300068Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300068A = 1u;
    _cyc_0300068A = 1u;
    uint32_t _rm_0300068A = g_cpu.R[0];
    uint32_t _op2_0300068A;
    uint32_t _co_0300068A;
    _op2_0300068A = (uint32_t)((int32_t)_rm_0300068A >> 8);
    _co_0300068A = (_rm_0300068A >> 7) & 1u;
    uint32_t _r_0300068A;
    _r_0300068A = _op2_0300068A;
    arm_set_nzc_logic(_r_0300068A, _co_0300068A);
    g_cpu.R[0] = _r_0300068A;
    g_cpu.R[15] = 0x0300068Cu;
    runtime_tick(_cyc_0300068A);
    /* 0300068C  0300068c T subs r2,r0,r5 */
    g_cpu.R[15] = 0x0300068Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300068C = 1u;
    _cyc_0300068C = 1u;
    uint32_t _rm_0300068C = g_cpu.R[5];
    uint32_t _op2_0300068C;
    uint32_t _co_0300068C;
    _op2_0300068C = _rm_0300068C;
    _co_0300068C = cpsr_c();
    uint32_t _rn_0300068C = g_cpu.R[0];
    uint32_t _r_0300068C;
    _r_0300068C = _rn_0300068C - _op2_0300068C;
    arm_set_nzcv_sub(_rn_0300068C, _op2_0300068C, _r_0300068C);
    g_cpu.R[2] = _r_0300068C;
    g_cpu.R[15] = 0x0300068Eu;
    runtime_tick(_cyc_0300068C);
    /* fall-through to 0x0300068E */
    g_cpu.R[15] = 0x0300068Eu;
    runtime_dispatch(0x0300068Eu);
    return;
}

/* 0x0300068E  mode=thumb  end=0x030006DE  branches=7 */


/* 0x0300068E thumb */
void gf_tfunc_0300068E(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0300068Eu);
    /* 0300068E  0300068e T mov r1,r8 */
    g_cpu.R[15] = 0x0300068Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300068E = 1u;
    _cyc_0300068E = 1u;
    uint32_t _rm_0300068E = g_cpu.R[8];
    uint32_t _op2_0300068E;
    uint32_t _co_0300068E;
    _op2_0300068E = _rm_0300068E;
    _co_0300068E = cpsr_c();
    uint32_t _r_0300068E;
    _r_0300068E = _op2_0300068E;
    g_cpu.R[1] = _r_0300068E;
    g_cpu.R[15] = 0x03000690u;
    runtime_tick(_cyc_0300068E);
    /* 03000690  03000690 T movs r6,#0x20 */
    g_cpu.R[15] = 0x03000690u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000690 = 1u;
    _cyc_03000690 = 1u;
    uint32_t _r_03000690;
    _r_03000690 = 0x00000020u;
    arm_set_nzc_logic(_r_03000690, cpsr_c());
    g_cpu.R[6] = _r_03000690;
    g_cpu.R[15] = 0x03000692u;
    runtime_tick(_cyc_03000690);
    /* 03000692  03000692 T ldrsh r0,[r1,+r6] */
    g_cpu.R[15] = 0x03000692u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000692 = 1u;
    _cyc_03000692 = 2u;
    uint32_t _base_03000692 = g_cpu.R[1];
    uint32_t _off_03000692;
    uint32_t _morm_03000692 = g_cpu.R[6];
    _off_03000692 = _morm_03000692;
    uint32_t _ea_03000692 = _base_03000692 + _off_03000692;
    uint32_t _post_03000692 = _base_03000692 + _off_03000692;
    _cyc_03000692 += runtime_mem_cycles(_ea_03000692, 2u, 0u);
    uint32_t _v_03000692;
    if (_ea_03000692 & 1u) _v_03000692 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_03000692);
    else _v_03000692 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_03000692);
    g_cpu.R[0] = _v_03000692;
    g_cpu.R[15] = 0x03000694u;
    runtime_tick(_cyc_03000692);
    /* 03000694  03000694 T adds r3,r3,r0 */
    g_cpu.R[15] = 0x03000694u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000694 = 1u;
    _cyc_03000694 = 1u;
    uint32_t _rm_03000694 = g_cpu.R[0];
    uint32_t _op2_03000694;
    uint32_t _co_03000694;
    _op2_03000694 = _rm_03000694;
    _co_03000694 = cpsr_c();
    uint32_t _rn_03000694 = g_cpu.R[3];
    uint32_t _r_03000694;
    _r_03000694 = _rn_03000694 + _op2_03000694;
    arm_set_nzcv_add(_rn_03000694, _op2_03000694, _r_03000694);
    g_cpu.R[3] = _r_03000694;
    g_cpu.R[15] = 0x03000696u;
    runtime_tick(_cyc_03000694);
    /* 03000696  03000696 T movs r6,#0x22 */
    g_cpu.R[15] = 0x03000696u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000696 = 1u;
    _cyc_03000696 = 1u;
    uint32_t _r_03000696;
    _r_03000696 = 0x00000022u;
    arm_set_nzc_logic(_r_03000696, cpsr_c());
    g_cpu.R[6] = _r_03000696;
    g_cpu.R[15] = 0x03000698u;
    runtime_tick(_cyc_03000696);
    /* 03000698  03000698 T ldrsh r0,[r1,+r6] */
    g_cpu.R[15] = 0x03000698u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000698 = 1u;
    _cyc_03000698 = 2u;
    uint32_t _base_03000698 = g_cpu.R[1];
    uint32_t _off_03000698;
    uint32_t _morm_03000698 = g_cpu.R[6];
    _off_03000698 = _morm_03000698;
    uint32_t _ea_03000698 = _base_03000698 + _off_03000698;
    uint32_t _post_03000698 = _base_03000698 + _off_03000698;
    _cyc_03000698 += runtime_mem_cycles(_ea_03000698, 2u, 0u);
    uint32_t _v_03000698;
    if (_ea_03000698 & 1u) _v_03000698 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_03000698);
    else _v_03000698 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_03000698);
    g_cpu.R[0] = _v_03000698;
    g_cpu.R[15] = 0x0300069Au;
    runtime_tick(_cyc_03000698);
    /* 0300069A  0300069a T adds r2,r2,r0 */
    g_cpu.R[15] = 0x0300069Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300069A = 1u;
    _cyc_0300069A = 1u;
    uint32_t _rm_0300069A = g_cpu.R[0];
    uint32_t _op2_0300069A;
    uint32_t _co_0300069A;
    _op2_0300069A = _rm_0300069A;
    _co_0300069A = cpsr_c();
    uint32_t _rn_0300069A = g_cpu.R[2];
    uint32_t _r_0300069A;
    _r_0300069A = _rn_0300069A + _op2_0300069A;
    arm_set_nzcv_add(_rn_0300069A, _op2_0300069A, _r_0300069A);
    g_cpu.R[2] = _r_0300069A;
    g_cpu.R[15] = 0x0300069Cu;
    runtime_tick(_cyc_0300069A);
    /* 0300069C  0300069c T movs r0,r4,lsl #1 */
    g_cpu.R[15] = 0x0300069Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300069C = 1u;
    _cyc_0300069C = 1u;
    uint32_t _rm_0300069C = g_cpu.R[4];
    uint32_t _op2_0300069C;
    uint32_t _co_0300069C;
    _op2_0300069C = _rm_0300069C << 1;
    _co_0300069C = (_rm_0300069C >> 31) & 1u;
    uint32_t _r_0300069C;
    _r_0300069C = _op2_0300069C;
    arm_set_nzc_logic(_r_0300069C, _co_0300069C);
    g_cpu.R[0] = _r_0300069C;
    g_cpu.R[15] = 0x0300069Eu;
    runtime_tick(_cyc_0300069C);
    /* 0300069E  0300069e T adds r0,r3,r0 */
    g_cpu.R[15] = 0x0300069Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300069E = 1u;
    _cyc_0300069E = 1u;
    uint32_t _rm_0300069E = g_cpu.R[0];
    uint32_t _op2_0300069E;
    uint32_t _co_0300069E;
    _op2_0300069E = _rm_0300069E;
    _co_0300069E = cpsr_c();
    uint32_t _rn_0300069E = g_cpu.R[3];
    uint32_t _r_0300069E;
    _r_0300069E = _rn_0300069E + _op2_0300069E;
    arm_set_nzcv_add(_rn_0300069E, _op2_0300069E, _r_0300069E);
    g_cpu.R[0] = _r_0300069E;
    g_cpu.R[15] = 0x030006A0u;
    runtime_tick(_cyc_0300069E);
    /* 030006A0  030006a0 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x030006A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006A0 = 1u;
    _cyc_030006A0 = 1u;
    uint32_t _rn_030006A0 = g_cpu.R[0];
    uint32_t _r_030006A0;
    _r_030006A0 = _rn_030006A0 - 0x00000000u;
    arm_set_nzcv_sub(_rn_030006A0, 0x00000000u, _r_030006A0);
    g_cpu.R[15] = 0x030006A2u;
    runtime_tick(_cyc_030006A0);
    /* 030006A2  030006a2 T ble 0x030006de */
    g_cpu.R[15] = 0x030006A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006A2 = 1u;
    if (arm_cond_passes(0xdu)) {
        _cyc_030006A2 = 3u;
        g_cpu.R[15] = 0x030006DEu;
        runtime_tick(_cyc_030006A2);
        GBARECOMP_TAIL_CALL(gf_tfunc_030006DE);
    }
    g_cpu.R[15] = 0x030006A4u;
    runtime_tick(_cyc_030006A2);
    /* 030006A4  030006a4 T cmps r3,#0xef */
    g_cpu.R[15] = 0x030006A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006A4 = 1u;
    _cyc_030006A4 = 1u;
    uint32_t _rn_030006A4 = g_cpu.R[3];
    uint32_t _r_030006A4;
    _r_030006A4 = _rn_030006A4 - 0x000000EFu;
    arm_set_nzcv_sub(_rn_030006A4, 0x000000EFu, _r_030006A4);
    g_cpu.R[15] = 0x030006A6u;
    runtime_tick(_cyc_030006A4);
    /* 030006A6  030006a6 T bgt 0x030006de */
    g_cpu.R[15] = 0x030006A6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006A6 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_030006A6 = 3u;
        g_cpu.R[15] = 0x030006DEu;
        runtime_tick(_cyc_030006A6);
        GBARECOMP_TAIL_CALL(gf_tfunc_030006DE);
    }
    g_cpu.R[15] = 0x030006A8u;
    runtime_tick(_cyc_030006A6);
    /* 030006A8  030006a8 T movs r0,r5,lsl #1 */
    g_cpu.R[15] = 0x030006A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006A8 = 1u;
    _cyc_030006A8 = 1u;
    uint32_t _rm_030006A8 = g_cpu.R[5];
    uint32_t _op2_030006A8;
    uint32_t _co_030006A8;
    _op2_030006A8 = _rm_030006A8 << 1;
    _co_030006A8 = (_rm_030006A8 >> 31) & 1u;
    uint32_t _r_030006A8;
    _r_030006A8 = _op2_030006A8;
    arm_set_nzc_logic(_r_030006A8, _co_030006A8);
    g_cpu.R[0] = _r_030006A8;
    g_cpu.R[15] = 0x030006AAu;
    runtime_tick(_cyc_030006A8);
    /* 030006AA  030006aa T adds r0,r2,r0 */
    g_cpu.R[15] = 0x030006AAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006AA = 1u;
    _cyc_030006AA = 1u;
    uint32_t _rm_030006AA = g_cpu.R[0];
    uint32_t _op2_030006AA;
    uint32_t _co_030006AA;
    _op2_030006AA = _rm_030006AA;
    _co_030006AA = cpsr_c();
    uint32_t _rn_030006AA = g_cpu.R[2];
    uint32_t _r_030006AA;
    _r_030006AA = _rn_030006AA + _op2_030006AA;
    arm_set_nzcv_add(_rn_030006AA, _op2_030006AA, _r_030006AA);
    g_cpu.R[0] = _r_030006AA;
    g_cpu.R[15] = 0x030006ACu;
    runtime_tick(_cyc_030006AA);
    /* 030006AC  030006ac T cmps r0,#0x0 */
    g_cpu.R[15] = 0x030006ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006AC = 1u;
    _cyc_030006AC = 1u;
    uint32_t _rn_030006AC = g_cpu.R[0];
    uint32_t _r_030006AC;
    _r_030006AC = _rn_030006AC - 0x00000000u;
    arm_set_nzcv_sub(_rn_030006AC, 0x00000000u, _r_030006AC);
    g_cpu.R[15] = 0x030006AEu;
    runtime_tick(_cyc_030006AC);
    /* 030006AE  030006ae T ble 0x030006de */
    g_cpu.R[15] = 0x030006AEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006AE = 1u;
    if (arm_cond_passes(0xdu)) {
        _cyc_030006AE = 3u;
        g_cpu.R[15] = 0x030006DEu;
        runtime_tick(_cyc_030006AE);
        GBARECOMP_TAIL_CALL(gf_tfunc_030006DE);
    }
    g_cpu.R[15] = 0x030006B0u;
    runtime_tick(_cyc_030006AE);
    /* 030006B0  030006b0 T cmps r2,#0x9f */
    g_cpu.R[15] = 0x030006B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006B0 = 1u;
    _cyc_030006B0 = 1u;
    uint32_t _rn_030006B0 = g_cpu.R[2];
    uint32_t _r_030006B0;
    _r_030006B0 = _rn_030006B0 - 0x0000009Fu;
    arm_set_nzcv_sub(_rn_030006B0, 0x0000009Fu, _r_030006B0);
    g_cpu.R[15] = 0x030006B2u;
    runtime_tick(_cyc_030006B0);
    /* 030006B2  030006b2 T bgt 0x030006de */
    g_cpu.R[15] = 0x030006B2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006B2 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_030006B2 = 3u;
        g_cpu.R[15] = 0x030006DEu;
        runtime_tick(_cyc_030006B2);
        GBARECOMP_TAIL_CALL(gf_tfunc_030006DE);
    }
    g_cpu.R[15] = 0x030006B4u;
    runtime_tick(_cyc_030006B2);
    /* 030006B4  030006b4 T movs r0,#0xff */
    g_cpu.R[15] = 0x030006B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006B4 = 1u;
    _cyc_030006B4 = 1u;
    uint32_t _r_030006B4;
    _r_030006B4 = 0x000000FFu;
    arm_set_nzc_logic(_r_030006B4, cpsr_c());
    g_cpu.R[0] = _r_030006B4;
    g_cpu.R[15] = 0x030006B6u;
    runtime_tick(_cyc_030006B4);
    /* 030006B6  030006b6 T ands r2,r2,r0 */
    g_cpu.R[15] = 0x030006B6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006B6 = 1u;
    _cyc_030006B6 = 1u;
    uint32_t _rm_030006B6 = g_cpu.R[0];
    uint32_t _op2_030006B6;
    uint32_t _co_030006B6;
    _op2_030006B6 = _rm_030006B6;
    _co_030006B6 = cpsr_c();
    uint32_t _rn_030006B6 = g_cpu.R[2];
    uint32_t _r_030006B6;
    _r_030006B6 = _rn_030006B6 & _op2_030006B6;
    arm_set_nzc_logic(_r_030006B6, _co_030006B6);
    g_cpu.R[2] = _r_030006B6;
    g_cpu.R[15] = 0x030006B8u;
    runtime_tick(_cyc_030006B6);
    /* 030006B8  030006b8 T ldr r0,[r15,#0x44] */
    g_cpu.R[15] = 0x030006B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006B8 = 1u;
    _cyc_030006B8 = 2u;
    uint32_t _base_030006B8 = 0x030006BCu & ~3u;
    uint32_t _off_030006B8;
    _off_030006B8 = 0x00000044u;
    uint32_t _ea_030006B8 = _base_030006B8 + _off_030006B8;
    uint32_t _post_030006B8 = _base_030006B8 + _off_030006B8;
    _cyc_030006B8 += runtime_mem_cycles(_ea_030006B8, 4u, 0u);
    uint32_t _v_030006B8;
    { uint32_t _w = bus_read_u32(_ea_030006B8 & ~3u); uint32_t _rot = (_ea_030006B8 & 3u) * 8u; _v_030006B8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_030006B8;
    g_cpu.R[15] = 0x030006BAu;
    runtime_tick(_cyc_030006B8);
    /* 030006BA  030006ba T ands r3,r3,r0 */
    g_cpu.R[15] = 0x030006BAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006BA = 1u;
    _cyc_030006BA = 1u;
    uint32_t _rm_030006BA = g_cpu.R[0];
    uint32_t _op2_030006BA;
    uint32_t _co_030006BA;
    _op2_030006BA = _rm_030006BA;
    _co_030006BA = cpsr_c();
    uint32_t _rn_030006BA = g_cpu.R[3];
    uint32_t _r_030006BA;
    _r_030006BA = _rn_030006BA & _op2_030006BA;
    arm_set_nzc_logic(_r_030006BA, _co_030006BA);
    g_cpu.R[3] = _r_030006BA;
    g_cpu.R[15] = 0x030006BCu;
    runtime_tick(_cyc_030006BA);
    /* 030006BC  030006bc T movs r0,r3,lsl #16 */
    g_cpu.R[15] = 0x030006BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006BC = 1u;
    _cyc_030006BC = 1u;
    uint32_t _rm_030006BC = g_cpu.R[3];
    uint32_t _op2_030006BC;
    uint32_t _co_030006BC;
    _op2_030006BC = _rm_030006BC << 16;
    _co_030006BC = (_rm_030006BC >> 16) & 1u;
    uint32_t _r_030006BC;
    _r_030006BC = _op2_030006BC;
    arm_set_nzc_logic(_r_030006BC, _co_030006BC);
    g_cpu.R[0] = _r_030006BC;
    g_cpu.R[15] = 0x030006BEu;
    runtime_tick(_cyc_030006BC);
    /* 030006BE  030006be T orrs r2,r2,r0 */
    g_cpu.R[15] = 0x030006BEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006BE = 1u;
    _cyc_030006BE = 1u;
    uint32_t _rm_030006BE = g_cpu.R[0];
    uint32_t _op2_030006BE;
    uint32_t _co_030006BE;
    _op2_030006BE = _rm_030006BE;
    _co_030006BE = cpsr_c();
    uint32_t _rn_030006BE = g_cpu.R[2];
    uint32_t _r_030006BE;
    _r_030006BE = _rn_030006BE | _op2_030006BE;
    arm_set_nzc_logic(_r_030006BE, _co_030006BE);
    g_cpu.R[2] = _r_030006BE;
    g_cpu.R[15] = 0x030006C0u;
    runtime_tick(_cyc_030006BE);
    /* 030006C0  030006c0 T orrs r7,r7,r2 */
    g_cpu.R[15] = 0x030006C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006C0 = 1u;
    _cyc_030006C0 = 1u;
    uint32_t _rm_030006C0 = g_cpu.R[2];
    uint32_t _op2_030006C0;
    uint32_t _co_030006C0;
    _op2_030006C0 = _rm_030006C0;
    _co_030006C0 = cpsr_c();
    uint32_t _rn_030006C0 = g_cpu.R[7];
    uint32_t _r_030006C0;
    _r_030006C0 = _rn_030006C0 | _op2_030006C0;
    arm_set_nzc_logic(_r_030006C0, _co_030006C0);
    g_cpu.R[7] = _r_030006C0;
    g_cpu.R[15] = 0x030006C2u;
    runtime_tick(_cyc_030006C0);
    /* 030006C2  030006c2 T ldr r1,[r15,#0x40] */
    g_cpu.R[15] = 0x030006C2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006C2 = 1u;
    _cyc_030006C2 = 2u;
    uint32_t _base_030006C2 = 0x030006C6u & ~3u;
    uint32_t _off_030006C2;
    _off_030006C2 = 0x00000040u;
    uint32_t _ea_030006C2 = _base_030006C2 + _off_030006C2;
    uint32_t _post_030006C2 = _base_030006C2 + _off_030006C2;
    _cyc_030006C2 += runtime_mem_cycles(_ea_030006C2, 4u, 0u);
    uint32_t _v_030006C2;
    { uint32_t _w = bus_read_u32(_ea_030006C2 & ~3u); uint32_t _rot = (_ea_030006C2 & 3u) * 8u; _v_030006C2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_030006C2;
    g_cpu.R[15] = 0x030006C4u;
    runtime_tick(_cyc_030006C2);
    /* 030006C4  030006c4 T ldr r0,[r1] */
    g_cpu.R[15] = 0x030006C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006C4 = 1u;
    _cyc_030006C4 = 2u;
    uint32_t _base_030006C4 = g_cpu.R[1];
    uint32_t _off_030006C4;
    _off_030006C4 = 0x00000000u;
    uint32_t _ea_030006C4 = _base_030006C4 + _off_030006C4;
    uint32_t _post_030006C4 = _base_030006C4 + _off_030006C4;
    _cyc_030006C4 += runtime_mem_cycles(_ea_030006C4, 4u, 0u);
    uint32_t _v_030006C4;
    { uint32_t _w = bus_read_u32(_ea_030006C4 & ~3u); uint32_t _rot = (_ea_030006C4 & 3u) * 8u; _v_030006C4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_030006C4;
    g_cpu.R[15] = 0x030006C6u;
    runtime_tick(_cyc_030006C4);
    /* 030006C6  030006c6 T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x030006C6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006C6 = 1u;
    _cyc_030006C6 = 1u;
    uint32_t _rm_030006C6 = g_cpu.R[0];
    uint32_t _op2_030006C6;
    uint32_t _co_030006C6;
    _op2_030006C6 = _rm_030006C6 << 3;
    _co_030006C6 = (_rm_030006C6 >> 29) & 1u;
    uint32_t _r_030006C6;
    _r_030006C6 = _op2_030006C6;
    arm_set_nzc_logic(_r_030006C6, _co_030006C6);
    g_cpu.R[0] = _r_030006C6;
    g_cpu.R[15] = 0x030006C8u;
    runtime_tick(_cyc_030006C6);
    /* 030006C8  030006c8 T ldr r2,[r15,#0x3c] */
    g_cpu.R[15] = 0x030006C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006C8 = 1u;
    _cyc_030006C8 = 2u;
    uint32_t _base_030006C8 = 0x030006CCu & ~3u;
    uint32_t _off_030006C8;
    _off_030006C8 = 0x0000003Cu;
    uint32_t _ea_030006C8 = _base_030006C8 + _off_030006C8;
    uint32_t _post_030006C8 = _base_030006C8 + _off_030006C8;
    _cyc_030006C8 += runtime_mem_cycles(_ea_030006C8, 4u, 0u);
    uint32_t _v_030006C8;
    { uint32_t _w = bus_read_u32(_ea_030006C8 & ~3u); uint32_t _rot = (_ea_030006C8 & 3u) * 8u; _v_030006C8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_030006C8;
    g_cpu.R[15] = 0x030006CAu;
    runtime_tick(_cyc_030006C8);
    /* 030006CA  030006ca T adds r0,r0,r2 */
    g_cpu.R[15] = 0x030006CAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006CA = 1u;
    _cyc_030006CA = 1u;
    uint32_t _rm_030006CA = g_cpu.R[2];
    uint32_t _op2_030006CA;
    uint32_t _co_030006CA;
    _op2_030006CA = _rm_030006CA;
    _co_030006CA = cpsr_c();
    uint32_t _rn_030006CA = g_cpu.R[0];
    uint32_t _r_030006CA;
    _r_030006CA = _rn_030006CA + _op2_030006CA;
    arm_set_nzcv_add(_rn_030006CA, _op2_030006CA, _r_030006CA);
    g_cpu.R[0] = _r_030006CA;
    g_cpu.R[15] = 0x030006CCu;
    runtime_tick(_cyc_030006CA);
    /* 030006CC  030006cc T str r7,[r0] */
    g_cpu.R[15] = 0x030006CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006CC = 1u;
    _cyc_030006CC = 1u;
    uint32_t _base_030006CC = g_cpu.R[0];
    uint32_t _off_030006CC;
    _off_030006CC = 0x00000000u;
    uint32_t _ea_030006CC = _base_030006CC + _off_030006CC;
    uint32_t _post_030006CC = _base_030006CC + _off_030006CC;
    _cyc_030006CC += runtime_mem_cycles(_ea_030006CC, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030006CCu, _ea_030006CC & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_ea_030006CC & ~3u, g_cpu.R[7]);
    g_cpu.R[15] = 0x030006CEu;
    runtime_tick(_cyc_030006CC);
    /* 030006CE  030006ce T mov r3,r13 */
    g_cpu.R[15] = 0x030006CEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006CE = 1u;
    _cyc_030006CE = 1u;
    uint32_t _rm_030006CE = g_cpu.R[13];
    uint32_t _op2_030006CE;
    uint32_t _co_030006CE;
    _op2_030006CE = _rm_030006CE;
    _co_030006CE = cpsr_c();
    uint32_t _r_030006CE;
    _r_030006CE = _op2_030006CE;
    g_cpu.R[3] = _r_030006CE;
    g_cpu.R[15] = 0x030006D0u;
    runtime_tick(_cyc_030006CE);
    /* 030006D0  030006d0 T ldrh r3,[r3,#0x1c] */
    g_cpu.R[15] = 0x030006D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006D0 = 1u;
    _cyc_030006D0 = 2u;
    uint32_t _base_030006D0 = g_cpu.R[3];
    uint32_t _off_030006D0;
    _off_030006D0 = 0x0000001Cu;
    uint32_t _ea_030006D0 = _base_030006D0 + _off_030006D0;
    uint32_t _post_030006D0 = _base_030006D0 + _off_030006D0;
    _cyc_030006D0 += runtime_mem_cycles(_ea_030006D0, 2u, 0u);
    uint32_t _v_030006D0;
    { uint32_t _h = bus_read_u16(_ea_030006D0 & ~1u); if (_ea_030006D0 & 1u) _v_030006D0 = ((_h >> 8) | (_h << 24)); else _v_030006D0 = _h; }
    g_cpu.R[3] = _v_030006D0;
    g_cpu.R[15] = 0x030006D2u;
    runtime_tick(_cyc_030006D0);
    /* 030006D2  030006d2 T strh r3,[r0,#0x4] */
    g_cpu.R[15] = 0x030006D2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006D2 = 1u;
    _cyc_030006D2 = 1u;
    uint32_t _base_030006D2 = g_cpu.R[0];
    uint32_t _off_030006D2;
    _off_030006D2 = 0x00000004u;
    uint32_t _ea_030006D2 = _base_030006D2 + _off_030006D2;
    uint32_t _post_030006D2 = _base_030006D2 + _off_030006D2;
    _cyc_030006D2 += runtime_mem_cycles(_ea_030006D2, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030006D2u, _ea_030006D2 & ~1u, (uint32_t)(g_cpu.R[3] & 0xFFFFu), 2u);
    bus_write_u16(_ea_030006D2 & ~1u, (uint16_t)(g_cpu.R[3] & 0xFFFFu));
    g_cpu.R[15] = 0x030006D4u;
    runtime_tick(_cyc_030006D2);
    /* 030006D4  030006d4 T ldr r0,[r1] */
    g_cpu.R[15] = 0x030006D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006D4 = 1u;
    _cyc_030006D4 = 2u;
    uint32_t _base_030006D4 = g_cpu.R[1];
    uint32_t _off_030006D4;
    _off_030006D4 = 0x00000000u;
    uint32_t _ea_030006D4 = _base_030006D4 + _off_030006D4;
    uint32_t _post_030006D4 = _base_030006D4 + _off_030006D4;
    _cyc_030006D4 += runtime_mem_cycles(_ea_030006D4, 4u, 0u);
    uint32_t _v_030006D4;
    { uint32_t _w = bus_read_u32(_ea_030006D4 & ~3u); uint32_t _rot = (_ea_030006D4 & 3u) * 8u; _v_030006D4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_030006D4;
    g_cpu.R[15] = 0x030006D6u;
    runtime_tick(_cyc_030006D4);
    /* 030006D6  030006d6 T adds r0,r0,#0x1 */
    g_cpu.R[15] = 0x030006D6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006D6 = 1u;
    _cyc_030006D6 = 1u;
    uint32_t _rn_030006D6 = g_cpu.R[0];
    uint32_t _r_030006D6;
    _r_030006D6 = _rn_030006D6 + 0x00000001u;
    arm_set_nzcv_add(_rn_030006D6, 0x00000001u, _r_030006D6);
    g_cpu.R[0] = _r_030006D6;
    g_cpu.R[15] = 0x030006D8u;
    runtime_tick(_cyc_030006D6);
    /* 030006D8  030006d8 T str r0,[r1] */
    g_cpu.R[15] = 0x030006D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006D8 = 1u;
    _cyc_030006D8 = 1u;
    uint32_t _base_030006D8 = g_cpu.R[1];
    uint32_t _off_030006D8;
    _off_030006D8 = 0x00000000u;
    uint32_t _ea_030006D8 = _base_030006D8 + _off_030006D8;
    uint32_t _post_030006D8 = _base_030006D8 + _off_030006D8;
    _cyc_030006D8 += runtime_mem_cycles(_ea_030006D8, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030006D8u, _ea_030006D8 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_030006D8 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x030006DAu;
    runtime_tick(_cyc_030006D8);
    /* 030006DA  030006da T cmps r0,#0x7f */
    g_cpu.R[15] = 0x030006DAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006DA = 1u;
    _cyc_030006DA = 1u;
    uint32_t _rn_030006DA = g_cpu.R[0];
    uint32_t _r_030006DA;
    _r_030006DA = _rn_030006DA - 0x0000007Fu;
    arm_set_nzcv_sub(_rn_030006DA, 0x0000007Fu, _r_030006DA);
    g_cpu.R[15] = 0x030006DCu;
    runtime_tick(_cyc_030006DA);
    /* 030006DC  030006dc T bhi 0x0300070c */
    g_cpu.R[15] = 0x030006DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006DC = 1u;
    if (arm_cond_passes(0x8u)) {
        _cyc_030006DC = 3u;
        g_cpu.R[15] = 0x0300070Cu;
        runtime_tick(_cyc_030006DC);
        GBARECOMP_TAIL_CALL(gf_tfunc_0300070C);
    }
    g_cpu.R[15] = 0x030006DEu;
    runtime_tick(_cyc_030006DC);
    /* fall-through to 0x030006DE */
    g_cpu.R[15] = 0x030006DEu;
    runtime_dispatch(0x030006DEu);
    return;
}

/* 0x0300070C  mode=thumb  end=0x03000738  branches=2  indirect */


/* 0x030006DE thumb */
void gf_tfunc_030006DE(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030006DEu);
    /* 030006DE  030006de T mov r4,r12 */
    g_cpu.R[15] = 0x030006DEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006DE = 1u;
    _cyc_030006DE = 1u;
    uint32_t _rm_030006DE = g_cpu.R[12];
    uint32_t _op2_030006DE;
    uint32_t _co_030006DE;
    _op2_030006DE = _rm_030006DE;
    _co_030006DE = cpsr_c();
    uint32_t _r_030006DE;
    _r_030006DE = _op2_030006DE;
    g_cpu.R[4] = _r_030006DE;
    g_cpu.R[15] = 0x030006E0u;
    runtime_tick(_cyc_030006DE);
    /* 030006E0  030006e0 T ldrh r1,[r4,#0x6] */
    g_cpu.R[15] = 0x030006E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006E0 = 1u;
    _cyc_030006E0 = 2u;
    uint32_t _base_030006E0 = g_cpu.R[4];
    uint32_t _off_030006E0;
    _off_030006E0 = 0x00000006u;
    uint32_t _ea_030006E0 = _base_030006E0 + _off_030006E0;
    uint32_t _post_030006E0 = _base_030006E0 + _off_030006E0;
    _cyc_030006E0 += runtime_mem_cycles(_ea_030006E0, 2u, 0u);
    uint32_t _v_030006E0;
    { uint32_t _h = bus_read_u16(_ea_030006E0 & ~1u); if (_ea_030006E0 & 1u) _v_030006E0 = ((_h >> 8) | (_h << 24)); else _v_030006E0 = _h; }
    g_cpu.R[1] = _v_030006E0;
    g_cpu.R[15] = 0x030006E2u;
    runtime_tick(_cyc_030006E0);
    /* 030006E2  030006e2 T movs r0,#0x1 */
    g_cpu.R[15] = 0x030006E2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006E2 = 1u;
    _cyc_030006E2 = 1u;
    uint32_t _r_030006E2;
    _r_030006E2 = 0x00000001u;
    arm_set_nzc_logic(_r_030006E2, cpsr_c());
    g_cpu.R[0] = _r_030006E2;
    g_cpu.R[15] = 0x030006E4u;
    runtime_tick(_cyc_030006E2);
    /* 030006E4  030006e4 T ands r0,r0,r1 */
    g_cpu.R[15] = 0x030006E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006E4 = 1u;
    _cyc_030006E4 = 1u;
    uint32_t _rm_030006E4 = g_cpu.R[1];
    uint32_t _op2_030006E4;
    uint32_t _co_030006E4;
    _op2_030006E4 = _rm_030006E4;
    _co_030006E4 = cpsr_c();
    uint32_t _rn_030006E4 = g_cpu.R[0];
    uint32_t _r_030006E4;
    _r_030006E4 = _rn_030006E4 & _op2_030006E4;
    arm_set_nzc_logic(_r_030006E4, _co_030006E4);
    g_cpu.R[0] = _r_030006E4;
    g_cpu.R[15] = 0x030006E6u;
    runtime_tick(_cyc_030006E4);
    /* 030006E6  030006e6 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x030006E6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006E6 = 1u;
    _cyc_030006E6 = 1u;
    uint32_t _rn_030006E6 = g_cpu.R[0];
    uint32_t _r_030006E6;
    _r_030006E6 = _rn_030006E6 - 0x00000000u;
    arm_set_nzcv_sub(_rn_030006E6, 0x00000000u, _r_030006E6);
    g_cpu.R[15] = 0x030006E8u;
    runtime_tick(_cyc_030006E6);
    /* 030006E8  030006e8 T bne 0x0300070c */
    g_cpu.R[15] = 0x030006E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006E8 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_030006E8 = 3u;
        g_cpu.R[15] = 0x0300070Cu;
        runtime_tick(_cyc_030006E8);
        GBARECOMP_TAIL_CALL(gf_tfunc_0300070C);
    }
    g_cpu.R[15] = 0x030006EAu;
    runtime_tick(_cyc_030006E8);
    /* 030006EA  030006ea T movs r6,#0x8 */
    g_cpu.R[15] = 0x030006EAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006EA = 1u;
    _cyc_030006EA = 1u;
    uint32_t _r_030006EA;
    _r_030006EA = 0x00000008u;
    arm_set_nzc_logic(_r_030006EA, cpsr_c());
    g_cpu.R[6] = _r_030006EA;
    g_cpu.R[15] = 0x030006ECu;
    runtime_tick(_cyc_030006EA);
    /* 030006EC  030006ec T add r12,r12,r6 */
    g_cpu.R[15] = 0x030006ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006EC = 1u;
    _cyc_030006EC = 1u;
    uint32_t _rm_030006EC = g_cpu.R[6];
    uint32_t _op2_030006EC;
    uint32_t _co_030006EC;
    _op2_030006EC = _rm_030006EC;
    _co_030006EC = cpsr_c();
    uint32_t _rn_030006EC = g_cpu.R[12];
    uint32_t _r_030006EC;
    _r_030006EC = _rn_030006EC + _op2_030006EC;
    g_cpu.R[12] = _r_030006EC;
    g_cpu.R[15] = 0x030006EEu;
    runtime_tick(_cyc_030006EC);
    /* 030006EE  030006ee T b 0x03000514 */
    g_cpu.R[15] = 0x030006EEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030006EE = 1u;
    _cyc_030006EE = 3u;
    g_cpu.R[15] = 0x03000514u;
    runtime_tick(_cyc_030006EE);
    GBARECOMP_TAIL_CALL(gf_tfunc_03000514);
    g_cpu.R[15] = 0x030006F0u;
    runtime_tick(_cyc_030006EE);
    /* fall-through to 0x030006F0 */
    g_cpu.R[15] = 0x030006F0u;
    runtime_dispatch(0x030006F0u);
    return;
}

/* 0x03000738  mode=thumb  end=0x03000748  branches=0  indirect */


/* 0x0300070C thumb */
void gf_tfunc_0300070C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0300070Cu);
    /* 0300070C  0300070c T ldr r0,[r13,#0x18] */
    g_cpu.R[15] = 0x0300070Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300070C = 1u;
    _cyc_0300070C = 2u;
    uint32_t _base_0300070C = g_cpu.R[13];
    uint32_t _off_0300070C;
    _off_0300070C = 0x00000018u;
    uint32_t _ea_0300070C = _base_0300070C + _off_0300070C;
    uint32_t _post_0300070C = _base_0300070C + _off_0300070C;
    _cyc_0300070C += runtime_mem_cycles(_ea_0300070C, 4u, 0u);
    uint32_t _v_0300070C;
    { uint32_t _w = bus_read_u32(_ea_0300070C & ~3u); uint32_t _rot = (_ea_0300070C & 3u) * 8u; _v_0300070C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0300070C;
    g_cpu.R[15] = 0x0300070Eu;
    runtime_tick(_cyc_0300070C);
    /* 0300070E  0300070e T cmps r0,#0x0 */
    g_cpu.R[15] = 0x0300070Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300070E = 1u;
    _cyc_0300070E = 1u;
    uint32_t _rn_0300070E = g_cpu.R[0];
    uint32_t _r_0300070E;
    _r_0300070E = _rn_0300070E - 0x00000000u;
    arm_set_nzcv_sub(_rn_0300070E, 0x00000000u, _r_0300070E);
    g_cpu.R[15] = 0x03000710u;
    runtime_tick(_cyc_0300070E);
    /* 03000710  03000710 T beq 0x03000738 */
    g_cpu.R[15] = 0x03000710u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000710 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_03000710 = 3u;
        g_cpu.R[15] = 0x03000738u;
        runtime_tick(_cyc_03000710);
        GBARECOMP_TAIL_CALL(gf_tfunc_03000738);
    }
    g_cpu.R[15] = 0x03000712u;
    runtime_tick(_cyc_03000710);
    /* 03000712  03000712 T ldr r1,[r15,#0x34] */
    g_cpu.R[15] = 0x03000712u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000712 = 1u;
    _cyc_03000712 = 2u;
    uint32_t _base_03000712 = 0x03000716u & ~3u;
    uint32_t _off_03000712;
    _off_03000712 = 0x00000034u;
    uint32_t _ea_03000712 = _base_03000712 + _off_03000712;
    uint32_t _post_03000712 = _base_03000712 + _off_03000712;
    _cyc_03000712 += runtime_mem_cycles(_ea_03000712, 4u, 0u);
    uint32_t _v_03000712;
    { uint32_t _w = bus_read_u32(_ea_03000712 & ~3u); uint32_t _rot = (_ea_03000712 & 3u) * 8u; _v_03000712 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_03000712;
    g_cpu.R[15] = 0x03000714u;
    runtime_tick(_cyc_03000712);
    /* 03000714  03000714 T ldr r0,[r1] */
    g_cpu.R[15] = 0x03000714u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000714 = 1u;
    _cyc_03000714 = 2u;
    uint32_t _base_03000714 = g_cpu.R[1];
    uint32_t _off_03000714;
    _off_03000714 = 0x00000000u;
    uint32_t _ea_03000714 = _base_03000714 + _off_03000714;
    uint32_t _post_03000714 = _base_03000714 + _off_03000714;
    _cyc_03000714 += runtime_mem_cycles(_ea_03000714, 4u, 0u);
    uint32_t _v_03000714;
    { uint32_t _w = bus_read_u32(_ea_03000714 & ~3u); uint32_t _rot = (_ea_03000714 & 3u) * 8u; _v_03000714 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_03000714;
    g_cpu.R[15] = 0x03000716u;
    runtime_tick(_cyc_03000714);
    /* 03000716  03000716 T ldr r2,[r13] */
    g_cpu.R[15] = 0x03000716u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000716 = 1u;
    _cyc_03000716 = 2u;
    uint32_t _base_03000716 = g_cpu.R[13];
    uint32_t _off_03000716;
    _off_03000716 = 0x00000000u;
    uint32_t _ea_03000716 = _base_03000716 + _off_03000716;
    uint32_t _post_03000716 = _base_03000716 + _off_03000716;
    _cyc_03000716 += runtime_mem_cycles(_ea_03000716, 4u, 0u);
    uint32_t _v_03000716;
    { uint32_t _w = bus_read_u32(_ea_03000716 & ~3u); uint32_t _rot = (_ea_03000716 & 3u) * 8u; _v_03000716 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_03000716;
    g_cpu.R[15] = 0x03000718u;
    runtime_tick(_cyc_03000716);
    /* 03000718  03000718 T cmps r2,r0 */
    g_cpu.R[15] = 0x03000718u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000718 = 1u;
    _cyc_03000718 = 1u;
    uint32_t _rm_03000718 = g_cpu.R[0];
    uint32_t _op2_03000718;
    uint32_t _co_03000718;
    _op2_03000718 = _rm_03000718;
    _co_03000718 = cpsr_c();
    uint32_t _rn_03000718 = g_cpu.R[2];
    uint32_t _r_03000718;
    _r_03000718 = _rn_03000718 - _op2_03000718;
    arm_set_nzcv_sub(_rn_03000718, _op2_03000718, _r_03000718);
    g_cpu.R[15] = 0x0300071Au;
    runtime_tick(_cyc_03000718);
    /* 0300071A  0300071a T beq 0x03000738 */
    g_cpu.R[15] = 0x0300071Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300071A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0300071A = 3u;
        g_cpu.R[15] = 0x03000738u;
        runtime_tick(_cyc_0300071A);
        GBARECOMP_TAIL_CALL(gf_tfunc_03000738);
    }
    g_cpu.R[15] = 0x0300071Cu;
    runtime_tick(_cyc_0300071A);
    /* 0300071C  0300071c T ldr r2,[r15,#0x2c] */
    g_cpu.R[15] = 0x0300071Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300071C = 1u;
    _cyc_0300071C = 2u;
    uint32_t _base_0300071C = 0x03000720u & ~3u;
    uint32_t _off_0300071C;
    _off_0300071C = 0x0000002Cu;
    uint32_t _ea_0300071C = _base_0300071C + _off_0300071C;
    uint32_t _post_0300071C = _base_0300071C + _off_0300071C;
    _cyc_0300071C += runtime_mem_cycles(_ea_0300071C, 4u, 0u);
    uint32_t _v_0300071C;
    { uint32_t _w = bus_read_u32(_ea_0300071C & ~3u); uint32_t _rot = (_ea_0300071C & 3u) * 8u; _v_0300071C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_0300071C;
    g_cpu.R[15] = 0x0300071Eu;
    runtime_tick(_cyc_0300071C);
    /* 0300071E  0300071e T ldr r3,[r15,#0x30] */
    g_cpu.R[15] = 0x0300071Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300071E = 1u;
    _cyc_0300071E = 2u;
    uint32_t _base_0300071E = 0x03000722u & ~3u;
    uint32_t _off_0300071E;
    _off_0300071E = 0x00000030u;
    uint32_t _ea_0300071E = _base_0300071E + _off_0300071E;
    uint32_t _post_0300071E = _base_0300071E + _off_0300071E;
    _cyc_0300071E += runtime_mem_cycles(_ea_0300071E, 4u, 0u);
    uint32_t _v_0300071E;
    { uint32_t _w = bus_read_u32(_ea_0300071E & ~3u); uint32_t _rot = (_ea_0300071E & 3u) * 8u; _v_0300071E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_0300071E;
    g_cpu.R[15] = 0x03000720u;
    runtime_tick(_cyc_0300071E);
    /* 03000720  03000720 T ldr r1,[r3] */
    g_cpu.R[15] = 0x03000720u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000720 = 1u;
    _cyc_03000720 = 2u;
    uint32_t _base_03000720 = g_cpu.R[3];
    uint32_t _off_03000720;
    _off_03000720 = 0x00000000u;
    uint32_t _ea_03000720 = _base_03000720 + _off_03000720;
    uint32_t _post_03000720 = _base_03000720 + _off_03000720;
    _cyc_03000720 += runtime_mem_cycles(_ea_03000720, 4u, 0u);
    uint32_t _v_03000720;
    { uint32_t _w = bus_read_u32(_ea_03000720 & ~3u); uint32_t _rot = (_ea_03000720 & 3u) * 8u; _v_03000720 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_03000720;
    g_cpu.R[15] = 0x03000722u;
    runtime_tick(_cyc_03000720);
    /* 03000722  03000722 T movs r0,r1,lsl #3 */
    g_cpu.R[15] = 0x03000722u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000722 = 1u;
    _cyc_03000722 = 1u;
    uint32_t _rm_03000722 = g_cpu.R[1];
    uint32_t _op2_03000722;
    uint32_t _co_03000722;
    _op2_03000722 = _rm_03000722 << 3;
    _co_03000722 = (_rm_03000722 >> 29) & 1u;
    uint32_t _r_03000722;
    _r_03000722 = _op2_03000722;
    arm_set_nzc_logic(_r_03000722, _co_03000722);
    g_cpu.R[0] = _r_03000722;
    g_cpu.R[15] = 0x03000724u;
    runtime_tick(_cyc_03000722);
    /* 03000724  03000724 T adds r0,r0,r2 */
    g_cpu.R[15] = 0x03000724u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000724 = 1u;
    _cyc_03000724 = 1u;
    uint32_t _rm_03000724 = g_cpu.R[2];
    uint32_t _op2_03000724;
    uint32_t _co_03000724;
    _op2_03000724 = _rm_03000724;
    _co_03000724 = cpsr_c();
    uint32_t _rn_03000724 = g_cpu.R[0];
    uint32_t _r_03000724;
    _r_03000724 = _rn_03000724 + _op2_03000724;
    arm_set_nzcv_add(_rn_03000724, _op2_03000724, _r_03000724);
    g_cpu.R[0] = _r_03000724;
    g_cpu.R[15] = 0x03000726u;
    runtime_tick(_cyc_03000724);
    /* 03000726  03000726 T mov r4,r10 */
    g_cpu.R[15] = 0x03000726u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000726 = 1u;
    _cyc_03000726 = 1u;
    uint32_t _rm_03000726 = g_cpu.R[10];
    uint32_t _op2_03000726;
    uint32_t _co_03000726;
    _op2_03000726 = _rm_03000726;
    _co_03000726 = cpsr_c();
    uint32_t _r_03000726;
    _r_03000726 = _op2_03000726;
    g_cpu.R[4] = _r_03000726;
    g_cpu.R[15] = 0x03000728u;
    runtime_tick(_cyc_03000726);
    /* 03000728  03000728 T strh r4,[r0] */
    g_cpu.R[15] = 0x03000728u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000728 = 1u;
    _cyc_03000728 = 1u;
    uint32_t _base_03000728 = g_cpu.R[0];
    uint32_t _off_03000728;
    _off_03000728 = 0x00000000u;
    uint32_t _ea_03000728 = _base_03000728 + _off_03000728;
    uint32_t _post_03000728 = _base_03000728 + _off_03000728;
    _cyc_03000728 += runtime_mem_cycles(_ea_03000728, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000728u, _ea_03000728 & ~1u, (uint32_t)(g_cpu.R[4] & 0xFFFFu), 2u);
    bus_write_u16(_ea_03000728 & ~1u, (uint16_t)(g_cpu.R[4] & 0xFFFFu));
    g_cpu.R[15] = 0x0300072Au;
    runtime_tick(_cyc_03000728);
    /* 0300072A  0300072a T mov r6,r13 */
    g_cpu.R[15] = 0x0300072Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300072A = 1u;
    _cyc_0300072A = 1u;
    uint32_t _rm_0300072A = g_cpu.R[13];
    uint32_t _op2_0300072A;
    uint32_t _co_0300072A;
    _op2_0300072A = _rm_0300072A;
    _co_0300072A = cpsr_c();
    uint32_t _r_0300072A;
    _r_0300072A = _op2_0300072A;
    g_cpu.R[6] = _r_0300072A;
    g_cpu.R[15] = 0x0300072Cu;
    runtime_tick(_cyc_0300072A);
    /* 0300072C  0300072c T ldrh r6,[r6,#0x4] */
    g_cpu.R[15] = 0x0300072Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300072C = 1u;
    _cyc_0300072C = 2u;
    uint32_t _base_0300072C = g_cpu.R[6];
    uint32_t _off_0300072C;
    _off_0300072C = 0x00000004u;
    uint32_t _ea_0300072C = _base_0300072C + _off_0300072C;
    uint32_t _post_0300072C = _base_0300072C + _off_0300072C;
    _cyc_0300072C += runtime_mem_cycles(_ea_0300072C, 2u, 0u);
    uint32_t _v_0300072C;
    { uint32_t _h = bus_read_u16(_ea_0300072C & ~1u); if (_ea_0300072C & 1u) _v_0300072C = ((_h >> 8) | (_h << 24)); else _v_0300072C = _h; }
    g_cpu.R[6] = _v_0300072C;
    g_cpu.R[15] = 0x0300072Eu;
    runtime_tick(_cyc_0300072C);
    /* 0300072E  0300072e T strh r6,[r0,#0x2] */
    g_cpu.R[15] = 0x0300072Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300072E = 1u;
    _cyc_0300072E = 1u;
    uint32_t _base_0300072E = g_cpu.R[0];
    uint32_t _off_0300072E;
    _off_0300072E = 0x00000002u;
    uint32_t _ea_0300072E = _base_0300072E + _off_0300072E;
    uint32_t _post_0300072E = _base_0300072E + _off_0300072E;
    _cyc_0300072E += runtime_mem_cycles(_ea_0300072E, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0300072Eu, _ea_0300072E & ~1u, (uint32_t)(g_cpu.R[6] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0300072E & ~1u, (uint16_t)(g_cpu.R[6] & 0xFFFFu));
    g_cpu.R[15] = 0x03000730u;
    runtime_tick(_cyc_0300072E);
    /* 03000730  03000730 T mov r2,r9 */
    g_cpu.R[15] = 0x03000730u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000730 = 1u;
    _cyc_03000730 = 1u;
    uint32_t _rm_03000730 = g_cpu.R[9];
    uint32_t _op2_03000730;
    uint32_t _co_03000730;
    _op2_03000730 = _rm_03000730;
    _co_03000730 = cpsr_c();
    uint32_t _r_03000730;
    _r_03000730 = _op2_03000730;
    g_cpu.R[2] = _r_03000730;
    g_cpu.R[15] = 0x03000732u;
    runtime_tick(_cyc_03000730);
    /* 03000732  03000732 T strh r2,[r0,#0x4] */
    g_cpu.R[15] = 0x03000732u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000732 = 1u;
    _cyc_03000732 = 1u;
    uint32_t _base_03000732 = g_cpu.R[0];
    uint32_t _off_03000732;
    _off_03000732 = 0x00000004u;
    uint32_t _ea_03000732 = _base_03000732 + _off_03000732;
    uint32_t _post_03000732 = _base_03000732 + _off_03000732;
    _cyc_03000732 += runtime_mem_cycles(_ea_03000732, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000732u, _ea_03000732 & ~1u, (uint32_t)(g_cpu.R[2] & 0xFFFFu), 2u);
    bus_write_u16(_ea_03000732 & ~1u, (uint16_t)(g_cpu.R[2] & 0xFFFFu));
    g_cpu.R[15] = 0x03000734u;
    runtime_tick(_cyc_03000732);
    /* 03000734  03000734 T adds r1,r1,#0x1 */
    g_cpu.R[15] = 0x03000734u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000734 = 1u;
    _cyc_03000734 = 1u;
    uint32_t _rn_03000734 = g_cpu.R[1];
    uint32_t _r_03000734;
    _r_03000734 = _rn_03000734 + 0x00000001u;
    arm_set_nzcv_add(_rn_03000734, 0x00000001u, _r_03000734);
    g_cpu.R[1] = _r_03000734;
    g_cpu.R[15] = 0x03000736u;
    runtime_tick(_cyc_03000734);
    /* 03000736  03000736 T str r1,[r3] */
    g_cpu.R[15] = 0x03000736u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000736 = 1u;
    _cyc_03000736 = 1u;
    uint32_t _base_03000736 = g_cpu.R[3];
    uint32_t _off_03000736;
    _off_03000736 = 0x00000000u;
    uint32_t _ea_03000736 = _base_03000736 + _off_03000736;
    uint32_t _post_03000736 = _base_03000736 + _off_03000736;
    _cyc_03000736 += runtime_mem_cycles(_ea_03000736, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000736u, _ea_03000736 & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_ea_03000736 & ~3u, g_cpu.R[1]);
    g_cpu.R[15] = 0x03000738u;
    runtime_tick(_cyc_03000736);
    /* fall-through to 0x03000738 */
    g_cpu.R[15] = 0x03000738u;
    runtime_dispatch(0x03000738u);
    return;
}

/* 0x03000794  mode=thumb  end=0x030007A6  branches=0  indirect */


/* 0x03000738 thumb */
void gf_tfunc_03000738(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000738u);
    /* 03000738  03000738 T add r13,r13,#0x24 */
    g_cpu.R[15] = 0x03000738u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000738 = 1u;
    _cyc_03000738 = 1u;
    uint32_t _rn_03000738 = g_cpu.R[13];
    uint32_t _r_03000738;
    _r_03000738 = _rn_03000738 + 0x00000024u;
    g_cpu.R[13] = _r_03000738;
    g_cpu.R[15] = 0x0300073Au;
    runtime_tick(_cyc_03000738);
    /* 0300073A  0300073a T ldm r13!,{r3,r4,r5} */
    g_cpu.R[15] = 0x0300073Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300073A = 1u;
    _cyc_0300073A = 2u;
    uint32_t _b_0300073A = g_cpu.R[13];
    uint32_t _a_0300073A = _b_0300073A;
    uint32_t _fb_0300073A = _b_0300073A + 12u;
    _cyc_0300073A += runtime_mem_cycles(_a_0300073A & ~3u, 4u, 0u);
    g_cpu.R[3] = bus_read_u32(_a_0300073A & ~3u);
    _a_0300073A += 4u;
    _cyc_0300073A += runtime_mem_cycles(_a_0300073A & ~3u, 4u, 1u);
    g_cpu.R[4] = bus_read_u32(_a_0300073A & ~3u);
    _a_0300073A += 4u;
    _cyc_0300073A += runtime_mem_cycles(_a_0300073A & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_0300073A & ~3u);
    _a_0300073A += 4u;
    g_cpu.R[13] = _fb_0300073A;
    g_cpu.R[15] = 0x0300073Cu;
    runtime_tick(_cyc_0300073A);
    /* 0300073C  0300073c T mov r8,r3 */
    g_cpu.R[15] = 0x0300073Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300073C = 1u;
    _cyc_0300073C = 1u;
    uint32_t _rm_0300073C = g_cpu.R[3];
    uint32_t _op2_0300073C;
    uint32_t _co_0300073C;
    _op2_0300073C = _rm_0300073C;
    _co_0300073C = cpsr_c();
    uint32_t _r_0300073C;
    _r_0300073C = _op2_0300073C;
    g_cpu.R[8] = _r_0300073C;
    g_cpu.R[15] = 0x0300073Eu;
    runtime_tick(_cyc_0300073C);
    /* 0300073E  0300073e T mov r9,r4 */
    g_cpu.R[15] = 0x0300073Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300073E = 1u;
    _cyc_0300073E = 1u;
    uint32_t _rm_0300073E = g_cpu.R[4];
    uint32_t _op2_0300073E;
    uint32_t _co_0300073E;
    _op2_0300073E = _rm_0300073E;
    _co_0300073E = cpsr_c();
    uint32_t _r_0300073E;
    _r_0300073E = _op2_0300073E;
    g_cpu.R[9] = _r_0300073E;
    g_cpu.R[15] = 0x03000740u;
    runtime_tick(_cyc_0300073E);
    /* 03000740  03000740 T mov r10,r5 */
    g_cpu.R[15] = 0x03000740u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000740 = 1u;
    _cyc_03000740 = 1u;
    uint32_t _rm_03000740 = g_cpu.R[5];
    uint32_t _op2_03000740;
    uint32_t _co_03000740;
    _op2_03000740 = _rm_03000740;
    _co_03000740 = cpsr_c();
    uint32_t _r_03000740;
    _r_03000740 = _op2_03000740;
    g_cpu.R[10] = _r_03000740;
    g_cpu.R[15] = 0x03000742u;
    runtime_tick(_cyc_03000740);
    /* 03000742  03000742 T ldm r13!,{r4,r5,r6,r7} */
    g_cpu.R[15] = 0x03000742u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000742 = 1u;
    _cyc_03000742 = 2u;
    uint32_t _b_03000742 = g_cpu.R[13];
    uint32_t _a_03000742 = _b_03000742;
    uint32_t _fb_03000742 = _b_03000742 + 16u;
    _cyc_03000742 += runtime_mem_cycles(_a_03000742 & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_03000742 & ~3u);
    _a_03000742 += 4u;
    _cyc_03000742 += runtime_mem_cycles(_a_03000742 & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_03000742 & ~3u);
    _a_03000742 += 4u;
    _cyc_03000742 += runtime_mem_cycles(_a_03000742 & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_03000742 & ~3u);
    _a_03000742 += 4u;
    _cyc_03000742 += runtime_mem_cycles(_a_03000742 & ~3u, 4u, 1u);
    g_cpu.R[7] = bus_read_u32(_a_03000742 & ~3u);
    _a_03000742 += 4u;
    g_cpu.R[13] = _fb_03000742;
    g_cpu.R[15] = 0x03000744u;
    runtime_tick(_cyc_03000742);
    /* 03000744  03000744 T ldm r13!,{r0} */
    g_cpu.R[15] = 0x03000744u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000744 = 1u;
    _cyc_03000744 = 2u;
    uint32_t _b_03000744 = g_cpu.R[13];
    uint32_t _a_03000744 = _b_03000744;
    uint32_t _fb_03000744 = _b_03000744 + 4u;
    _cyc_03000744 += runtime_mem_cycles(_a_03000744 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_03000744 & ~3u);
    _a_03000744 += 4u;
    g_cpu.R[13] = _fb_03000744;
    g_cpu.R[15] = 0x03000746u;
    runtime_tick(_cyc_03000744);
    /* 03000746  03000746 T bx r0 */
    g_cpu.R[15] = 0x03000746u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000746 = 1u;
    _cyc_03000746 = 3u;
    uint32_t _bxt_03000746 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_03000746 & ~1u;
    if (_bxt_03000746 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_03000746);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_03000746);
    g_cpu.R[15] = 0x03000748u;
    runtime_tick(_cyc_03000746);
    /* fall-through to 0x03000748 */
    g_cpu.R[15] = 0x03000748u;
    runtime_dispatch(0x03000748u);
    return;
}

/* 0x03000754  mode=thumb  end=0x03000768  branches=3 */


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

/* 0x03000948  mode=arm  end=0x03000970  branches=1  indirect */


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

/* 0x03000880  mode=arm  end=0x03000898  branches=15  indirect */


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
    /* fall-through to 0x03000898 */
    g_cpu.R[15] = 0x03000898u;
    runtime_dispatch(0x03000898u);
    return;
}

/* 0x03000898  mode=arm  end=0x03000944  branches=15  indirect */


/* 0x03000898 arm */
void gf_afunc_03000898(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000898u);
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
    /* fall-through to 0x03000970 */
    g_cpu.R[15] = 0x03000970u;
    runtime_dispatch(0x03000970u);
    return;
}

/* 0x03000970  mode=arm  end=0x0300097C  branches=1  indirect */


/* 0x03000970 arm */
void gf_afunc_03000970(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000970u);
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



