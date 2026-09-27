/* Auto-split from gbarecomp shards. Module: gameplay_core
 * 51 guest functions. Do not hand-edit function bodies.
 */

#include "runtime_arm.h"
#include "recompiled.h"

/* 0x0800802C thumb */
void gf_tfunc_0800802C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0800802Cu);
    /* 0800802C  0800802c T ldm r13!,{r4} */
    g_cpu.R[15] = 0x0800802Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800802C = 1u;
    _cyc_0800802C = 2u;
    uint32_t _b_0800802C = g_cpu.R[13];
    uint32_t _a_0800802C = _b_0800802C;
    uint32_t _fb_0800802C = _b_0800802C + 4u;
    _cyc_0800802C += runtime_mem_cycles(_a_0800802C & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_0800802C & ~3u);
    _a_0800802C += 4u;
    g_cpu.R[13] = _fb_0800802C;
    g_cpu.R[15] = 0x0800802Eu;
    runtime_tick(_cyc_0800802C);
    /* 0800802E  0800802e T ldm r13!,{r0} */
    g_cpu.R[15] = 0x0800802Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800802E = 1u;
    _cyc_0800802E = 2u;
    uint32_t _b_0800802E = g_cpu.R[13];
    uint32_t _a_0800802E = _b_0800802E;
    uint32_t _fb_0800802E = _b_0800802E + 4u;
    _cyc_0800802E += runtime_mem_cycles(_a_0800802E & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_0800802E & ~3u);
    _a_0800802E += 4u;
    g_cpu.R[13] = _fb_0800802E;
    g_cpu.R[15] = 0x08008030u;
    runtime_tick(_cyc_0800802E);
    /* 08008030  08008030 T bx r0 */
    g_cpu.R[15] = 0x08008030u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008030 = 1u;
    _cyc_08008030 = 3u;
    uint32_t _bxt_08008030 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_08008030 & ~1u;
    if (_bxt_08008030 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_08008030);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_08008030);
    g_cpu.R[15] = 0x08008032u;
    runtime_tick(_cyc_08008030);
    /* fall-through to 0x08008032 */
    g_cpu.R[15] = 0x08008032u;
    runtime_dispatch(0x08008032u);
    return;
}

/* 0x08009524  mode=thumb  end=0x0800955C  branches=2  indirect */


/* 0x08009524 thumb */
void gf_tfunc_08009524(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009524u);
    /* 08009524  08009524 T stm r13!,{r4,r14} */
    g_cpu.R[15] = 0x08009524u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009524 = 1u;
    _cyc_08009524 = 1u;
    uint32_t _b_08009524 = g_cpu.R[13];
    uint32_t _a_08009524 = _b_08009524 - 8u;
    uint32_t _fb_08009524 = _b_08009524 - 8u;
    _cyc_08009524 += runtime_mem_cycles(_a_08009524 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009524u, _a_08009524 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_08009524 & ~3u, g_cpu.R[4]);
    _a_08009524 += 4u;
    _cyc_08009524 += runtime_mem_cycles(_a_08009524 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009524u, _a_08009524 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_08009524 & ~3u, g_cpu.R[14]);
    _a_08009524 += 4u;
    g_cpu.R[13] = _fb_08009524;
    g_cpu.R[15] = 0x08009526u;
    runtime_tick(_cyc_08009524);
    /* 08009526  08009526 T adds r4,r0,#0x0 */
    g_cpu.R[15] = 0x08009526u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009526 = 1u;
    _cyc_08009526 = 1u;
    uint32_t _rn_08009526 = g_cpu.R[0];
    uint32_t _r_08009526;
    _r_08009526 = _rn_08009526 + 0x00000000u;
    arm_set_nzcv_add(_rn_08009526, 0x00000000u, _r_08009526);
    g_cpu.R[4] = _r_08009526;
    g_cpu.R[15] = 0x08009528u;
    runtime_tick(_cyc_08009526);
    /* 08009528  08009528 T ldr r0,[r15,#0x3c] */
    g_cpu.R[15] = 0x08009528u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009528 = 1u;
    _cyc_08009528 = 2u;
    uint32_t _base_08009528 = 0x0800952Cu & ~3u;
    uint32_t _off_08009528;
    _off_08009528 = 0x0000003Cu;
    uint32_t _ea_08009528 = _base_08009528 + _off_08009528;
    uint32_t _post_08009528 = _base_08009528 + _off_08009528;
    _cyc_08009528 += runtime_mem_cycles(_ea_08009528, 4u, 0u);
    uint32_t _v_08009528;
    { uint32_t _w = bus_read_u32(_ea_08009528 & ~3u); uint32_t _rot = (_ea_08009528 & 3u) * 8u; _v_08009528 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08009528;
    g_cpu.R[15] = 0x0800952Au;
    runtime_tick(_cyc_08009528);
    /* 0800952A  0800952a T str r0,[r4,#0x14] */
    g_cpu.R[15] = 0x0800952Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800952A = 1u;
    _cyc_0800952A = 1u;
    uint32_t _base_0800952A = g_cpu.R[4];
    uint32_t _off_0800952A;
    _off_0800952A = 0x00000014u;
    uint32_t _ea_0800952A = _base_0800952A + _off_0800952A;
    uint32_t _post_0800952A = _base_0800952A + _off_0800952A;
    _cyc_0800952A += runtime_mem_cycles(_ea_0800952A, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0800952Au, _ea_0800952A & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_0800952A & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0800952Cu;
    runtime_tick(_cyc_0800952A);
    /* 0800952C  0800952c T ldrh r0,[r4,#0x22] */
    g_cpu.R[15] = 0x0800952Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800952C = 1u;
    _cyc_0800952C = 2u;
    uint32_t _base_0800952C = g_cpu.R[4];
    uint32_t _off_0800952C;
    _off_0800952C = 0x00000022u;
    uint32_t _ea_0800952C = _base_0800952C + _off_0800952C;
    uint32_t _post_0800952C = _base_0800952C + _off_0800952C;
    _cyc_0800952C += runtime_mem_cycles(_ea_0800952C, 2u, 0u);
    uint32_t _v_0800952C;
    { uint32_t _h = bus_read_u16(_ea_0800952C & ~1u); if (_ea_0800952C & 1u) _v_0800952C = ((_h >> 8) | (_h << 24)); else _v_0800952C = _h; }
    g_cpu.R[0] = _v_0800952C;
    g_cpu.R[15] = 0x0800952Eu;
    runtime_tick(_cyc_0800952C);
    /* 0800952E  0800952e T adds r0,r0,#0x1 */
    g_cpu.R[15] = 0x0800952Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800952E = 1u;
    _cyc_0800952E = 1u;
    uint32_t _rn_0800952E = g_cpu.R[0];
    uint32_t _r_0800952E;
    _r_0800952E = _rn_0800952E + 0x00000001u;
    arm_set_nzcv_add(_rn_0800952E, 0x00000001u, _r_0800952E);
    g_cpu.R[0] = _r_0800952E;
    g_cpu.R[15] = 0x08009530u;
    runtime_tick(_cyc_0800952E);
    /* 08009530  08009530 T strh r0,[r4,#0x22] */
    g_cpu.R[15] = 0x08009530u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009530 = 1u;
    _cyc_08009530 = 1u;
    uint32_t _base_08009530 = g_cpu.R[4];
    uint32_t _off_08009530;
    _off_08009530 = 0x00000022u;
    uint32_t _ea_08009530 = _base_08009530 + _off_08009530;
    uint32_t _post_08009530 = _base_08009530 + _off_08009530;
    _cyc_08009530 += runtime_mem_cycles(_ea_08009530, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009530u, _ea_08009530 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08009530 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08009532u;
    runtime_tick(_cyc_08009530);
    /* 08009532  08009532 T movs r0,#0x22 */
    g_cpu.R[15] = 0x08009532u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009532 = 1u;
    _cyc_08009532 = 1u;
    uint32_t _r_08009532;
    _r_08009532 = 0x00000022u;
    arm_set_nzc_logic(_r_08009532, cpsr_c());
    g_cpu.R[0] = _r_08009532;
    g_cpu.R[15] = 0x08009534u;
    runtime_tick(_cyc_08009532);
    /* 08009534  08009534 T ldrsh r1,[r4,+r0] */
    g_cpu.R[15] = 0x08009534u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009534 = 1u;
    _cyc_08009534 = 2u;
    uint32_t _base_08009534 = g_cpu.R[4];
    uint32_t _off_08009534;
    uint32_t _morm_08009534 = g_cpu.R[0];
    _off_08009534 = _morm_08009534;
    uint32_t _ea_08009534 = _base_08009534 + _off_08009534;
    uint32_t _post_08009534 = _base_08009534 + _off_08009534;
    _cyc_08009534 += runtime_mem_cycles(_ea_08009534, 2u, 0u);
    uint32_t _v_08009534;
    if (_ea_08009534 & 1u) _v_08009534 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_08009534);
    else _v_08009534 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_08009534);
    g_cpu.R[1] = _v_08009534;
    g_cpu.R[15] = 0x08009536u;
    runtime_tick(_cyc_08009534);
    /* 08009536  08009536 T movs r1,r1,lsl #1 */
    g_cpu.R[15] = 0x08009536u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009536 = 1u;
    _cyc_08009536 = 1u;
    uint32_t _rm_08009536 = g_cpu.R[1];
    uint32_t _op2_08009536;
    uint32_t _co_08009536;
    _op2_08009536 = _rm_08009536 << 1;
    _co_08009536 = (_rm_08009536 >> 31) & 1u;
    uint32_t _r_08009536;
    _r_08009536 = _op2_08009536;
    arm_set_nzc_logic(_r_08009536, _co_08009536);
    g_cpu.R[1] = _r_08009536;
    g_cpu.R[15] = 0x08009538u;
    runtime_tick(_cyc_08009536);
    /* 08009538  08009538 T adds r1,r1,r4 */
    g_cpu.R[15] = 0x08009538u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009538 = 1u;
    _cyc_08009538 = 1u;
    uint32_t _rm_08009538 = g_cpu.R[4];
    uint32_t _op2_08009538;
    uint32_t _co_08009538;
    _op2_08009538 = _rm_08009538;
    _co_08009538 = cpsr_c();
    uint32_t _rn_08009538 = g_cpu.R[1];
    uint32_t _r_08009538;
    _r_08009538 = _rn_08009538 + _op2_08009538;
    arm_set_nzcv_add(_rn_08009538, _op2_08009538, _r_08009538);
    g_cpu.R[1] = _r_08009538;
    g_cpu.R[15] = 0x0800953Au;
    runtime_tick(_cyc_08009538);
    /* 0800953A  0800953a T ldrb r0,[r1,#0x19] */
    g_cpu.R[15] = 0x0800953Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800953A = 1u;
    _cyc_0800953A = 2u;
    uint32_t _base_0800953A = g_cpu.R[1];
    uint32_t _off_0800953A;
    _off_0800953A = 0x00000019u;
    uint32_t _ea_0800953A = _base_0800953A + _off_0800953A;
    uint32_t _post_0800953A = _base_0800953A + _off_0800953A;
    _cyc_0800953A += runtime_mem_cycles(_ea_0800953A, 1u, 0u);
    uint32_t _v_0800953A;
    _v_0800953A = bus_read_u8(_ea_0800953A);
    g_cpu.R[0] = _v_0800953A;
    g_cpu.R[15] = 0x0800953Cu;
    runtime_tick(_cyc_0800953A);
    /* 0800953C  0800953c T adds r0,r0,#0x1 */
    g_cpu.R[15] = 0x0800953Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800953C = 1u;
    _cyc_0800953C = 1u;
    uint32_t _rn_0800953C = g_cpu.R[0];
    uint32_t _r_0800953C;
    _r_0800953C = _rn_0800953C + 0x00000001u;
    arm_set_nzcv_add(_rn_0800953C, 0x00000001u, _r_0800953C);
    g_cpu.R[0] = _r_0800953C;
    g_cpu.R[15] = 0x0800953Eu;
    runtime_tick(_cyc_0800953C);
    /* 0800953E  0800953e T strb r0,[r1,#0x19] */
    g_cpu.R[15] = 0x0800953Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800953E = 1u;
    _cyc_0800953E = 1u;
    uint32_t _base_0800953E = g_cpu.R[1];
    uint32_t _off_0800953E;
    _off_0800953E = 0x00000019u;
    uint32_t _ea_0800953E = _base_0800953E + _off_0800953E;
    uint32_t _post_0800953E = _base_0800953E + _off_0800953E;
    _cyc_0800953E += runtime_mem_cycles(_ea_0800953E, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0800953Eu, _ea_0800953E, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_0800953E, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08009540u;
    runtime_tick(_cyc_0800953E);
    /* 08009540  08009540 T movs r0,#0x22 */
    g_cpu.R[15] = 0x08009540u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009540 = 1u;
    _cyc_08009540 = 1u;
    uint32_t _r_08009540;
    _r_08009540 = 0x00000022u;
    arm_set_nzc_logic(_r_08009540, cpsr_c());
    g_cpu.R[0] = _r_08009540;
    g_cpu.R[15] = 0x08009542u;
    runtime_tick(_cyc_08009540);
    /* 08009542  08009542 T ldrsh r1,[r4,+r0] */
    g_cpu.R[15] = 0x08009542u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009542 = 1u;
    _cyc_08009542 = 2u;
    uint32_t _base_08009542 = g_cpu.R[4];
    uint32_t _off_08009542;
    uint32_t _morm_08009542 = g_cpu.R[0];
    _off_08009542 = _morm_08009542;
    uint32_t _ea_08009542 = _base_08009542 + _off_08009542;
    uint32_t _post_08009542 = _base_08009542 + _off_08009542;
    _cyc_08009542 += runtime_mem_cycles(_ea_08009542, 2u, 0u);
    uint32_t _v_08009542;
    if (_ea_08009542 & 1u) _v_08009542 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_08009542);
    else _v_08009542 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_08009542);
    g_cpu.R[1] = _v_08009542;
    g_cpu.R[15] = 0x08009544u;
    runtime_tick(_cyc_08009542);
    /* 08009544  08009544 T movs r1,r1,lsl #1 */
    g_cpu.R[15] = 0x08009544u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009544 = 1u;
    _cyc_08009544 = 1u;
    uint32_t _rm_08009544 = g_cpu.R[1];
    uint32_t _op2_08009544;
    uint32_t _co_08009544;
    _op2_08009544 = _rm_08009544 << 1;
    _co_08009544 = (_rm_08009544 >> 31) & 1u;
    uint32_t _r_08009544;
    _r_08009544 = _op2_08009544;
    arm_set_nzc_logic(_r_08009544, _co_08009544);
    g_cpu.R[1] = _r_08009544;
    g_cpu.R[15] = 0x08009546u;
    runtime_tick(_cyc_08009544);
    /* 08009546  08009546 T adds r0,r4,#0x0 */
    g_cpu.R[15] = 0x08009546u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009546 = 1u;
    _cyc_08009546 = 1u;
    uint32_t _rn_08009546 = g_cpu.R[4];
    uint32_t _r_08009546;
    _r_08009546 = _rn_08009546 + 0x00000000u;
    arm_set_nzcv_add(_rn_08009546, 0x00000000u, _r_08009546);
    g_cpu.R[0] = _r_08009546;
    g_cpu.R[15] = 0x08009548u;
    runtime_tick(_cyc_08009546);
    /* 08009548  08009548 T adds r0,r0,#0x18 */
    g_cpu.R[15] = 0x08009548u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009548 = 1u;
    _cyc_08009548 = 1u;
    uint32_t _rn_08009548 = g_cpu.R[0];
    uint32_t _r_08009548;
    _r_08009548 = _rn_08009548 + 0x00000018u;
    arm_set_nzcv_add(_rn_08009548, 0x00000018u, _r_08009548);
    g_cpu.R[0] = _r_08009548;
    g_cpu.R[15] = 0x0800954Au;
    runtime_tick(_cyc_08009548);
    /* 0800954A  0800954a T adds r0,r0,r1 */
    g_cpu.R[15] = 0x0800954Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800954A = 1u;
    _cyc_0800954A = 1u;
    uint32_t _rm_0800954A = g_cpu.R[1];
    uint32_t _op2_0800954A;
    uint32_t _co_0800954A;
    _op2_0800954A = _rm_0800954A;
    _co_0800954A = cpsr_c();
    uint32_t _rn_0800954A = g_cpu.R[0];
    uint32_t _r_0800954A;
    _r_0800954A = _rn_0800954A + _op2_0800954A;
    arm_set_nzcv_add(_rn_0800954A, _op2_0800954A, _r_0800954A);
    g_cpu.R[0] = _r_0800954A;
    g_cpu.R[15] = 0x0800954Cu;
    runtime_tick(_cyc_0800954A);
    /* 0800954C  0800954c T ldrb r0,[r0] */
    g_cpu.R[15] = 0x0800954Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800954C = 1u;
    _cyc_0800954C = 2u;
    uint32_t _base_0800954C = g_cpu.R[0];
    uint32_t _off_0800954C;
    _off_0800954C = 0x00000000u;
    uint32_t _ea_0800954C = _base_0800954C + _off_0800954C;
    uint32_t _post_0800954C = _base_0800954C + _off_0800954C;
    _cyc_0800954C += runtime_mem_cycles(_ea_0800954C, 1u, 0u);
    uint32_t _v_0800954C;
    _v_0800954C = bus_read_u8(_ea_0800954C);
    g_cpu.R[0] = _v_0800954C;
    g_cpu.R[15] = 0x0800954Eu;
    runtime_tick(_cyc_0800954C);
    /* 0800954E  0800954e T ldr r1,[r4,#0x14] */
    g_cpu.R[15] = 0x0800954Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800954E = 1u;
    _cyc_0800954E = 2u;
    uint32_t _base_0800954E = g_cpu.R[4];
    uint32_t _off_0800954E;
    _off_0800954E = 0x00000014u;
    uint32_t _ea_0800954E = _base_0800954E + _off_0800954E;
    uint32_t _post_0800954E = _base_0800954E + _off_0800954E;
    _cyc_0800954E += runtime_mem_cycles(_ea_0800954E, 4u, 0u);
    uint32_t _v_0800954E;
    { uint32_t _w = bus_read_u32(_ea_0800954E & ~3u); uint32_t _rot = (_ea_0800954E & 3u) * 8u; _v_0800954E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0800954E;
    g_cpu.R[15] = 0x08009550u;
    runtime_tick(_cyc_0800954E);
    /* 08009550  08009550 T movs r0,r0,lsl #2 */
    g_cpu.R[15] = 0x08009550u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009550 = 1u;
    _cyc_08009550 = 1u;
    uint32_t _rm_08009550 = g_cpu.R[0];
    uint32_t _op2_08009550;
    uint32_t _co_08009550;
    _op2_08009550 = _rm_08009550 << 2;
    _co_08009550 = (_rm_08009550 >> 30) & 1u;
    uint32_t _r_08009550;
    _r_08009550 = _op2_08009550;
    arm_set_nzc_logic(_r_08009550, _co_08009550);
    g_cpu.R[0] = _r_08009550;
    g_cpu.R[15] = 0x08009552u;
    runtime_tick(_cyc_08009550);
    /* 08009552  08009552 T adds r0,r0,r1 */
    g_cpu.R[15] = 0x08009552u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009552 = 1u;
    _cyc_08009552 = 1u;
    uint32_t _rm_08009552 = g_cpu.R[1];
    uint32_t _op2_08009552;
    uint32_t _co_08009552;
    _op2_08009552 = _rm_08009552;
    _co_08009552 = cpsr_c();
    uint32_t _rn_08009552 = g_cpu.R[0];
    uint32_t _r_08009552;
    _r_08009552 = _rn_08009552 + _op2_08009552;
    arm_set_nzcv_add(_rn_08009552, _op2_08009552, _r_08009552);
    g_cpu.R[0] = _r_08009552;
    g_cpu.R[15] = 0x08009554u;
    runtime_tick(_cyc_08009552);
    /* 08009554  08009554 T ldr r1,[r0] */
    g_cpu.R[15] = 0x08009554u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009554 = 1u;
    _cyc_08009554 = 2u;
    uint32_t _base_08009554 = g_cpu.R[0];
    uint32_t _off_08009554;
    _off_08009554 = 0x00000000u;
    uint32_t _ea_08009554 = _base_08009554 + _off_08009554;
    uint32_t _post_08009554 = _base_08009554 + _off_08009554;
    _cyc_08009554 += runtime_mem_cycles(_ea_08009554, 4u, 0u);
    uint32_t _v_08009554;
    { uint32_t _w = bus_read_u32(_ea_08009554 & ~3u); uint32_t _rot = (_ea_08009554 & 3u) * 8u; _v_08009554 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08009554;
    g_cpu.R[15] = 0x08009556u;
    runtime_tick(_cyc_08009554);
    /* 08009556  08009556 T adds r0,r4,#0x0 */
    g_cpu.R[15] = 0x08009556u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009556 = 1u;
    _cyc_08009556 = 1u;
    uint32_t _rn_08009556 = g_cpu.R[4];
    uint32_t _r_08009556;
    _r_08009556 = _rn_08009556 + 0x00000000u;
    arm_set_nzcv_add(_rn_08009556, 0x00000000u, _r_08009556);
    g_cpu.R[0] = _r_08009556;
    g_cpu.R[15] = 0x08009558u;
    runtime_tick(_cyc_08009556);
    /* 08009558  08009558 T bl.hi 0x080c255c */
    g_cpu.R[15] = 0x08009558u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009558 = 1u;
    _cyc_08009558 = 1u;
    g_cpu.R[14] = 0x080C255Cu;
    g_cpu.R[15] = 0x0800955Au;
    runtime_tick(_cyc_08009558);
    /* 0800955A  0800955a T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0800955Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800955A = 1u;
    _cyc_0800955A = 3u;
    uint32_t _blt_0800955A = (g_cpu.R[14] + 0x00000C84u) & ~1u;
    g_cpu.R[14] = 0x0800955Du;
    g_cpu.R[15] = _blt_0800955A;
    runtime_call_push_return(0x0800955Cu);
    runtime_tick(_cyc_0800955A);
    _cyc_0800955A = 0u;
    runtime_dispatch(_blt_0800955A);
    if (g_cpu.R[15] != 0x0800955Cu) { runtime_call_cancel_return(0x0800955Cu); return; }
    g_cpu.R[15] = 0x0800955Cu;
    runtime_tick(_cyc_0800955A);
    /* fall-through to 0x0800955C */
    g_cpu.R[15] = 0x0800955Cu;
    runtime_dispatch(0x0800955Cu);
    return;
}

/* 0x0800955C  mode=thumb  end=0x08009568  branches=0  indirect */


/* 0x0800955C thumb */
void gf_tfunc_0800955C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0800955Cu);
    /* 0800955C  0800955c T ldrh r0,[r4,#0x22] */
    g_cpu.R[15] = 0x0800955Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800955C = 1u;
    _cyc_0800955C = 2u;
    uint32_t _base_0800955C = g_cpu.R[4];
    uint32_t _off_0800955C;
    _off_0800955C = 0x00000022u;
    uint32_t _ea_0800955C = _base_0800955C + _off_0800955C;
    uint32_t _post_0800955C = _base_0800955C + _off_0800955C;
    _cyc_0800955C += runtime_mem_cycles(_ea_0800955C, 2u, 0u);
    uint32_t _v_0800955C;
    { uint32_t _h = bus_read_u16(_ea_0800955C & ~1u); if (_ea_0800955C & 1u) _v_0800955C = ((_h >> 8) | (_h << 24)); else _v_0800955C = _h; }
    g_cpu.R[0] = _v_0800955C;
    g_cpu.R[15] = 0x0800955Eu;
    runtime_tick(_cyc_0800955C);
    /* 0800955E  0800955e T subs r0,r0,#0x1 */
    g_cpu.R[15] = 0x0800955Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800955E = 1u;
    _cyc_0800955E = 1u;
    uint32_t _rn_0800955E = g_cpu.R[0];
    uint32_t _r_0800955E;
    _r_0800955E = _rn_0800955E - 0x00000001u;
    arm_set_nzcv_sub(_rn_0800955E, 0x00000001u, _r_0800955E);
    g_cpu.R[0] = _r_0800955E;
    g_cpu.R[15] = 0x08009560u;
    runtime_tick(_cyc_0800955E);
    /* 08009560  08009560 T strh r0,[r4,#0x22] */
    g_cpu.R[15] = 0x08009560u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009560 = 1u;
    _cyc_08009560 = 1u;
    uint32_t _base_08009560 = g_cpu.R[4];
    uint32_t _off_08009560;
    _off_08009560 = 0x00000022u;
    uint32_t _ea_08009560 = _base_08009560 + _off_08009560;
    uint32_t _post_08009560 = _base_08009560 + _off_08009560;
    _cyc_08009560 += runtime_mem_cycles(_ea_08009560, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009560u, _ea_08009560 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08009560 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08009562u;
    runtime_tick(_cyc_08009560);
    /* 08009562  08009562 T ldm r13!,{r4} */
    g_cpu.R[15] = 0x08009562u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009562 = 1u;
    _cyc_08009562 = 2u;
    uint32_t _b_08009562 = g_cpu.R[13];
    uint32_t _a_08009562 = _b_08009562;
    uint32_t _fb_08009562 = _b_08009562 + 4u;
    _cyc_08009562 += runtime_mem_cycles(_a_08009562 & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_08009562 & ~3u);
    _a_08009562 += 4u;
    g_cpu.R[13] = _fb_08009562;
    g_cpu.R[15] = 0x08009564u;
    runtime_tick(_cyc_08009562);
    /* 08009564  08009564 T ldm r13!,{r0} */
    g_cpu.R[15] = 0x08009564u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009564 = 1u;
    _cyc_08009564 = 2u;
    uint32_t _b_08009564 = g_cpu.R[13];
    uint32_t _a_08009564 = _b_08009564;
    uint32_t _fb_08009564 = _b_08009564 + 4u;
    _cyc_08009564 += runtime_mem_cycles(_a_08009564 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_08009564 & ~3u);
    _a_08009564 += 4u;
    g_cpu.R[13] = _fb_08009564;
    g_cpu.R[15] = 0x08009566u;
    runtime_tick(_cyc_08009564);
    /* 08009566  08009566 T bx r0 */
    g_cpu.R[15] = 0x08009566u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009566 = 1u;
    _cyc_08009566 = 3u;
    uint32_t _bxt_08009566 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_08009566 & ~1u;
    if (_bxt_08009566 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_08009566);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_08009566);
    g_cpu.R[15] = 0x08009568u;
    runtime_tick(_cyc_08009566);
    /* fall-through to 0x08009568 */
    g_cpu.R[15] = 0x08009568u;
    runtime_dispatch(0x08009568u);
    return;
}

/* 0x0800956C  mode=thumb  end=0x080095C0  branches=27  indirect */


/* 0x0800956C thumb */
void gf_tfunc_0800956C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0800956Cu);
    /* 0800956C  0800956c T stm r13!,{r4,r5,r6,r7,r14} */
    g_cpu.R[15] = 0x0800956Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800956C = 1u;
    _cyc_0800956C = 1u;
    uint32_t _b_0800956C = g_cpu.R[13];
    uint32_t _a_0800956C = _b_0800956C - 20u;
    uint32_t _fb_0800956C = _b_0800956C - 20u;
    _cyc_0800956C += runtime_mem_cycles(_a_0800956C & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0800956Cu, _a_0800956C & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_0800956C & ~3u, g_cpu.R[4]);
    _a_0800956C += 4u;
    _cyc_0800956C += runtime_mem_cycles(_a_0800956C & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0800956Cu, _a_0800956C & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_0800956C & ~3u, g_cpu.R[5]);
    _a_0800956C += 4u;
    _cyc_0800956C += runtime_mem_cycles(_a_0800956C & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0800956Cu, _a_0800956C & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_a_0800956C & ~3u, g_cpu.R[6]);
    _a_0800956C += 4u;
    _cyc_0800956C += runtime_mem_cycles(_a_0800956C & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0800956Cu, _a_0800956C & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_a_0800956C & ~3u, g_cpu.R[7]);
    _a_0800956C += 4u;
    _cyc_0800956C += runtime_mem_cycles(_a_0800956C & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0800956Cu, _a_0800956C & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_0800956C & ~3u, g_cpu.R[14]);
    _a_0800956C += 4u;
    g_cpu.R[13] = _fb_0800956C;
    g_cpu.R[15] = 0x0800956Eu;
    runtime_tick(_cyc_0800956C);
    /* 0800956E  0800956e T sub r13,r13,#0x8 */
    g_cpu.R[15] = 0x0800956Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800956E = 1u;
    _cyc_0800956E = 1u;
    uint32_t _rn_0800956E = g_cpu.R[13];
    uint32_t _r_0800956E;
    _r_0800956E = _rn_0800956E - 0x00000008u;
    g_cpu.R[13] = _r_0800956E;
    g_cpu.R[15] = 0x08009570u;
    runtime_tick(_cyc_0800956E);
    /* 08009570  08009570 T adds r5,r0,#0x0 */
    g_cpu.R[15] = 0x08009570u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009570 = 1u;
    _cyc_08009570 = 1u;
    uint32_t _rn_08009570 = g_cpu.R[0];
    uint32_t _r_08009570;
    _r_08009570 = _rn_08009570 + 0x00000000u;
    arm_set_nzcv_add(_rn_08009570, 0x00000000u, _r_08009570);
    g_cpu.R[5] = _r_08009570;
    g_cpu.R[15] = 0x08009572u;
    runtime_tick(_cyc_08009570);
    /* 08009572  08009572 T ldr r1,[r15,#0xfc] */
    g_cpu.R[15] = 0x08009572u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009572 = 1u;
    _cyc_08009572 = 2u;
    uint32_t _base_08009572 = 0x08009576u & ~3u;
    uint32_t _off_08009572;
    _off_08009572 = 0x000000FCu;
    uint32_t _ea_08009572 = _base_08009572 + _off_08009572;
    uint32_t _post_08009572 = _base_08009572 + _off_08009572;
    _cyc_08009572 += runtime_mem_cycles(_ea_08009572, 4u, 0u);
    uint32_t _v_08009572;
    { uint32_t _w = bus_read_u32(_ea_08009572 & ~3u); uint32_t _rot = (_ea_08009572 & 3u) * 8u; _v_08009572 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08009572;
    g_cpu.R[15] = 0x08009574u;
    runtime_tick(_cyc_08009572);
    /* 08009574  08009574 T ldr r2,[r15,#0xfc] */
    g_cpu.R[15] = 0x08009574u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009574 = 1u;
    _cyc_08009574 = 2u;
    uint32_t _base_08009574 = 0x08009578u & ~3u;
    uint32_t _off_08009574;
    _off_08009574 = 0x000000FCu;
    uint32_t _ea_08009574 = _base_08009574 + _off_08009574;
    uint32_t _post_08009574 = _base_08009574 + _off_08009574;
    _cyc_08009574 += runtime_mem_cycles(_ea_08009574, 4u, 0u);
    uint32_t _v_08009574;
    { uint32_t _w = bus_read_u32(_ea_08009574 & ~3u); uint32_t _rot = (_ea_08009574 & 3u) * 8u; _v_08009574 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08009574;
    g_cpu.R[15] = 0x08009576u;
    runtime_tick(_cyc_08009574);
    /* 08009576  08009576 T adds r0,r1,r2 */
    g_cpu.R[15] = 0x08009576u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009576 = 1u;
    _cyc_08009576 = 1u;
    uint32_t _rm_08009576 = g_cpu.R[2];
    uint32_t _op2_08009576;
    uint32_t _co_08009576;
    _op2_08009576 = _rm_08009576;
    _co_08009576 = cpsr_c();
    uint32_t _rn_08009576 = g_cpu.R[1];
    uint32_t _r_08009576;
    _r_08009576 = _rn_08009576 + _op2_08009576;
    arm_set_nzcv_add(_rn_08009576, _op2_08009576, _r_08009576);
    g_cpu.R[0] = _r_08009576;
    g_cpu.R[15] = 0x08009578u;
    runtime_tick(_cyc_08009576);
    /* 08009578  08009578 T movs r6,#0x0 */
    g_cpu.R[15] = 0x08009578u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009578 = 1u;
    _cyc_08009578 = 1u;
    uint32_t _r_08009578;
    _r_08009578 = 0x00000000u;
    arm_set_nzc_logic(_r_08009578, cpsr_c());
    g_cpu.R[6] = _r_08009578;
    g_cpu.R[15] = 0x0800957Au;
    runtime_tick(_cyc_08009578);
    /* 0800957A  0800957a T str r6,[r0] */
    g_cpu.R[15] = 0x0800957Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800957A = 1u;
    _cyc_0800957A = 1u;
    uint32_t _base_0800957A = g_cpu.R[0];
    uint32_t _off_0800957A;
    _off_0800957A = 0x00000000u;
    uint32_t _ea_0800957A = _base_0800957A + _off_0800957A;
    uint32_t _post_0800957A = _base_0800957A + _off_0800957A;
    _cyc_0800957A += runtime_mem_cycles(_ea_0800957A, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0800957Au, _ea_0800957A & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_ea_0800957A & ~3u, g_cpu.R[6]);
    g_cpu.R[15] = 0x0800957Cu;
    runtime_tick(_cyc_0800957A);
    /* 0800957C  0800957c T ldr r3,[r15,#0xf8] */
    g_cpu.R[15] = 0x0800957Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800957C = 1u;
    _cyc_0800957C = 2u;
    uint32_t _base_0800957C = 0x08009580u & ~3u;
    uint32_t _off_0800957C;
    _off_0800957C = 0x000000F8u;
    uint32_t _ea_0800957C = _base_0800957C + _off_0800957C;
    uint32_t _post_0800957C = _base_0800957C + _off_0800957C;
    _cyc_0800957C += runtime_mem_cycles(_ea_0800957C, 4u, 0u);
    uint32_t _v_0800957C;
    { uint32_t _w = bus_read_u32(_ea_0800957C & ~3u); uint32_t _rot = (_ea_0800957C & 3u) * 8u; _v_0800957C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_0800957C;
    g_cpu.R[15] = 0x0800957Eu;
    runtime_tick(_cyc_0800957C);
    /* 0800957E  0800957e T ldrh r2,[r3] */
    g_cpu.R[15] = 0x0800957Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800957E = 1u;
    _cyc_0800957E = 2u;
    uint32_t _base_0800957E = g_cpu.R[3];
    uint32_t _off_0800957E;
    _off_0800957E = 0x00000000u;
    uint32_t _ea_0800957E = _base_0800957E + _off_0800957E;
    uint32_t _post_0800957E = _base_0800957E + _off_0800957E;
    _cyc_0800957E += runtime_mem_cycles(_ea_0800957E, 2u, 0u);
    uint32_t _v_0800957E;
    { uint32_t _h = bus_read_u16(_ea_0800957E & ~1u); if (_ea_0800957E & 1u) _v_0800957E = ((_h >> 8) | (_h << 24)); else _v_0800957E = _h; }
    g_cpu.R[2] = _v_0800957E;
    g_cpu.R[15] = 0x08009580u;
    runtime_tick(_cyc_0800957E);
    /* 08009580  08009580 T ldr r0,[r15,#0xf8] */
    g_cpu.R[15] = 0x08009580u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009580 = 1u;
    _cyc_08009580 = 2u;
    uint32_t _base_08009580 = 0x08009584u & ~3u;
    uint32_t _off_08009580;
    _off_08009580 = 0x000000F8u;
    uint32_t _ea_08009580 = _base_08009580 + _off_08009580;
    uint32_t _post_08009580 = _base_08009580 + _off_08009580;
    _cyc_08009580 += runtime_mem_cycles(_ea_08009580, 4u, 0u);
    uint32_t _v_08009580;
    { uint32_t _w = bus_read_u32(_ea_08009580 & ~3u); uint32_t _rot = (_ea_08009580 & 3u) * 8u; _v_08009580 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08009580;
    g_cpu.R[15] = 0x08009582u;
    runtime_tick(_cyc_08009580);
    /* 08009582  08009582 T ands r0,r0,r2 */
    g_cpu.R[15] = 0x08009582u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009582 = 1u;
    _cyc_08009582 = 1u;
    uint32_t _rm_08009582 = g_cpu.R[2];
    uint32_t _op2_08009582;
    uint32_t _co_08009582;
    _op2_08009582 = _rm_08009582;
    _co_08009582 = cpsr_c();
    uint32_t _rn_08009582 = g_cpu.R[0];
    uint32_t _r_08009582;
    _r_08009582 = _rn_08009582 & _op2_08009582;
    arm_set_nzc_logic(_r_08009582, _co_08009582);
    g_cpu.R[0] = _r_08009582;
    g_cpu.R[15] = 0x08009584u;
    runtime_tick(_cyc_08009582);
    /* 08009584  08009584 T movs r7,#0x0 */
    g_cpu.R[15] = 0x08009584u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009584 = 1u;
    _cyc_08009584 = 1u;
    uint32_t _r_08009584;
    _r_08009584 = 0x00000000u;
    arm_set_nzc_logic(_r_08009584, cpsr_c());
    g_cpu.R[7] = _r_08009584;
    g_cpu.R[15] = 0x08009586u;
    runtime_tick(_cyc_08009584);
    /* 08009586  08009586 T strh r0,[r3] */
    g_cpu.R[15] = 0x08009586u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009586 = 1u;
    _cyc_08009586 = 1u;
    uint32_t _base_08009586 = g_cpu.R[3];
    uint32_t _off_08009586;
    _off_08009586 = 0x00000000u;
    uint32_t _ea_08009586 = _base_08009586 + _off_08009586;
    uint32_t _post_08009586 = _base_08009586 + _off_08009586;
    _cyc_08009586 += runtime_mem_cycles(_ea_08009586, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009586u, _ea_08009586 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08009586 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08009588u;
    runtime_tick(_cyc_08009586);
    /* 08009588  08009588 T movs r0,#0x93 */
    g_cpu.R[15] = 0x08009588u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009588 = 1u;
    _cyc_08009588 = 1u;
    uint32_t _r_08009588;
    _r_08009588 = 0x00000093u;
    arm_set_nzc_logic(_r_08009588, cpsr_c());
    g_cpu.R[0] = _r_08009588;
    g_cpu.R[15] = 0x0800958Au;
    runtime_tick(_cyc_08009588);
    /* 0800958A  0800958a T movs r0,r0,lsl #5 */
    g_cpu.R[15] = 0x0800958Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800958A = 1u;
    _cyc_0800958A = 1u;
    uint32_t _rm_0800958A = g_cpu.R[0];
    uint32_t _op2_0800958A;
    uint32_t _co_0800958A;
    _op2_0800958A = _rm_0800958A << 5;
    _co_0800958A = (_rm_0800958A >> 27) & 1u;
    uint32_t _r_0800958A;
    _r_0800958A = _op2_0800958A;
    arm_set_nzc_logic(_r_0800958A, _co_0800958A);
    g_cpu.R[0] = _r_0800958A;
    g_cpu.R[15] = 0x0800958Cu;
    runtime_tick(_cyc_0800958A);
    /* 0800958C  0800958c T adds r2,r1,r0 */
    g_cpu.R[15] = 0x0800958Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800958C = 1u;
    _cyc_0800958C = 1u;
    uint32_t _rm_0800958C = g_cpu.R[0];
    uint32_t _op2_0800958C;
    uint32_t _co_0800958C;
    _op2_0800958C = _rm_0800958C;
    _co_0800958C = cpsr_c();
    uint32_t _rn_0800958C = g_cpu.R[1];
    uint32_t _r_0800958C;
    _r_0800958C = _rn_0800958C + _op2_0800958C;
    arm_set_nzcv_add(_rn_0800958C, _op2_0800958C, _r_0800958C);
    g_cpu.R[2] = _r_0800958C;
    g_cpu.R[15] = 0x0800958Eu;
    runtime_tick(_cyc_0800958C);
    /* 0800958E  0800958e T movs r0,#0xd8 */
    g_cpu.R[15] = 0x0800958Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800958E = 1u;
    _cyc_0800958E = 1u;
    uint32_t _r_0800958E;
    _r_0800958E = 0x000000D8u;
    arm_set_nzc_logic(_r_0800958E, cpsr_c());
    g_cpu.R[0] = _r_0800958E;
    g_cpu.R[15] = 0x08009590u;
    runtime_tick(_cyc_0800958E);
    /* 08009590  08009590 T movs r0,r0,lsl #8 */
    g_cpu.R[15] = 0x08009590u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009590 = 1u;
    _cyc_08009590 = 1u;
    uint32_t _rm_08009590 = g_cpu.R[0];
    uint32_t _op2_08009590;
    uint32_t _co_08009590;
    _op2_08009590 = _rm_08009590 << 8;
    _co_08009590 = (_rm_08009590 >> 24) & 1u;
    uint32_t _r_08009590;
    _r_08009590 = _op2_08009590;
    arm_set_nzc_logic(_r_08009590, _co_08009590);
    g_cpu.R[0] = _r_08009590;
    g_cpu.R[15] = 0x08009592u;
    runtime_tick(_cyc_08009590);
    /* 08009592  08009592 T strh r0,[r2] */
    g_cpu.R[15] = 0x08009592u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009592 = 1u;
    _cyc_08009592 = 1u;
    uint32_t _base_08009592 = g_cpu.R[2];
    uint32_t _off_08009592;
    _off_08009592 = 0x00000000u;
    uint32_t _ea_08009592 = _base_08009592 + _off_08009592;
    uint32_t _post_08009592 = _base_08009592 + _off_08009592;
    _cyc_08009592 += runtime_mem_cycles(_ea_08009592, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009592u, _ea_08009592 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08009592 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08009594u;
    runtime_tick(_cyc_08009592);
    /* 08009594  08009594 T movs r2,#0x99 */
    g_cpu.R[15] = 0x08009594u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009594 = 1u;
    _cyc_08009594 = 1u;
    uint32_t _r_08009594;
    _r_08009594 = 0x00000099u;
    arm_set_nzc_logic(_r_08009594, cpsr_c());
    g_cpu.R[2] = _r_08009594;
    g_cpu.R[15] = 0x08009596u;
    runtime_tick(_cyc_08009594);
    /* 08009596  08009596 T movs r2,r2,lsl #5 */
    g_cpu.R[15] = 0x08009596u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009596 = 1u;
    _cyc_08009596 = 1u;
    uint32_t _rm_08009596 = g_cpu.R[2];
    uint32_t _op2_08009596;
    uint32_t _co_08009596;
    _op2_08009596 = _rm_08009596 << 5;
    _co_08009596 = (_rm_08009596 >> 27) & 1u;
    uint32_t _r_08009596;
    _r_08009596 = _op2_08009596;
    arm_set_nzc_logic(_r_08009596, _co_08009596);
    g_cpu.R[2] = _r_08009596;
    g_cpu.R[15] = 0x08009598u;
    runtime_tick(_cyc_08009596);
    /* 08009598  08009598 T adds r0,r1,r2 */
    g_cpu.R[15] = 0x08009598u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009598 = 1u;
    _cyc_08009598 = 1u;
    uint32_t _rm_08009598 = g_cpu.R[2];
    uint32_t _op2_08009598;
    uint32_t _co_08009598;
    _op2_08009598 = _rm_08009598;
    _co_08009598 = cpsr_c();
    uint32_t _rn_08009598 = g_cpu.R[1];
    uint32_t _r_08009598;
    _r_08009598 = _rn_08009598 + _op2_08009598;
    arm_set_nzcv_add(_rn_08009598, _op2_08009598, _r_08009598);
    g_cpu.R[0] = _r_08009598;
    g_cpu.R[15] = 0x0800959Au;
    runtime_tick(_cyc_08009598);
    /* 0800959A  0800959a T strh r6,[r0] */
    g_cpu.R[15] = 0x0800959Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800959A = 1u;
    _cyc_0800959A = 1u;
    uint32_t _base_0800959A = g_cpu.R[0];
    uint32_t _off_0800959A;
    _off_0800959A = 0x00000000u;
    uint32_t _ea_0800959A = _base_0800959A + _off_0800959A;
    uint32_t _post_0800959A = _base_0800959A + _off_0800959A;
    _cyc_0800959A += runtime_mem_cycles(_ea_0800959A, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0800959Au, _ea_0800959A & ~1u, (uint32_t)(g_cpu.R[6] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0800959A & ~1u, (uint16_t)(g_cpu.R[6] & 0xFFFFu));
    g_cpu.R[15] = 0x0800959Cu;
    runtime_tick(_cyc_0800959A);
    /* 0800959C  0800959c T subs r2,r2,#0x40 */
    g_cpu.R[15] = 0x0800959Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800959C = 1u;
    _cyc_0800959C = 1u;
    uint32_t _rn_0800959C = g_cpu.R[2];
    uint32_t _r_0800959C;
    _r_0800959C = _rn_0800959C - 0x00000040u;
    arm_set_nzcv_sub(_rn_0800959C, 0x00000040u, _r_0800959C);
    g_cpu.R[2] = _r_0800959C;
    g_cpu.R[15] = 0x0800959Eu;
    runtime_tick(_cyc_0800959C);
    /* 0800959E  0800959e T adds r0,r1,r2 */
    g_cpu.R[15] = 0x0800959Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800959E = 1u;
    _cyc_0800959E = 1u;
    uint32_t _rm_0800959E = g_cpu.R[2];
    uint32_t _op2_0800959E;
    uint32_t _co_0800959E;
    _op2_0800959E = _rm_0800959E;
    _co_0800959E = cpsr_c();
    uint32_t _rn_0800959E = g_cpu.R[1];
    uint32_t _r_0800959E;
    _r_0800959E = _rn_0800959E + _op2_0800959E;
    arm_set_nzcv_add(_rn_0800959E, _op2_0800959E, _r_0800959E);
    g_cpu.R[0] = _r_0800959E;
    g_cpu.R[15] = 0x080095A0u;
    runtime_tick(_cyc_0800959E);
    /* 080095A0  080095a0 T strh r6,[r0] */
    g_cpu.R[15] = 0x080095A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095A0 = 1u;
    _cyc_080095A0 = 1u;
    uint32_t _base_080095A0 = g_cpu.R[0];
    uint32_t _off_080095A0;
    _off_080095A0 = 0x00000000u;
    uint32_t _ea_080095A0 = _base_080095A0 + _off_080095A0;
    uint32_t _post_080095A0 = _base_080095A0 + _off_080095A0;
    _cyc_080095A0 += runtime_mem_cycles(_ea_080095A0, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080095A0u, _ea_080095A0 & ~1u, (uint32_t)(g_cpu.R[6] & 0xFFFFu), 2u);
    bus_write_u16(_ea_080095A0 & ~1u, (uint16_t)(g_cpu.R[6] & 0xFFFFu));
    g_cpu.R[15] = 0x080095A2u;
    runtime_tick(_cyc_080095A0);
    /* 080095A2  080095a2 T subs r2,r2,#0x40 */
    g_cpu.R[15] = 0x080095A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095A2 = 1u;
    _cyc_080095A2 = 1u;
    uint32_t _rn_080095A2 = g_cpu.R[2];
    uint32_t _r_080095A2;
    _r_080095A2 = _rn_080095A2 - 0x00000040u;
    arm_set_nzcv_sub(_rn_080095A2, 0x00000040u, _r_080095A2);
    g_cpu.R[2] = _r_080095A2;
    g_cpu.R[15] = 0x080095A4u;
    runtime_tick(_cyc_080095A2);
    /* 080095A4  080095a4 T adds r0,r1,r2 */
    g_cpu.R[15] = 0x080095A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095A4 = 1u;
    _cyc_080095A4 = 1u;
    uint32_t _rm_080095A4 = g_cpu.R[2];
    uint32_t _op2_080095A4;
    uint32_t _co_080095A4;
    _op2_080095A4 = _rm_080095A4;
    _co_080095A4 = cpsr_c();
    uint32_t _rn_080095A4 = g_cpu.R[1];
    uint32_t _r_080095A4;
    _r_080095A4 = _rn_080095A4 + _op2_080095A4;
    arm_set_nzcv_add(_rn_080095A4, _op2_080095A4, _r_080095A4);
    g_cpu.R[0] = _r_080095A4;
    g_cpu.R[15] = 0x080095A6u;
    runtime_tick(_cyc_080095A4);
    /* 080095A6  080095a6 T strh r6,[r0] */
    g_cpu.R[15] = 0x080095A6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095A6 = 1u;
    _cyc_080095A6 = 1u;
    uint32_t _base_080095A6 = g_cpu.R[0];
    uint32_t _off_080095A6;
    _off_080095A6 = 0x00000000u;
    uint32_t _ea_080095A6 = _base_080095A6 + _off_080095A6;
    uint32_t _post_080095A6 = _base_080095A6 + _off_080095A6;
    _cyc_080095A6 += runtime_mem_cycles(_ea_080095A6, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080095A6u, _ea_080095A6 & ~1u, (uint32_t)(g_cpu.R[6] & 0xFFFFu), 2u);
    bus_write_u16(_ea_080095A6 & ~1u, (uint16_t)(g_cpu.R[6] & 0xFFFFu));
    g_cpu.R[15] = 0x080095A8u;
    runtime_tick(_cyc_080095A6);
    /* 080095A8  080095a8 T ldr r0,[r15,#0xd4] */
    g_cpu.R[15] = 0x080095A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095A8 = 1u;
    _cyc_080095A8 = 2u;
    uint32_t _base_080095A8 = 0x080095ACu & ~3u;
    uint32_t _off_080095A8;
    _off_080095A8 = 0x000000D4u;
    uint32_t _ea_080095A8 = _base_080095A8 + _off_080095A8;
    uint32_t _post_080095A8 = _base_080095A8 + _off_080095A8;
    _cyc_080095A8 += runtime_mem_cycles(_ea_080095A8, 4u, 0u);
    uint32_t _v_080095A8;
    { uint32_t _w = bus_read_u32(_ea_080095A8 & ~3u); uint32_t _rot = (_ea_080095A8 & 3u) * 8u; _v_080095A8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080095A8;
    g_cpu.R[15] = 0x080095AAu;
    runtime_tick(_cyc_080095A8);
    /* 080095AA  080095aa T adds r2,r1,r0 */
    g_cpu.R[15] = 0x080095AAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095AA = 1u;
    _cyc_080095AA = 1u;
    uint32_t _rm_080095AA = g_cpu.R[0];
    uint32_t _op2_080095AA;
    uint32_t _co_080095AA;
    _op2_080095AA = _rm_080095AA;
    _co_080095AA = cpsr_c();
    uint32_t _rn_080095AA = g_cpu.R[1];
    uint32_t _r_080095AA;
    _r_080095AA = _rn_080095AA + _op2_080095AA;
    arm_set_nzcv_add(_rn_080095AA, _op2_080095AA, _r_080095AA);
    g_cpu.R[2] = _r_080095AA;
    g_cpu.R[15] = 0x080095ACu;
    runtime_tick(_cyc_080095AA);
    /* 080095AC  080095ac T movs r0,#0x88 */
    g_cpu.R[15] = 0x080095ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095AC = 1u;
    _cyc_080095AC = 1u;
    uint32_t _r_080095AC;
    _r_080095AC = 0x00000088u;
    arm_set_nzc_logic(_r_080095AC, cpsr_c());
    g_cpu.R[0] = _r_080095AC;
    g_cpu.R[15] = 0x080095AEu;
    runtime_tick(_cyc_080095AC);
    /* 080095AE  080095ae T strh r0,[r2] */
    g_cpu.R[15] = 0x080095AEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095AE = 1u;
    _cyc_080095AE = 1u;
    uint32_t _base_080095AE = g_cpu.R[2];
    uint32_t _off_080095AE;
    _off_080095AE = 0x00000000u;
    uint32_t _ea_080095AE = _base_080095AE + _off_080095AE;
    uint32_t _post_080095AE = _base_080095AE + _off_080095AE;
    _cyc_080095AE += runtime_mem_cycles(_ea_080095AE, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080095AEu, _ea_080095AE & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_080095AE & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x080095B0u;
    runtime_tick(_cyc_080095AE);
    /* 080095B0  080095b0 T ldr r2,[r15,#0xd0] */
    g_cpu.R[15] = 0x080095B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095B0 = 1u;
    _cyc_080095B0 = 2u;
    uint32_t _base_080095B0 = 0x080095B4u & ~3u;
    uint32_t _off_080095B0;
    _off_080095B0 = 0x000000D0u;
    uint32_t _ea_080095B0 = _base_080095B0 + _off_080095B0;
    uint32_t _post_080095B0 = _base_080095B0 + _off_080095B0;
    _cyc_080095B0 += runtime_mem_cycles(_ea_080095B0, 4u, 0u);
    uint32_t _v_080095B0;
    { uint32_t _w = bus_read_u32(_ea_080095B0 & ~3u); uint32_t _rot = (_ea_080095B0 & 3u) * 8u; _v_080095B0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_080095B0;
    g_cpu.R[15] = 0x080095B2u;
    runtime_tick(_cyc_080095B0);
    /* 080095B2  080095b2 T adds r0,r1,r2 */
    g_cpu.R[15] = 0x080095B2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095B2 = 1u;
    _cyc_080095B2 = 1u;
    uint32_t _rm_080095B2 = g_cpu.R[2];
    uint32_t _op2_080095B2;
    uint32_t _co_080095B2;
    _op2_080095B2 = _rm_080095B2;
    _co_080095B2 = cpsr_c();
    uint32_t _rn_080095B2 = g_cpu.R[1];
    uint32_t _r_080095B2;
    _r_080095B2 = _rn_080095B2 + _op2_080095B2;
    arm_set_nzcv_add(_rn_080095B2, _op2_080095B2, _r_080095B2);
    g_cpu.R[0] = _r_080095B2;
    g_cpu.R[15] = 0x080095B4u;
    runtime_tick(_cyc_080095B2);
    /* 080095B4  080095b4 T adds r2,r2,#0x4 */
    g_cpu.R[15] = 0x080095B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095B4 = 1u;
    _cyc_080095B4 = 1u;
    uint32_t _rn_080095B4 = g_cpu.R[2];
    uint32_t _r_080095B4;
    _r_080095B4 = _rn_080095B4 + 0x00000004u;
    arm_set_nzcv_add(_rn_080095B4, 0x00000004u, _r_080095B4);
    g_cpu.R[2] = _r_080095B4;
    g_cpu.R[15] = 0x080095B6u;
    runtime_tick(_cyc_080095B4);
    /* 080095B6  080095b6 T adds r1,r1,r2 */
    g_cpu.R[15] = 0x080095B6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095B6 = 1u;
    _cyc_080095B6 = 1u;
    uint32_t _rm_080095B6 = g_cpu.R[2];
    uint32_t _op2_080095B6;
    uint32_t _co_080095B6;
    _op2_080095B6 = _rm_080095B6;
    _co_080095B6 = cpsr_c();
    uint32_t _rn_080095B6 = g_cpu.R[1];
    uint32_t _r_080095B6;
    _r_080095B6 = _rn_080095B6 + _op2_080095B6;
    arm_set_nzcv_add(_rn_080095B6, _op2_080095B6, _r_080095B6);
    g_cpu.R[1] = _r_080095B6;
    g_cpu.R[15] = 0x080095B8u;
    runtime_tick(_cyc_080095B6);
    /* 080095B8  080095b8 T str r6,[r1] */
    g_cpu.R[15] = 0x080095B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095B8 = 1u;
    _cyc_080095B8 = 1u;
    uint32_t _base_080095B8 = g_cpu.R[1];
    uint32_t _off_080095B8;
    _off_080095B8 = 0x00000000u;
    uint32_t _ea_080095B8 = _base_080095B8 + _off_080095B8;
    uint32_t _post_080095B8 = _base_080095B8 + _off_080095B8;
    _cyc_080095B8 += runtime_mem_cycles(_ea_080095B8, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080095B8u, _ea_080095B8 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_ea_080095B8 & ~3u, g_cpu.R[6]);
    g_cpu.R[15] = 0x080095BAu;
    runtime_tick(_cyc_080095B8);
    /* 080095BA  080095ba T str r6,[r0] */
    g_cpu.R[15] = 0x080095BAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095BA = 1u;
    _cyc_080095BA = 1u;
    uint32_t _base_080095BA = g_cpu.R[0];
    uint32_t _off_080095BA;
    _off_080095BA = 0x00000000u;
    uint32_t _ea_080095BA = _base_080095BA + _off_080095BA;
    uint32_t _post_080095BA = _base_080095BA + _off_080095BA;
    _cyc_080095BA += runtime_mem_cycles(_ea_080095BA, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080095BAu, _ea_080095BA & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_ea_080095BA & ~3u, g_cpu.R[6]);
    g_cpu.R[15] = 0x080095BCu;
    runtime_tick(_cyc_080095BA);
    /* 080095BC  080095bc T bl.hi 0x080035c0 */
    g_cpu.R[15] = 0x080095BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095BC = 1u;
    _cyc_080095BC = 1u;
    g_cpu.R[14] = 0x080035C0u;
    g_cpu.R[15] = 0x080095BEu;
    runtime_tick(_cyc_080095BC);
    /* 080095BE  080095be T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x080095BEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095BE = 1u;
    _cyc_080095BE = 3u;
    uint32_t _blt_080095BE = (g_cpu.R[14] + 0x00000024u) & ~1u;
    g_cpu.R[14] = 0x080095C1u;
    g_cpu.R[15] = _blt_080095BE;
    runtime_call_push_return(0x080095C0u);
    runtime_tick(_cyc_080095BE);
    _cyc_080095BE = 0u;
    runtime_dispatch(_blt_080095BE);
    if (g_cpu.R[15] != 0x080095C0u) { runtime_call_cancel_return(0x080095C0u); return; }
    g_cpu.R[15] = 0x080095C0u;
    runtime_tick(_cyc_080095BE);
    /* fall-through to 0x080095C0 */
    g_cpu.R[15] = 0x080095C0u;
    runtime_dispatch(0x080095C0u);
    return;
}

/* 0x080095E4  mode=thumb  end=0x080095F8  branches=21  indirect */


/* 0x080095C0 thumb */
void gf_tfunc_080095C0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080095C0u);
    /* 080095C0  080095c0 T add r0,r13,#0x4 */
    g_cpu.R[15] = 0x080095C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095C0 = 1u;
    _cyc_080095C0 = 1u;
    uint32_t _rn_080095C0 = g_cpu.R[13];
    uint32_t _r_080095C0;
    _r_080095C0 = _rn_080095C0 + 0x00000004u;
    g_cpu.R[0] = _r_080095C0;
    g_cpu.R[15] = 0x080095C2u;
    runtime_tick(_cyc_080095C0);
    /* 080095C2  080095c2 T strh r6,[r0] */
    g_cpu.R[15] = 0x080095C2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095C2 = 1u;
    _cyc_080095C2 = 1u;
    uint32_t _base_080095C2 = g_cpu.R[0];
    uint32_t _off_080095C2;
    _off_080095C2 = 0x00000000u;
    uint32_t _ea_080095C2 = _base_080095C2 + _off_080095C2;
    uint32_t _post_080095C2 = _base_080095C2 + _off_080095C2;
    _cyc_080095C2 += runtime_mem_cycles(_ea_080095C2, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080095C2u, _ea_080095C2 & ~1u, (uint32_t)(g_cpu.R[6] & 0xFFFFu), 2u);
    bus_write_u16(_ea_080095C2 & ~1u, (uint16_t)(g_cpu.R[6] & 0xFFFFu));
    g_cpu.R[15] = 0x080095C4u;
    runtime_tick(_cyc_080095C2);
    /* 080095C4  080095c4 T ldr r1,[r15,#0xc0] */
    g_cpu.R[15] = 0x080095C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095C4 = 1u;
    _cyc_080095C4 = 2u;
    uint32_t _base_080095C4 = 0x080095C8u & ~3u;
    uint32_t _off_080095C4;
    _off_080095C4 = 0x000000C0u;
    uint32_t _ea_080095C4 = _base_080095C4 + _off_080095C4;
    uint32_t _post_080095C4 = _base_080095C4 + _off_080095C4;
    _cyc_080095C4 += runtime_mem_cycles(_ea_080095C4, 4u, 0u);
    uint32_t _v_080095C4;
    { uint32_t _w = bus_read_u32(_ea_080095C4 & ~3u); uint32_t _rot = (_ea_080095C4 & 3u) * 8u; _v_080095C4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_080095C4;
    g_cpu.R[15] = 0x080095C6u;
    runtime_tick(_cyc_080095C4);
    /* 080095C6  080095c6 T str r0,[r1] */
    g_cpu.R[15] = 0x080095C6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095C6 = 1u;
    _cyc_080095C6 = 1u;
    uint32_t _base_080095C6 = g_cpu.R[1];
    uint32_t _off_080095C6;
    _off_080095C6 = 0x00000000u;
    uint32_t _ea_080095C6 = _base_080095C6 + _off_080095C6;
    uint32_t _post_080095C6 = _base_080095C6 + _off_080095C6;
    _cyc_080095C6 += runtime_mem_cycles(_ea_080095C6, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080095C6u, _ea_080095C6 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_080095C6 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x080095C8u;
    runtime_tick(_cyc_080095C6);
    /* 080095C8  080095c8 T movs r4,#0xc0 */
    g_cpu.R[15] = 0x080095C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095C8 = 1u;
    _cyc_080095C8 = 1u;
    uint32_t _r_080095C8;
    _r_080095C8 = 0x000000C0u;
    arm_set_nzc_logic(_r_080095C8, cpsr_c());
    g_cpu.R[4] = _r_080095C8;
    g_cpu.R[15] = 0x080095CAu;
    runtime_tick(_cyc_080095C8);
    /* 080095CA  080095ca T movs r4,r4,lsl #19 */
    g_cpu.R[15] = 0x080095CAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095CA = 1u;
    _cyc_080095CA = 1u;
    uint32_t _rm_080095CA = g_cpu.R[4];
    uint32_t _op2_080095CA;
    uint32_t _co_080095CA;
    _op2_080095CA = _rm_080095CA << 19;
    _co_080095CA = (_rm_080095CA >> 13) & 1u;
    uint32_t _r_080095CA;
    _r_080095CA = _op2_080095CA;
    arm_set_nzc_logic(_r_080095CA, _co_080095CA);
    g_cpu.R[4] = _r_080095CA;
    g_cpu.R[15] = 0x080095CCu;
    runtime_tick(_cyc_080095CA);
    /* 080095CC  080095cc T str r4,[r1,#0x4] */
    g_cpu.R[15] = 0x080095CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095CC = 1u;
    _cyc_080095CC = 1u;
    uint32_t _base_080095CC = g_cpu.R[1];
    uint32_t _off_080095CC;
    _off_080095CC = 0x00000004u;
    uint32_t _ea_080095CC = _base_080095CC + _off_080095CC;
    uint32_t _post_080095CC = _base_080095CC + _off_080095CC;
    _cyc_080095CC += runtime_mem_cycles(_ea_080095CC, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080095CCu, _ea_080095CC & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_ea_080095CC & ~3u, g_cpu.R[4]);
    g_cpu.R[15] = 0x080095CEu;
    runtime_tick(_cyc_080095CC);
    /* 080095CE  080095ce T ldr r0,[r15,#0xbc] */
    g_cpu.R[15] = 0x080095CEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095CE = 1u;
    _cyc_080095CE = 2u;
    uint32_t _base_080095CE = 0x080095D2u & ~3u;
    uint32_t _off_080095CE;
    _off_080095CE = 0x000000BCu;
    uint32_t _ea_080095CE = _base_080095CE + _off_080095CE;
    uint32_t _post_080095CE = _base_080095CE + _off_080095CE;
    _cyc_080095CE += runtime_mem_cycles(_ea_080095CE, 4u, 0u);
    uint32_t _v_080095CE;
    { uint32_t _w = bus_read_u32(_ea_080095CE & ~3u); uint32_t _rot = (_ea_080095CE & 3u) * 8u; _v_080095CE = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080095CE;
    g_cpu.R[15] = 0x080095D0u;
    runtime_tick(_cyc_080095CE);
    /* 080095D0  080095d0 T str r0,[r1,#0x8] */
    g_cpu.R[15] = 0x080095D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095D0 = 1u;
    _cyc_080095D0 = 1u;
    uint32_t _base_080095D0 = g_cpu.R[1];
    uint32_t _off_080095D0;
    _off_080095D0 = 0x00000008u;
    uint32_t _ea_080095D0 = _base_080095D0 + _off_080095D0;
    uint32_t _post_080095D0 = _base_080095D0 + _off_080095D0;
    _cyc_080095D0 += runtime_mem_cycles(_ea_080095D0, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080095D0u, _ea_080095D0 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_080095D0 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x080095D2u;
    runtime_tick(_cyc_080095D0);
    /* 080095D2  080095d2 T ldr r0,[r1,#0x8] */
    g_cpu.R[15] = 0x080095D2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095D2 = 1u;
    _cyc_080095D2 = 2u;
    uint32_t _base_080095D2 = g_cpu.R[1];
    uint32_t _off_080095D2;
    _off_080095D2 = 0x00000008u;
    uint32_t _ea_080095D2 = _base_080095D2 + _off_080095D2;
    uint32_t _post_080095D2 = _base_080095D2 + _off_080095D2;
    _cyc_080095D2 += runtime_mem_cycles(_ea_080095D2, 4u, 0u);
    uint32_t _v_080095D2;
    { uint32_t _w = bus_read_u32(_ea_080095D2 & ~3u); uint32_t _rot = (_ea_080095D2 & 3u) * 8u; _v_080095D2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080095D2;
    g_cpu.R[15] = 0x080095D4u;
    runtime_tick(_cyc_080095D2);
    /* 080095D4  080095d4 T ldr r0,[r15,#0xb8] */
    g_cpu.R[15] = 0x080095D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095D4 = 1u;
    _cyc_080095D4 = 2u;
    uint32_t _base_080095D4 = 0x080095D8u & ~3u;
    uint32_t _off_080095D4;
    _off_080095D4 = 0x000000B8u;
    uint32_t _ea_080095D4 = _base_080095D4 + _off_080095D4;
    uint32_t _post_080095D4 = _base_080095D4 + _off_080095D4;
    _cyc_080095D4 += runtime_mem_cycles(_ea_080095D4, 4u, 0u);
    uint32_t _v_080095D4;
    { uint32_t _w = bus_read_u32(_ea_080095D4 & ~3u); uint32_t _rot = (_ea_080095D4 & 3u) * 8u; _v_080095D4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080095D4;
    g_cpu.R[15] = 0x080095D6u;
    runtime_tick(_cyc_080095D4);
    /* 080095D6  080095d6 T ldr r1,[r15,#0xbc] */
    g_cpu.R[15] = 0x080095D6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095D6 = 1u;
    _cyc_080095D6 = 2u;
    uint32_t _base_080095D6 = 0x080095DAu & ~3u;
    uint32_t _off_080095D6;
    _off_080095D6 = 0x000000BCu;
    uint32_t _ea_080095D6 = _base_080095D6 + _off_080095D6;
    uint32_t _post_080095D6 = _base_080095D6 + _off_080095D6;
    _cyc_080095D6 += runtime_mem_cycles(_ea_080095D6, 4u, 0u);
    uint32_t _v_080095D6;
    { uint32_t _w = bus_read_u32(_ea_080095D6 & ~3u); uint32_t _rot = (_ea_080095D6 & 3u) * 8u; _v_080095D6 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_080095D6;
    g_cpu.R[15] = 0x080095D8u;
    runtime_tick(_cyc_080095D6);
    /* 080095D8  080095d8 T bl.hi 0x080055dc */
    g_cpu.R[15] = 0x080095D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095D8 = 1u;
    _cyc_080095D8 = 1u;
    g_cpu.R[14] = 0x080055DCu;
    g_cpu.R[15] = 0x080095DAu;
    runtime_tick(_cyc_080095D8);
    /* 080095DA  080095da T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x080095DAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095DA = 1u;
    _cyc_080095DA = 3u;
    uint32_t _blt_080095DA = (g_cpu.R[14] + 0x00000DF8u) & ~1u;
    g_cpu.R[14] = 0x080095DDu;
    g_cpu.R[15] = _blt_080095DA;
    runtime_call_push_return(0x080095DCu);
    runtime_tick(_cyc_080095DA);
    _cyc_080095DA = 0u;
    runtime_dispatch(_blt_080095DA);
    if (g_cpu.R[15] != 0x080095DCu) { runtime_call_cancel_return(0x080095DCu); return; }
    g_cpu.R[15] = 0x080095DCu;
    runtime_tick(_cyc_080095DA);
    /* fall-through to 0x080095DC */
    g_cpu.R[15] = 0x080095DCu;
    runtime_dispatch(0x080095DCu);
    return;
}

/* 0x080095DC  mode=thumb  end=0x080095E4  branches=23  indirect */


/* 0x080095DC thumb */
void gf_tfunc_080095DC(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080095DCu);
    /* 080095DC  080095dc T ldr r0,[r15,#0xb8] */
    g_cpu.R[15] = 0x080095DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095DC = 1u;
    _cyc_080095DC = 2u;
    uint32_t _base_080095DC = 0x080095E0u & ~3u;
    uint32_t _off_080095DC;
    _off_080095DC = 0x000000B8u;
    uint32_t _ea_080095DC = _base_080095DC + _off_080095DC;
    uint32_t _post_080095DC = _base_080095DC + _off_080095DC;
    _cyc_080095DC += runtime_mem_cycles(_ea_080095DC, 4u, 0u);
    uint32_t _v_080095DC;
    { uint32_t _w = bus_read_u32(_ea_080095DC & ~3u); uint32_t _rot = (_ea_080095DC & 3u) * 8u; _v_080095DC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080095DC;
    g_cpu.R[15] = 0x080095DEu;
    runtime_tick(_cyc_080095DC);
    /* 080095DE  080095de T adds r1,r4,#0x0 */
    g_cpu.R[15] = 0x080095DEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095DE = 1u;
    _cyc_080095DE = 1u;
    uint32_t _rn_080095DE = g_cpu.R[4];
    uint32_t _r_080095DE;
    _r_080095DE = _rn_080095DE + 0x00000000u;
    arm_set_nzcv_add(_rn_080095DE, 0x00000000u, _r_080095DE);
    g_cpu.R[1] = _r_080095DE;
    g_cpu.R[15] = 0x080095E0u;
    runtime_tick(_cyc_080095DE);
    /* 080095E0  080095e0 T bl.hi 0x080055e4 */
    g_cpu.R[15] = 0x080095E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095E0 = 1u;
    _cyc_080095E0 = 1u;
    g_cpu.R[14] = 0x080055E4u;
    g_cpu.R[15] = 0x080095E2u;
    runtime_tick(_cyc_080095E0);
    /* 080095E2  080095e2 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x080095E2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095E2 = 1u;
    _cyc_080095E2 = 3u;
    uint32_t _blt_080095E2 = (g_cpu.R[14] + 0x00000DF0u) & ~1u;
    g_cpu.R[14] = 0x080095E5u;
    g_cpu.R[15] = _blt_080095E2;
    runtime_call_push_return(0x080095E4u);
    runtime_tick(_cyc_080095E2);
    _cyc_080095E2 = 0u;
    runtime_dispatch(_blt_080095E2);
    if (g_cpu.R[15] != 0x080095E4u) { runtime_call_cancel_return(0x080095E4u); return; }
    g_cpu.R[15] = 0x080095E4u;
    runtime_tick(_cyc_080095E2);
    /* fall-through to 0x080095E4 */
    g_cpu.R[15] = 0x080095E4u;
    runtime_dispatch(0x080095E4u);
    return;
}

/* 0x080095F8  mode=thumb  end=0x08009600  branches=19  indirect */


/* 0x080095E4 thumb */
void gf_tfunc_080095E4(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080095E4u);
    /* 080095E4  080095e4 T ldr r1,[r15,#0xb4] */
    g_cpu.R[15] = 0x080095E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095E4 = 1u;
    _cyc_080095E4 = 2u;
    uint32_t _base_080095E4 = 0x080095E8u & ~3u;
    uint32_t _off_080095E4;
    _off_080095E4 = 0x000000B4u;
    uint32_t _ea_080095E4 = _base_080095E4 + _off_080095E4;
    uint32_t _post_080095E4 = _base_080095E4 + _off_080095E4;
    _cyc_080095E4 += runtime_mem_cycles(_ea_080095E4, 4u, 0u);
    uint32_t _v_080095E4;
    { uint32_t _w = bus_read_u32(_ea_080095E4 & ~3u); uint32_t _rot = (_ea_080095E4 & 3u) * 8u; _v_080095E4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_080095E4;
    g_cpu.R[15] = 0x080095E6u;
    runtime_tick(_cyc_080095E4);
    /* 080095E6  080095e6 T movs r2,#0xa0 */
    g_cpu.R[15] = 0x080095E6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095E6 = 1u;
    _cyc_080095E6 = 1u;
    uint32_t _r_080095E6;
    _r_080095E6 = 0x000000A0u;
    arm_set_nzc_logic(_r_080095E6, cpsr_c());
    g_cpu.R[2] = _r_080095E6;
    g_cpu.R[15] = 0x080095E8u;
    runtime_tick(_cyc_080095E6);
    /* 080095E8  080095e8 T movs r2,r2,lsl #19 */
    g_cpu.R[15] = 0x080095E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095E8 = 1u;
    _cyc_080095E8 = 1u;
    uint32_t _rm_080095E8 = g_cpu.R[2];
    uint32_t _op2_080095E8;
    uint32_t _co_080095E8;
    _op2_080095E8 = _rm_080095E8 << 19;
    _co_080095E8 = (_rm_080095E8 >> 13) & 1u;
    uint32_t _r_080095E8;
    _r_080095E8 = _op2_080095E8;
    arm_set_nzc_logic(_r_080095E8, _co_080095E8);
    g_cpu.R[2] = _r_080095E8;
    g_cpu.R[15] = 0x080095EAu;
    runtime_tick(_cyc_080095E8);
    /* 080095EA  080095ea T movs r3,#0x80 */
    g_cpu.R[15] = 0x080095EAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095EA = 1u;
    _cyc_080095EA = 1u;
    uint32_t _r_080095EA;
    _r_080095EA = 0x00000080u;
    arm_set_nzc_logic(_r_080095EA, cpsr_c());
    g_cpu.R[3] = _r_080095EA;
    g_cpu.R[15] = 0x080095ECu;
    runtime_tick(_cyc_080095EA);
    /* 080095EC  080095ec T movs r3,r3,lsl #2 */
    g_cpu.R[15] = 0x080095ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095EC = 1u;
    _cyc_080095EC = 1u;
    uint32_t _rm_080095EC = g_cpu.R[3];
    uint32_t _op2_080095EC;
    uint32_t _co_080095EC;
    _op2_080095EC = _rm_080095EC << 2;
    _co_080095EC = (_rm_080095EC >> 30) & 1u;
    uint32_t _r_080095EC;
    _r_080095EC = _op2_080095EC;
    arm_set_nzc_logic(_r_080095EC, _co_080095EC);
    g_cpu.R[3] = _r_080095EC;
    g_cpu.R[15] = 0x080095EEu;
    runtime_tick(_cyc_080095EC);
    /* 080095EE  080095ee T movs r4,#0x10 */
    g_cpu.R[15] = 0x080095EEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095EE = 1u;
    _cyc_080095EE = 1u;
    uint32_t _r_080095EE;
    _r_080095EE = 0x00000010u;
    arm_set_nzc_logic(_r_080095EE, cpsr_c());
    g_cpu.R[4] = _r_080095EE;
    g_cpu.R[15] = 0x080095F0u;
    runtime_tick(_cyc_080095EE);
    /* 080095F0  080095f0 T str r4,[r13] */
    g_cpu.R[15] = 0x080095F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095F0 = 1u;
    _cyc_080095F0 = 1u;
    uint32_t _base_080095F0 = g_cpu.R[13];
    uint32_t _off_080095F0;
    _off_080095F0 = 0x00000000u;
    uint32_t _ea_080095F0 = _base_080095F0 + _off_080095F0;
    uint32_t _post_080095F0 = _base_080095F0 + _off_080095F0;
    _cyc_080095F0 += runtime_mem_cycles(_ea_080095F0, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080095F0u, _ea_080095F0 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_ea_080095F0 & ~3u, g_cpu.R[4]);
    g_cpu.R[15] = 0x080095F2u;
    runtime_tick(_cyc_080095F0);
    /* 080095F2  080095f2 T movs r0,#0x1 */
    g_cpu.R[15] = 0x080095F2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095F2 = 1u;
    _cyc_080095F2 = 1u;
    uint32_t _r_080095F2;
    _r_080095F2 = 0x00000001u;
    arm_set_nzc_logic(_r_080095F2, cpsr_c());
    g_cpu.R[0] = _r_080095F2;
    g_cpu.R[15] = 0x080095F4u;
    runtime_tick(_cyc_080095F2);
    /* 080095F4  080095f4 T bl.hi 0x080005f8 */
    g_cpu.R[15] = 0x080095F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095F4 = 1u;
    _cyc_080095F4 = 1u;
    g_cpu.R[14] = 0x080005F8u;
    g_cpu.R[15] = 0x080095F6u;
    runtime_tick(_cyc_080095F4);
    /* 080095F6  080095f6 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x080095F6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095F6 = 1u;
    _cyc_080095F6 = 3u;
    uint32_t _blt_080095F6 = (g_cpu.R[14] + 0x000008A0u) & ~1u;
    g_cpu.R[14] = 0x080095F9u;
    g_cpu.R[15] = _blt_080095F6;
    runtime_call_push_return(0x080095F8u);
    runtime_tick(_cyc_080095F6);
    _cyc_080095F6 = 0u;
    runtime_dispatch(_blt_080095F6);
    if (g_cpu.R[15] != 0x080095F8u) { runtime_call_cancel_return(0x080095F8u); return; }
    g_cpu.R[15] = 0x080095F8u;
    runtime_tick(_cyc_080095F6);
    /* fall-through to 0x080095F8 */
    g_cpu.R[15] = 0x080095F8u;
    runtime_dispatch(0x080095F8u);
    return;
}

/* 0x08009600  mode=thumb  end=0x0800960E  branches=17  indirect */


/* 0x080095F8 thumb */
void gf_tfunc_080095F8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080095F8u);
    /* 080095F8  080095f8 T ldr r0,[r15,#0xa4] */
    g_cpu.R[15] = 0x080095F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095F8 = 1u;
    _cyc_080095F8 = 2u;
    uint32_t _base_080095F8 = 0x080095FCu & ~3u;
    uint32_t _off_080095F8;
    _off_080095F8 = 0x000000A4u;
    uint32_t _ea_080095F8 = _base_080095F8 + _off_080095F8;
    uint32_t _post_080095F8 = _base_080095F8 + _off_080095F8;
    _cyc_080095F8 += runtime_mem_cycles(_ea_080095F8, 4u, 0u);
    uint32_t _v_080095F8;
    { uint32_t _w = bus_read_u32(_ea_080095F8 & ~3u); uint32_t _rot = (_ea_080095F8 & 3u) * 8u; _v_080095F8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080095F8;
    g_cpu.R[15] = 0x080095FAu;
    runtime_tick(_cyc_080095F8);
    /* 080095FA  080095fa T ldr r1,[r15,#0xa8] */
    g_cpu.R[15] = 0x080095FAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095FA = 1u;
    _cyc_080095FA = 2u;
    uint32_t _base_080095FA = 0x080095FEu & ~3u;
    uint32_t _off_080095FA;
    _off_080095FA = 0x000000A8u;
    uint32_t _ea_080095FA = _base_080095FA + _off_080095FA;
    uint32_t _post_080095FA = _base_080095FA + _off_080095FA;
    _cyc_080095FA += runtime_mem_cycles(_ea_080095FA, 4u, 0u);
    uint32_t _v_080095FA;
    { uint32_t _w = bus_read_u32(_ea_080095FA & ~3u); uint32_t _rot = (_ea_080095FA & 3u) * 8u; _v_080095FA = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_080095FA;
    g_cpu.R[15] = 0x080095FCu;
    runtime_tick(_cyc_080095FA);
    /* 080095FC  080095fc T bl.hi 0x08005600 */
    g_cpu.R[15] = 0x080095FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095FC = 1u;
    _cyc_080095FC = 1u;
    g_cpu.R[14] = 0x08005600u;
    g_cpu.R[15] = 0x080095FEu;
    runtime_tick(_cyc_080095FC);
    /* 080095FE  080095fe T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x080095FEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080095FE = 1u;
    _cyc_080095FE = 3u;
    uint32_t _blt_080095FE = (g_cpu.R[14] + 0x00000DD4u) & ~1u;
    g_cpu.R[14] = 0x08009601u;
    g_cpu.R[15] = _blt_080095FE;
    runtime_call_push_return(0x08009600u);
    runtime_tick(_cyc_080095FE);
    _cyc_080095FE = 0u;
    runtime_dispatch(_blt_080095FE);
    if (g_cpu.R[15] != 0x08009600u) { runtime_call_cancel_return(0x08009600u); return; }
    g_cpu.R[15] = 0x08009600u;
    runtime_tick(_cyc_080095FE);
    /* fall-through to 0x08009600 */
    g_cpu.R[15] = 0x08009600u;
    runtime_dispatch(0x08009600u);
    return;
}

/* 0x0800960E  mode=thumb  end=0x0800961E  branches=15  indirect */


/* 0x08009600 thumb */
void gf_tfunc_08009600(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009600u);
    /* 08009600  08009600 T ldr r1,[r15,#0xa4] */
    g_cpu.R[15] = 0x08009600u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009600 = 1u;
    _cyc_08009600 = 2u;
    uint32_t _base_08009600 = 0x08009604u & ~3u;
    uint32_t _off_08009600;
    _off_08009600 = 0x000000A4u;
    uint32_t _ea_08009600 = _base_08009600 + _off_08009600;
    uint32_t _post_08009600 = _base_08009600 + _off_08009600;
    _cyc_08009600 += runtime_mem_cycles(_ea_08009600, 4u, 0u);
    uint32_t _v_08009600;
    { uint32_t _w = bus_read_u32(_ea_08009600 & ~3u); uint32_t _rot = (_ea_08009600 & 3u) * 8u; _v_08009600 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08009600;
    g_cpu.R[15] = 0x08009602u;
    runtime_tick(_cyc_08009600);
    /* 08009602  08009602 T ldr r2,[r15,#0xa8] */
    g_cpu.R[15] = 0x08009602u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009602 = 1u;
    _cyc_08009602 = 2u;
    uint32_t _base_08009602 = 0x08009606u & ~3u;
    uint32_t _off_08009602;
    _off_08009602 = 0x000000A8u;
    uint32_t _ea_08009602 = _base_08009602 + _off_08009602;
    uint32_t _post_08009602 = _base_08009602 + _off_08009602;
    _cyc_08009602 += runtime_mem_cycles(_ea_08009602, 4u, 0u);
    uint32_t _v_08009602;
    { uint32_t _w = bus_read_u32(_ea_08009602 & ~3u); uint32_t _rot = (_ea_08009602 & 3u) * 8u; _v_08009602 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08009602;
    g_cpu.R[15] = 0x08009604u;
    runtime_tick(_cyc_08009602);
    /* 08009604  08009604 T str r4,[r13] */
    g_cpu.R[15] = 0x08009604u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009604 = 1u;
    _cyc_08009604 = 1u;
    uint32_t _base_08009604 = g_cpu.R[13];
    uint32_t _off_08009604;
    _off_08009604 = 0x00000000u;
    uint32_t _ea_08009604 = _base_08009604 + _off_08009604;
    uint32_t _post_08009604 = _base_08009604 + _off_08009604;
    _cyc_08009604 += runtime_mem_cycles(_ea_08009604, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009604u, _ea_08009604 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_ea_08009604 & ~3u, g_cpu.R[4]);
    g_cpu.R[15] = 0x08009606u;
    runtime_tick(_cyc_08009604);
    /* 08009606  08009606 T movs r0,#0x1 */
    g_cpu.R[15] = 0x08009606u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009606 = 1u;
    _cyc_08009606 = 1u;
    uint32_t _r_08009606;
    _r_08009606 = 0x00000001u;
    arm_set_nzc_logic(_r_08009606, cpsr_c());
    g_cpu.R[0] = _r_08009606;
    g_cpu.R[15] = 0x08009608u;
    runtime_tick(_cyc_08009606);
    /* 08009608  08009608 T movs r3,#0x40 */
    g_cpu.R[15] = 0x08009608u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009608 = 1u;
    _cyc_08009608 = 1u;
    uint32_t _r_08009608;
    _r_08009608 = 0x00000040u;
    arm_set_nzc_logic(_r_08009608, cpsr_c());
    g_cpu.R[3] = _r_08009608;
    g_cpu.R[15] = 0x0800960Au;
    runtime_tick(_cyc_08009608);
    /* 0800960A  0800960a T bl.hi 0x0800060e */
    g_cpu.R[15] = 0x0800960Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800960A = 1u;
    _cyc_0800960A = 1u;
    g_cpu.R[14] = 0x0800060Eu;
    g_cpu.R[15] = 0x0800960Cu;
    runtime_tick(_cyc_0800960A);
    /* 0800960C  0800960c T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0800960Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800960C = 1u;
    _cyc_0800960C = 3u;
    uint32_t _blt_0800960C = (g_cpu.R[14] + 0x0000088Au) & ~1u;
    g_cpu.R[14] = 0x0800960Fu;
    g_cpu.R[15] = _blt_0800960C;
    runtime_call_push_return(0x0800960Eu);
    runtime_tick(_cyc_0800960C);
    _cyc_0800960C = 0u;
    runtime_dispatch(_blt_0800960C);
    if (g_cpu.R[15] != 0x0800960Eu) { runtime_call_cancel_return(0x0800960Eu); return; }
    g_cpu.R[15] = 0x0800960Eu;
    runtime_tick(_cyc_0800960C);
    /* fall-through to 0x0800960E */
    g_cpu.R[15] = 0x0800960Eu;
    runtime_dispatch(0x0800960Eu);
    return;
}

/* 0x0800961E  mode=thumb  end=0x0800962A  branches=13  indirect */


/* 0x0800960E thumb */
void gf_tfunc_0800960E(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0800960Eu);
    /* 0800960E  0800960e T adds r1,r5,#0x0 */
    g_cpu.R[15] = 0x0800960Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800960E = 1u;
    _cyc_0800960E = 1u;
    uint32_t _rn_0800960E = g_cpu.R[5];
    uint32_t _r_0800960E;
    _r_0800960E = _rn_0800960E + 0x00000000u;
    arm_set_nzcv_add(_rn_0800960E, 0x00000000u, _r_0800960E);
    g_cpu.R[1] = _r_0800960E;
    g_cpu.R[15] = 0x08009610u;
    runtime_tick(_cyc_0800960E);
    /* 08009610  08009610 T adds r1,r1,#0x5c */
    g_cpu.R[15] = 0x08009610u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009610 = 1u;
    _cyc_08009610 = 1u;
    uint32_t _rn_08009610 = g_cpu.R[1];
    uint32_t _r_08009610;
    _r_08009610 = _rn_08009610 + 0x0000005Cu;
    arm_set_nzcv_add(_rn_08009610, 0x0000005Cu, _r_08009610);
    g_cpu.R[1] = _r_08009610;
    g_cpu.R[15] = 0x08009612u;
    runtime_tick(_cyc_08009610);
    /* 08009612  08009612 T movs r0,#0x2 */
    g_cpu.R[15] = 0x08009612u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009612 = 1u;
    _cyc_08009612 = 1u;
    uint32_t _r_08009612;
    _r_08009612 = 0x00000002u;
    arm_set_nzc_logic(_r_08009612, cpsr_c());
    g_cpu.R[0] = _r_08009612;
    g_cpu.R[15] = 0x08009614u;
    runtime_tick(_cyc_08009612);
    /* 08009614  08009614 T strb r0,[r1] */
    g_cpu.R[15] = 0x08009614u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009614 = 1u;
    _cyc_08009614 = 1u;
    uint32_t _base_08009614 = g_cpu.R[1];
    uint32_t _off_08009614;
    _off_08009614 = 0x00000000u;
    uint32_t _ea_08009614 = _base_08009614 + _off_08009614;
    uint32_t _post_08009614 = _base_08009614 + _off_08009614;
    _cyc_08009614 += runtime_mem_cycles(_ea_08009614, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009614u, _ea_08009614, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08009614, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08009616u;
    runtime_tick(_cyc_08009614);
    /* 08009616  08009616 T adds r0,r5,#0x0 */
    g_cpu.R[15] = 0x08009616u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009616 = 1u;
    _cyc_08009616 = 1u;
    uint32_t _rn_08009616 = g_cpu.R[5];
    uint32_t _r_08009616;
    _r_08009616 = _rn_08009616 + 0x00000000u;
    arm_set_nzcv_add(_rn_08009616, 0x00000000u, _r_08009616);
    g_cpu.R[0] = _r_08009616;
    g_cpu.R[15] = 0x08009618u;
    runtime_tick(_cyc_08009616);
    /* 08009618  08009618 T movs r1,#0x16 */
    g_cpu.R[15] = 0x08009618u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009618 = 1u;
    _cyc_08009618 = 1u;
    uint32_t _r_08009618;
    _r_08009618 = 0x00000016u;
    arm_set_nzc_logic(_r_08009618, cpsr_c());
    g_cpu.R[1] = _r_08009618;
    g_cpu.R[15] = 0x0800961Au;
    runtime_tick(_cyc_08009618);
    /* 0800961A  0800961a T bl.hi 0x0800061e */
    g_cpu.R[15] = 0x0800961Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800961A = 1u;
    _cyc_0800961A = 1u;
    g_cpu.R[14] = 0x0800061Eu;
    g_cpu.R[15] = 0x0800961Cu;
    runtime_tick(_cyc_0800961A);
    /* 0800961C  0800961c T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0800961Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800961C = 1u;
    _cyc_0800961C = 3u;
    uint32_t _blt_0800961C = (g_cpu.R[14] + 0x00000E62u) & ~1u;
    g_cpu.R[14] = 0x0800961Fu;
    g_cpu.R[15] = _blt_0800961C;
    runtime_call_push_return(0x0800961Eu);
    runtime_tick(_cyc_0800961C);
    _cyc_0800961C = 0u;
    runtime_dispatch(_blt_0800961C);
    if (g_cpu.R[15] != 0x0800961Eu) { runtime_call_cancel_return(0x0800961Eu); return; }
    g_cpu.R[15] = 0x0800961Eu;
    runtime_tick(_cyc_0800961C);
    /* fall-through to 0x0800961E */
    g_cpu.R[15] = 0x0800961Eu;
    runtime_dispatch(0x0800961Eu);
    return;
}

/* 0x08009636  mode=thumb  end=0x0800963E  branches=9  indirect */


/* 0x0800961E thumb */
void gf_tfunc_0800961E(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0800961Eu);
    /* 0800961E  0800961e T adds r0,r0,#0x3c */
    g_cpu.R[15] = 0x0800961Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800961E = 1u;
    _cyc_0800961E = 1u;
    uint32_t _rn_0800961E = g_cpu.R[0];
    uint32_t _r_0800961E;
    _r_0800961E = _rn_0800961E + 0x0000003Cu;
    arm_set_nzcv_add(_rn_0800961E, 0x0000003Cu, _r_0800961E);
    g_cpu.R[0] = _r_0800961E;
    g_cpu.R[15] = 0x08009620u;
    runtime_tick(_cyc_0800961E);
    /* 08009620  08009620 T strb r7,[r0] */
    g_cpu.R[15] = 0x08009620u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009620 = 1u;
    _cyc_08009620 = 1u;
    uint32_t _base_08009620 = g_cpu.R[0];
    uint32_t _off_08009620;
    _off_08009620 = 0x00000000u;
    uint32_t _ea_08009620 = _base_08009620 + _off_08009620;
    uint32_t _post_08009620 = _base_08009620 + _off_08009620;
    _cyc_08009620 += runtime_mem_cycles(_ea_08009620, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009620u, _ea_08009620, (uint32_t)(g_cpu.R[7] & 0xFFu), 1u);
    bus_write_u8(_ea_08009620, (uint8_t)(g_cpu.R[7] & 0xFFu));
    g_cpu.R[15] = 0x08009622u;
    runtime_tick(_cyc_08009620);
    /* 08009622  08009622 T adds r0,r5,#0x0 */
    g_cpu.R[15] = 0x08009622u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009622 = 1u;
    _cyc_08009622 = 1u;
    uint32_t _rn_08009622 = g_cpu.R[5];
    uint32_t _r_08009622;
    _r_08009622 = _rn_08009622 + 0x00000000u;
    arm_set_nzcv_add(_rn_08009622, 0x00000000u, _r_08009622);
    g_cpu.R[0] = _r_08009622;
    g_cpu.R[15] = 0x08009624u;
    runtime_tick(_cyc_08009622);
    /* 08009624  08009624 T movs r1,#0x16 */
    g_cpu.R[15] = 0x08009624u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009624 = 1u;
    _cyc_08009624 = 1u;
    uint32_t _r_08009624;
    _r_08009624 = 0x00000016u;
    arm_set_nzc_logic(_r_08009624, cpsr_c());
    g_cpu.R[1] = _r_08009624;
    g_cpu.R[15] = 0x08009626u;
    runtime_tick(_cyc_08009624);
    /* 08009626  08009626 T bl.hi 0x0800062a */
    g_cpu.R[15] = 0x08009626u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009626 = 1u;
    _cyc_08009626 = 1u;
    g_cpu.R[14] = 0x0800062Au;
    g_cpu.R[15] = 0x08009628u;
    runtime_tick(_cyc_08009626);
    /* 08009628  08009628 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08009628u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009628 = 1u;
    _cyc_08009628 = 3u;
    uint32_t _blt_08009628 = (g_cpu.R[14] + 0x00000E56u) & ~1u;
    g_cpu.R[14] = 0x0800962Bu;
    g_cpu.R[15] = _blt_08009628;
    runtime_call_push_return(0x0800962Au);
    runtime_tick(_cyc_08009628);
    _cyc_08009628 = 0u;
    runtime_dispatch(_blt_08009628);
    if (g_cpu.R[15] != 0x0800962Au) { runtime_call_cancel_return(0x0800962Au); return; }
    g_cpu.R[15] = 0x0800962Au;
    runtime_tick(_cyc_08009628);
    /* fall-through to 0x0800962A */
    g_cpu.R[15] = 0x0800962Au;
    runtime_dispatch(0x0800962Au);
    return;
}

/* 0x0800962A  mode=thumb  end=0x08009636  branches=11  indirect */


/* 0x0800962A thumb */
void gf_tfunc_0800962A(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0800962Au);
    /* 0800962A  0800962a T adds r1,r0,#0x0 */
    g_cpu.R[15] = 0x0800962Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800962A = 1u;
    _cyc_0800962A = 1u;
    uint32_t _rn_0800962A = g_cpu.R[0];
    uint32_t _r_0800962A;
    _r_0800962A = _rn_0800962A + 0x00000000u;
    arm_set_nzcv_add(_rn_0800962A, 0x00000000u, _r_0800962A);
    g_cpu.R[1] = _r_0800962A;
    g_cpu.R[15] = 0x0800962Cu;
    runtime_tick(_cyc_0800962A);
    /* 0800962C  0800962c T adds r1,r1,#0x3c */
    g_cpu.R[15] = 0x0800962Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800962C = 1u;
    _cyc_0800962C = 1u;
    uint32_t _rn_0800962C = g_cpu.R[1];
    uint32_t _r_0800962C;
    _r_0800962C = _rn_0800962C + 0x0000003Cu;
    arm_set_nzcv_add(_rn_0800962C, 0x0000003Cu, _r_0800962C);
    g_cpu.R[1] = _r_0800962C;
    g_cpu.R[15] = 0x0800962Eu;
    runtime_tick(_cyc_0800962C);
    /* 0800962E  0800962e T movs r0,#0x1 */
    g_cpu.R[15] = 0x0800962Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800962E = 1u;
    _cyc_0800962E = 1u;
    uint32_t _r_0800962E;
    _r_0800962E = 0x00000001u;
    arm_set_nzc_logic(_r_0800962E, cpsr_c());
    g_cpu.R[0] = _r_0800962E;
    g_cpu.R[15] = 0x08009630u;
    runtime_tick(_cyc_0800962E);
    /* 08009630  08009630 T strb r0,[r1] */
    g_cpu.R[15] = 0x08009630u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009630 = 1u;
    _cyc_08009630 = 1u;
    uint32_t _base_08009630 = g_cpu.R[1];
    uint32_t _off_08009630;
    _off_08009630 = 0x00000000u;
    uint32_t _ea_08009630 = _base_08009630 + _off_08009630;
    uint32_t _post_08009630 = _base_08009630 + _off_08009630;
    _cyc_08009630 += runtime_mem_cycles(_ea_08009630, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009630u, _ea_08009630, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08009630, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08009632u;
    runtime_tick(_cyc_08009630);
    /* 08009632  08009632 T bl.hi 0x08005636 */
    g_cpu.R[15] = 0x08009632u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009632 = 1u;
    _cyc_08009632 = 1u;
    g_cpu.R[14] = 0x08005636u;
    g_cpu.R[15] = 0x08009634u;
    runtime_tick(_cyc_08009632);
    /* 08009634  08009634 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08009634u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009634 = 1u;
    _cyc_08009634 = 3u;
    uint32_t _blt_08009634 = (g_cpu.R[14] + 0x000008E6u) & ~1u;
    g_cpu.R[14] = 0x08009637u;
    g_cpu.R[15] = _blt_08009634;
    runtime_call_push_return(0x08009636u);
    runtime_tick(_cyc_08009634);
    _cyc_08009634 = 0u;
    runtime_dispatch(_blt_08009634);
    if (g_cpu.R[15] != 0x08009636u) { runtime_call_cancel_return(0x08009636u); return; }
    g_cpu.R[15] = 0x08009636u;
    runtime_tick(_cyc_08009634);
    /* fall-through to 0x08009636 */
    g_cpu.R[15] = 0x08009636u;
    runtime_dispatch(0x08009636u);
    return;
}

/* 0x0800964C  mode=thumb  end=0x08009668  branches=2  indirect */


/* 0x08009636 thumb */
void gf_tfunc_08009636(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009636u);
    /* 08009636  08009636 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x08009636u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009636 = 1u;
    _cyc_08009636 = 1u;
    uint32_t _rn_08009636 = g_cpu.R[0];
    uint32_t _r_08009636;
    _r_08009636 = _rn_08009636 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08009636, 0x00000000u, _r_08009636);
    g_cpu.R[15] = 0x08009638u;
    runtime_tick(_cyc_08009636);
    /* 08009638  08009638 T bne 0x0800964c */
    g_cpu.R[15] = 0x08009638u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009638 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08009638 = 3u;
        g_cpu.R[15] = 0x0800964Cu;
        runtime_tick(_cyc_08009638);
        GBARECOMP_TAIL_CALL(gf_tfunc_0800964C);
    }
    g_cpu.R[15] = 0x0800963Au;
    runtime_tick(_cyc_08009638);
    /* 0800963A  0800963a T bl.hi 0x080bf63e */
    g_cpu.R[15] = 0x0800963Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800963A = 1u;
    _cyc_0800963A = 1u;
    g_cpu.R[14] = 0x080BF63Eu;
    g_cpu.R[15] = 0x0800963Cu;
    runtime_tick(_cyc_0800963A);
    /* 0800963C  0800963c T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0800963Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800963C = 1u;
    _cyc_0800963C = 3u;
    uint32_t _blt_0800963C = (g_cpu.R[14] + 0x00000F36u) & ~1u;
    g_cpu.R[14] = 0x0800963Fu;
    g_cpu.R[15] = _blt_0800963C;
    runtime_call_push_return(0x0800963Eu);
    runtime_tick(_cyc_0800963C);
    _cyc_0800963C = 0u;
    runtime_dispatch(_blt_0800963C);
    if (g_cpu.R[15] != 0x0800963Eu) { runtime_call_cancel_return(0x0800963Eu); return; }
    g_cpu.R[15] = 0x0800963Eu;
    runtime_tick(_cyc_0800963C);
    /* fall-through to 0x0800963E */
    g_cpu.R[15] = 0x0800963Eu;
    runtime_dispatch(0x0800963Eu);
    return;
}

/* 0x0800963E  mode=thumb  end=0x08009646  branches=6  indirect */


/* 0x0800963E thumb */
void gf_tfunc_0800963E(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0800963Eu);
    /* 0800963E  0800963e T movs r0,#0xc0 */
    g_cpu.R[15] = 0x0800963Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800963E = 1u;
    _cyc_0800963E = 1u;
    uint32_t _r_0800963E;
    _r_0800963E = 0x000000C0u;
    arm_set_nzc_logic(_r_0800963E, cpsr_c());
    g_cpu.R[0] = _r_0800963E;
    g_cpu.R[15] = 0x08009640u;
    runtime_tick(_cyc_0800963E);
    /* 08009640  08009640 T movs r0,r0,lsl #12 */
    g_cpu.R[15] = 0x08009640u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009640 = 1u;
    _cyc_08009640 = 1u;
    uint32_t _rm_08009640 = g_cpu.R[0];
    uint32_t _op2_08009640;
    uint32_t _co_08009640;
    _op2_08009640 = _rm_08009640 << 12;
    _co_08009640 = (_rm_08009640 >> 20) & 1u;
    uint32_t _r_08009640;
    _r_08009640 = _op2_08009640;
    arm_set_nzc_logic(_r_08009640, _co_08009640);
    g_cpu.R[0] = _r_08009640;
    g_cpu.R[15] = 0x08009642u;
    runtime_tick(_cyc_08009640);
    /* 08009642  08009642 T bl.hi 0x080c0646 */
    g_cpu.R[15] = 0x08009642u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009642 = 1u;
    _cyc_08009642 = 1u;
    g_cpu.R[14] = 0x080C0646u;
    g_cpu.R[15] = 0x08009644u;
    runtime_tick(_cyc_08009642);
    /* 08009644  08009644 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08009644u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009644 = 1u;
    _cyc_08009644 = 3u;
    uint32_t _blt_08009644 = (g_cpu.R[14] + 0x0000028Au) & ~1u;
    g_cpu.R[14] = 0x08009647u;
    g_cpu.R[15] = _blt_08009644;
    runtime_call_push_return(0x08009646u);
    runtime_tick(_cyc_08009644);
    _cyc_08009644 = 0u;
    runtime_dispatch(_blt_08009644);
    if (g_cpu.R[15] != 0x08009646u) { runtime_call_cancel_return(0x08009646u); return; }
    g_cpu.R[15] = 0x08009646u;
    runtime_tick(_cyc_08009644);
    /* fall-through to 0x08009646 */
    g_cpu.R[15] = 0x08009646u;
    runtime_dispatch(0x08009646u);
    return;
}

/* 0x08009646  mode=thumb  end=0x0800964C  branches=4  indirect */


/* 0x08009646 thumb */
void gf_tfunc_08009646(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009646u);
    /* 08009646  08009646 T movs r0,#0x1 */
    g_cpu.R[15] = 0x08009646u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009646 = 1u;
    _cyc_08009646 = 1u;
    uint32_t _r_08009646;
    _r_08009646 = 0x00000001u;
    arm_set_nzc_logic(_r_08009646, cpsr_c());
    g_cpu.R[0] = _r_08009646;
    g_cpu.R[15] = 0x08009648u;
    runtime_tick(_cyc_08009646);
    /* 08009648  08009648 T bl.hi 0x0800564c */
    g_cpu.R[15] = 0x08009648u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009648 = 1u;
    _cyc_08009648 = 1u;
    g_cpu.R[14] = 0x0800564Cu;
    g_cpu.R[15] = 0x0800964Au;
    runtime_tick(_cyc_08009648);
    /* 0800964A  0800964a T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0800964Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800964A = 1u;
    _cyc_0800964A = 3u;
    uint32_t _blt_0800964A = (g_cpu.R[14] + 0x00000834u) & ~1u;
    g_cpu.R[14] = 0x0800964Du;
    g_cpu.R[15] = _blt_0800964A;
    runtime_call_push_return(0x0800964Cu);
    runtime_tick(_cyc_0800964A);
    _cyc_0800964A = 0u;
    runtime_dispatch(_blt_0800964A);
    if (g_cpu.R[15] != 0x0800964Cu) { runtime_call_cancel_return(0x0800964Cu); return; }
    g_cpu.R[15] = 0x0800964Cu;
    runtime_tick(_cyc_0800964A);
    /* fall-through to 0x0800964C */
    g_cpu.R[15] = 0x0800964Cu;
    runtime_dispatch(0x0800964Cu);
    return;
}

/* 0x08009786  mode=thumb  end=0x080097A8  branches=3 */


/* 0x0800964C thumb */
void gf_tfunc_0800964C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0800964Cu);
    /* 0800964C  0800964c T str r6,[r5,#0x4] */
    g_cpu.R[15] = 0x0800964Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800964C = 1u;
    _cyc_0800964C = 1u;
    uint32_t _base_0800964C = g_cpu.R[5];
    uint32_t _off_0800964C;
    _off_0800964C = 0x00000004u;
    uint32_t _ea_0800964C = _base_0800964C + _off_0800964C;
    uint32_t _post_0800964C = _base_0800964C + _off_0800964C;
    _cyc_0800964C += runtime_mem_cycles(_ea_0800964C, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0800964Cu, _ea_0800964C & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_ea_0800964C & ~3u, g_cpu.R[6]);
    g_cpu.R[15] = 0x0800964Eu;
    runtime_tick(_cyc_0800964C);
    /* 0800964E  0800964e T movs r1,#0x22 */
    g_cpu.R[15] = 0x0800964Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800964E = 1u;
    _cyc_0800964E = 1u;
    uint32_t _r_0800964E;
    _r_0800964E = 0x00000022u;
    arm_set_nzc_logic(_r_0800964E, cpsr_c());
    g_cpu.R[1] = _r_0800964E;
    g_cpu.R[15] = 0x08009650u;
    runtime_tick(_cyc_0800964E);
    /* 08009650  08009650 T ldrsh r0,[r5,+r1] */
    g_cpu.R[15] = 0x08009650u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009650 = 1u;
    _cyc_08009650 = 2u;
    uint32_t _base_08009650 = g_cpu.R[5];
    uint32_t _off_08009650;
    uint32_t _morm_08009650 = g_cpu.R[1];
    _off_08009650 = _morm_08009650;
    uint32_t _ea_08009650 = _base_08009650 + _off_08009650;
    uint32_t _post_08009650 = _base_08009650 + _off_08009650;
    _cyc_08009650 += runtime_mem_cycles(_ea_08009650, 2u, 0u);
    uint32_t _v_08009650;
    if (_ea_08009650 & 1u) _v_08009650 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_08009650);
    else _v_08009650 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_08009650);
    g_cpu.R[0] = _v_08009650;
    g_cpu.R[15] = 0x08009652u;
    runtime_tick(_cyc_08009650);
    /* 08009652  08009652 T movs r0,r0,lsl #1 */
    g_cpu.R[15] = 0x08009652u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009652 = 1u;
    _cyc_08009652 = 1u;
    uint32_t _rm_08009652 = g_cpu.R[0];
    uint32_t _op2_08009652;
    uint32_t _co_08009652;
    _op2_08009652 = _rm_08009652 << 1;
    _co_08009652 = (_rm_08009652 >> 31) & 1u;
    uint32_t _r_08009652;
    _r_08009652 = _op2_08009652;
    arm_set_nzc_logic(_r_08009652, _co_08009652);
    g_cpu.R[0] = _r_08009652;
    g_cpu.R[15] = 0x08009654u;
    runtime_tick(_cyc_08009652);
    /* 08009654  08009654 T adds r0,r0,r5 */
    g_cpu.R[15] = 0x08009654u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009654 = 1u;
    _cyc_08009654 = 1u;
    uint32_t _rm_08009654 = g_cpu.R[5];
    uint32_t _op2_08009654;
    uint32_t _co_08009654;
    _op2_08009654 = _rm_08009654;
    _co_08009654 = cpsr_c();
    uint32_t _rn_08009654 = g_cpu.R[0];
    uint32_t _r_08009654;
    _r_08009654 = _rn_08009654 + _op2_08009654;
    arm_set_nzcv_add(_rn_08009654, _op2_08009654, _r_08009654);
    g_cpu.R[0] = _r_08009654;
    g_cpu.R[15] = 0x08009656u;
    runtime_tick(_cyc_08009654);
    /* 08009656  08009656 T strb r7,[r0,#0x19] */
    g_cpu.R[15] = 0x08009656u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009656 = 1u;
    _cyc_08009656 = 1u;
    uint32_t _base_08009656 = g_cpu.R[0];
    uint32_t _off_08009656;
    _off_08009656 = 0x00000019u;
    uint32_t _ea_08009656 = _base_08009656 + _off_08009656;
    uint32_t _post_08009656 = _base_08009656 + _off_08009656;
    _cyc_08009656 += runtime_mem_cycles(_ea_08009656, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009656u, _ea_08009656, (uint32_t)(g_cpu.R[7] & 0xFFu), 1u);
    bus_write_u8(_ea_08009656, (uint8_t)(g_cpu.R[7] & 0xFFu));
    g_cpu.R[15] = 0x08009658u;
    runtime_tick(_cyc_08009656);
    /* 08009658  08009658 T ldr r2,[r15,#0x54] */
    g_cpu.R[15] = 0x08009658u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009658 = 1u;
    _cyc_08009658 = 2u;
    uint32_t _base_08009658 = 0x0800965Cu & ~3u;
    uint32_t _off_08009658;
    _off_08009658 = 0x00000054u;
    uint32_t _ea_08009658 = _base_08009658 + _off_08009658;
    uint32_t _post_08009658 = _base_08009658 + _off_08009658;
    _cyc_08009658 += runtime_mem_cycles(_ea_08009658, 4u, 0u);
    uint32_t _v_08009658;
    { uint32_t _w = bus_read_u32(_ea_08009658 & ~3u); uint32_t _rot = (_ea_08009658 & 3u) * 8u; _v_08009658 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08009658;
    g_cpu.R[15] = 0x0800965Au;
    runtime_tick(_cyc_08009658);
    /* 0800965A  0800965a T adds r0,r5,#0x0 */
    g_cpu.R[15] = 0x0800965Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800965A = 1u;
    _cyc_0800965A = 1u;
    uint32_t _rn_0800965A = g_cpu.R[5];
    uint32_t _r_0800965A;
    _r_0800965A = _rn_0800965A + 0x00000000u;
    arm_set_nzcv_add(_rn_0800965A, 0x00000000u, _r_0800965A);
    g_cpu.R[0] = _r_0800965A;
    g_cpu.R[15] = 0x0800965Cu;
    runtime_tick(_cyc_0800965A);
    /* 0800965C  0800965c T adds r0,r0,#0x18 */
    g_cpu.R[15] = 0x0800965Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800965C = 1u;
    _cyc_0800965C = 1u;
    uint32_t _rn_0800965C = g_cpu.R[0];
    uint32_t _r_0800965C;
    _r_0800965C = _rn_0800965C + 0x00000018u;
    arm_set_nzcv_add(_rn_0800965C, 0x00000018u, _r_0800965C);
    g_cpu.R[0] = _r_0800965C;
    g_cpu.R[15] = 0x0800965Eu;
    runtime_tick(_cyc_0800965C);
    /* 0800965E  0800965e T adds r1,r5,#0x0 */
    g_cpu.R[15] = 0x0800965Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800965E = 1u;
    _cyc_0800965E = 1u;
    uint32_t _rn_0800965E = g_cpu.R[5];
    uint32_t _r_0800965E;
    _r_0800965E = _rn_0800965E + 0x00000000u;
    arm_set_nzcv_add(_rn_0800965E, 0x00000000u, _r_0800965E);
    g_cpu.R[1] = _r_0800965E;
    g_cpu.R[15] = 0x08009660u;
    runtime_tick(_cyc_0800965E);
    /* 08009660  08009660 T adds r1,r1,#0x22 */
    g_cpu.R[15] = 0x08009660u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009660 = 1u;
    _cyc_08009660 = 1u;
    uint32_t _rn_08009660 = g_cpu.R[1];
    uint32_t _r_08009660;
    _r_08009660 = _rn_08009660 + 0x00000022u;
    arm_set_nzcv_add(_rn_08009660, 0x00000022u, _r_08009660);
    g_cpu.R[1] = _r_08009660;
    g_cpu.R[15] = 0x08009662u;
    runtime_tick(_cyc_08009660);
    /* 08009662  08009662 T ldr r2,[r2] */
    g_cpu.R[15] = 0x08009662u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009662 = 1u;
    _cyc_08009662 = 2u;
    uint32_t _base_08009662 = g_cpu.R[2];
    uint32_t _off_08009662;
    _off_08009662 = 0x00000000u;
    uint32_t _ea_08009662 = _base_08009662 + _off_08009662;
    uint32_t _post_08009662 = _base_08009662 + _off_08009662;
    _cyc_08009662 += runtime_mem_cycles(_ea_08009662, 4u, 0u);
    uint32_t _v_08009662;
    { uint32_t _w = bus_read_u32(_ea_08009662 & ~3u); uint32_t _rot = (_ea_08009662 & 3u) * 8u; _v_08009662 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08009662;
    g_cpu.R[15] = 0x08009664u;
    runtime_tick(_cyc_08009662);
    /* 08009664  08009664 T bl.hi 0x080c2668 */
    g_cpu.R[15] = 0x08009664u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009664 = 1u;
    _cyc_08009664 = 1u;
    g_cpu.R[14] = 0x080C2668u;
    g_cpu.R[15] = 0x08009666u;
    runtime_tick(_cyc_08009664);
    /* 08009666  08009666 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08009666u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009666 = 1u;
    _cyc_08009666 = 3u;
    uint32_t _blt_08009666 = (g_cpu.R[14] + 0x00000B7Cu) & ~1u;
    g_cpu.R[14] = 0x08009669u;
    g_cpu.R[15] = _blt_08009666;
    runtime_call_push_return(0x08009668u);
    runtime_tick(_cyc_08009666);
    _cyc_08009666 = 0u;
    runtime_dispatch(_blt_08009666);
    if (g_cpu.R[15] != 0x08009668u) { runtime_call_cancel_return(0x08009668u); return; }
    g_cpu.R[15] = 0x08009668u;
    runtime_tick(_cyc_08009666);
    /* fall-through to 0x08009668 */
    g_cpu.R[15] = 0x08009668u;
    runtime_dispatch(0x08009668u);
    return;
}

/* 0x08009668  mode=thumb  end=0x08009670  branches=0  indirect */


/* 0x08009668 thumb */
void gf_tfunc_08009668(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009668u);
    /* 08009668  08009668 T add r13,r13,#0x8 */
    g_cpu.R[15] = 0x08009668u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009668 = 1u;
    _cyc_08009668 = 1u;
    uint32_t _rn_08009668 = g_cpu.R[13];
    uint32_t _r_08009668;
    _r_08009668 = _rn_08009668 + 0x00000008u;
    g_cpu.R[13] = _r_08009668;
    g_cpu.R[15] = 0x0800966Au;
    runtime_tick(_cyc_08009668);
    /* 0800966A  0800966a T ldm r13!,{r4,r5,r6,r7} */
    g_cpu.R[15] = 0x0800966Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800966A = 1u;
    _cyc_0800966A = 2u;
    uint32_t _b_0800966A = g_cpu.R[13];
    uint32_t _a_0800966A = _b_0800966A;
    uint32_t _fb_0800966A = _b_0800966A + 16u;
    _cyc_0800966A += runtime_mem_cycles(_a_0800966A & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_0800966A & ~3u);
    _a_0800966A += 4u;
    _cyc_0800966A += runtime_mem_cycles(_a_0800966A & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_0800966A & ~3u);
    _a_0800966A += 4u;
    _cyc_0800966A += runtime_mem_cycles(_a_0800966A & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_0800966A & ~3u);
    _a_0800966A += 4u;
    _cyc_0800966A += runtime_mem_cycles(_a_0800966A & ~3u, 4u, 1u);
    g_cpu.R[7] = bus_read_u32(_a_0800966A & ~3u);
    _a_0800966A += 4u;
    g_cpu.R[13] = _fb_0800966A;
    g_cpu.R[15] = 0x0800966Cu;
    runtime_tick(_cyc_0800966A);
    /* 0800966C  0800966c T ldm r13!,{r0} */
    g_cpu.R[15] = 0x0800966Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800966C = 1u;
    _cyc_0800966C = 2u;
    uint32_t _b_0800966C = g_cpu.R[13];
    uint32_t _a_0800966C = _b_0800966C;
    uint32_t _fb_0800966C = _b_0800966C + 4u;
    _cyc_0800966C += runtime_mem_cycles(_a_0800966C & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_0800966C & ~3u);
    _a_0800966C += 4u;
    g_cpu.R[13] = _fb_0800966C;
    g_cpu.R[15] = 0x0800966Eu;
    runtime_tick(_cyc_0800966C);
    /* 0800966E  0800966e T bx r0 */
    g_cpu.R[15] = 0x0800966Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800966E = 1u;
    _cyc_0800966E = 3u;
    uint32_t _bxt_0800966E = g_cpu.R[0];
    g_cpu.R[15] = _bxt_0800966E & ~1u;
    if (_bxt_0800966E & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_0800966E);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_0800966E);
    g_cpu.R[15] = 0x08009670u;
    runtime_tick(_cyc_0800966E);
    /* fall-through to 0x08009670 */
    g_cpu.R[15] = 0x08009670u;
    runtime_dispatch(0x08009670u);
    return;
}

/* 0x08009746  mode=thumb  end=0x0800974C  branches=8 */


/* 0x08009746 thumb */
void gf_tfunc_08009746(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009746u);
    /* 08009746  08009746 T movs r1,#0x2e */
    g_cpu.R[15] = 0x08009746u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009746 = 1u;
    _cyc_08009746 = 1u;
    uint32_t _r_08009746;
    _r_08009746 = 0x0000002Eu;
    arm_set_nzc_logic(_r_08009746, cpsr_c());
    g_cpu.R[1] = _r_08009746;
    g_cpu.R[15] = 0x08009748u;
    runtime_tick(_cyc_08009746);
    /* 08009748  08009748 T bl.hi 0x080c274c */
    g_cpu.R[15] = 0x08009748u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009748 = 1u;
    _cyc_08009748 = 1u;
    g_cpu.R[14] = 0x080C274Cu;
    g_cpu.R[15] = 0x0800974Au;
    runtime_tick(_cyc_08009748);
    /* 0800974A  0800974a T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0800974Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800974A = 1u;
    _cyc_0800974A = 3u;
    uint32_t _blt_0800974A = (g_cpu.R[14] + 0x000007D8u) & ~1u;
    g_cpu.R[14] = 0x0800974Du;
    g_cpu.R[15] = _blt_0800974A;
    runtime_call_push_return(0x0800974Cu);
    runtime_tick(_cyc_0800974A);
    _cyc_0800974A = 0u;
    runtime_dispatch(_blt_0800974A);
    if (g_cpu.R[15] != 0x0800974Cu) { runtime_call_cancel_return(0x0800974Cu); return; }
    g_cpu.R[15] = 0x0800974Cu;
    runtime_tick(_cyc_0800974A);
    /* fall-through to 0x0800974C */
    g_cpu.R[15] = 0x0800974Cu;
    runtime_dispatch(0x0800974Cu);
    return;
}

/* 0x0800974C  mode=thumb  end=0x08009786  branches=6 */


/* 0x0800974C thumb */
void gf_tfunc_0800974C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0800974Cu);
    /* 0800974C  0800974c T ldr r4,[r15,#0x6c] */
    g_cpu.R[15] = 0x0800974Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800974C = 1u;
    _cyc_0800974C = 2u;
    uint32_t _base_0800974C = 0x08009750u & ~3u;
    uint32_t _off_0800974C;
    _off_0800974C = 0x0000006Cu;
    uint32_t _ea_0800974C = _base_0800974C + _off_0800974C;
    uint32_t _post_0800974C = _base_0800974C + _off_0800974C;
    _cyc_0800974C += runtime_mem_cycles(_ea_0800974C, 4u, 0u);
    uint32_t _v_0800974C;
    { uint32_t _w = bus_read_u32(_ea_0800974C & ~3u); uint32_t _rot = (_ea_0800974C & 3u) * 8u; _v_0800974C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[4] = _v_0800974C;
    g_cpu.R[15] = 0x0800974Eu;
    runtime_tick(_cyc_0800974C);
    /* 0800974E  0800974e T movs r7,#0x0 */
    g_cpu.R[15] = 0x0800974Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800974E = 1u;
    _cyc_0800974E = 1u;
    uint32_t _r_0800974E;
    _r_0800974E = 0x00000000u;
    arm_set_nzc_logic(_r_0800974E, cpsr_c());
    g_cpu.R[7] = _r_0800974E;
    g_cpu.R[15] = 0x08009750u;
    runtime_tick(_cyc_0800974E);
    /* 08009750  08009750 T movs r1,#0xfd */
    g_cpu.R[15] = 0x08009750u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009750 = 1u;
    _cyc_08009750 = 1u;
    uint32_t _r_08009750;
    _r_08009750 = 0x000000FDu;
    arm_set_nzc_logic(_r_08009750, cpsr_c());
    g_cpu.R[1] = _r_08009750;
    g_cpu.R[15] = 0x08009752u;
    runtime_tick(_cyc_08009750);
    /* 08009752  08009752 T movs r1,r1,lsl #6 */
    g_cpu.R[15] = 0x08009752u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009752 = 1u;
    _cyc_08009752 = 1u;
    uint32_t _rm_08009752 = g_cpu.R[1];
    uint32_t _op2_08009752;
    uint32_t _co_08009752;
    _op2_08009752 = _rm_08009752 << 6;
    _co_08009752 = (_rm_08009752 >> 26) & 1u;
    uint32_t _r_08009752;
    _r_08009752 = _op2_08009752;
    arm_set_nzc_logic(_r_08009752, _co_08009752);
    g_cpu.R[1] = _r_08009752;
    g_cpu.R[15] = 0x08009754u;
    runtime_tick(_cyc_08009752);
    /* 08009754  08009754 T strh r1,[r4,#0x4] */
    g_cpu.R[15] = 0x08009754u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009754 = 1u;
    _cyc_08009754 = 1u;
    uint32_t _base_08009754 = g_cpu.R[4];
    uint32_t _off_08009754;
    _off_08009754 = 0x00000004u;
    uint32_t _ea_08009754 = _base_08009754 + _off_08009754;
    uint32_t _post_08009754 = _base_08009754 + _off_08009754;
    _cyc_08009754 += runtime_mem_cycles(_ea_08009754, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009754u, _ea_08009754 & ~1u, (uint32_t)(g_cpu.R[1] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08009754 & ~1u, (uint16_t)(g_cpu.R[1] & 0xFFFFu));
    g_cpu.R[15] = 0x08009756u;
    runtime_tick(_cyc_08009754);
    /* 08009756  08009756 T ldr r1,[r15,#0x68] */
    g_cpu.R[15] = 0x08009756u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009756 = 1u;
    _cyc_08009756 = 2u;
    uint32_t _base_08009756 = 0x0800975Au & ~3u;
    uint32_t _off_08009756;
    _off_08009756 = 0x00000068u;
    uint32_t _ea_08009756 = _base_08009756 + _off_08009756;
    uint32_t _post_08009756 = _base_08009756 + _off_08009756;
    _cyc_08009756 += runtime_mem_cycles(_ea_08009756, 4u, 0u);
    uint32_t _v_08009756;
    { uint32_t _w = bus_read_u32(_ea_08009756 & ~3u); uint32_t _rot = (_ea_08009756 & 3u) * 8u; _v_08009756 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08009756;
    g_cpu.R[15] = 0x08009758u;
    runtime_tick(_cyc_08009756);
    /* 08009758  08009758 T adds r0,r0,r1 */
    g_cpu.R[15] = 0x08009758u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009758 = 1u;
    _cyc_08009758 = 1u;
    uint32_t _rm_08009758 = g_cpu.R[1];
    uint32_t _op2_08009758;
    uint32_t _co_08009758;
    _op2_08009758 = _rm_08009758;
    _co_08009758 = cpsr_c();
    uint32_t _rn_08009758 = g_cpu.R[0];
    uint32_t _r_08009758;
    _r_08009758 = _rn_08009758 + _op2_08009758;
    arm_set_nzcv_add(_rn_08009758, _op2_08009758, _r_08009758);
    g_cpu.R[0] = _r_08009758;
    g_cpu.R[15] = 0x0800975Au;
    runtime_tick(_cyc_08009758);
    /* 0800975A  0800975a T ldrb r1,[r0] */
    g_cpu.R[15] = 0x0800975Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800975A = 1u;
    _cyc_0800975A = 2u;
    uint32_t _base_0800975A = g_cpu.R[0];
    uint32_t _off_0800975A;
    _off_0800975A = 0x00000000u;
    uint32_t _ea_0800975A = _base_0800975A + _off_0800975A;
    uint32_t _post_0800975A = _base_0800975A + _off_0800975A;
    _cyc_0800975A += runtime_mem_cycles(_ea_0800975A, 1u, 0u);
    uint32_t _v_0800975A;
    _v_0800975A = bus_read_u8(_ea_0800975A);
    g_cpu.R[1] = _v_0800975A;
    g_cpu.R[15] = 0x0800975Cu;
    runtime_tick(_cyc_0800975A);
    /* 0800975C  0800975c T str r1,[r5,#0x3c] */
    g_cpu.R[15] = 0x0800975Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800975C = 1u;
    _cyc_0800975C = 1u;
    uint32_t _base_0800975C = g_cpu.R[5];
    uint32_t _off_0800975C;
    _off_0800975C = 0x0000003Cu;
    uint32_t _ea_0800975C = _base_0800975C + _off_0800975C;
    uint32_t _post_0800975C = _base_0800975C + _off_0800975C;
    _cyc_0800975C += runtime_mem_cycles(_ea_0800975C, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0800975Cu, _ea_0800975C & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_ea_0800975C & ~3u, g_cpu.R[1]);
    g_cpu.R[15] = 0x0800975Eu;
    runtime_tick(_cyc_0800975C);
    /* 0800975E  0800975e T movs r0,#0x10 */
    g_cpu.R[15] = 0x0800975Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800975E = 1u;
    _cyc_0800975E = 1u;
    uint32_t _r_0800975E;
    _r_0800975E = 0x00000010u;
    arm_set_nzc_logic(_r_0800975E, cpsr_c());
    g_cpu.R[0] = _r_0800975E;
    g_cpu.R[15] = 0x08009760u;
    runtime_tick(_cyc_0800975E);
    /* 08009760  08009760 T subs r0,r0,r1 */
    g_cpu.R[15] = 0x08009760u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009760 = 1u;
    _cyc_08009760 = 1u;
    uint32_t _rm_08009760 = g_cpu.R[1];
    uint32_t _op2_08009760;
    uint32_t _co_08009760;
    _op2_08009760 = _rm_08009760;
    _co_08009760 = cpsr_c();
    uint32_t _rn_08009760 = g_cpu.R[0];
    uint32_t _r_08009760;
    _r_08009760 = _rn_08009760 - _op2_08009760;
    arm_set_nzcv_sub(_rn_08009760, _op2_08009760, _r_08009760);
    g_cpu.R[0] = _r_08009760;
    g_cpu.R[15] = 0x08009762u;
    runtime_tick(_cyc_08009760);
    /* 08009762  08009762 T str r0,[r5,#0x4c] */
    g_cpu.R[15] = 0x08009762u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009762 = 1u;
    _cyc_08009762 = 1u;
    uint32_t _base_08009762 = g_cpu.R[5];
    uint32_t _off_08009762;
    _off_08009762 = 0x0000004Cu;
    uint32_t _ea_08009762 = _base_08009762 + _off_08009762;
    uint32_t _post_08009762 = _base_08009762 + _off_08009762;
    _cyc_08009762 += runtime_mem_cycles(_ea_08009762, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009762u, _ea_08009762 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08009762 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08009764u;
    runtime_tick(_cyc_08009762);
    /* 08009764  08009764 T movs r0,#0x10 */
    g_cpu.R[15] = 0x08009764u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009764 = 1u;
    _cyc_08009764 = 1u;
    uint32_t _r_08009764;
    _r_08009764 = 0x00000010u;
    arm_set_nzc_logic(_r_08009764, cpsr_c());
    g_cpu.R[0] = _r_08009764;
    g_cpu.R[15] = 0x08009766u;
    runtime_tick(_cyc_08009764);
    /* 08009766  08009766 T subs r0,r0,r1 */
    g_cpu.R[15] = 0x08009766u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009766 = 1u;
    _cyc_08009766 = 1u;
    uint32_t _rm_08009766 = g_cpu.R[1];
    uint32_t _op2_08009766;
    uint32_t _co_08009766;
    _op2_08009766 = _rm_08009766;
    _co_08009766 = cpsr_c();
    uint32_t _rn_08009766 = g_cpu.R[0];
    uint32_t _r_08009766;
    _r_08009766 = _rn_08009766 - _op2_08009766;
    arm_set_nzcv_sub(_rn_08009766, _op2_08009766, _r_08009766);
    g_cpu.R[0] = _r_08009766;
    g_cpu.R[15] = 0x08009768u;
    runtime_tick(_cyc_08009766);
    /* 08009768  08009768 T movs r0,r0,lsl #8 */
    g_cpu.R[15] = 0x08009768u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009768 = 1u;
    _cyc_08009768 = 1u;
    uint32_t _rm_08009768 = g_cpu.R[0];
    uint32_t _op2_08009768;
    uint32_t _co_08009768;
    _op2_08009768 = _rm_08009768 << 8;
    _co_08009768 = (_rm_08009768 >> 24) & 1u;
    uint32_t _r_08009768;
    _r_08009768 = _op2_08009768;
    arm_set_nzc_logic(_r_08009768, _co_08009768);
    g_cpu.R[0] = _r_08009768;
    g_cpu.R[15] = 0x0800976Au;
    runtime_tick(_cyc_08009768);
    /* 0800976A  0800976a T orrs r1,r1,r0 */
    g_cpu.R[15] = 0x0800976Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800976A = 1u;
    _cyc_0800976A = 1u;
    uint32_t _rm_0800976A = g_cpu.R[0];
    uint32_t _op2_0800976A;
    uint32_t _co_0800976A;
    _op2_0800976A = _rm_0800976A;
    _co_0800976A = cpsr_c();
    uint32_t _rn_0800976A = g_cpu.R[1];
    uint32_t _r_0800976A;
    _r_0800976A = _rn_0800976A | _op2_0800976A;
    arm_set_nzc_logic(_r_0800976A, _co_0800976A);
    g_cpu.R[1] = _r_0800976A;
    g_cpu.R[15] = 0x0800976Cu;
    runtime_tick(_cyc_0800976A);
    /* 0800976C  0800976c T strh r1,[r4,#0x6] */
    g_cpu.R[15] = 0x0800976Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800976C = 1u;
    _cyc_0800976C = 1u;
    uint32_t _base_0800976C = g_cpu.R[4];
    uint32_t _off_0800976C;
    _off_0800976C = 0x00000006u;
    uint32_t _ea_0800976C = _base_0800976C + _off_0800976C;
    uint32_t _post_0800976C = _base_0800976C + _off_0800976C;
    _cyc_0800976C += runtime_mem_cycles(_ea_0800976C, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0800976Cu, _ea_0800976C & ~1u, (uint32_t)(g_cpu.R[1] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0800976C & ~1u, (uint16_t)(g_cpu.R[1] & 0xFFFFu));
    g_cpu.R[15] = 0x0800976Eu;
    runtime_tick(_cyc_0800976C);
    /* 0800976E  0800976e T ldr r1,[r5,#0x4] */
    g_cpu.R[15] = 0x0800976Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800976E = 1u;
    _cyc_0800976E = 2u;
    uint32_t _base_0800976E = g_cpu.R[5];
    uint32_t _off_0800976E;
    _off_0800976E = 0x00000004u;
    uint32_t _ea_0800976E = _base_0800976E + _off_0800976E;
    uint32_t _post_0800976E = _base_0800976E + _off_0800976E;
    _cyc_0800976E += runtime_mem_cycles(_ea_0800976E, 4u, 0u);
    uint32_t _v_0800976E;
    { uint32_t _w = bus_read_u32(_ea_0800976E & ~3u); uint32_t _rot = (_ea_0800976E & 3u) * 8u; _v_0800976E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0800976E;
    g_cpu.R[15] = 0x08009770u;
    runtime_tick(_cyc_0800976E);
    /* 08009770  08009770 T ldr r0,[r15,#0x50] */
    g_cpu.R[15] = 0x08009770u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009770 = 1u;
    _cyc_08009770 = 2u;
    uint32_t _base_08009770 = 0x08009774u & ~3u;
    uint32_t _off_08009770;
    _off_08009770 = 0x00000050u;
    uint32_t _ea_08009770 = _base_08009770 + _off_08009770;
    uint32_t _post_08009770 = _base_08009770 + _off_08009770;
    _cyc_08009770 += runtime_mem_cycles(_ea_08009770, 4u, 0u);
    uint32_t _v_08009770;
    { uint32_t _w = bus_read_u32(_ea_08009770 & ~3u); uint32_t _rot = (_ea_08009770 & 3u) * 8u; _v_08009770 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08009770;
    g_cpu.R[15] = 0x08009772u;
    runtime_tick(_cyc_08009770);
    /* 08009772  08009772 T cmps r1,r0 */
    g_cpu.R[15] = 0x08009772u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009772 = 1u;
    _cyc_08009772 = 1u;
    uint32_t _rm_08009772 = g_cpu.R[0];
    uint32_t _op2_08009772;
    uint32_t _co_08009772;
    _op2_08009772 = _rm_08009772;
    _co_08009772 = cpsr_c();
    uint32_t _rn_08009772 = g_cpu.R[1];
    uint32_t _r_08009772;
    _r_08009772 = _rn_08009772 - _op2_08009772;
    arm_set_nzcv_sub(_rn_08009772, _op2_08009772, _r_08009772);
    g_cpu.R[15] = 0x08009774u;
    runtime_tick(_cyc_08009772);
    /* 08009774  08009774 T bls 0x080097d4 */
    g_cpu.R[15] = 0x08009774u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009774 = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_08009774 = 3u;
        g_cpu.R[15] = 0x080097D4u;
        runtime_tick(_cyc_08009774);
        GBARECOMP_TAIL_CALL(gf_tfunc_080097D4);
    }
    g_cpu.R[15] = 0x08009776u;
    runtime_tick(_cyc_08009774);
    /* 08009776  08009776 T ldr r0,[r15,#0x50] */
    g_cpu.R[15] = 0x08009776u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009776 = 1u;
    _cyc_08009776 = 2u;
    uint32_t _base_08009776 = 0x0800977Au & ~3u;
    uint32_t _off_08009776;
    _off_08009776 = 0x00000050u;
    uint32_t _ea_08009776 = _base_08009776 + _off_08009776;
    uint32_t _post_08009776 = _base_08009776 + _off_08009776;
    _cyc_08009776 += runtime_mem_cycles(_ea_08009776, 4u, 0u);
    uint32_t _v_08009776;
    { uint32_t _w = bus_read_u32(_ea_08009776 & ~3u); uint32_t _rot = (_ea_08009776 & 3u) * 8u; _v_08009776 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08009776;
    g_cpu.R[15] = 0x08009778u;
    runtime_tick(_cyc_08009776);
    /* 08009778  08009778 T str r0,[r13] */
    g_cpu.R[15] = 0x08009778u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009778 = 1u;
    _cyc_08009778 = 1u;
    uint32_t _base_08009778 = g_cpu.R[13];
    uint32_t _off_08009778;
    _off_08009778 = 0x00000000u;
    uint32_t _ea_08009778 = _base_08009778 + _off_08009778;
    uint32_t _post_08009778 = _base_08009778 + _off_08009778;
    _cyc_08009778 += runtime_mem_cycles(_ea_08009778, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009778u, _ea_08009778 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08009778 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0800977Au;
    runtime_tick(_cyc_08009778);
    /* 0800977A  0800977a T movs r0,#0x0 */
    g_cpu.R[15] = 0x0800977Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800977A = 1u;
    _cyc_0800977A = 1u;
    uint32_t _r_0800977A;
    _r_0800977A = 0x00000000u;
    arm_set_nzc_logic(_r_0800977A, cpsr_c());
    g_cpu.R[0] = _r_0800977A;
    g_cpu.R[15] = 0x0800977Cu;
    runtime_tick(_cyc_0800977A);
    /* 0800977C  0800977c T movs r1,#0x1 */
    g_cpu.R[15] = 0x0800977Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800977C = 1u;
    _cyc_0800977C = 1u;
    uint32_t _r_0800977C;
    _r_0800977C = 0x00000001u;
    arm_set_nzc_logic(_r_0800977C, cpsr_c());
    g_cpu.R[1] = _r_0800977C;
    g_cpu.R[15] = 0x0800977Eu;
    runtime_tick(_cyc_0800977C);
    /* 0800977E  0800977e T movs r2,#0x6 */
    g_cpu.R[15] = 0x0800977Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800977E = 1u;
    _cyc_0800977E = 1u;
    uint32_t _r_0800977E;
    _r_0800977E = 0x00000006u;
    arm_set_nzc_logic(_r_0800977E, cpsr_c());
    g_cpu.R[2] = _r_0800977E;
    g_cpu.R[15] = 0x08009780u;
    runtime_tick(_cyc_0800977E);
    /* 08009780  08009780 T movs r3,#0x0 */
    g_cpu.R[15] = 0x08009780u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009780 = 1u;
    _cyc_08009780 = 1u;
    uint32_t _r_08009780;
    _r_08009780 = 0x00000000u;
    arm_set_nzc_logic(_r_08009780, cpsr_c());
    g_cpu.R[3] = _r_08009780;
    g_cpu.R[15] = 0x08009782u;
    runtime_tick(_cyc_08009780);
    /* 08009782  08009782 T bl.hi 0x08005786 */
    g_cpu.R[15] = 0x08009782u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009782 = 1u;
    _cyc_08009782 = 1u;
    g_cpu.R[14] = 0x08005786u;
    g_cpu.R[15] = 0x08009784u;
    runtime_tick(_cyc_08009782);
    /* 08009784  08009784 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08009784u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009784 = 1u;
    _cyc_08009784 = 3u;
    uint32_t _blt_08009784 = (g_cpu.R[14] + 0x0000083Eu) & ~1u;
    g_cpu.R[14] = 0x08009787u;
    g_cpu.R[15] = _blt_08009784;
    runtime_call_push_return(0x08009786u);
    runtime_tick(_cyc_08009784);
    _cyc_08009784 = 0u;
    runtime_dispatch(_blt_08009784);
    if (g_cpu.R[15] != 0x08009786u) { runtime_call_cancel_return(0x08009786u); return; }
    g_cpu.R[15] = 0x08009786u;
    runtime_tick(_cyc_08009784);
    /* fall-through to 0x08009786 */
    g_cpu.R[15] = 0x08009786u;
    runtime_dispatch(0x08009786u);
    return;
}

/* 0x0800985E  mode=thumb  end=0x08009866  branches=6  indirect */


/* 0x08009786 thumb */
void gf_tfunc_08009786(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009786u);
    /* 08009786  08009786 T ldr r1,[r15,#0x44] */
    g_cpu.R[15] = 0x08009786u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009786 = 1u;
    _cyc_08009786 = 2u;
    uint32_t _base_08009786 = 0x0800978Au & ~3u;
    uint32_t _off_08009786;
    _off_08009786 = 0x00000044u;
    uint32_t _ea_08009786 = _base_08009786 + _off_08009786;
    uint32_t _post_08009786 = _base_08009786 + _off_08009786;
    _cyc_08009786 += runtime_mem_cycles(_ea_08009786, 4u, 0u);
    uint32_t _v_08009786;
    { uint32_t _w = bus_read_u32(_ea_08009786 & ~3u); uint32_t _rot = (_ea_08009786 & 3u) * 8u; _v_08009786 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08009786;
    g_cpu.R[15] = 0x08009788u;
    runtime_tick(_cyc_08009786);
    /* 08009788  08009788 T movs r0,#0x2 */
    g_cpu.R[15] = 0x08009788u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009788 = 1u;
    _cyc_08009788 = 1u;
    uint32_t _r_08009788;
    _r_08009788 = 0x00000002u;
    arm_set_nzc_logic(_r_08009788, cpsr_c());
    g_cpu.R[0] = _r_08009788;
    g_cpu.R[15] = 0x0800978Au;
    runtime_tick(_cyc_08009788);
    /* 0800978A  0800978a T str r0,[r1] */
    g_cpu.R[15] = 0x0800978Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800978A = 1u;
    _cyc_0800978A = 1u;
    uint32_t _base_0800978A = g_cpu.R[1];
    uint32_t _off_0800978A;
    _off_0800978A = 0x00000000u;
    uint32_t _ea_0800978A = _base_0800978A + _off_0800978A;
    uint32_t _post_0800978A = _base_0800978A + _off_0800978A;
    _cyc_0800978A += runtime_mem_cycles(_ea_0800978A, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0800978Au, _ea_0800978A & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_0800978A & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0800978Cu;
    runtime_tick(_cyc_0800978A);
    /* 0800978C  0800978c T movs r1,#0x22 */
    g_cpu.R[15] = 0x0800978Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800978C = 1u;
    _cyc_0800978C = 1u;
    uint32_t _r_0800978C;
    _r_0800978C = 0x00000022u;
    arm_set_nzc_logic(_r_0800978C, cpsr_c());
    g_cpu.R[1] = _r_0800978C;
    g_cpu.R[15] = 0x0800978Eu;
    runtime_tick(_cyc_0800978C);
    /* 0800978E  0800978e T ldrsh r0,[r5,+r1] */
    g_cpu.R[15] = 0x0800978Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800978E = 1u;
    _cyc_0800978E = 2u;
    uint32_t _base_0800978E = g_cpu.R[5];
    uint32_t _off_0800978E;
    uint32_t _morm_0800978E = g_cpu.R[1];
    _off_0800978E = _morm_0800978E;
    uint32_t _ea_0800978E = _base_0800978E + _off_0800978E;
    uint32_t _post_0800978E = _base_0800978E + _off_0800978E;
    _cyc_0800978E += runtime_mem_cycles(_ea_0800978E, 2u, 0u);
    uint32_t _v_0800978E;
    if (_ea_0800978E & 1u) _v_0800978E = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_0800978E);
    else _v_0800978E = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_0800978E);
    g_cpu.R[0] = _v_0800978E;
    g_cpu.R[15] = 0x08009790u;
    runtime_tick(_cyc_0800978E);
    /* 08009790  08009790 T movs r0,r0,lsl #1 */
    g_cpu.R[15] = 0x08009790u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009790 = 1u;
    _cyc_08009790 = 1u;
    uint32_t _rm_08009790 = g_cpu.R[0];
    uint32_t _op2_08009790;
    uint32_t _co_08009790;
    _op2_08009790 = _rm_08009790 << 1;
    _co_08009790 = (_rm_08009790 >> 31) & 1u;
    uint32_t _r_08009790;
    _r_08009790 = _op2_08009790;
    arm_set_nzc_logic(_r_08009790, _co_08009790);
    g_cpu.R[0] = _r_08009790;
    g_cpu.R[15] = 0x08009792u;
    runtime_tick(_cyc_08009790);
    /* 08009792  08009792 T adds r0,r0,r5 */
    g_cpu.R[15] = 0x08009792u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009792 = 1u;
    _cyc_08009792 = 1u;
    uint32_t _rm_08009792 = g_cpu.R[5];
    uint32_t _op2_08009792;
    uint32_t _co_08009792;
    _op2_08009792 = _rm_08009792;
    _co_08009792 = cpsr_c();
    uint32_t _rn_08009792 = g_cpu.R[0];
    uint32_t _r_08009792;
    _r_08009792 = _rn_08009792 + _op2_08009792;
    arm_set_nzcv_add(_rn_08009792, _op2_08009792, _r_08009792);
    g_cpu.R[0] = _r_08009792;
    g_cpu.R[15] = 0x08009794u;
    runtime_tick(_cyc_08009792);
    /* 08009794  08009794 T strb r7,[r0,#0x19] */
    g_cpu.R[15] = 0x08009794u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009794 = 1u;
    _cyc_08009794 = 1u;
    uint32_t _base_08009794 = g_cpu.R[0];
    uint32_t _off_08009794;
    _off_08009794 = 0x00000019u;
    uint32_t _ea_08009794 = _base_08009794 + _off_08009794;
    uint32_t _post_08009794 = _base_08009794 + _off_08009794;
    _cyc_08009794 += runtime_mem_cycles(_ea_08009794, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009794u, _ea_08009794, (uint32_t)(g_cpu.R[7] & 0xFFu), 1u);
    bus_write_u8(_ea_08009794, (uint8_t)(g_cpu.R[7] & 0xFFu));
    g_cpu.R[15] = 0x08009796u;
    runtime_tick(_cyc_08009794);
    /* 08009796  08009796 T ldr r2,[r15,#0x38] */
    g_cpu.R[15] = 0x08009796u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009796 = 1u;
    _cyc_08009796 = 2u;
    uint32_t _base_08009796 = 0x0800979Au & ~3u;
    uint32_t _off_08009796;
    _off_08009796 = 0x00000038u;
    uint32_t _ea_08009796 = _base_08009796 + _off_08009796;
    uint32_t _post_08009796 = _base_08009796 + _off_08009796;
    _cyc_08009796 += runtime_mem_cycles(_ea_08009796, 4u, 0u);
    uint32_t _v_08009796;
    { uint32_t _w = bus_read_u32(_ea_08009796 & ~3u); uint32_t _rot = (_ea_08009796 & 3u) * 8u; _v_08009796 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08009796;
    g_cpu.R[15] = 0x08009798u;
    runtime_tick(_cyc_08009796);
    /* 08009798  08009798 T adds r0,r5,#0x0 */
    g_cpu.R[15] = 0x08009798u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009798 = 1u;
    _cyc_08009798 = 1u;
    uint32_t _rn_08009798 = g_cpu.R[5];
    uint32_t _r_08009798;
    _r_08009798 = _rn_08009798 + 0x00000000u;
    arm_set_nzcv_add(_rn_08009798, 0x00000000u, _r_08009798);
    g_cpu.R[0] = _r_08009798;
    g_cpu.R[15] = 0x0800979Au;
    runtime_tick(_cyc_08009798);
    /* 0800979A  0800979a T adds r0,r0,#0x18 */
    g_cpu.R[15] = 0x0800979Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800979A = 1u;
    _cyc_0800979A = 1u;
    uint32_t _rn_0800979A = g_cpu.R[0];
    uint32_t _r_0800979A;
    _r_0800979A = _rn_0800979A + 0x00000018u;
    arm_set_nzcv_add(_rn_0800979A, 0x00000018u, _r_0800979A);
    g_cpu.R[0] = _r_0800979A;
    g_cpu.R[15] = 0x0800979Cu;
    runtime_tick(_cyc_0800979A);
    /* 0800979C  0800979c T adds r1,r5,#0x0 */
    g_cpu.R[15] = 0x0800979Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800979C = 1u;
    _cyc_0800979C = 1u;
    uint32_t _rn_0800979C = g_cpu.R[5];
    uint32_t _r_0800979C;
    _r_0800979C = _rn_0800979C + 0x00000000u;
    arm_set_nzcv_add(_rn_0800979C, 0x00000000u, _r_0800979C);
    g_cpu.R[1] = _r_0800979C;
    g_cpu.R[15] = 0x0800979Eu;
    runtime_tick(_cyc_0800979C);
    /* 0800979E  0800979e T adds r1,r1,#0x22 */
    g_cpu.R[15] = 0x0800979Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800979E = 1u;
    _cyc_0800979E = 1u;
    uint32_t _rn_0800979E = g_cpu.R[1];
    uint32_t _r_0800979E;
    _r_0800979E = _rn_0800979E + 0x00000022u;
    arm_set_nzcv_add(_rn_0800979E, 0x00000022u, _r_0800979E);
    g_cpu.R[1] = _r_0800979E;
    g_cpu.R[15] = 0x080097A0u;
    runtime_tick(_cyc_0800979E);
    /* 080097A0  080097a0 T ldr r3,[r2] */
    g_cpu.R[15] = 0x080097A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097A0 = 1u;
    _cyc_080097A0 = 2u;
    uint32_t _base_080097A0 = g_cpu.R[2];
    uint32_t _off_080097A0;
    _off_080097A0 = 0x00000000u;
    uint32_t _ea_080097A0 = _base_080097A0 + _off_080097A0;
    uint32_t _post_080097A0 = _base_080097A0 + _off_080097A0;
    _cyc_080097A0 += runtime_mem_cycles(_ea_080097A0, 4u, 0u);
    uint32_t _v_080097A0;
    { uint32_t _w = bus_read_u32(_ea_080097A0 & ~3u); uint32_t _rot = (_ea_080097A0 & 3u) * 8u; _v_080097A0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_080097A0;
    g_cpu.R[15] = 0x080097A2u;
    runtime_tick(_cyc_080097A0);
    /* 080097A2  080097a2 T movs r2,#0x7 */
    g_cpu.R[15] = 0x080097A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097A2 = 1u;
    _cyc_080097A2 = 1u;
    uint32_t _r_080097A2;
    _r_080097A2 = 0x00000007u;
    arm_set_nzc_logic(_r_080097A2, cpsr_c());
    g_cpu.R[2] = _r_080097A2;
    g_cpu.R[15] = 0x080097A4u;
    runtime_tick(_cyc_080097A2);
    /* 080097A4  080097a4 T bl.hi 0x080c27a8 */
    g_cpu.R[15] = 0x080097A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097A4 = 1u;
    _cyc_080097A4 = 1u;
    g_cpu.R[14] = 0x080C27A8u;
    g_cpu.R[15] = 0x080097A6u;
    runtime_tick(_cyc_080097A4);
    /* 080097A6  080097a6 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x080097A6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097A6 = 1u;
    _cyc_080097A6 = 3u;
    uint32_t _blt_080097A6 = (g_cpu.R[14] + 0x00000A40u) & ~1u;
    g_cpu.R[14] = 0x080097A9u;
    g_cpu.R[15] = _blt_080097A6;
    runtime_call_push_return(0x080097A8u);
    runtime_tick(_cyc_080097A6);
    _cyc_080097A6 = 0u;
    runtime_dispatch(_blt_080097A6);
    if (g_cpu.R[15] != 0x080097A8u) { runtime_call_cancel_return(0x080097A8u); return; }
    g_cpu.R[15] = 0x080097A8u;
    runtime_tick(_cyc_080097A6);
    /* fall-through to 0x080097A8 */
    g_cpu.R[15] = 0x080097A8u;
    runtime_dispatch(0x080097A8u);
    return;
}

/* 0x080097A8  mode=thumb  end=0x080097AA  branches=1 */


/* 0x080097A8 thumb */
void gf_tfunc_080097A8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080097A8u);
    /* 080097A8  080097a8 T b 0x0800988a */
    g_cpu.R[15] = 0x080097A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097A8 = 1u;
    _cyc_080097A8 = 3u;
    g_cpu.R[15] = 0x0800988Au;
    runtime_tick(_cyc_080097A8);
    GBARECOMP_TAIL_CALL(gf_tfunc_0800988A);
    g_cpu.R[15] = 0x080097AAu;
    runtime_tick(_cyc_080097A8);
    /* fall-through to 0x080097AA */
    g_cpu.R[15] = 0x080097AAu;
    runtime_dispatch(0x080097AAu);
    return;
}

/* 0x080097D4  mode=thumb  end=0x0800982E  branches=6 */


/* 0x080097D4 thumb */
void gf_tfunc_080097D4(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080097D4u);
    /* 080097D4  080097d4 T ldr r2,[r15,#0x58] */
    g_cpu.R[15] = 0x080097D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097D4 = 1u;
    _cyc_080097D4 = 2u;
    uint32_t _base_080097D4 = 0x080097D8u & ~3u;
    uint32_t _off_080097D4;
    _off_080097D4 = 0x00000058u;
    uint32_t _ea_080097D4 = _base_080097D4 + _off_080097D4;
    uint32_t _post_080097D4 = _base_080097D4 + _off_080097D4;
    _cyc_080097D4 += runtime_mem_cycles(_ea_080097D4, 4u, 0u);
    uint32_t _v_080097D4;
    { uint32_t _w = bus_read_u32(_ea_080097D4 & ~3u); uint32_t _rot = (_ea_080097D4 & 3u) * 8u; _v_080097D4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_080097D4;
    g_cpu.R[15] = 0x080097D6u;
    runtime_tick(_cyc_080097D4);
    /* 080097D6  080097d6 T ldr r1,[r15,#0x5c] */
    g_cpu.R[15] = 0x080097D6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097D6 = 1u;
    _cyc_080097D6 = 2u;
    uint32_t _base_080097D6 = 0x080097DAu & ~3u;
    uint32_t _off_080097D6;
    _off_080097D6 = 0x0000005Cu;
    uint32_t _ea_080097D6 = _base_080097D6 + _off_080097D6;
    uint32_t _post_080097D6 = _base_080097D6 + _off_080097D6;
    _cyc_080097D6 += runtime_mem_cycles(_ea_080097D6, 4u, 0u);
    uint32_t _v_080097D6;
    { uint32_t _w = bus_read_u32(_ea_080097D6 & ~3u); uint32_t _rot = (_ea_080097D6 & 3u) * 8u; _v_080097D6 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_080097D6;
    g_cpu.R[15] = 0x080097D8u;
    runtime_tick(_cyc_080097D6);
    /* 080097D8  080097d8 T adds r0,r2,r1 */
    g_cpu.R[15] = 0x080097D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097D8 = 1u;
    _cyc_080097D8 = 1u;
    uint32_t _rm_080097D8 = g_cpu.R[1];
    uint32_t _op2_080097D8;
    uint32_t _co_080097D8;
    _op2_080097D8 = _rm_080097D8;
    _co_080097D8 = cpsr_c();
    uint32_t _rn_080097D8 = g_cpu.R[2];
    uint32_t _r_080097D8;
    _r_080097D8 = _rn_080097D8 + _op2_080097D8;
    arm_set_nzcv_add(_rn_080097D8, _op2_080097D8, _r_080097D8);
    g_cpu.R[0] = _r_080097D8;
    g_cpu.R[15] = 0x080097DAu;
    runtime_tick(_cyc_080097D8);
    /* 080097DA  080097da T ldrh r3,[r0] */
    g_cpu.R[15] = 0x080097DAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097DA = 1u;
    _cyc_080097DA = 2u;
    uint32_t _base_080097DA = g_cpu.R[0];
    uint32_t _off_080097DA;
    _off_080097DA = 0x00000000u;
    uint32_t _ea_080097DA = _base_080097DA + _off_080097DA;
    uint32_t _post_080097DA = _base_080097DA + _off_080097DA;
    _cyc_080097DA += runtime_mem_cycles(_ea_080097DA, 2u, 0u);
    uint32_t _v_080097DA;
    { uint32_t _h = bus_read_u16(_ea_080097DA & ~1u); if (_ea_080097DA & 1u) _v_080097DA = ((_h >> 8) | (_h << 24)); else _v_080097DA = _h; }
    g_cpu.R[3] = _v_080097DA;
    g_cpu.R[15] = 0x080097DCu;
    runtime_tick(_cyc_080097DA);
    /* 080097DC  080097dc T ldr r1,[r15,#0x58] */
    g_cpu.R[15] = 0x080097DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097DC = 1u;
    _cyc_080097DC = 2u;
    uint32_t _base_080097DC = 0x080097E0u & ~3u;
    uint32_t _off_080097DC;
    _off_080097DC = 0x00000058u;
    uint32_t _ea_080097DC = _base_080097DC + _off_080097DC;
    uint32_t _post_080097DC = _base_080097DC + _off_080097DC;
    _cyc_080097DC += runtime_mem_cycles(_ea_080097DC, 4u, 0u);
    uint32_t _v_080097DC;
    { uint32_t _w = bus_read_u32(_ea_080097DC & ~3u); uint32_t _rot = (_ea_080097DC & 3u) * 8u; _v_080097DC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_080097DC;
    g_cpu.R[15] = 0x080097DEu;
    runtime_tick(_cyc_080097DC);
    /* 080097DE  080097de T adds r0,r1,#0x0 */
    g_cpu.R[15] = 0x080097DEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097DE = 1u;
    _cyc_080097DE = 1u;
    uint32_t _rn_080097DE = g_cpu.R[1];
    uint32_t _r_080097DE;
    _r_080097DE = _rn_080097DE + 0x00000000u;
    arm_set_nzcv_add(_rn_080097DE, 0x00000000u, _r_080097DE);
    g_cpu.R[0] = _r_080097DE;
    g_cpu.R[15] = 0x080097E0u;
    runtime_tick(_cyc_080097DE);
    /* 080097E0  080097e0 T ands r0,r0,r3 */
    g_cpu.R[15] = 0x080097E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097E0 = 1u;
    _cyc_080097E0 = 1u;
    uint32_t _rm_080097E0 = g_cpu.R[3];
    uint32_t _op2_080097E0;
    uint32_t _co_080097E0;
    _op2_080097E0 = _rm_080097E0;
    _co_080097E0 = cpsr_c();
    uint32_t _rn_080097E0 = g_cpu.R[0];
    uint32_t _r_080097E0;
    _r_080097E0 = _rn_080097E0 & _op2_080097E0;
    arm_set_nzc_logic(_r_080097E0, _co_080097E0);
    g_cpu.R[0] = _r_080097E0;
    g_cpu.R[15] = 0x080097E2u;
    runtime_tick(_cyc_080097E0);
    /* 080097E2  080097e2 T adds r6,r2,#0x0 */
    g_cpu.R[15] = 0x080097E2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097E2 = 1u;
    _cyc_080097E2 = 1u;
    uint32_t _rn_080097E2 = g_cpu.R[2];
    uint32_t _r_080097E2;
    _r_080097E2 = _rn_080097E2 + 0x00000000u;
    arm_set_nzcv_add(_rn_080097E2, 0x00000000u, _r_080097E2);
    g_cpu.R[6] = _r_080097E2;
    g_cpu.R[15] = 0x080097E4u;
    runtime_tick(_cyc_080097E2);
    /* 080097E4  080097e4 T cmps r0,r1 */
    g_cpu.R[15] = 0x080097E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097E4 = 1u;
    _cyc_080097E4 = 1u;
    uint32_t _rm_080097E4 = g_cpu.R[1];
    uint32_t _op2_080097E4;
    uint32_t _co_080097E4;
    _op2_080097E4 = _rm_080097E4;
    _co_080097E4 = cpsr_c();
    uint32_t _rn_080097E4 = g_cpu.R[0];
    uint32_t _r_080097E4;
    _r_080097E4 = _rn_080097E4 - _op2_080097E4;
    arm_set_nzcv_sub(_rn_080097E4, _op2_080097E4, _r_080097E4);
    g_cpu.R[15] = 0x080097E6u;
    runtime_tick(_cyc_080097E4);
    /* 080097E6  080097e6 T bne 0x08009844 */
    g_cpu.R[15] = 0x080097E6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097E6 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_080097E6 = 3u;
        g_cpu.R[15] = 0x08009844u;
        runtime_tick(_cyc_080097E6);
        GBARECOMP_TAIL_CALL(gf_tfunc_08009844);
    }
    g_cpu.R[15] = 0x080097E8u;
    runtime_tick(_cyc_080097E6);
    /* 080097E8  080097e8 T movs r2,#0x1 */
    g_cpu.R[15] = 0x080097E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097E8 = 1u;
    _cyc_080097E8 = 1u;
    uint32_t _r_080097E8;
    _r_080097E8 = 0x00000001u;
    arm_set_nzc_logic(_r_080097E8, cpsr_c());
    g_cpu.R[2] = _r_080097E8;
    g_cpu.R[15] = 0x080097EAu;
    runtime_tick(_cyc_080097E8);
    /* 080097EA  080097ea T movs r0,#0x1 */
    g_cpu.R[15] = 0x080097EAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097EA = 1u;
    _cyc_080097EA = 1u;
    uint32_t _r_080097EA;
    _r_080097EA = 0x00000001u;
    arm_set_nzc_logic(_r_080097EA, cpsr_c());
    g_cpu.R[0] = _r_080097EA;
    g_cpu.R[15] = 0x080097ECu;
    runtime_tick(_cyc_080097EA);
    /* 080097EC  080097ec T ands r0,r0,r3 */
    g_cpu.R[15] = 0x080097ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097EC = 1u;
    _cyc_080097EC = 1u;
    uint32_t _rm_080097EC = g_cpu.R[3];
    uint32_t _op2_080097EC;
    uint32_t _co_080097EC;
    _op2_080097EC = _rm_080097EC;
    _co_080097EC = cpsr_c();
    uint32_t _rn_080097EC = g_cpu.R[0];
    uint32_t _r_080097EC;
    _r_080097EC = _rn_080097EC & _op2_080097EC;
    arm_set_nzc_logic(_r_080097EC, _co_080097EC);
    g_cpu.R[0] = _r_080097EC;
    g_cpu.R[15] = 0x080097EEu;
    runtime_tick(_cyc_080097EC);
    /* 080097EE  080097ee T cmps r0,#0x0 */
    g_cpu.R[15] = 0x080097EEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097EE = 1u;
    _cyc_080097EE = 1u;
    uint32_t _rn_080097EE = g_cpu.R[0];
    uint32_t _r_080097EE;
    _r_080097EE = _rn_080097EE - 0x00000000u;
    arm_set_nzcv_sub(_rn_080097EE, 0x00000000u, _r_080097EE);
    g_cpu.R[15] = 0x080097F0u;
    runtime_tick(_cyc_080097EE);
    /* 080097F0  080097f0 T beq 0x08009844 */
    g_cpu.R[15] = 0x080097F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097F0 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080097F0 = 3u;
        g_cpu.R[15] = 0x08009844u;
        runtime_tick(_cyc_080097F0);
        GBARECOMP_TAIL_CALL(gf_tfunc_08009844);
    }
    g_cpu.R[15] = 0x080097F2u;
    runtime_tick(_cyc_080097F0);
    /* 080097F2  080097f2 T ldr r1,[r15,#0x48] */
    g_cpu.R[15] = 0x080097F2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097F2 = 1u;
    _cyc_080097F2 = 2u;
    uint32_t _base_080097F2 = 0x080097F6u & ~3u;
    uint32_t _off_080097F2;
    _off_080097F2 = 0x00000048u;
    uint32_t _ea_080097F2 = _base_080097F2 + _off_080097F2;
    uint32_t _post_080097F2 = _base_080097F2 + _off_080097F2;
    _cyc_080097F2 += runtime_mem_cycles(_ea_080097F2, 4u, 0u);
    uint32_t _v_080097F2;
    { uint32_t _w = bus_read_u32(_ea_080097F2 & ~3u); uint32_t _rot = (_ea_080097F2 & 3u) * 8u; _v_080097F2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_080097F2;
    g_cpu.R[15] = 0x080097F4u;
    runtime_tick(_cyc_080097F2);
    /* 080097F4  080097f4 T adds r0,r6,r1 */
    g_cpu.R[15] = 0x080097F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097F4 = 1u;
    _cyc_080097F4 = 1u;
    uint32_t _rm_080097F4 = g_cpu.R[1];
    uint32_t _op2_080097F4;
    uint32_t _co_080097F4;
    _op2_080097F4 = _rm_080097F4;
    _co_080097F4 = cpsr_c();
    uint32_t _rn_080097F4 = g_cpu.R[6];
    uint32_t _r_080097F4;
    _r_080097F4 = _rn_080097F4 + _op2_080097F4;
    arm_set_nzcv_add(_rn_080097F4, _op2_080097F4, _r_080097F4);
    g_cpu.R[0] = _r_080097F4;
    g_cpu.R[15] = 0x080097F6u;
    runtime_tick(_cyc_080097F4);
    /* 080097F6  080097f6 T ldrh r1,[r0] */
    g_cpu.R[15] = 0x080097F6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097F6 = 1u;
    _cyc_080097F6 = 2u;
    uint32_t _base_080097F6 = g_cpu.R[0];
    uint32_t _off_080097F6;
    _off_080097F6 = 0x00000000u;
    uint32_t _ea_080097F6 = _base_080097F6 + _off_080097F6;
    uint32_t _post_080097F6 = _base_080097F6 + _off_080097F6;
    _cyc_080097F6 += runtime_mem_cycles(_ea_080097F6, 2u, 0u);
    uint32_t _v_080097F6;
    { uint32_t _h = bus_read_u16(_ea_080097F6 & ~1u); if (_ea_080097F6 & 1u) _v_080097F6 = ((_h >> 8) | (_h << 24)); else _v_080097F6 = _h; }
    g_cpu.R[1] = _v_080097F6;
    g_cpu.R[15] = 0x080097F8u;
    runtime_tick(_cyc_080097F6);
    /* 080097F8  080097f8 T movs r0,#0x4 */
    g_cpu.R[15] = 0x080097F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097F8 = 1u;
    _cyc_080097F8 = 1u;
    uint32_t _r_080097F8;
    _r_080097F8 = 0x00000004u;
    arm_set_nzc_logic(_r_080097F8, cpsr_c());
    g_cpu.R[0] = _r_080097F8;
    g_cpu.R[15] = 0x080097FAu;
    runtime_tick(_cyc_080097F8);
    /* 080097FA  080097fa T ands r0,r0,r1 */
    g_cpu.R[15] = 0x080097FAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097FA = 1u;
    _cyc_080097FA = 1u;
    uint32_t _rm_080097FA = g_cpu.R[1];
    uint32_t _op2_080097FA;
    uint32_t _co_080097FA;
    _op2_080097FA = _rm_080097FA;
    _co_080097FA = cpsr_c();
    uint32_t _rn_080097FA = g_cpu.R[0];
    uint32_t _r_080097FA;
    _r_080097FA = _rn_080097FA & _op2_080097FA;
    arm_set_nzc_logic(_r_080097FA, _co_080097FA);
    g_cpu.R[0] = _r_080097FA;
    g_cpu.R[15] = 0x080097FCu;
    runtime_tick(_cyc_080097FA);
    /* 080097FC  080097fc T cmps r0,#0x0 */
    g_cpu.R[15] = 0x080097FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097FC = 1u;
    _cyc_080097FC = 1u;
    uint32_t _rn_080097FC = g_cpu.R[0];
    uint32_t _r_080097FC;
    _r_080097FC = _rn_080097FC - 0x00000000u;
    arm_set_nzcv_sub(_rn_080097FC, 0x00000000u, _r_080097FC);
    g_cpu.R[15] = 0x080097FEu;
    runtime_tick(_cyc_080097FC);
    /* 080097FE  080097fe T beq 0x08009844 */
    g_cpu.R[15] = 0x080097FEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080097FE = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080097FE = 3u;
        g_cpu.R[15] = 0x08009844u;
        runtime_tick(_cyc_080097FE);
        GBARECOMP_TAIL_CALL(gf_tfunc_08009844);
    }
    g_cpu.R[15] = 0x08009800u;
    runtime_tick(_cyc_080097FE);
    /* 08009800  08009800 T adds r0,r5,#0x0 */
    g_cpu.R[15] = 0x08009800u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009800 = 1u;
    _cyc_08009800 = 1u;
    uint32_t _rn_08009800 = g_cpu.R[5];
    uint32_t _r_08009800;
    _r_08009800 = _rn_08009800 + 0x00000000u;
    arm_set_nzcv_add(_rn_08009800, 0x00000000u, _r_08009800);
    g_cpu.R[0] = _r_08009800;
    g_cpu.R[15] = 0x08009802u;
    runtime_tick(_cyc_08009800);
    /* 08009802  08009802 T adds r0,r0,#0x5c */
    g_cpu.R[15] = 0x08009802u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009802 = 1u;
    _cyc_08009802 = 1u;
    uint32_t _rn_08009802 = g_cpu.R[0];
    uint32_t _r_08009802;
    _r_08009802 = _rn_08009802 + 0x0000005Cu;
    arm_set_nzcv_add(_rn_08009802, 0x0000005Cu, _r_08009802);
    g_cpu.R[0] = _r_08009802;
    g_cpu.R[15] = 0x08009804u;
    runtime_tick(_cyc_08009802);
    /* 08009804  08009804 T strb r2,[r0] */
    g_cpu.R[15] = 0x08009804u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009804 = 1u;
    _cyc_08009804 = 1u;
    uint32_t _base_08009804 = g_cpu.R[0];
    uint32_t _off_08009804;
    _off_08009804 = 0x00000000u;
    uint32_t _ea_08009804 = _base_08009804 + _off_08009804;
    uint32_t _post_08009804 = _base_08009804 + _off_08009804;
    _cyc_08009804 += runtime_mem_cycles(_ea_08009804, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009804u, _ea_08009804, (uint32_t)(g_cpu.R[2] & 0xFFu), 1u);
    bus_write_u8(_ea_08009804, (uint8_t)(g_cpu.R[2] & 0xFFu));
    g_cpu.R[15] = 0x08009806u;
    runtime_tick(_cyc_08009804);
    /* 08009806  08009806 T adds r0,r0,#0x4 */
    g_cpu.R[15] = 0x08009806u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009806 = 1u;
    _cyc_08009806 = 1u;
    uint32_t _rn_08009806 = g_cpu.R[0];
    uint32_t _r_08009806;
    _r_08009806 = _rn_08009806 + 0x00000004u;
    arm_set_nzcv_add(_rn_08009806, 0x00000004u, _r_08009806);
    g_cpu.R[0] = _r_08009806;
    g_cpu.R[15] = 0x08009808u;
    runtime_tick(_cyc_08009806);
    /* 08009808  08009808 T strb r2,[r0] */
    g_cpu.R[15] = 0x08009808u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009808 = 1u;
    _cyc_08009808 = 1u;
    uint32_t _base_08009808 = g_cpu.R[0];
    uint32_t _off_08009808;
    _off_08009808 = 0x00000000u;
    uint32_t _ea_08009808 = _base_08009808 + _off_08009808;
    uint32_t _post_08009808 = _base_08009808 + _off_08009808;
    _cyc_08009808 += runtime_mem_cycles(_ea_08009808, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009808u, _ea_08009808, (uint32_t)(g_cpu.R[2] & 0xFFu), 1u);
    bus_write_u8(_ea_08009808, (uint8_t)(g_cpu.R[2] & 0xFFu));
    g_cpu.R[15] = 0x0800980Au;
    runtime_tick(_cyc_08009808);
    /* 0800980A  0800980a T movs r0,#0xef */
    g_cpu.R[15] = 0x0800980Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800980A = 1u;
    _cyc_0800980A = 1u;
    uint32_t _r_0800980A;
    _r_0800980A = 0x000000EFu;
    arm_set_nzc_logic(_r_0800980A, cpsr_c());
    g_cpu.R[0] = _r_0800980A;
    g_cpu.R[15] = 0x0800980Cu;
    runtime_tick(_cyc_0800980A);
    /* 0800980C  0800980c T strh r0,[r4,#0x4] */
    g_cpu.R[15] = 0x0800980Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800980C = 1u;
    _cyc_0800980C = 1u;
    uint32_t _base_0800980C = g_cpu.R[4];
    uint32_t _off_0800980C;
    _off_0800980C = 0x00000004u;
    uint32_t _ea_0800980C = _base_0800980C + _off_0800980C;
    uint32_t _post_0800980C = _base_0800980C + _off_0800980C;
    _cyc_0800980C += runtime_mem_cycles(_ea_0800980C, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0800980Cu, _ea_0800980C & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0800980C & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0800980Eu;
    runtime_tick(_cyc_0800980C);
    /* 0800980E  0800980e T movs r0,#0xa */
    g_cpu.R[15] = 0x0800980Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800980E = 1u;
    _cyc_0800980E = 1u;
    uint32_t _r_0800980E;
    _r_0800980E = 0x0000000Au;
    arm_set_nzc_logic(_r_0800980E, cpsr_c());
    g_cpu.R[0] = _r_0800980E;
    g_cpu.R[15] = 0x08009810u;
    runtime_tick(_cyc_0800980E);
    /* 08009810  08009810 T strh r0,[r4,#0x8] */
    g_cpu.R[15] = 0x08009810u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009810 = 1u;
    _cyc_08009810 = 1u;
    uint32_t _base_08009810 = g_cpu.R[4];
    uint32_t _off_08009810;
    _off_08009810 = 0x00000008u;
    uint32_t _ea_08009810 = _base_08009810 + _off_08009810;
    uint32_t _post_08009810 = _base_08009810 + _off_08009810;
    _cyc_08009810 += runtime_mem_cycles(_ea_08009810, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009810u, _ea_08009810 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08009810 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08009812u;
    runtime_tick(_cyc_08009810);
    /* 08009812  08009812 T movs r1,#0x22 */
    g_cpu.R[15] = 0x08009812u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009812 = 1u;
    _cyc_08009812 = 1u;
    uint32_t _r_08009812;
    _r_08009812 = 0x00000022u;
    arm_set_nzc_logic(_r_08009812, cpsr_c());
    g_cpu.R[1] = _r_08009812;
    g_cpu.R[15] = 0x08009814u;
    runtime_tick(_cyc_08009812);
    /* 08009814  08009814 T ldrsh r0,[r5,+r1] */
    g_cpu.R[15] = 0x08009814u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009814 = 1u;
    _cyc_08009814 = 2u;
    uint32_t _base_08009814 = g_cpu.R[5];
    uint32_t _off_08009814;
    uint32_t _morm_08009814 = g_cpu.R[1];
    _off_08009814 = _morm_08009814;
    uint32_t _ea_08009814 = _base_08009814 + _off_08009814;
    uint32_t _post_08009814 = _base_08009814 + _off_08009814;
    _cyc_08009814 += runtime_mem_cycles(_ea_08009814, 2u, 0u);
    uint32_t _v_08009814;
    if (_ea_08009814 & 1u) _v_08009814 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_08009814);
    else _v_08009814 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_08009814);
    g_cpu.R[0] = _v_08009814;
    g_cpu.R[15] = 0x08009816u;
    runtime_tick(_cyc_08009814);
    /* 08009816  08009816 T movs r0,r0,lsl #1 */
    g_cpu.R[15] = 0x08009816u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009816 = 1u;
    _cyc_08009816 = 1u;
    uint32_t _rm_08009816 = g_cpu.R[0];
    uint32_t _op2_08009816;
    uint32_t _co_08009816;
    _op2_08009816 = _rm_08009816 << 1;
    _co_08009816 = (_rm_08009816 >> 31) & 1u;
    uint32_t _r_08009816;
    _r_08009816 = _op2_08009816;
    arm_set_nzc_logic(_r_08009816, _co_08009816);
    g_cpu.R[0] = _r_08009816;
    g_cpu.R[15] = 0x08009818u;
    runtime_tick(_cyc_08009816);
    /* 08009818  08009818 T adds r0,r0,r5 */
    g_cpu.R[15] = 0x08009818u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009818 = 1u;
    _cyc_08009818 = 1u;
    uint32_t _rm_08009818 = g_cpu.R[5];
    uint32_t _op2_08009818;
    uint32_t _co_08009818;
    _op2_08009818 = _rm_08009818;
    _co_08009818 = cpsr_c();
    uint32_t _rn_08009818 = g_cpu.R[0];
    uint32_t _r_08009818;
    _r_08009818 = _rn_08009818 + _op2_08009818;
    arm_set_nzcv_add(_rn_08009818, _op2_08009818, _r_08009818);
    g_cpu.R[0] = _r_08009818;
    g_cpu.R[15] = 0x0800981Au;
    runtime_tick(_cyc_08009818);
    /* 0800981A  0800981a T strb r7,[r0,#0x19] */
    g_cpu.R[15] = 0x0800981Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800981A = 1u;
    _cyc_0800981A = 1u;
    uint32_t _base_0800981A = g_cpu.R[0];
    uint32_t _off_0800981A;
    _off_0800981A = 0x00000019u;
    uint32_t _ea_0800981A = _base_0800981A + _off_0800981A;
    uint32_t _post_0800981A = _base_0800981A + _off_0800981A;
    _cyc_0800981A += runtime_mem_cycles(_ea_0800981A, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0800981Au, _ea_0800981A, (uint32_t)(g_cpu.R[7] & 0xFFu), 1u);
    bus_write_u8(_ea_0800981A, (uint8_t)(g_cpu.R[7] & 0xFFu));
    g_cpu.R[15] = 0x0800981Cu;
    runtime_tick(_cyc_0800981A);
    /* 0800981C  0800981c T ldr r2,[r15,#0x20] */
    g_cpu.R[15] = 0x0800981Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800981C = 1u;
    _cyc_0800981C = 2u;
    uint32_t _base_0800981C = 0x08009820u & ~3u;
    uint32_t _off_0800981C;
    _off_0800981C = 0x00000020u;
    uint32_t _ea_0800981C = _base_0800981C + _off_0800981C;
    uint32_t _post_0800981C = _base_0800981C + _off_0800981C;
    _cyc_0800981C += runtime_mem_cycles(_ea_0800981C, 4u, 0u);
    uint32_t _v_0800981C;
    { uint32_t _w = bus_read_u32(_ea_0800981C & ~3u); uint32_t _rot = (_ea_0800981C & 3u) * 8u; _v_0800981C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_0800981C;
    g_cpu.R[15] = 0x0800981Eu;
    runtime_tick(_cyc_0800981C);
    /* 0800981E  0800981e T adds r0,r5,#0x0 */
    g_cpu.R[15] = 0x0800981Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800981E = 1u;
    _cyc_0800981E = 1u;
    uint32_t _rn_0800981E = g_cpu.R[5];
    uint32_t _r_0800981E;
    _r_0800981E = _rn_0800981E + 0x00000000u;
    arm_set_nzcv_add(_rn_0800981E, 0x00000000u, _r_0800981E);
    g_cpu.R[0] = _r_0800981E;
    g_cpu.R[15] = 0x08009820u;
    runtime_tick(_cyc_0800981E);
    /* 08009820  08009820 T adds r0,r0,#0x18 */
    g_cpu.R[15] = 0x08009820u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009820 = 1u;
    _cyc_08009820 = 1u;
    uint32_t _rn_08009820 = g_cpu.R[0];
    uint32_t _r_08009820;
    _r_08009820 = _rn_08009820 + 0x00000018u;
    arm_set_nzcv_add(_rn_08009820, 0x00000018u, _r_08009820);
    g_cpu.R[0] = _r_08009820;
    g_cpu.R[15] = 0x08009822u;
    runtime_tick(_cyc_08009820);
    /* 08009822  08009822 T adds r1,r5,#0x0 */
    g_cpu.R[15] = 0x08009822u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009822 = 1u;
    _cyc_08009822 = 1u;
    uint32_t _rn_08009822 = g_cpu.R[5];
    uint32_t _r_08009822;
    _r_08009822 = _rn_08009822 + 0x00000000u;
    arm_set_nzcv_add(_rn_08009822, 0x00000000u, _r_08009822);
    g_cpu.R[1] = _r_08009822;
    g_cpu.R[15] = 0x08009824u;
    runtime_tick(_cyc_08009822);
    /* 08009824  08009824 T adds r1,r1,#0x22 */
    g_cpu.R[15] = 0x08009824u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009824 = 1u;
    _cyc_08009824 = 1u;
    uint32_t _rn_08009824 = g_cpu.R[1];
    uint32_t _r_08009824;
    _r_08009824 = _rn_08009824 + 0x00000022u;
    arm_set_nzcv_add(_rn_08009824, 0x00000022u, _r_08009824);
    g_cpu.R[1] = _r_08009824;
    g_cpu.R[15] = 0x08009826u;
    runtime_tick(_cyc_08009824);
    /* 08009826  08009826 T ldr r3,[r2] */
    g_cpu.R[15] = 0x08009826u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009826 = 1u;
    _cyc_08009826 = 2u;
    uint32_t _base_08009826 = g_cpu.R[2];
    uint32_t _off_08009826;
    _off_08009826 = 0x00000000u;
    uint32_t _ea_08009826 = _base_08009826 + _off_08009826;
    uint32_t _post_08009826 = _base_08009826 + _off_08009826;
    _cyc_08009826 += runtime_mem_cycles(_ea_08009826, 4u, 0u);
    uint32_t _v_08009826;
    { uint32_t _w = bus_read_u32(_ea_08009826 & ~3u); uint32_t _rot = (_ea_08009826 & 3u) * 8u; _v_08009826 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08009826;
    g_cpu.R[15] = 0x08009828u;
    runtime_tick(_cyc_08009826);
    /* 08009828  08009828 T movs r2,#0x5 */
    g_cpu.R[15] = 0x08009828u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009828 = 1u;
    _cyc_08009828 = 1u;
    uint32_t _r_08009828;
    _r_08009828 = 0x00000005u;
    arm_set_nzc_logic(_r_08009828, cpsr_c());
    g_cpu.R[2] = _r_08009828;
    g_cpu.R[15] = 0x0800982Au;
    runtime_tick(_cyc_08009828);
    /* 0800982A  0800982a T bl.hi 0x080c282e */
    g_cpu.R[15] = 0x0800982Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800982A = 1u;
    _cyc_0800982A = 1u;
    g_cpu.R[14] = 0x080C282Eu;
    g_cpu.R[15] = 0x0800982Cu;
    runtime_tick(_cyc_0800982A);
    /* 0800982C  0800982c T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0800982Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800982C = 1u;
    _cyc_0800982C = 3u;
    uint32_t _blt_0800982C = (g_cpu.R[14] + 0x000009BAu) & ~1u;
    g_cpu.R[14] = 0x0800982Fu;
    g_cpu.R[15] = _blt_0800982C;
    runtime_call_push_return(0x0800982Eu);
    runtime_tick(_cyc_0800982C);
    _cyc_0800982C = 0u;
    runtime_dispatch(_blt_0800982C);
    if (g_cpu.R[15] != 0x0800982Eu) { runtime_call_cancel_return(0x0800982Eu); return; }
    g_cpu.R[15] = 0x0800982Eu;
    runtime_tick(_cyc_0800982C);
    /* fall-through to 0x0800982E */
    g_cpu.R[15] = 0x0800982Eu;
    runtime_dispatch(0x0800982Eu);
    return;
}

/* 0x0800982E  mode=thumb  end=0x08009830  branches=1 */


/* 0x0800982E thumb */
void gf_tfunc_0800982E(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0800982Eu);
    /* 0800982E  0800982e T b 0x0800988a */
    g_cpu.R[15] = 0x0800982Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800982E = 1u;
    _cyc_0800982E = 3u;
    g_cpu.R[15] = 0x0800988Au;
    runtime_tick(_cyc_0800982E);
    GBARECOMP_TAIL_CALL(gf_tfunc_0800988A);
    g_cpu.R[15] = 0x08009830u;
    runtime_tick(_cyc_0800982E);
    /* fall-through to 0x08009830 */
    g_cpu.R[15] = 0x08009830u;
    runtime_dispatch(0x08009830u);
    return;
}

/* 0x08009844  mode=thumb  end=0x0800985E  branches=9  indirect */


/* 0x08009844 thumb */
void gf_tfunc_08009844(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009844u);
    /* 08009844  08009844 T ldr r1,[r15,#0x4c] */
    g_cpu.R[15] = 0x08009844u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009844 = 1u;
    _cyc_08009844 = 2u;
    uint32_t _base_08009844 = 0x08009848u & ~3u;
    uint32_t _off_08009844;
    _off_08009844 = 0x0000004Cu;
    uint32_t _ea_08009844 = _base_08009844 + _off_08009844;
    uint32_t _post_08009844 = _base_08009844 + _off_08009844;
    _cyc_08009844 += runtime_mem_cycles(_ea_08009844, 4u, 0u);
    uint32_t _v_08009844;
    { uint32_t _w = bus_read_u32(_ea_08009844 & ~3u); uint32_t _rot = (_ea_08009844 & 3u) * 8u; _v_08009844 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08009844;
    g_cpu.R[15] = 0x08009846u;
    runtime_tick(_cyc_08009844);
    /* 08009846  08009846 T adds r0,r6,r1 */
    g_cpu.R[15] = 0x08009846u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009846 = 1u;
    _cyc_08009846 = 1u;
    uint32_t _rm_08009846 = g_cpu.R[1];
    uint32_t _op2_08009846;
    uint32_t _co_08009846;
    _op2_08009846 = _rm_08009846;
    _co_08009846 = cpsr_c();
    uint32_t _rn_08009846 = g_cpu.R[6];
    uint32_t _r_08009846;
    _r_08009846 = _rn_08009846 + _op2_08009846;
    arm_set_nzcv_add(_rn_08009846, _op2_08009846, _r_08009846);
    g_cpu.R[0] = _r_08009846;
    g_cpu.R[15] = 0x08009848u;
    runtime_tick(_cyc_08009846);
    /* 08009848  08009848 T ldrh r1,[r0] */
    g_cpu.R[15] = 0x08009848u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009848 = 1u;
    _cyc_08009848 = 2u;
    uint32_t _base_08009848 = g_cpu.R[0];
    uint32_t _off_08009848;
    _off_08009848 = 0x00000000u;
    uint32_t _ea_08009848 = _base_08009848 + _off_08009848;
    uint32_t _post_08009848 = _base_08009848 + _off_08009848;
    _cyc_08009848 += runtime_mem_cycles(_ea_08009848, 2u, 0u);
    uint32_t _v_08009848;
    { uint32_t _h = bus_read_u16(_ea_08009848 & ~1u); if (_ea_08009848 & 1u) _v_08009848 = ((_h >> 8) | (_h << 24)); else _v_08009848 = _h; }
    g_cpu.R[1] = _v_08009848;
    g_cpu.R[15] = 0x0800984Au;
    runtime_tick(_cyc_08009848);
    /* 0800984A  0800984a T movs r0,#0x8 */
    g_cpu.R[15] = 0x0800984Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800984A = 1u;
    _cyc_0800984A = 1u;
    uint32_t _r_0800984A;
    _r_0800984A = 0x00000008u;
    arm_set_nzc_logic(_r_0800984A, cpsr_c());
    g_cpu.R[0] = _r_0800984A;
    g_cpu.R[15] = 0x0800984Cu;
    runtime_tick(_cyc_0800984A);
    /* 0800984C  0800984c T ands r0,r0,r1 */
    g_cpu.R[15] = 0x0800984Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800984C = 1u;
    _cyc_0800984C = 1u;
    uint32_t _rm_0800984C = g_cpu.R[1];
    uint32_t _op2_0800984C;
    uint32_t _co_0800984C;
    _op2_0800984C = _rm_0800984C;
    _co_0800984C = cpsr_c();
    uint32_t _rn_0800984C = g_cpu.R[0];
    uint32_t _r_0800984C;
    _r_0800984C = _rn_0800984C & _op2_0800984C;
    arm_set_nzc_logic(_r_0800984C, _co_0800984C);
    g_cpu.R[0] = _r_0800984C;
    g_cpu.R[15] = 0x0800984Eu;
    runtime_tick(_cyc_0800984C);
    /* 0800984E  0800984e T cmps r0,#0x0 */
    g_cpu.R[15] = 0x0800984Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800984E = 1u;
    _cyc_0800984E = 1u;
    uint32_t _rn_0800984E = g_cpu.R[0];
    uint32_t _r_0800984E;
    _r_0800984E = _rn_0800984E - 0x00000000u;
    arm_set_nzcv_sub(_rn_0800984E, 0x00000000u, _r_0800984E);
    g_cpu.R[15] = 0x08009850u;
    runtime_tick(_cyc_0800984E);
    /* 08009850  08009850 T beq 0x0800988a */
    g_cpu.R[15] = 0x08009850u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009850 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08009850 = 3u;
        g_cpu.R[15] = 0x0800988Au;
        runtime_tick(_cyc_08009850);
        GBARECOMP_TAIL_CALL(gf_tfunc_0800988A);
    }
    g_cpu.R[15] = 0x08009852u;
    runtime_tick(_cyc_08009850);
    /* 08009852  08009852 T ldr r1,[r15,#0x44] */
    g_cpu.R[15] = 0x08009852u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009852 = 1u;
    _cyc_08009852 = 2u;
    uint32_t _base_08009852 = 0x08009856u & ~3u;
    uint32_t _off_08009852;
    _off_08009852 = 0x00000044u;
    uint32_t _ea_08009852 = _base_08009852 + _off_08009852;
    uint32_t _post_08009852 = _base_08009852 + _off_08009852;
    _cyc_08009852 += runtime_mem_cycles(_ea_08009852, 4u, 0u);
    uint32_t _v_08009852;
    { uint32_t _w = bus_read_u32(_ea_08009852 & ~3u); uint32_t _rot = (_ea_08009852 & 3u) * 8u; _v_08009852 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08009852;
    g_cpu.R[15] = 0x08009854u;
    runtime_tick(_cyc_08009852);
    /* 08009854  08009854 T movs r0,#0x3 */
    g_cpu.R[15] = 0x08009854u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009854 = 1u;
    _cyc_08009854 = 1u;
    uint32_t _r_08009854;
    _r_08009854 = 0x00000003u;
    arm_set_nzc_logic(_r_08009854, cpsr_c());
    g_cpu.R[0] = _r_08009854;
    g_cpu.R[15] = 0x08009856u;
    runtime_tick(_cyc_08009854);
    /* 08009856  08009856 T str r0,[r1] */
    g_cpu.R[15] = 0x08009856u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009856 = 1u;
    _cyc_08009856 = 1u;
    uint32_t _base_08009856 = g_cpu.R[1];
    uint32_t _off_08009856;
    _off_08009856 = 0x00000000u;
    uint32_t _ea_08009856 = _base_08009856 + _off_08009856;
    uint32_t _post_08009856 = _base_08009856 + _off_08009856;
    _cyc_08009856 += runtime_mem_cycles(_ea_08009856, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009856u, _ea_08009856 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08009856 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08009858u;
    runtime_tick(_cyc_08009856);
    /* 08009858  08009858 T ldr r0,[r15,#0x40] */
    g_cpu.R[15] = 0x08009858u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009858 = 1u;
    _cyc_08009858 = 2u;
    uint32_t _base_08009858 = 0x0800985Cu & ~3u;
    uint32_t _off_08009858;
    _off_08009858 = 0x00000040u;
    uint32_t _ea_08009858 = _base_08009858 + _off_08009858;
    uint32_t _post_08009858 = _base_08009858 + _off_08009858;
    _cyc_08009858 += runtime_mem_cycles(_ea_08009858, 4u, 0u);
    uint32_t _v_08009858;
    { uint32_t _w = bus_read_u32(_ea_08009858 & ~3u); uint32_t _rot = (_ea_08009858 & 3u) * 8u; _v_08009858 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08009858;
    g_cpu.R[15] = 0x0800985Au;
    runtime_tick(_cyc_08009858);
    /* 0800985A  0800985a T bl.hi 0x080bf85e */
    g_cpu.R[15] = 0x0800985Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800985A = 1u;
    _cyc_0800985A = 1u;
    g_cpu.R[14] = 0x080BF85Eu;
    g_cpu.R[15] = 0x0800985Cu;
    runtime_tick(_cyc_0800985A);
    /* 0800985C  0800985c T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0800985Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800985C = 1u;
    _cyc_0800985C = 3u;
    uint32_t _blt_0800985C = (g_cpu.R[14] + 0x00000CAEu) & ~1u;
    g_cpu.R[14] = 0x0800985Fu;
    g_cpu.R[15] = _blt_0800985C;
    runtime_call_push_return(0x0800985Eu);
    runtime_tick(_cyc_0800985C);
    _cyc_0800985C = 0u;
    runtime_dispatch(_blt_0800985C);
    if (g_cpu.R[15] != 0x0800985Eu) { runtime_call_cancel_return(0x0800985Eu); return; }
    g_cpu.R[15] = 0x0800985Eu;
    runtime_tick(_cyc_0800985C);
    /* fall-through to 0x0800985E */
    g_cpu.R[15] = 0x0800985Eu;
    runtime_dispatch(0x0800985Eu);
    return;
}

/* 0x08009866  mode=thumb  end=0x0800986C  branches=4  indirect */


/* 0x0800985E thumb */
void gf_tfunc_0800985E(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0800985Eu);
    /* 0800985E  0800985e T movs r0,#0xad */
    g_cpu.R[15] = 0x0800985Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800985E = 1u;
    _cyc_0800985E = 1u;
    uint32_t _r_0800985E;
    _r_0800985E = 0x000000ADu;
    arm_set_nzc_logic(_r_0800985E, cpsr_c());
    g_cpu.R[0] = _r_0800985E;
    g_cpu.R[15] = 0x08009860u;
    runtime_tick(_cyc_0800985E);
    /* 08009860  08009860 T movs r0,r0,lsl #1 */
    g_cpu.R[15] = 0x08009860u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009860 = 1u;
    _cyc_08009860 = 1u;
    uint32_t _rm_08009860 = g_cpu.R[0];
    uint32_t _op2_08009860;
    uint32_t _co_08009860;
    _op2_08009860 = _rm_08009860 << 1;
    _co_08009860 = (_rm_08009860 >> 31) & 1u;
    uint32_t _r_08009860;
    _r_08009860 = _op2_08009860;
    arm_set_nzc_logic(_r_08009860, _co_08009860);
    g_cpu.R[0] = _r_08009860;
    g_cpu.R[15] = 0x08009862u;
    runtime_tick(_cyc_08009860);
    /* 08009862  08009862 T bl.hi 0x080bf866 */
    g_cpu.R[15] = 0x08009862u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009862 = 1u;
    _cyc_08009862 = 1u;
    g_cpu.R[14] = 0x080BF866u;
    g_cpu.R[15] = 0x08009864u;
    runtime_tick(_cyc_08009862);
    /* 08009864  08009864 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08009864u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009864 = 1u;
    _cyc_08009864 = 3u;
    uint32_t _blt_08009864 = (g_cpu.R[14] + 0x00000CA6u) & ~1u;
    g_cpu.R[14] = 0x08009867u;
    g_cpu.R[15] = _blt_08009864;
    runtime_call_push_return(0x08009866u);
    runtime_tick(_cyc_08009864);
    _cyc_08009864 = 0u;
    runtime_dispatch(_blt_08009864);
    if (g_cpu.R[15] != 0x08009866u) { runtime_call_cancel_return(0x08009866u); return; }
    g_cpu.R[15] = 0x08009866u;
    runtime_tick(_cyc_08009864);
    /* fall-through to 0x08009866 */
    g_cpu.R[15] = 0x08009866u;
    runtime_dispatch(0x08009866u);
    return;
}

/* 0x08009AE4  mode=thumb  end=0x08009B1C  branches=2  indirect */


/* 0x08009866 thumb */
void gf_tfunc_08009866(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009866u);
    /* 08009866  08009866 T ldr r0,[r15,#0x38] */
    g_cpu.R[15] = 0x08009866u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009866 = 1u;
    _cyc_08009866 = 2u;
    uint32_t _base_08009866 = 0x0800986Au & ~3u;
    uint32_t _off_08009866;
    _off_08009866 = 0x00000038u;
    uint32_t _ea_08009866 = _base_08009866 + _off_08009866;
    uint32_t _post_08009866 = _base_08009866 + _off_08009866;
    _cyc_08009866 += runtime_mem_cycles(_ea_08009866, 4u, 0u);
    uint32_t _v_08009866;
    { uint32_t _w = bus_read_u32(_ea_08009866 & ~3u); uint32_t _rot = (_ea_08009866 & 3u) * 8u; _v_08009866 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08009866;
    g_cpu.R[15] = 0x08009868u;
    runtime_tick(_cyc_08009866);
    /* 08009868  08009868 T bl.hi 0x0800586c */
    g_cpu.R[15] = 0x08009868u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009868 = 1u;
    _cyc_08009868 = 1u;
    g_cpu.R[14] = 0x0800586Cu;
    g_cpu.R[15] = 0x0800986Au;
    runtime_tick(_cyc_08009868);
    /* 0800986A  0800986a T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0800986Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800986A = 1u;
    _cyc_0800986A = 3u;
    uint32_t _blt_0800986A = (g_cpu.R[14] + 0x00000614u) & ~1u;
    g_cpu.R[14] = 0x0800986Du;
    g_cpu.R[15] = _blt_0800986A;
    runtime_call_push_return(0x0800986Cu);
    runtime_tick(_cyc_0800986A);
    _cyc_0800986A = 0u;
    runtime_dispatch(_blt_0800986A);
    if (g_cpu.R[15] != 0x0800986Cu) { runtime_call_cancel_return(0x0800986Cu); return; }
    g_cpu.R[15] = 0x0800986Cu;
    runtime_tick(_cyc_0800986A);
    /* fall-through to 0x0800986C */
    g_cpu.R[15] = 0x0800986Cu;
    runtime_dispatch(0x0800986Cu);
    return;
}

/* 0x0800986C  mode=thumb  end=0x0800988A  branches=2  indirect */


/* 0x0800986C thumb */
void gf_tfunc_0800986C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0800986Cu);
    /* 0800986C  0800986c T movs r1,#0x22 */
    g_cpu.R[15] = 0x0800986Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800986C = 1u;
    _cyc_0800986C = 1u;
    uint32_t _r_0800986C;
    _r_0800986C = 0x00000022u;
    arm_set_nzc_logic(_r_0800986C, cpsr_c());
    g_cpu.R[1] = _r_0800986C;
    g_cpu.R[15] = 0x0800986Eu;
    runtime_tick(_cyc_0800986C);
    /* 0800986E  0800986e T ldrsh r0,[r5,+r1] */
    g_cpu.R[15] = 0x0800986Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800986E = 1u;
    _cyc_0800986E = 2u;
    uint32_t _base_0800986E = g_cpu.R[5];
    uint32_t _off_0800986E;
    uint32_t _morm_0800986E = g_cpu.R[1];
    _off_0800986E = _morm_0800986E;
    uint32_t _ea_0800986E = _base_0800986E + _off_0800986E;
    uint32_t _post_0800986E = _base_0800986E + _off_0800986E;
    _cyc_0800986E += runtime_mem_cycles(_ea_0800986E, 2u, 0u);
    uint32_t _v_0800986E;
    if (_ea_0800986E & 1u) _v_0800986E = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_0800986E);
    else _v_0800986E = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_0800986E);
    g_cpu.R[0] = _v_0800986E;
    g_cpu.R[15] = 0x08009870u;
    runtime_tick(_cyc_0800986E);
    /* 08009870  08009870 T movs r0,r0,lsl #1 */
    g_cpu.R[15] = 0x08009870u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009870 = 1u;
    _cyc_08009870 = 1u;
    uint32_t _rm_08009870 = g_cpu.R[0];
    uint32_t _op2_08009870;
    uint32_t _co_08009870;
    _op2_08009870 = _rm_08009870 << 1;
    _co_08009870 = (_rm_08009870 >> 31) & 1u;
    uint32_t _r_08009870;
    _r_08009870 = _op2_08009870;
    arm_set_nzc_logic(_r_08009870, _co_08009870);
    g_cpu.R[0] = _r_08009870;
    g_cpu.R[15] = 0x08009872u;
    runtime_tick(_cyc_08009870);
    /* 08009872  08009872 T adds r0,r0,r5 */
    g_cpu.R[15] = 0x08009872u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009872 = 1u;
    _cyc_08009872 = 1u;
    uint32_t _rm_08009872 = g_cpu.R[5];
    uint32_t _op2_08009872;
    uint32_t _co_08009872;
    _op2_08009872 = _rm_08009872;
    _co_08009872 = cpsr_c();
    uint32_t _rn_08009872 = g_cpu.R[0];
    uint32_t _r_08009872;
    _r_08009872 = _rn_08009872 + _op2_08009872;
    arm_set_nzcv_add(_rn_08009872, _op2_08009872, _r_08009872);
    g_cpu.R[0] = _r_08009872;
    g_cpu.R[15] = 0x08009874u;
    runtime_tick(_cyc_08009872);
    /* 08009874  08009874 T movs r1,#0x0 */
    g_cpu.R[15] = 0x08009874u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009874 = 1u;
    _cyc_08009874 = 1u;
    uint32_t _r_08009874;
    _r_08009874 = 0x00000000u;
    arm_set_nzc_logic(_r_08009874, cpsr_c());
    g_cpu.R[1] = _r_08009874;
    g_cpu.R[15] = 0x08009876u;
    runtime_tick(_cyc_08009874);
    /* 08009876  08009876 T strb r1,[r0,#0x19] */
    g_cpu.R[15] = 0x08009876u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009876 = 1u;
    _cyc_08009876 = 1u;
    uint32_t _base_08009876 = g_cpu.R[0];
    uint32_t _off_08009876;
    _off_08009876 = 0x00000019u;
    uint32_t _ea_08009876 = _base_08009876 + _off_08009876;
    uint32_t _post_08009876 = _base_08009876 + _off_08009876;
    _cyc_08009876 += runtime_mem_cycles(_ea_08009876, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009876u, _ea_08009876, (uint32_t)(g_cpu.R[1] & 0xFFu), 1u);
    bus_write_u8(_ea_08009876, (uint8_t)(g_cpu.R[1] & 0xFFu));
    g_cpu.R[15] = 0x08009878u;
    runtime_tick(_cyc_08009876);
    /* 08009878  08009878 T ldr r2,[r15,#0x28] */
    g_cpu.R[15] = 0x08009878u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009878 = 1u;
    _cyc_08009878 = 2u;
    uint32_t _base_08009878 = 0x0800987Cu & ~3u;
    uint32_t _off_08009878;
    _off_08009878 = 0x00000028u;
    uint32_t _ea_08009878 = _base_08009878 + _off_08009878;
    uint32_t _post_08009878 = _base_08009878 + _off_08009878;
    _cyc_08009878 += runtime_mem_cycles(_ea_08009878, 4u, 0u);
    uint32_t _v_08009878;
    { uint32_t _w = bus_read_u32(_ea_08009878 & ~3u); uint32_t _rot = (_ea_08009878 & 3u) * 8u; _v_08009878 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08009878;
    g_cpu.R[15] = 0x0800987Au;
    runtime_tick(_cyc_08009878);
    /* 0800987A  0800987a T adds r0,r5,#0x0 */
    g_cpu.R[15] = 0x0800987Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800987A = 1u;
    _cyc_0800987A = 1u;
    uint32_t _rn_0800987A = g_cpu.R[5];
    uint32_t _r_0800987A;
    _r_0800987A = _rn_0800987A + 0x00000000u;
    arm_set_nzcv_add(_rn_0800987A, 0x00000000u, _r_0800987A);
    g_cpu.R[0] = _r_0800987A;
    g_cpu.R[15] = 0x0800987Cu;
    runtime_tick(_cyc_0800987A);
    /* 0800987C  0800987c T adds r0,r0,#0x18 */
    g_cpu.R[15] = 0x0800987Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800987C = 1u;
    _cyc_0800987C = 1u;
    uint32_t _rn_0800987C = g_cpu.R[0];
    uint32_t _r_0800987C;
    _r_0800987C = _rn_0800987C + 0x00000018u;
    arm_set_nzcv_add(_rn_0800987C, 0x00000018u, _r_0800987C);
    g_cpu.R[0] = _r_0800987C;
    g_cpu.R[15] = 0x0800987Eu;
    runtime_tick(_cyc_0800987C);
    /* 0800987E  0800987e T adds r1,r5,#0x0 */
    g_cpu.R[15] = 0x0800987Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800987E = 1u;
    _cyc_0800987E = 1u;
    uint32_t _rn_0800987E = g_cpu.R[5];
    uint32_t _r_0800987E;
    _r_0800987E = _rn_0800987E + 0x00000000u;
    arm_set_nzcv_add(_rn_0800987E, 0x00000000u, _r_0800987E);
    g_cpu.R[1] = _r_0800987E;
    g_cpu.R[15] = 0x08009880u;
    runtime_tick(_cyc_0800987E);
    /* 08009880  08009880 T adds r1,r1,#0x22 */
    g_cpu.R[15] = 0x08009880u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009880 = 1u;
    _cyc_08009880 = 1u;
    uint32_t _rn_08009880 = g_cpu.R[1];
    uint32_t _r_08009880;
    _r_08009880 = _rn_08009880 + 0x00000022u;
    arm_set_nzcv_add(_rn_08009880, 0x00000022u, _r_08009880);
    g_cpu.R[1] = _r_08009880;
    g_cpu.R[15] = 0x08009882u;
    runtime_tick(_cyc_08009880);
    /* 08009882  08009882 T ldr r3,[r2] */
    g_cpu.R[15] = 0x08009882u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009882 = 1u;
    _cyc_08009882 = 2u;
    uint32_t _base_08009882 = g_cpu.R[2];
    uint32_t _off_08009882;
    _off_08009882 = 0x00000000u;
    uint32_t _ea_08009882 = _base_08009882 + _off_08009882;
    uint32_t _post_08009882 = _base_08009882 + _off_08009882;
    _cyc_08009882 += runtime_mem_cycles(_ea_08009882, 4u, 0u);
    uint32_t _v_08009882;
    { uint32_t _w = bus_read_u32(_ea_08009882 & ~3u); uint32_t _rot = (_ea_08009882 & 3u) * 8u; _v_08009882 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08009882;
    g_cpu.R[15] = 0x08009884u;
    runtime_tick(_cyc_08009882);
    /* 08009884  08009884 T movs r2,#0x7 */
    g_cpu.R[15] = 0x08009884u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009884 = 1u;
    _cyc_08009884 = 1u;
    uint32_t _r_08009884;
    _r_08009884 = 0x00000007u;
    arm_set_nzc_logic(_r_08009884, cpsr_c());
    g_cpu.R[2] = _r_08009884;
    g_cpu.R[15] = 0x08009886u;
    runtime_tick(_cyc_08009884);
    /* 08009886  08009886 T bl.hi 0x080c288a */
    g_cpu.R[15] = 0x08009886u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009886 = 1u;
    _cyc_08009886 = 1u;
    g_cpu.R[14] = 0x080C288Au;
    g_cpu.R[15] = 0x08009888u;
    runtime_tick(_cyc_08009886);
    /* 08009888  08009888 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08009888u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009888 = 1u;
    _cyc_08009888 = 3u;
    uint32_t _blt_08009888 = (g_cpu.R[14] + 0x0000095Eu) & ~1u;
    g_cpu.R[14] = 0x0800988Bu;
    g_cpu.R[15] = _blt_08009888;
    runtime_call_push_return(0x0800988Au);
    runtime_tick(_cyc_08009888);
    _cyc_08009888 = 0u;
    runtime_dispatch(_blt_08009888);
    if (g_cpu.R[15] != 0x0800988Au) { runtime_call_cancel_return(0x0800988Au); return; }
    g_cpu.R[15] = 0x0800988Au;
    runtime_tick(_cyc_08009888);
    /* fall-through to 0x0800988A */
    g_cpu.R[15] = 0x0800988Au;
    runtime_dispatch(0x0800988Au);
    return;
}

/* 0x0800988A  mode=thumb  end=0x08009892  branches=0  indirect */


/* 0x0800988A thumb */
void gf_tfunc_0800988A(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0800988Au);
    /* 0800988A  0800988a T add r13,r13,#0x4 */
    g_cpu.R[15] = 0x0800988Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800988A = 1u;
    _cyc_0800988A = 1u;
    uint32_t _rn_0800988A = g_cpu.R[13];
    uint32_t _r_0800988A;
    _r_0800988A = _rn_0800988A + 0x00000004u;
    g_cpu.R[13] = _r_0800988A;
    g_cpu.R[15] = 0x0800988Cu;
    runtime_tick(_cyc_0800988A);
    /* 0800988C  0800988c T ldm r13!,{r4,r5,r6,r7} */
    g_cpu.R[15] = 0x0800988Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800988C = 1u;
    _cyc_0800988C = 2u;
    uint32_t _b_0800988C = g_cpu.R[13];
    uint32_t _a_0800988C = _b_0800988C;
    uint32_t _fb_0800988C = _b_0800988C + 16u;
    _cyc_0800988C += runtime_mem_cycles(_a_0800988C & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_0800988C & ~3u);
    _a_0800988C += 4u;
    _cyc_0800988C += runtime_mem_cycles(_a_0800988C & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_0800988C & ~3u);
    _a_0800988C += 4u;
    _cyc_0800988C += runtime_mem_cycles(_a_0800988C & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_0800988C & ~3u);
    _a_0800988C += 4u;
    _cyc_0800988C += runtime_mem_cycles(_a_0800988C & ~3u, 4u, 1u);
    g_cpu.R[7] = bus_read_u32(_a_0800988C & ~3u);
    _a_0800988C += 4u;
    g_cpu.R[13] = _fb_0800988C;
    g_cpu.R[15] = 0x0800988Eu;
    runtime_tick(_cyc_0800988C);
    /* 0800988E  0800988e T ldm r13!,{r0} */
    g_cpu.R[15] = 0x0800988Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800988E = 1u;
    _cyc_0800988E = 2u;
    uint32_t _b_0800988E = g_cpu.R[13];
    uint32_t _a_0800988E = _b_0800988E;
    uint32_t _fb_0800988E = _b_0800988E + 4u;
    _cyc_0800988E += runtime_mem_cycles(_a_0800988E & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_0800988E & ~3u);
    _a_0800988E += 4u;
    g_cpu.R[13] = _fb_0800988E;
    g_cpu.R[15] = 0x08009890u;
    runtime_tick(_cyc_0800988E);
    /* 08009890  08009890 T bx r0 */
    g_cpu.R[15] = 0x08009890u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009890 = 1u;
    _cyc_08009890 = 3u;
    uint32_t _bxt_08009890 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_08009890 & ~1u;
    if (_bxt_08009890 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_08009890);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_08009890);
    g_cpu.R[15] = 0x08009892u;
    runtime_tick(_cyc_08009890);
    /* fall-through to 0x08009892 */
    g_cpu.R[15] = 0x08009892u;
    runtime_dispatch(0x08009892u);
    return;
}

/* 0x08009B1C  mode=thumb  end=0x08009B28  branches=0  indirect */


/* 0x08009AE4 thumb */
void gf_tfunc_08009AE4(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009AE4u);
    /* 08009AE4  08009ae4 T stm r13!,{r4,r14} */
    g_cpu.R[15] = 0x08009AE4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009AE4 = 1u;
    _cyc_08009AE4 = 1u;
    uint32_t _b_08009AE4 = g_cpu.R[13];
    uint32_t _a_08009AE4 = _b_08009AE4 - 8u;
    uint32_t _fb_08009AE4 = _b_08009AE4 - 8u;
    _cyc_08009AE4 += runtime_mem_cycles(_a_08009AE4 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009AE4u, _a_08009AE4 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_08009AE4 & ~3u, g_cpu.R[4]);
    _a_08009AE4 += 4u;
    _cyc_08009AE4 += runtime_mem_cycles(_a_08009AE4 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009AE4u, _a_08009AE4 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_08009AE4 & ~3u, g_cpu.R[14]);
    _a_08009AE4 += 4u;
    g_cpu.R[13] = _fb_08009AE4;
    g_cpu.R[15] = 0x08009AE6u;
    runtime_tick(_cyc_08009AE4);
    /* 08009AE6  08009ae6 T adds r4,r0,#0x0 */
    g_cpu.R[15] = 0x08009AE6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009AE6 = 1u;
    _cyc_08009AE6 = 1u;
    uint32_t _rn_08009AE6 = g_cpu.R[0];
    uint32_t _r_08009AE6;
    _r_08009AE6 = _rn_08009AE6 + 0x00000000u;
    arm_set_nzcv_add(_rn_08009AE6, 0x00000000u, _r_08009AE6);
    g_cpu.R[4] = _r_08009AE6;
    g_cpu.R[15] = 0x08009AE8u;
    runtime_tick(_cyc_08009AE6);
    /* 08009AE8  08009ae8 T ldr r0,[r15,#0x3c] */
    g_cpu.R[15] = 0x08009AE8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009AE8 = 1u;
    _cyc_08009AE8 = 2u;
    uint32_t _base_08009AE8 = 0x08009AECu & ~3u;
    uint32_t _off_08009AE8;
    _off_08009AE8 = 0x0000003Cu;
    uint32_t _ea_08009AE8 = _base_08009AE8 + _off_08009AE8;
    uint32_t _post_08009AE8 = _base_08009AE8 + _off_08009AE8;
    _cyc_08009AE8 += runtime_mem_cycles(_ea_08009AE8, 4u, 0u);
    uint32_t _v_08009AE8;
    { uint32_t _w = bus_read_u32(_ea_08009AE8 & ~3u); uint32_t _rot = (_ea_08009AE8 & 3u) * 8u; _v_08009AE8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08009AE8;
    g_cpu.R[15] = 0x08009AEAu;
    runtime_tick(_cyc_08009AE8);
    /* 08009AEA  08009aea T str r0,[r4,#0x14] */
    g_cpu.R[15] = 0x08009AEAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009AEA = 1u;
    _cyc_08009AEA = 1u;
    uint32_t _base_08009AEA = g_cpu.R[4];
    uint32_t _off_08009AEA;
    _off_08009AEA = 0x00000014u;
    uint32_t _ea_08009AEA = _base_08009AEA + _off_08009AEA;
    uint32_t _post_08009AEA = _base_08009AEA + _off_08009AEA;
    _cyc_08009AEA += runtime_mem_cycles(_ea_08009AEA, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009AEAu, _ea_08009AEA & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08009AEA & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08009AECu;
    runtime_tick(_cyc_08009AEA);
    /* 08009AEC  08009aec T ldrh r0,[r4,#0x22] */
    g_cpu.R[15] = 0x08009AECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009AEC = 1u;
    _cyc_08009AEC = 2u;
    uint32_t _base_08009AEC = g_cpu.R[4];
    uint32_t _off_08009AEC;
    _off_08009AEC = 0x00000022u;
    uint32_t _ea_08009AEC = _base_08009AEC + _off_08009AEC;
    uint32_t _post_08009AEC = _base_08009AEC + _off_08009AEC;
    _cyc_08009AEC += runtime_mem_cycles(_ea_08009AEC, 2u, 0u);
    uint32_t _v_08009AEC;
    { uint32_t _h = bus_read_u16(_ea_08009AEC & ~1u); if (_ea_08009AEC & 1u) _v_08009AEC = ((_h >> 8) | (_h << 24)); else _v_08009AEC = _h; }
    g_cpu.R[0] = _v_08009AEC;
    g_cpu.R[15] = 0x08009AEEu;
    runtime_tick(_cyc_08009AEC);
    /* 08009AEE  08009aee T adds r0,r0,#0x1 */
    g_cpu.R[15] = 0x08009AEEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009AEE = 1u;
    _cyc_08009AEE = 1u;
    uint32_t _rn_08009AEE = g_cpu.R[0];
    uint32_t _r_08009AEE;
    _r_08009AEE = _rn_08009AEE + 0x00000001u;
    arm_set_nzcv_add(_rn_08009AEE, 0x00000001u, _r_08009AEE);
    g_cpu.R[0] = _r_08009AEE;
    g_cpu.R[15] = 0x08009AF0u;
    runtime_tick(_cyc_08009AEE);
    /* 08009AF0  08009af0 T strh r0,[r4,#0x22] */
    g_cpu.R[15] = 0x08009AF0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009AF0 = 1u;
    _cyc_08009AF0 = 1u;
    uint32_t _base_08009AF0 = g_cpu.R[4];
    uint32_t _off_08009AF0;
    _off_08009AF0 = 0x00000022u;
    uint32_t _ea_08009AF0 = _base_08009AF0 + _off_08009AF0;
    uint32_t _post_08009AF0 = _base_08009AF0 + _off_08009AF0;
    _cyc_08009AF0 += runtime_mem_cycles(_ea_08009AF0, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009AF0u, _ea_08009AF0 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08009AF0 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08009AF2u;
    runtime_tick(_cyc_08009AF0);
    /* 08009AF2  08009af2 T movs r0,#0x22 */
    g_cpu.R[15] = 0x08009AF2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009AF2 = 1u;
    _cyc_08009AF2 = 1u;
    uint32_t _r_08009AF2;
    _r_08009AF2 = 0x00000022u;
    arm_set_nzc_logic(_r_08009AF2, cpsr_c());
    g_cpu.R[0] = _r_08009AF2;
    g_cpu.R[15] = 0x08009AF4u;
    runtime_tick(_cyc_08009AF2);
    /* 08009AF4  08009af4 T ldrsh r1,[r4,+r0] */
    g_cpu.R[15] = 0x08009AF4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009AF4 = 1u;
    _cyc_08009AF4 = 2u;
    uint32_t _base_08009AF4 = g_cpu.R[4];
    uint32_t _off_08009AF4;
    uint32_t _morm_08009AF4 = g_cpu.R[0];
    _off_08009AF4 = _morm_08009AF4;
    uint32_t _ea_08009AF4 = _base_08009AF4 + _off_08009AF4;
    uint32_t _post_08009AF4 = _base_08009AF4 + _off_08009AF4;
    _cyc_08009AF4 += runtime_mem_cycles(_ea_08009AF4, 2u, 0u);
    uint32_t _v_08009AF4;
    if (_ea_08009AF4 & 1u) _v_08009AF4 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_08009AF4);
    else _v_08009AF4 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_08009AF4);
    g_cpu.R[1] = _v_08009AF4;
    g_cpu.R[15] = 0x08009AF6u;
    runtime_tick(_cyc_08009AF4);
    /* 08009AF6  08009af6 T movs r1,r1,lsl #1 */
    g_cpu.R[15] = 0x08009AF6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009AF6 = 1u;
    _cyc_08009AF6 = 1u;
    uint32_t _rm_08009AF6 = g_cpu.R[1];
    uint32_t _op2_08009AF6;
    uint32_t _co_08009AF6;
    _op2_08009AF6 = _rm_08009AF6 << 1;
    _co_08009AF6 = (_rm_08009AF6 >> 31) & 1u;
    uint32_t _r_08009AF6;
    _r_08009AF6 = _op2_08009AF6;
    arm_set_nzc_logic(_r_08009AF6, _co_08009AF6);
    g_cpu.R[1] = _r_08009AF6;
    g_cpu.R[15] = 0x08009AF8u;
    runtime_tick(_cyc_08009AF6);
    /* 08009AF8  08009af8 T adds r1,r1,r4 */
    g_cpu.R[15] = 0x08009AF8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009AF8 = 1u;
    _cyc_08009AF8 = 1u;
    uint32_t _rm_08009AF8 = g_cpu.R[4];
    uint32_t _op2_08009AF8;
    uint32_t _co_08009AF8;
    _op2_08009AF8 = _rm_08009AF8;
    _co_08009AF8 = cpsr_c();
    uint32_t _rn_08009AF8 = g_cpu.R[1];
    uint32_t _r_08009AF8;
    _r_08009AF8 = _rn_08009AF8 + _op2_08009AF8;
    arm_set_nzcv_add(_rn_08009AF8, _op2_08009AF8, _r_08009AF8);
    g_cpu.R[1] = _r_08009AF8;
    g_cpu.R[15] = 0x08009AFAu;
    runtime_tick(_cyc_08009AF8);
    /* 08009AFA  08009afa T ldrb r0,[r1,#0x19] */
    g_cpu.R[15] = 0x08009AFAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009AFA = 1u;
    _cyc_08009AFA = 2u;
    uint32_t _base_08009AFA = g_cpu.R[1];
    uint32_t _off_08009AFA;
    _off_08009AFA = 0x00000019u;
    uint32_t _ea_08009AFA = _base_08009AFA + _off_08009AFA;
    uint32_t _post_08009AFA = _base_08009AFA + _off_08009AFA;
    _cyc_08009AFA += runtime_mem_cycles(_ea_08009AFA, 1u, 0u);
    uint32_t _v_08009AFA;
    _v_08009AFA = bus_read_u8(_ea_08009AFA);
    g_cpu.R[0] = _v_08009AFA;
    g_cpu.R[15] = 0x08009AFCu;
    runtime_tick(_cyc_08009AFA);
    /* 08009AFC  08009afc T adds r0,r0,#0x1 */
    g_cpu.R[15] = 0x08009AFCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009AFC = 1u;
    _cyc_08009AFC = 1u;
    uint32_t _rn_08009AFC = g_cpu.R[0];
    uint32_t _r_08009AFC;
    _r_08009AFC = _rn_08009AFC + 0x00000001u;
    arm_set_nzcv_add(_rn_08009AFC, 0x00000001u, _r_08009AFC);
    g_cpu.R[0] = _r_08009AFC;
    g_cpu.R[15] = 0x08009AFEu;
    runtime_tick(_cyc_08009AFC);
    /* 08009AFE  08009afe T strb r0,[r1,#0x19] */
    g_cpu.R[15] = 0x08009AFEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009AFE = 1u;
    _cyc_08009AFE = 1u;
    uint32_t _base_08009AFE = g_cpu.R[1];
    uint32_t _off_08009AFE;
    _off_08009AFE = 0x00000019u;
    uint32_t _ea_08009AFE = _base_08009AFE + _off_08009AFE;
    uint32_t _post_08009AFE = _base_08009AFE + _off_08009AFE;
    _cyc_08009AFE += runtime_mem_cycles(_ea_08009AFE, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009AFEu, _ea_08009AFE, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08009AFE, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08009B00u;
    runtime_tick(_cyc_08009AFE);
    /* 08009B00  08009b00 T movs r0,#0x22 */
    g_cpu.R[15] = 0x08009B00u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B00 = 1u;
    _cyc_08009B00 = 1u;
    uint32_t _r_08009B00;
    _r_08009B00 = 0x00000022u;
    arm_set_nzc_logic(_r_08009B00, cpsr_c());
    g_cpu.R[0] = _r_08009B00;
    g_cpu.R[15] = 0x08009B02u;
    runtime_tick(_cyc_08009B00);
    /* 08009B02  08009b02 T ldrsh r1,[r4,+r0] */
    g_cpu.R[15] = 0x08009B02u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B02 = 1u;
    _cyc_08009B02 = 2u;
    uint32_t _base_08009B02 = g_cpu.R[4];
    uint32_t _off_08009B02;
    uint32_t _morm_08009B02 = g_cpu.R[0];
    _off_08009B02 = _morm_08009B02;
    uint32_t _ea_08009B02 = _base_08009B02 + _off_08009B02;
    uint32_t _post_08009B02 = _base_08009B02 + _off_08009B02;
    _cyc_08009B02 += runtime_mem_cycles(_ea_08009B02, 2u, 0u);
    uint32_t _v_08009B02;
    if (_ea_08009B02 & 1u) _v_08009B02 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_08009B02);
    else _v_08009B02 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_08009B02);
    g_cpu.R[1] = _v_08009B02;
    g_cpu.R[15] = 0x08009B04u;
    runtime_tick(_cyc_08009B02);
    /* 08009B04  08009b04 T movs r1,r1,lsl #1 */
    g_cpu.R[15] = 0x08009B04u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B04 = 1u;
    _cyc_08009B04 = 1u;
    uint32_t _rm_08009B04 = g_cpu.R[1];
    uint32_t _op2_08009B04;
    uint32_t _co_08009B04;
    _op2_08009B04 = _rm_08009B04 << 1;
    _co_08009B04 = (_rm_08009B04 >> 31) & 1u;
    uint32_t _r_08009B04;
    _r_08009B04 = _op2_08009B04;
    arm_set_nzc_logic(_r_08009B04, _co_08009B04);
    g_cpu.R[1] = _r_08009B04;
    g_cpu.R[15] = 0x08009B06u;
    runtime_tick(_cyc_08009B04);
    /* 08009B06  08009b06 T adds r0,r4,#0x0 */
    g_cpu.R[15] = 0x08009B06u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B06 = 1u;
    _cyc_08009B06 = 1u;
    uint32_t _rn_08009B06 = g_cpu.R[4];
    uint32_t _r_08009B06;
    _r_08009B06 = _rn_08009B06 + 0x00000000u;
    arm_set_nzcv_add(_rn_08009B06, 0x00000000u, _r_08009B06);
    g_cpu.R[0] = _r_08009B06;
    g_cpu.R[15] = 0x08009B08u;
    runtime_tick(_cyc_08009B06);
    /* 08009B08  08009b08 T adds r0,r0,#0x18 */
    g_cpu.R[15] = 0x08009B08u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B08 = 1u;
    _cyc_08009B08 = 1u;
    uint32_t _rn_08009B08 = g_cpu.R[0];
    uint32_t _r_08009B08;
    _r_08009B08 = _rn_08009B08 + 0x00000018u;
    arm_set_nzcv_add(_rn_08009B08, 0x00000018u, _r_08009B08);
    g_cpu.R[0] = _r_08009B08;
    g_cpu.R[15] = 0x08009B0Au;
    runtime_tick(_cyc_08009B08);
    /* 08009B0A  08009b0a T adds r0,r0,r1 */
    g_cpu.R[15] = 0x08009B0Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B0A = 1u;
    _cyc_08009B0A = 1u;
    uint32_t _rm_08009B0A = g_cpu.R[1];
    uint32_t _op2_08009B0A;
    uint32_t _co_08009B0A;
    _op2_08009B0A = _rm_08009B0A;
    _co_08009B0A = cpsr_c();
    uint32_t _rn_08009B0A = g_cpu.R[0];
    uint32_t _r_08009B0A;
    _r_08009B0A = _rn_08009B0A + _op2_08009B0A;
    arm_set_nzcv_add(_rn_08009B0A, _op2_08009B0A, _r_08009B0A);
    g_cpu.R[0] = _r_08009B0A;
    g_cpu.R[15] = 0x08009B0Cu;
    runtime_tick(_cyc_08009B0A);
    /* 08009B0C  08009b0c T ldrb r0,[r0] */
    g_cpu.R[15] = 0x08009B0Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B0C = 1u;
    _cyc_08009B0C = 2u;
    uint32_t _base_08009B0C = g_cpu.R[0];
    uint32_t _off_08009B0C;
    _off_08009B0C = 0x00000000u;
    uint32_t _ea_08009B0C = _base_08009B0C + _off_08009B0C;
    uint32_t _post_08009B0C = _base_08009B0C + _off_08009B0C;
    _cyc_08009B0C += runtime_mem_cycles(_ea_08009B0C, 1u, 0u);
    uint32_t _v_08009B0C;
    _v_08009B0C = bus_read_u8(_ea_08009B0C);
    g_cpu.R[0] = _v_08009B0C;
    g_cpu.R[15] = 0x08009B0Eu;
    runtime_tick(_cyc_08009B0C);
    /* 08009B0E  08009b0e T ldr r1,[r4,#0x14] */
    g_cpu.R[15] = 0x08009B0Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B0E = 1u;
    _cyc_08009B0E = 2u;
    uint32_t _base_08009B0E = g_cpu.R[4];
    uint32_t _off_08009B0E;
    _off_08009B0E = 0x00000014u;
    uint32_t _ea_08009B0E = _base_08009B0E + _off_08009B0E;
    uint32_t _post_08009B0E = _base_08009B0E + _off_08009B0E;
    _cyc_08009B0E += runtime_mem_cycles(_ea_08009B0E, 4u, 0u);
    uint32_t _v_08009B0E;
    { uint32_t _w = bus_read_u32(_ea_08009B0E & ~3u); uint32_t _rot = (_ea_08009B0E & 3u) * 8u; _v_08009B0E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08009B0E;
    g_cpu.R[15] = 0x08009B10u;
    runtime_tick(_cyc_08009B0E);
    /* 08009B10  08009b10 T movs r0,r0,lsl #2 */
    g_cpu.R[15] = 0x08009B10u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B10 = 1u;
    _cyc_08009B10 = 1u;
    uint32_t _rm_08009B10 = g_cpu.R[0];
    uint32_t _op2_08009B10;
    uint32_t _co_08009B10;
    _op2_08009B10 = _rm_08009B10 << 2;
    _co_08009B10 = (_rm_08009B10 >> 30) & 1u;
    uint32_t _r_08009B10;
    _r_08009B10 = _op2_08009B10;
    arm_set_nzc_logic(_r_08009B10, _co_08009B10);
    g_cpu.R[0] = _r_08009B10;
    g_cpu.R[15] = 0x08009B12u;
    runtime_tick(_cyc_08009B10);
    /* 08009B12  08009b12 T adds r0,r0,r1 */
    g_cpu.R[15] = 0x08009B12u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B12 = 1u;
    _cyc_08009B12 = 1u;
    uint32_t _rm_08009B12 = g_cpu.R[1];
    uint32_t _op2_08009B12;
    uint32_t _co_08009B12;
    _op2_08009B12 = _rm_08009B12;
    _co_08009B12 = cpsr_c();
    uint32_t _rn_08009B12 = g_cpu.R[0];
    uint32_t _r_08009B12;
    _r_08009B12 = _rn_08009B12 + _op2_08009B12;
    arm_set_nzcv_add(_rn_08009B12, _op2_08009B12, _r_08009B12);
    g_cpu.R[0] = _r_08009B12;
    g_cpu.R[15] = 0x08009B14u;
    runtime_tick(_cyc_08009B12);
    /* 08009B14  08009b14 T ldr r1,[r0] */
    g_cpu.R[15] = 0x08009B14u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B14 = 1u;
    _cyc_08009B14 = 2u;
    uint32_t _base_08009B14 = g_cpu.R[0];
    uint32_t _off_08009B14;
    _off_08009B14 = 0x00000000u;
    uint32_t _ea_08009B14 = _base_08009B14 + _off_08009B14;
    uint32_t _post_08009B14 = _base_08009B14 + _off_08009B14;
    _cyc_08009B14 += runtime_mem_cycles(_ea_08009B14, 4u, 0u);
    uint32_t _v_08009B14;
    { uint32_t _w = bus_read_u32(_ea_08009B14 & ~3u); uint32_t _rot = (_ea_08009B14 & 3u) * 8u; _v_08009B14 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08009B14;
    g_cpu.R[15] = 0x08009B16u;
    runtime_tick(_cyc_08009B14);
    /* 08009B16  08009b16 T adds r0,r4,#0x0 */
    g_cpu.R[15] = 0x08009B16u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B16 = 1u;
    _cyc_08009B16 = 1u;
    uint32_t _rn_08009B16 = g_cpu.R[4];
    uint32_t _r_08009B16;
    _r_08009B16 = _rn_08009B16 + 0x00000000u;
    arm_set_nzcv_add(_rn_08009B16, 0x00000000u, _r_08009B16);
    g_cpu.R[0] = _r_08009B16;
    g_cpu.R[15] = 0x08009B18u;
    runtime_tick(_cyc_08009B16);
    /* 08009B18  08009b18 T bl.hi 0x080c2b1c */
    g_cpu.R[15] = 0x08009B18u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B18 = 1u;
    _cyc_08009B18 = 1u;
    g_cpu.R[14] = 0x080C2B1Cu;
    g_cpu.R[15] = 0x08009B1Au;
    runtime_tick(_cyc_08009B18);
    /* 08009B1A  08009b1a T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08009B1Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B1A = 1u;
    _cyc_08009B1A = 3u;
    uint32_t _blt_08009B1A = (g_cpu.R[14] + 0x000006C4u) & ~1u;
    g_cpu.R[14] = 0x08009B1Du;
    g_cpu.R[15] = _blt_08009B1A;
    runtime_call_push_return(0x08009B1Cu);
    runtime_tick(_cyc_08009B1A);
    _cyc_08009B1A = 0u;
    runtime_dispatch(_blt_08009B1A);
    if (g_cpu.R[15] != 0x08009B1Cu) { runtime_call_cancel_return(0x08009B1Cu); return; }
    g_cpu.R[15] = 0x08009B1Cu;
    runtime_tick(_cyc_08009B1A);
    /* fall-through to 0x08009B1C */
    g_cpu.R[15] = 0x08009B1Cu;
    runtime_dispatch(0x08009B1Cu);
    return;
}

/* 0x08009B34  mode=thumb  end=0x08009B3C  branches=2 */


/* 0x08009B1C thumb */
void gf_tfunc_08009B1C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009B1Cu);
    /* 08009B1C  08009b1c T ldrh r0,[r4,#0x22] */
    g_cpu.R[15] = 0x08009B1Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B1C = 1u;
    _cyc_08009B1C = 2u;
    uint32_t _base_08009B1C = g_cpu.R[4];
    uint32_t _off_08009B1C;
    _off_08009B1C = 0x00000022u;
    uint32_t _ea_08009B1C = _base_08009B1C + _off_08009B1C;
    uint32_t _post_08009B1C = _base_08009B1C + _off_08009B1C;
    _cyc_08009B1C += runtime_mem_cycles(_ea_08009B1C, 2u, 0u);
    uint32_t _v_08009B1C;
    { uint32_t _h = bus_read_u16(_ea_08009B1C & ~1u); if (_ea_08009B1C & 1u) _v_08009B1C = ((_h >> 8) | (_h << 24)); else _v_08009B1C = _h; }
    g_cpu.R[0] = _v_08009B1C;
    g_cpu.R[15] = 0x08009B1Eu;
    runtime_tick(_cyc_08009B1C);
    /* 08009B1E  08009b1e T subs r0,r0,#0x1 */
    g_cpu.R[15] = 0x08009B1Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B1E = 1u;
    _cyc_08009B1E = 1u;
    uint32_t _rn_08009B1E = g_cpu.R[0];
    uint32_t _r_08009B1E;
    _r_08009B1E = _rn_08009B1E - 0x00000001u;
    arm_set_nzcv_sub(_rn_08009B1E, 0x00000001u, _r_08009B1E);
    g_cpu.R[0] = _r_08009B1E;
    g_cpu.R[15] = 0x08009B20u;
    runtime_tick(_cyc_08009B1E);
    /* 08009B20  08009b20 T strh r0,[r4,#0x22] */
    g_cpu.R[15] = 0x08009B20u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B20 = 1u;
    _cyc_08009B20 = 1u;
    uint32_t _base_08009B20 = g_cpu.R[4];
    uint32_t _off_08009B20;
    _off_08009B20 = 0x00000022u;
    uint32_t _ea_08009B20 = _base_08009B20 + _off_08009B20;
    uint32_t _post_08009B20 = _base_08009B20 + _off_08009B20;
    _cyc_08009B20 += runtime_mem_cycles(_ea_08009B20, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009B20u, _ea_08009B20 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08009B20 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08009B22u;
    runtime_tick(_cyc_08009B20);
    /* 08009B22  08009b22 T ldm r13!,{r4} */
    g_cpu.R[15] = 0x08009B22u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B22 = 1u;
    _cyc_08009B22 = 2u;
    uint32_t _b_08009B22 = g_cpu.R[13];
    uint32_t _a_08009B22 = _b_08009B22;
    uint32_t _fb_08009B22 = _b_08009B22 + 4u;
    _cyc_08009B22 += runtime_mem_cycles(_a_08009B22 & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_08009B22 & ~3u);
    _a_08009B22 += 4u;
    g_cpu.R[13] = _fb_08009B22;
    g_cpu.R[15] = 0x08009B24u;
    runtime_tick(_cyc_08009B22);
    /* 08009B24  08009b24 T ldm r13!,{r0} */
    g_cpu.R[15] = 0x08009B24u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B24 = 1u;
    _cyc_08009B24 = 2u;
    uint32_t _b_08009B24 = g_cpu.R[13];
    uint32_t _a_08009B24 = _b_08009B24;
    uint32_t _fb_08009B24 = _b_08009B24 + 4u;
    _cyc_08009B24 += runtime_mem_cycles(_a_08009B24 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_08009B24 & ~3u);
    _a_08009B24 += 4u;
    g_cpu.R[13] = _fb_08009B24;
    g_cpu.R[15] = 0x08009B26u;
    runtime_tick(_cyc_08009B24);
    /* 08009B26  08009b26 T bx r0 */
    g_cpu.R[15] = 0x08009B26u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B26 = 1u;
    _cyc_08009B26 = 3u;
    uint32_t _bxt_08009B26 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_08009B26 & ~1u;
    if (_bxt_08009B26 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_08009B26);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_08009B26);
    g_cpu.R[15] = 0x08009B28u;
    runtime_tick(_cyc_08009B26);
    /* fall-through to 0x08009B28 */
    g_cpu.R[15] = 0x08009B28u;
    runtime_dispatch(0x08009B28u);
    return;
}

/* 0x08009B2C  mode=thumb  end=0x08009B34  branches=4 */


/* 0x08009B2C thumb */
void gf_tfunc_08009B2C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009B2Cu);
    /* 08009B2C  08009b2c T stm r13!,{r4,r5,r14} */
    g_cpu.R[15] = 0x08009B2Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B2C = 1u;
    _cyc_08009B2C = 1u;
    uint32_t _b_08009B2C = g_cpu.R[13];
    uint32_t _a_08009B2C = _b_08009B2C - 12u;
    uint32_t _fb_08009B2C = _b_08009B2C - 12u;
    _cyc_08009B2C += runtime_mem_cycles(_a_08009B2C & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009B2Cu, _a_08009B2C & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_08009B2C & ~3u, g_cpu.R[4]);
    _a_08009B2C += 4u;
    _cyc_08009B2C += runtime_mem_cycles(_a_08009B2C & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009B2Cu, _a_08009B2C & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_08009B2C & ~3u, g_cpu.R[5]);
    _a_08009B2C += 4u;
    _cyc_08009B2C += runtime_mem_cycles(_a_08009B2C & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009B2Cu, _a_08009B2C & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_08009B2C & ~3u, g_cpu.R[14]);
    _a_08009B2C += 4u;
    g_cpu.R[13] = _fb_08009B2C;
    g_cpu.R[15] = 0x08009B2Eu;
    runtime_tick(_cyc_08009B2C);
    /* 08009B2E  08009b2e T adds r5,r0,#0x0 */
    g_cpu.R[15] = 0x08009B2Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B2E = 1u;
    _cyc_08009B2E = 1u;
    uint32_t _rn_08009B2E = g_cpu.R[0];
    uint32_t _r_08009B2E;
    _r_08009B2E = _rn_08009B2E + 0x00000000u;
    arm_set_nzcv_add(_rn_08009B2E, 0x00000000u, _r_08009B2E);
    g_cpu.R[5] = _r_08009B2E;
    g_cpu.R[15] = 0x08009B30u;
    runtime_tick(_cyc_08009B2E);
    /* 08009B30  08009b30 T bl.hi 0x08002b34 */
    g_cpu.R[15] = 0x08009B30u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B30 = 1u;
    _cyc_08009B30 = 1u;
    g_cpu.R[14] = 0x08002B34u;
    g_cpu.R[15] = 0x08009B32u;
    runtime_tick(_cyc_08009B30);
    /* 08009B32  08009b32 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08009B32u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B32 = 1u;
    _cyc_08009B32 = 3u;
    uint32_t _blt_08009B32 = (g_cpu.R[14] + 0x00000A28u) & ~1u;
    g_cpu.R[14] = 0x08009B35u;
    g_cpu.R[15] = _blt_08009B32;
    runtime_call_push_return(0x08009B34u);
    runtime_tick(_cyc_08009B32);
    _cyc_08009B32 = 0u;
    runtime_dispatch(_blt_08009B32);
    if (g_cpu.R[15] != 0x08009B34u) { runtime_call_cancel_return(0x08009B34u); return; }
    g_cpu.R[15] = 0x08009B34u;
    runtime_tick(_cyc_08009B32);
    /* fall-through to 0x08009B34 */
    g_cpu.R[15] = 0x08009B34u;
    runtime_dispatch(0x08009B34u);
    return;
}

/* 0x08009B3C  mode=thumb  end=0x08009B58  branches=3 */


/* 0x08009B34 thumb */
void gf_tfunc_08009B34(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009B34u);
    /* 08009B34  08009b34 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x08009B34u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B34 = 1u;
    _cyc_08009B34 = 1u;
    uint32_t _rn_08009B34 = g_cpu.R[0];
    uint32_t _r_08009B34;
    _r_08009B34 = _rn_08009B34 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08009B34, 0x00000000u, _r_08009B34);
    g_cpu.R[15] = 0x08009B36u;
    runtime_tick(_cyc_08009B34);
    /* 08009B36  08009b36 T bne 0x08009b3c */
    g_cpu.R[15] = 0x08009B36u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B36 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08009B36 = 3u;
        g_cpu.R[15] = 0x08009B3Cu;
        runtime_tick(_cyc_08009B36);
        GBARECOMP_TAIL_CALL(gf_tfunc_08009B3C);
    }
    g_cpu.R[15] = 0x08009B38u;
    runtime_tick(_cyc_08009B36);
    /* 08009B38  08009b38 T ldr r1,[r5,#0x24] */
    g_cpu.R[15] = 0x08009B38u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B38 = 1u;
    _cyc_08009B38 = 2u;
    uint32_t _base_08009B38 = g_cpu.R[5];
    uint32_t _off_08009B38;
    _off_08009B38 = 0x00000024u;
    uint32_t _ea_08009B38 = _base_08009B38 + _off_08009B38;
    uint32_t _post_08009B38 = _base_08009B38 + _off_08009B38;
    _cyc_08009B38 += runtime_mem_cycles(_ea_08009B38, 4u, 0u);
    uint32_t _v_08009B38;
    { uint32_t _w = bus_read_u32(_ea_08009B38 & ~3u); uint32_t _rot = (_ea_08009B38 & 3u) * 8u; _v_08009B38 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08009B38;
    g_cpu.R[15] = 0x08009B3Au;
    runtime_tick(_cyc_08009B38);
    /* 08009B3A  08009b3a T b 0x08009b96 */
    g_cpu.R[15] = 0x08009B3Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B3A = 1u;
    _cyc_08009B3A = 3u;
    g_cpu.R[15] = 0x08009B96u;
    runtime_tick(_cyc_08009B3A);
    GBARECOMP_TAIL_CALL(gf_tfunc_08009B96);
    g_cpu.R[15] = 0x08009B3Cu;
    runtime_tick(_cyc_08009B3A);
    /* fall-through to 0x08009B3C */
    g_cpu.R[15] = 0x08009B3Cu;
    runtime_dispatch(0x08009B3Cu);
    return;
}

/* 0x08009B58  mode=thumb  end=0x08009B76  branches=5 */


/* 0x08009B3C thumb */
void gf_tfunc_08009B3C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009B3Cu);
    /* 08009B3C  08009b3c T str r0,[r5,#0x38] */
    g_cpu.R[15] = 0x08009B3Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B3C = 1u;
    _cyc_08009B3C = 1u;
    uint32_t _base_08009B3C = g_cpu.R[5];
    uint32_t _off_08009B3C;
    _off_08009B3C = 0x00000038u;
    uint32_t _ea_08009B3C = _base_08009B3C + _off_08009B3C;
    uint32_t _post_08009B3C = _base_08009B3C + _off_08009B3C;
    _cyc_08009B3C += runtime_mem_cycles(_ea_08009B3C, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009B3Cu, _ea_08009B3C & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08009B3C & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08009B3Eu;
    runtime_tick(_cyc_08009B3C);
    /* 08009B3E  08009b3e T movs r1,#0x0 */
    g_cpu.R[15] = 0x08009B3Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B3E = 1u;
    _cyc_08009B3E = 1u;
    uint32_t _r_08009B3E;
    _r_08009B3E = 0x00000000u;
    arm_set_nzc_logic(_r_08009B3E, cpsr_c());
    g_cpu.R[1] = _r_08009B3E;
    g_cpu.R[15] = 0x08009B40u;
    runtime_tick(_cyc_08009B3E);
    /* 08009B40  08009b40 T str r1,[r0,#0x18] */
    g_cpu.R[15] = 0x08009B40u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B40 = 1u;
    _cyc_08009B40 = 1u;
    uint32_t _base_08009B40 = g_cpu.R[0];
    uint32_t _off_08009B40;
    _off_08009B40 = 0x00000018u;
    uint32_t _ea_08009B40 = _base_08009B40 + _off_08009B40;
    uint32_t _post_08009B40 = _base_08009B40 + _off_08009B40;
    _cyc_08009B40 += runtime_mem_cycles(_ea_08009B40, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009B40u, _ea_08009B40 & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_ea_08009B40 & ~3u, g_cpu.R[1]);
    g_cpu.R[15] = 0x08009B42u;
    runtime_tick(_cyc_08009B40);
    /* 08009B42  08009b42 T str r1,[r0,#0x14] */
    g_cpu.R[15] = 0x08009B42u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B42 = 1u;
    _cyc_08009B42 = 1u;
    uint32_t _base_08009B42 = g_cpu.R[0];
    uint32_t _off_08009B42;
    _off_08009B42 = 0x00000014u;
    uint32_t _ea_08009B42 = _base_08009B42 + _off_08009B42;
    uint32_t _post_08009B42 = _base_08009B42 + _off_08009B42;
    _cyc_08009B42 += runtime_mem_cycles(_ea_08009B42, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009B42u, _ea_08009B42 & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_ea_08009B42 & ~3u, g_cpu.R[1]);
    g_cpu.R[15] = 0x08009B44u;
    runtime_tick(_cyc_08009B42);
    /* 08009B44  08009b44 T adds r0,r5,#0x0 */
    g_cpu.R[15] = 0x08009B44u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B44 = 1u;
    _cyc_08009B44 = 1u;
    uint32_t _rn_08009B44 = g_cpu.R[5];
    uint32_t _r_08009B44;
    _r_08009B44 = _rn_08009B44 + 0x00000000u;
    arm_set_nzcv_add(_rn_08009B44, 0x00000000u, _r_08009B44);
    g_cpu.R[0] = _r_08009B44;
    g_cpu.R[15] = 0x08009B46u;
    runtime_tick(_cyc_08009B44);
    /* 08009B46  08009b46 T adds r0,r0,#0x3c */
    g_cpu.R[15] = 0x08009B46u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B46 = 1u;
    _cyc_08009B46 = 1u;
    uint32_t _rn_08009B46 = g_cpu.R[0];
    uint32_t _r_08009B46;
    _r_08009B46 = _rn_08009B46 + 0x0000003Cu;
    arm_set_nzcv_add(_rn_08009B46, 0x0000003Cu, _r_08009B46);
    g_cpu.R[0] = _r_08009B46;
    g_cpu.R[15] = 0x08009B48u;
    runtime_tick(_cyc_08009B46);
    /* 08009B48  08009b48 T ldrb r0,[r0] */
    g_cpu.R[15] = 0x08009B48u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B48 = 1u;
    _cyc_08009B48 = 2u;
    uint32_t _base_08009B48 = g_cpu.R[0];
    uint32_t _off_08009B48;
    _off_08009B48 = 0x00000000u;
    uint32_t _ea_08009B48 = _base_08009B48 + _off_08009B48;
    uint32_t _post_08009B48 = _base_08009B48 + _off_08009B48;
    _cyc_08009B48 += runtime_mem_cycles(_ea_08009B48, 1u, 0u);
    uint32_t _v_08009B48;
    _v_08009B48 = bus_read_u8(_ea_08009B48);
    g_cpu.R[0] = _v_08009B48;
    g_cpu.R[15] = 0x08009B4Au;
    runtime_tick(_cyc_08009B48);
    /* 08009B4A  08009b4a T movs r0,r0,lsl #24 */
    g_cpu.R[15] = 0x08009B4Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B4A = 1u;
    _cyc_08009B4A = 1u;
    uint32_t _rm_08009B4A = g_cpu.R[0];
    uint32_t _op2_08009B4A;
    uint32_t _co_08009B4A;
    _op2_08009B4A = _rm_08009B4A << 24;
    _co_08009B4A = (_rm_08009B4A >> 8) & 1u;
    uint32_t _r_08009B4A;
    _r_08009B4A = _op2_08009B4A;
    arm_set_nzc_logic(_r_08009B4A, _co_08009B4A);
    g_cpu.R[0] = _r_08009B4A;
    g_cpu.R[15] = 0x08009B4Cu;
    runtime_tick(_cyc_08009B4A);
    /* 08009B4C  08009b4c T movs r0,r0,asr #24 */
    g_cpu.R[15] = 0x08009B4Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B4C = 1u;
    _cyc_08009B4C = 1u;
    uint32_t _rm_08009B4C = g_cpu.R[0];
    uint32_t _op2_08009B4C;
    uint32_t _co_08009B4C;
    _op2_08009B4C = (uint32_t)((int32_t)_rm_08009B4C >> 24);
    _co_08009B4C = (_rm_08009B4C >> 23) & 1u;
    uint32_t _r_08009B4C;
    _r_08009B4C = _op2_08009B4C;
    arm_set_nzc_logic(_r_08009B4C, _co_08009B4C);
    g_cpu.R[0] = _r_08009B4C;
    g_cpu.R[15] = 0x08009B4Eu;
    runtime_tick(_cyc_08009B4C);
    /* 08009B4E  08009b4e T cmps r0,#0x0 */
    g_cpu.R[15] = 0x08009B4Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B4E = 1u;
    _cyc_08009B4E = 1u;
    uint32_t _rn_08009B4E = g_cpu.R[0];
    uint32_t _r_08009B4E;
    _r_08009B4E = _rn_08009B4E - 0x00000000u;
    arm_set_nzcv_sub(_rn_08009B4E, 0x00000000u, _r_08009B4E);
    g_cpu.R[15] = 0x08009B50u;
    runtime_tick(_cyc_08009B4E);
    /* 08009B50  08009b50 T beq 0x08009b58 */
    g_cpu.R[15] = 0x08009B50u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B50 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08009B50 = 3u;
        g_cpu.R[15] = 0x08009B58u;
        runtime_tick(_cyc_08009B50);
        GBARECOMP_TAIL_CALL(gf_tfunc_08009B58);
    }
    g_cpu.R[15] = 0x08009B52u;
    runtime_tick(_cyc_08009B50);
    /* 08009B52  08009b52 T cmps r0,#0x1 */
    g_cpu.R[15] = 0x08009B52u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B52 = 1u;
    _cyc_08009B52 = 1u;
    uint32_t _rn_08009B52 = g_cpu.R[0];
    uint32_t _r_08009B52;
    _r_08009B52 = _rn_08009B52 - 0x00000001u;
    arm_set_nzcv_sub(_rn_08009B52, 0x00000001u, _r_08009B52);
    g_cpu.R[15] = 0x08009B54u;
    runtime_tick(_cyc_08009B52);
    /* 08009B54  08009b54 T beq 0x08009ba4 */
    g_cpu.R[15] = 0x08009B54u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B54 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08009B54 = 3u;
        g_cpu.R[15] = 0x08009BA4u;
        runtime_tick(_cyc_08009B54);
        GBARECOMP_TAIL_CALL(gf_tfunc_08009BA4);
    }
    g_cpu.R[15] = 0x08009B56u;
    runtime_tick(_cyc_08009B54);
    /* 08009B56  08009b56 T b 0x08009be8 */
    g_cpu.R[15] = 0x08009B56u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B56 = 1u;
    _cyc_08009B56 = 3u;
    g_cpu.R[15] = 0x08009BE8u;
    runtime_tick(_cyc_08009B56);
    GBARECOMP_TAIL_CALL(gf_tfunc_08009BE8);
    g_cpu.R[15] = 0x08009B58u;
    runtime_tick(_cyc_08009B56);
    /* fall-through to 0x08009B58 */
    g_cpu.R[15] = 0x08009B58u;
    runtime_dispatch(0x08009B58u);
    return;
}

/* 0x08009B76  mode=thumb  end=0x08009B96  branches=3 */


/* 0x08009B58 thumb */
void gf_tfunc_08009B58(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009B58u);
    /* 08009B58  08009b58 T movs r2,#0x22 */
    g_cpu.R[15] = 0x08009B58u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B58 = 1u;
    _cyc_08009B58 = 1u;
    uint32_t _r_08009B58;
    _r_08009B58 = 0x00000022u;
    arm_set_nzc_logic(_r_08009B58, cpsr_c());
    g_cpu.R[2] = _r_08009B58;
    g_cpu.R[15] = 0x08009B5Au;
    runtime_tick(_cyc_08009B58);
    /* 08009B5A  08009b5a T ldrsh r0,[r5,+r2] */
    g_cpu.R[15] = 0x08009B5Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B5A = 1u;
    _cyc_08009B5A = 2u;
    uint32_t _base_08009B5A = g_cpu.R[5];
    uint32_t _off_08009B5A;
    uint32_t _morm_08009B5A = g_cpu.R[2];
    _off_08009B5A = _morm_08009B5A;
    uint32_t _ea_08009B5A = _base_08009B5A + _off_08009B5A;
    uint32_t _post_08009B5A = _base_08009B5A + _off_08009B5A;
    _cyc_08009B5A += runtime_mem_cycles(_ea_08009B5A, 2u, 0u);
    uint32_t _v_08009B5A;
    if (_ea_08009B5A & 1u) _v_08009B5A = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_08009B5A);
    else _v_08009B5A = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_08009B5A);
    g_cpu.R[0] = _v_08009B5A;
    g_cpu.R[15] = 0x08009B5Cu;
    runtime_tick(_cyc_08009B5A);
    /* 08009B5C  08009b5c T movs r0,r0,lsl #1 */
    g_cpu.R[15] = 0x08009B5Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B5C = 1u;
    _cyc_08009B5C = 1u;
    uint32_t _rm_08009B5C = g_cpu.R[0];
    uint32_t _op2_08009B5C;
    uint32_t _co_08009B5C;
    _op2_08009B5C = _rm_08009B5C << 1;
    _co_08009B5C = (_rm_08009B5C >> 31) & 1u;
    uint32_t _r_08009B5C;
    _r_08009B5C = _op2_08009B5C;
    arm_set_nzc_logic(_r_08009B5C, _co_08009B5C);
    g_cpu.R[0] = _r_08009B5C;
    g_cpu.R[15] = 0x08009B5Eu;
    runtime_tick(_cyc_08009B5C);
    /* 08009B5E  08009b5e T adds r0,r0,r5 */
    g_cpu.R[15] = 0x08009B5Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B5E = 1u;
    _cyc_08009B5E = 1u;
    uint32_t _rm_08009B5E = g_cpu.R[5];
    uint32_t _op2_08009B5E;
    uint32_t _co_08009B5E;
    _op2_08009B5E = _rm_08009B5E;
    _co_08009B5E = cpsr_c();
    uint32_t _rn_08009B5E = g_cpu.R[0];
    uint32_t _r_08009B5E;
    _r_08009B5E = _rn_08009B5E + _op2_08009B5E;
    arm_set_nzcv_add(_rn_08009B5E, _op2_08009B5E, _r_08009B5E);
    g_cpu.R[0] = _r_08009B5E;
    g_cpu.R[15] = 0x08009B60u;
    runtime_tick(_cyc_08009B5E);
    /* 08009B60  08009b60 T strb r1,[r0,#0x19] */
    g_cpu.R[15] = 0x08009B60u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B60 = 1u;
    _cyc_08009B60 = 1u;
    uint32_t _base_08009B60 = g_cpu.R[0];
    uint32_t _off_08009B60;
    _off_08009B60 = 0x00000019u;
    uint32_t _ea_08009B60 = _base_08009B60 + _off_08009B60;
    uint32_t _post_08009B60 = _base_08009B60 + _off_08009B60;
    _cyc_08009B60 += runtime_mem_cycles(_ea_08009B60, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009B60u, _ea_08009B60, (uint32_t)(g_cpu.R[1] & 0xFFu), 1u);
    bus_write_u8(_ea_08009B60, (uint8_t)(g_cpu.R[1] & 0xFFu));
    g_cpu.R[15] = 0x08009B62u;
    runtime_tick(_cyc_08009B60);
    /* 08009B62  08009b62 T ldr r0,[r15,#0x3c] */
    g_cpu.R[15] = 0x08009B62u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B62 = 1u;
    _cyc_08009B62 = 2u;
    uint32_t _base_08009B62 = 0x08009B66u & ~3u;
    uint32_t _off_08009B62;
    _off_08009B62 = 0x0000003Cu;
    uint32_t _ea_08009B62 = _base_08009B62 + _off_08009B62;
    uint32_t _post_08009B62 = _base_08009B62 + _off_08009B62;
    _cyc_08009B62 += runtime_mem_cycles(_ea_08009B62, 4u, 0u);
    uint32_t _v_08009B62;
    { uint32_t _w = bus_read_u32(_ea_08009B62 & ~3u); uint32_t _rot = (_ea_08009B62 & 3u) * 8u; _v_08009B62 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08009B62;
    g_cpu.R[15] = 0x08009B64u;
    runtime_tick(_cyc_08009B62);
    /* 08009B64  08009b64 T adds r4,r5,#0x0 */
    g_cpu.R[15] = 0x08009B64u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B64 = 1u;
    _cyc_08009B64 = 1u;
    uint32_t _rn_08009B64 = g_cpu.R[5];
    uint32_t _r_08009B64;
    _r_08009B64 = _rn_08009B64 + 0x00000000u;
    arm_set_nzcv_add(_rn_08009B64, 0x00000000u, _r_08009B64);
    g_cpu.R[4] = _r_08009B64;
    g_cpu.R[15] = 0x08009B66u;
    runtime_tick(_cyc_08009B64);
    /* 08009B66  08009b66 T adds r4,r4,#0x18 */
    g_cpu.R[15] = 0x08009B66u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B66 = 1u;
    _cyc_08009B66 = 1u;
    uint32_t _rn_08009B66 = g_cpu.R[4];
    uint32_t _r_08009B66;
    _r_08009B66 = _rn_08009B66 + 0x00000018u;
    arm_set_nzcv_add(_rn_08009B66, 0x00000018u, _r_08009B66);
    g_cpu.R[4] = _r_08009B66;
    g_cpu.R[15] = 0x08009B68u;
    runtime_tick(_cyc_08009B66);
    /* 08009B68  08009b68 T adds r1,r5,#0x0 */
    g_cpu.R[15] = 0x08009B68u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B68 = 1u;
    _cyc_08009B68 = 1u;
    uint32_t _rn_08009B68 = g_cpu.R[5];
    uint32_t _r_08009B68;
    _r_08009B68 = _rn_08009B68 + 0x00000000u;
    arm_set_nzcv_add(_rn_08009B68, 0x00000000u, _r_08009B68);
    g_cpu.R[1] = _r_08009B68;
    g_cpu.R[15] = 0x08009B6Au;
    runtime_tick(_cyc_08009B68);
    /* 08009B6A  08009b6a T adds r1,r1,#0x22 */
    g_cpu.R[15] = 0x08009B6Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B6A = 1u;
    _cyc_08009B6A = 1u;
    uint32_t _rn_08009B6A = g_cpu.R[1];
    uint32_t _r_08009B6A;
    _r_08009B6A = _rn_08009B6A + 0x00000022u;
    arm_set_nzcv_add(_rn_08009B6A, 0x00000022u, _r_08009B6A);
    g_cpu.R[1] = _r_08009B6A;
    g_cpu.R[15] = 0x08009B6Cu;
    runtime_tick(_cyc_08009B6A);
    /* 08009B6C  08009b6c T ldr r3,[r0] */
    g_cpu.R[15] = 0x08009B6Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B6C = 1u;
    _cyc_08009B6C = 2u;
    uint32_t _base_08009B6C = g_cpu.R[0];
    uint32_t _off_08009B6C;
    _off_08009B6C = 0x00000000u;
    uint32_t _ea_08009B6C = _base_08009B6C + _off_08009B6C;
    uint32_t _post_08009B6C = _base_08009B6C + _off_08009B6C;
    _cyc_08009B6C += runtime_mem_cycles(_ea_08009B6C, 4u, 0u);
    uint32_t _v_08009B6C;
    { uint32_t _w = bus_read_u32(_ea_08009B6C & ~3u); uint32_t _rot = (_ea_08009B6C & 3u) * 8u; _v_08009B6C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08009B6C;
    g_cpu.R[15] = 0x08009B6Eu;
    runtime_tick(_cyc_08009B6C);
    /* 08009B6E  08009b6e T adds r0,r4,#0x0 */
    g_cpu.R[15] = 0x08009B6Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B6E = 1u;
    _cyc_08009B6E = 1u;
    uint32_t _rn_08009B6E = g_cpu.R[4];
    uint32_t _r_08009B6E;
    _r_08009B6E = _rn_08009B6E + 0x00000000u;
    arm_set_nzcv_add(_rn_08009B6E, 0x00000000u, _r_08009B6E);
    g_cpu.R[0] = _r_08009B6E;
    g_cpu.R[15] = 0x08009B70u;
    runtime_tick(_cyc_08009B6E);
    /* 08009B70  08009b70 T movs r2,#0x1 */
    g_cpu.R[15] = 0x08009B70u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B70 = 1u;
    _cyc_08009B70 = 1u;
    uint32_t _r_08009B70;
    _r_08009B70 = 0x00000001u;
    arm_set_nzc_logic(_r_08009B70, cpsr_c());
    g_cpu.R[2] = _r_08009B70;
    g_cpu.R[15] = 0x08009B72u;
    runtime_tick(_cyc_08009B70);
    /* 08009B72  08009b72 T bl.hi 0x080c2b76 */
    g_cpu.R[15] = 0x08009B72u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B72 = 1u;
    _cyc_08009B72 = 1u;
    g_cpu.R[14] = 0x080C2B76u;
    g_cpu.R[15] = 0x08009B74u;
    runtime_tick(_cyc_08009B72);
    /* 08009B74  08009b74 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08009B74u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B74 = 1u;
    _cyc_08009B74 = 3u;
    uint32_t _blt_08009B74 = (g_cpu.R[14] + 0x00000672u) & ~1u;
    g_cpu.R[14] = 0x08009B77u;
    g_cpu.R[15] = _blt_08009B74;
    runtime_call_push_return(0x08009B76u);
    runtime_tick(_cyc_08009B74);
    _cyc_08009B74 = 0u;
    runtime_dispatch(_blt_08009B74);
    if (g_cpu.R[15] != 0x08009B76u) { runtime_call_cancel_return(0x08009B76u); return; }
    g_cpu.R[15] = 0x08009B76u;
    runtime_tick(_cyc_08009B74);
    /* fall-through to 0x08009B76 */
    g_cpu.R[15] = 0x08009B76u;
    runtime_dispatch(0x08009B76u);
    return;
}

/* 0x08009B96  mode=thumb  end=0x08009B9C  branches=3 */


/* 0x08009B76 thumb */
void gf_tfunc_08009B76(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009B76u);
    /* 08009B76  08009b76 T movs r0,#0x22 */
    g_cpu.R[15] = 0x08009B76u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B76 = 1u;
    _cyc_08009B76 = 1u;
    uint32_t _r_08009B76;
    _r_08009B76 = 0x00000022u;
    arm_set_nzc_logic(_r_08009B76, cpsr_c());
    g_cpu.R[0] = _r_08009B76;
    g_cpu.R[15] = 0x08009B78u;
    runtime_tick(_cyc_08009B76);
    /* 08009B78  08009b78 T ldrsh r1,[r5,+r0] */
    g_cpu.R[15] = 0x08009B78u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B78 = 1u;
    _cyc_08009B78 = 2u;
    uint32_t _base_08009B78 = g_cpu.R[5];
    uint32_t _off_08009B78;
    uint32_t _morm_08009B78 = g_cpu.R[0];
    _off_08009B78 = _morm_08009B78;
    uint32_t _ea_08009B78 = _base_08009B78 + _off_08009B78;
    uint32_t _post_08009B78 = _base_08009B78 + _off_08009B78;
    _cyc_08009B78 += runtime_mem_cycles(_ea_08009B78, 2u, 0u);
    uint32_t _v_08009B78;
    if (_ea_08009B78 & 1u) _v_08009B78 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_08009B78);
    else _v_08009B78 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_08009B78);
    g_cpu.R[1] = _v_08009B78;
    g_cpu.R[15] = 0x08009B7Au;
    runtime_tick(_cyc_08009B78);
    /* 08009B7A  08009b7a T movs r1,r1,lsl #1 */
    g_cpu.R[15] = 0x08009B7Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B7A = 1u;
    _cyc_08009B7A = 1u;
    uint32_t _rm_08009B7A = g_cpu.R[1];
    uint32_t _op2_08009B7A;
    uint32_t _co_08009B7A;
    _op2_08009B7A = _rm_08009B7A << 1;
    _co_08009B7A = (_rm_08009B7A >> 31) & 1u;
    uint32_t _r_08009B7A;
    _r_08009B7A = _op2_08009B7A;
    arm_set_nzc_logic(_r_08009B7A, _co_08009B7A);
    g_cpu.R[1] = _r_08009B7A;
    g_cpu.R[15] = 0x08009B7Cu;
    runtime_tick(_cyc_08009B7A);
    /* 08009B7C  08009b7c T adds r1,r1,r5 */
    g_cpu.R[15] = 0x08009B7Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B7C = 1u;
    _cyc_08009B7C = 1u;
    uint32_t _rm_08009B7C = g_cpu.R[5];
    uint32_t _op2_08009B7C;
    uint32_t _co_08009B7C;
    _op2_08009B7C = _rm_08009B7C;
    _co_08009B7C = cpsr_c();
    uint32_t _rn_08009B7C = g_cpu.R[1];
    uint32_t _r_08009B7C;
    _r_08009B7C = _rn_08009B7C + _op2_08009B7C;
    arm_set_nzcv_add(_rn_08009B7C, _op2_08009B7C, _r_08009B7C);
    g_cpu.R[1] = _r_08009B7C;
    g_cpu.R[15] = 0x08009B7Eu;
    runtime_tick(_cyc_08009B7C);
    /* 08009B7E  08009b7e T ldrb r0,[r1,#0x19] */
    g_cpu.R[15] = 0x08009B7Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B7E = 1u;
    _cyc_08009B7E = 2u;
    uint32_t _base_08009B7E = g_cpu.R[1];
    uint32_t _off_08009B7E;
    _off_08009B7E = 0x00000019u;
    uint32_t _ea_08009B7E = _base_08009B7E + _off_08009B7E;
    uint32_t _post_08009B7E = _base_08009B7E + _off_08009B7E;
    _cyc_08009B7E += runtime_mem_cycles(_ea_08009B7E, 1u, 0u);
    uint32_t _v_08009B7E;
    _v_08009B7E = bus_read_u8(_ea_08009B7E);
    g_cpu.R[0] = _v_08009B7E;
    g_cpu.R[15] = 0x08009B80u;
    runtime_tick(_cyc_08009B7E);
    /* 08009B80  08009b80 T adds r0,r0,#0x1 */
    g_cpu.R[15] = 0x08009B80u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B80 = 1u;
    _cyc_08009B80 = 1u;
    uint32_t _rn_08009B80 = g_cpu.R[0];
    uint32_t _r_08009B80;
    _r_08009B80 = _rn_08009B80 + 0x00000001u;
    arm_set_nzcv_add(_rn_08009B80, 0x00000001u, _r_08009B80);
    g_cpu.R[0] = _r_08009B80;
    g_cpu.R[15] = 0x08009B82u;
    runtime_tick(_cyc_08009B80);
    /* 08009B82  08009b82 T strb r0,[r1,#0x19] */
    g_cpu.R[15] = 0x08009B82u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B82 = 1u;
    _cyc_08009B82 = 1u;
    uint32_t _base_08009B82 = g_cpu.R[1];
    uint32_t _off_08009B82;
    _off_08009B82 = 0x00000019u;
    uint32_t _ea_08009B82 = _base_08009B82 + _off_08009B82;
    uint32_t _post_08009B82 = _base_08009B82 + _off_08009B82;
    _cyc_08009B82 += runtime_mem_cycles(_ea_08009B82, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009B82u, _ea_08009B82, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08009B82, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08009B84u;
    runtime_tick(_cyc_08009B82);
    /* 08009B84  08009b84 T movs r1,#0x22 */
    g_cpu.R[15] = 0x08009B84u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B84 = 1u;
    _cyc_08009B84 = 1u;
    uint32_t _r_08009B84;
    _r_08009B84 = 0x00000022u;
    arm_set_nzc_logic(_r_08009B84, cpsr_c());
    g_cpu.R[1] = _r_08009B84;
    g_cpu.R[15] = 0x08009B86u;
    runtime_tick(_cyc_08009B84);
    /* 08009B86  08009b86 T ldrsh r0,[r5,+r1] */
    g_cpu.R[15] = 0x08009B86u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B86 = 1u;
    _cyc_08009B86 = 2u;
    uint32_t _base_08009B86 = g_cpu.R[5];
    uint32_t _off_08009B86;
    uint32_t _morm_08009B86 = g_cpu.R[1];
    _off_08009B86 = _morm_08009B86;
    uint32_t _ea_08009B86 = _base_08009B86 + _off_08009B86;
    uint32_t _post_08009B86 = _base_08009B86 + _off_08009B86;
    _cyc_08009B86 += runtime_mem_cycles(_ea_08009B86, 2u, 0u);
    uint32_t _v_08009B86;
    if (_ea_08009B86 & 1u) _v_08009B86 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_08009B86);
    else _v_08009B86 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_08009B86);
    g_cpu.R[0] = _v_08009B86;
    g_cpu.R[15] = 0x08009B88u;
    runtime_tick(_cyc_08009B86);
    /* 08009B88  08009b88 T movs r0,r0,lsl #1 */
    g_cpu.R[15] = 0x08009B88u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B88 = 1u;
    _cyc_08009B88 = 1u;
    uint32_t _rm_08009B88 = g_cpu.R[0];
    uint32_t _op2_08009B88;
    uint32_t _co_08009B88;
    _op2_08009B88 = _rm_08009B88 << 1;
    _co_08009B88 = (_rm_08009B88 >> 31) & 1u;
    uint32_t _r_08009B88;
    _r_08009B88 = _op2_08009B88;
    arm_set_nzc_logic(_r_08009B88, _co_08009B88);
    g_cpu.R[0] = _r_08009B88;
    g_cpu.R[15] = 0x08009B8Au;
    runtime_tick(_cyc_08009B88);
    /* 08009B8A  08009b8a T adds r4,r4,r0 */
    g_cpu.R[15] = 0x08009B8Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B8A = 1u;
    _cyc_08009B8A = 1u;
    uint32_t _rm_08009B8A = g_cpu.R[0];
    uint32_t _op2_08009B8A;
    uint32_t _co_08009B8A;
    _op2_08009B8A = _rm_08009B8A;
    _co_08009B8A = cpsr_c();
    uint32_t _rn_08009B8A = g_cpu.R[4];
    uint32_t _r_08009B8A;
    _r_08009B8A = _rn_08009B8A + _op2_08009B8A;
    arm_set_nzcv_add(_rn_08009B8A, _op2_08009B8A, _r_08009B8A);
    g_cpu.R[4] = _r_08009B8A;
    g_cpu.R[15] = 0x08009B8Cu;
    runtime_tick(_cyc_08009B8A);
    /* 08009B8C  08009b8c T ldrb r0,[r4] */
    g_cpu.R[15] = 0x08009B8Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B8C = 1u;
    _cyc_08009B8C = 2u;
    uint32_t _base_08009B8C = g_cpu.R[4];
    uint32_t _off_08009B8C;
    _off_08009B8C = 0x00000000u;
    uint32_t _ea_08009B8C = _base_08009B8C + _off_08009B8C;
    uint32_t _post_08009B8C = _base_08009B8C + _off_08009B8C;
    _cyc_08009B8C += runtime_mem_cycles(_ea_08009B8C, 1u, 0u);
    uint32_t _v_08009B8C;
    _v_08009B8C = bus_read_u8(_ea_08009B8C);
    g_cpu.R[0] = _v_08009B8C;
    g_cpu.R[15] = 0x08009B8Eu;
    runtime_tick(_cyc_08009B8C);
    /* 08009B8E  08009b8e T ldr r1,[r5,#0x14] */
    g_cpu.R[15] = 0x08009B8Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B8E = 1u;
    _cyc_08009B8E = 2u;
    uint32_t _base_08009B8E = g_cpu.R[5];
    uint32_t _off_08009B8E;
    _off_08009B8E = 0x00000014u;
    uint32_t _ea_08009B8E = _base_08009B8E + _off_08009B8E;
    uint32_t _post_08009B8E = _base_08009B8E + _off_08009B8E;
    _cyc_08009B8E += runtime_mem_cycles(_ea_08009B8E, 4u, 0u);
    uint32_t _v_08009B8E;
    { uint32_t _w = bus_read_u32(_ea_08009B8E & ~3u); uint32_t _rot = (_ea_08009B8E & 3u) * 8u; _v_08009B8E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08009B8E;
    g_cpu.R[15] = 0x08009B90u;
    runtime_tick(_cyc_08009B8E);
    /* 08009B90  08009b90 T movs r0,r0,lsl #2 */
    g_cpu.R[15] = 0x08009B90u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B90 = 1u;
    _cyc_08009B90 = 1u;
    uint32_t _rm_08009B90 = g_cpu.R[0];
    uint32_t _op2_08009B90;
    uint32_t _co_08009B90;
    _op2_08009B90 = _rm_08009B90 << 2;
    _co_08009B90 = (_rm_08009B90 >> 30) & 1u;
    uint32_t _r_08009B90;
    _r_08009B90 = _op2_08009B90;
    arm_set_nzc_logic(_r_08009B90, _co_08009B90);
    g_cpu.R[0] = _r_08009B90;
    g_cpu.R[15] = 0x08009B92u;
    runtime_tick(_cyc_08009B90);
    /* 08009B92  08009b92 T adds r0,r0,r1 */
    g_cpu.R[15] = 0x08009B92u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B92 = 1u;
    _cyc_08009B92 = 1u;
    uint32_t _rm_08009B92 = g_cpu.R[1];
    uint32_t _op2_08009B92;
    uint32_t _co_08009B92;
    _op2_08009B92 = _rm_08009B92;
    _co_08009B92 = cpsr_c();
    uint32_t _rn_08009B92 = g_cpu.R[0];
    uint32_t _r_08009B92;
    _r_08009B92 = _rn_08009B92 + _op2_08009B92;
    arm_set_nzcv_add(_rn_08009B92, _op2_08009B92, _r_08009B92);
    g_cpu.R[0] = _r_08009B92;
    g_cpu.R[15] = 0x08009B94u;
    runtime_tick(_cyc_08009B92);
    /* 08009B94  08009b94 T ldr r1,[r0] */
    g_cpu.R[15] = 0x08009B94u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B94 = 1u;
    _cyc_08009B94 = 2u;
    uint32_t _base_08009B94 = g_cpu.R[0];
    uint32_t _off_08009B94;
    _off_08009B94 = 0x00000000u;
    uint32_t _ea_08009B94 = _base_08009B94 + _off_08009B94;
    uint32_t _post_08009B94 = _base_08009B94 + _off_08009B94;
    _cyc_08009B94 += runtime_mem_cycles(_ea_08009B94, 4u, 0u);
    uint32_t _v_08009B94;
    { uint32_t _w = bus_read_u32(_ea_08009B94 & ~3u); uint32_t _rot = (_ea_08009B94 & 3u) * 8u; _v_08009B94 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08009B94;
    g_cpu.R[15] = 0x08009B96u;
    runtime_tick(_cyc_08009B94);
    /* fall-through to 0x08009B96 */
    g_cpu.R[15] = 0x08009B96u;
    runtime_dispatch(0x08009B96u);
    return;
}

/* 0x08009BA4  mode=thumb  end=0x08009BC2  branches=4  indirect */


/* 0x08009B96 thumb */
void gf_tfunc_08009B96(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009B96u);
    /* 08009B96  08009b96 T adds r0,r5,#0x0 */
    g_cpu.R[15] = 0x08009B96u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B96 = 1u;
    _cyc_08009B96 = 1u;
    uint32_t _rn_08009B96 = g_cpu.R[5];
    uint32_t _r_08009B96;
    _r_08009B96 = _rn_08009B96 + 0x00000000u;
    arm_set_nzcv_add(_rn_08009B96, 0x00000000u, _r_08009B96);
    g_cpu.R[0] = _r_08009B96;
    g_cpu.R[15] = 0x08009B98u;
    runtime_tick(_cyc_08009B96);
    /* 08009B98  08009b98 T bl.hi 0x080c2b9c */
    g_cpu.R[15] = 0x08009B98u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B98 = 1u;
    _cyc_08009B98 = 1u;
    g_cpu.R[14] = 0x080C2B9Cu;
    g_cpu.R[15] = 0x08009B9Au;
    runtime_tick(_cyc_08009B98);
    /* 08009B9A  08009b9a T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08009B9Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B9A = 1u;
    _cyc_08009B9A = 3u;
    uint32_t _blt_08009B9A = (g_cpu.R[14] + 0x00000644u) & ~1u;
    g_cpu.R[14] = 0x08009B9Du;
    g_cpu.R[15] = _blt_08009B9A;
    runtime_call_push_return(0x08009B9Cu);
    runtime_tick(_cyc_08009B9A);
    _cyc_08009B9A = 0u;
    runtime_dispatch(_blt_08009B9A);
    if (g_cpu.R[15] != 0x08009B9Cu) { runtime_call_cancel_return(0x08009B9Cu); return; }
    g_cpu.R[15] = 0x08009B9Cu;
    runtime_tick(_cyc_08009B9A);
    /* fall-through to 0x08009B9C */
    g_cpu.R[15] = 0x08009B9Cu;
    runtime_dispatch(0x08009B9Cu);
    return;
}

/* 0x08009B9C  mode=thumb  end=0x08009B9E  branches=1 */


/* 0x08009B9C thumb */
void gf_tfunc_08009B9C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009B9Cu);
    /* 08009B9C  08009b9c T b 0x08009be8 */
    g_cpu.R[15] = 0x08009B9Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009B9C = 1u;
    _cyc_08009B9C = 3u;
    g_cpu.R[15] = 0x08009BE8u;
    runtime_tick(_cyc_08009B9C);
    GBARECOMP_TAIL_CALL(gf_tfunc_08009BE8);
    g_cpu.R[15] = 0x08009B9Eu;
    runtime_tick(_cyc_08009B9C);
    /* fall-through to 0x08009B9E */
    g_cpu.R[15] = 0x08009B9Eu;
    runtime_dispatch(0x08009B9Eu);
    return;
}

/* 0x08009C4E  mode=thumb  end=0x08009C54  branches=0  indirect */


/* 0x08009BA4 thumb */
void gf_tfunc_08009BA4(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009BA4u);
    /* 08009BA4  08009ba4 T movs r2,#0x22 */
    g_cpu.R[15] = 0x08009BA4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BA4 = 1u;
    _cyc_08009BA4 = 1u;
    uint32_t _r_08009BA4;
    _r_08009BA4 = 0x00000022u;
    arm_set_nzc_logic(_r_08009BA4, cpsr_c());
    g_cpu.R[2] = _r_08009BA4;
    g_cpu.R[15] = 0x08009BA6u;
    runtime_tick(_cyc_08009BA4);
    /* 08009BA6  08009ba6 T ldrsh r0,[r5,+r2] */
    g_cpu.R[15] = 0x08009BA6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BA6 = 1u;
    _cyc_08009BA6 = 2u;
    uint32_t _base_08009BA6 = g_cpu.R[5];
    uint32_t _off_08009BA6;
    uint32_t _morm_08009BA6 = g_cpu.R[2];
    _off_08009BA6 = _morm_08009BA6;
    uint32_t _ea_08009BA6 = _base_08009BA6 + _off_08009BA6;
    uint32_t _post_08009BA6 = _base_08009BA6 + _off_08009BA6;
    _cyc_08009BA6 += runtime_mem_cycles(_ea_08009BA6, 2u, 0u);
    uint32_t _v_08009BA6;
    if (_ea_08009BA6 & 1u) _v_08009BA6 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_08009BA6);
    else _v_08009BA6 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_08009BA6);
    g_cpu.R[0] = _v_08009BA6;
    g_cpu.R[15] = 0x08009BA8u;
    runtime_tick(_cyc_08009BA6);
    /* 08009BA8  08009ba8 T movs r0,r0,lsl #1 */
    g_cpu.R[15] = 0x08009BA8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BA8 = 1u;
    _cyc_08009BA8 = 1u;
    uint32_t _rm_08009BA8 = g_cpu.R[0];
    uint32_t _op2_08009BA8;
    uint32_t _co_08009BA8;
    _op2_08009BA8 = _rm_08009BA8 << 1;
    _co_08009BA8 = (_rm_08009BA8 >> 31) & 1u;
    uint32_t _r_08009BA8;
    _r_08009BA8 = _op2_08009BA8;
    arm_set_nzc_logic(_r_08009BA8, _co_08009BA8);
    g_cpu.R[0] = _r_08009BA8;
    g_cpu.R[15] = 0x08009BAAu;
    runtime_tick(_cyc_08009BA8);
    /* 08009BAA  08009baa T adds r0,r0,r5 */
    g_cpu.R[15] = 0x08009BAAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BAA = 1u;
    _cyc_08009BAA = 1u;
    uint32_t _rm_08009BAA = g_cpu.R[5];
    uint32_t _op2_08009BAA;
    uint32_t _co_08009BAA;
    _op2_08009BAA = _rm_08009BAA;
    _co_08009BAA = cpsr_c();
    uint32_t _rn_08009BAA = g_cpu.R[0];
    uint32_t _r_08009BAA;
    _r_08009BAA = _rn_08009BAA + _op2_08009BAA;
    arm_set_nzcv_add(_rn_08009BAA, _op2_08009BAA, _r_08009BAA);
    g_cpu.R[0] = _r_08009BAA;
    g_cpu.R[15] = 0x08009BACu;
    runtime_tick(_cyc_08009BAA);
    /* 08009BAC  08009bac T strb r1,[r0,#0x19] */
    g_cpu.R[15] = 0x08009BACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BAC = 1u;
    _cyc_08009BAC = 1u;
    uint32_t _base_08009BAC = g_cpu.R[0];
    uint32_t _off_08009BAC;
    _off_08009BAC = 0x00000019u;
    uint32_t _ea_08009BAC = _base_08009BAC + _off_08009BAC;
    uint32_t _post_08009BAC = _base_08009BAC + _off_08009BAC;
    _cyc_08009BAC += runtime_mem_cycles(_ea_08009BAC, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009BACu, _ea_08009BAC, (uint32_t)(g_cpu.R[1] & 0xFFu), 1u);
    bus_write_u8(_ea_08009BAC, (uint8_t)(g_cpu.R[1] & 0xFFu));
    g_cpu.R[15] = 0x08009BAEu;
    runtime_tick(_cyc_08009BAC);
    /* 08009BAE  08009bae T ldr r0,[r15,#0x40] */
    g_cpu.R[15] = 0x08009BAEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BAE = 1u;
    _cyc_08009BAE = 2u;
    uint32_t _base_08009BAE = 0x08009BB2u & ~3u;
    uint32_t _off_08009BAE;
    _off_08009BAE = 0x00000040u;
    uint32_t _ea_08009BAE = _base_08009BAE + _off_08009BAE;
    uint32_t _post_08009BAE = _base_08009BAE + _off_08009BAE;
    _cyc_08009BAE += runtime_mem_cycles(_ea_08009BAE, 4u, 0u);
    uint32_t _v_08009BAE;
    { uint32_t _w = bus_read_u32(_ea_08009BAE & ~3u); uint32_t _rot = (_ea_08009BAE & 3u) * 8u; _v_08009BAE = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08009BAE;
    g_cpu.R[15] = 0x08009BB0u;
    runtime_tick(_cyc_08009BAE);
    /* 08009BB0  08009bb0 T adds r4,r5,#0x0 */
    g_cpu.R[15] = 0x08009BB0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BB0 = 1u;
    _cyc_08009BB0 = 1u;
    uint32_t _rn_08009BB0 = g_cpu.R[5];
    uint32_t _r_08009BB0;
    _r_08009BB0 = _rn_08009BB0 + 0x00000000u;
    arm_set_nzcv_add(_rn_08009BB0, 0x00000000u, _r_08009BB0);
    g_cpu.R[4] = _r_08009BB0;
    g_cpu.R[15] = 0x08009BB2u;
    runtime_tick(_cyc_08009BB0);
    /* 08009BB2  08009bb2 T adds r4,r4,#0x18 */
    g_cpu.R[15] = 0x08009BB2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BB2 = 1u;
    _cyc_08009BB2 = 1u;
    uint32_t _rn_08009BB2 = g_cpu.R[4];
    uint32_t _r_08009BB2;
    _r_08009BB2 = _rn_08009BB2 + 0x00000018u;
    arm_set_nzcv_add(_rn_08009BB2, 0x00000018u, _r_08009BB2);
    g_cpu.R[4] = _r_08009BB2;
    g_cpu.R[15] = 0x08009BB4u;
    runtime_tick(_cyc_08009BB2);
    /* 08009BB4  08009bb4 T adds r1,r5,#0x0 */
    g_cpu.R[15] = 0x08009BB4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BB4 = 1u;
    _cyc_08009BB4 = 1u;
    uint32_t _rn_08009BB4 = g_cpu.R[5];
    uint32_t _r_08009BB4;
    _r_08009BB4 = _rn_08009BB4 + 0x00000000u;
    arm_set_nzcv_add(_rn_08009BB4, 0x00000000u, _r_08009BB4);
    g_cpu.R[1] = _r_08009BB4;
    g_cpu.R[15] = 0x08009BB6u;
    runtime_tick(_cyc_08009BB4);
    /* 08009BB6  08009bb6 T adds r1,r1,#0x22 */
    g_cpu.R[15] = 0x08009BB6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BB6 = 1u;
    _cyc_08009BB6 = 1u;
    uint32_t _rn_08009BB6 = g_cpu.R[1];
    uint32_t _r_08009BB6;
    _r_08009BB6 = _rn_08009BB6 + 0x00000022u;
    arm_set_nzcv_add(_rn_08009BB6, 0x00000022u, _r_08009BB6);
    g_cpu.R[1] = _r_08009BB6;
    g_cpu.R[15] = 0x08009BB8u;
    runtime_tick(_cyc_08009BB6);
    /* 08009BB8  08009bb8 T ldr r3,[r0] */
    g_cpu.R[15] = 0x08009BB8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BB8 = 1u;
    _cyc_08009BB8 = 2u;
    uint32_t _base_08009BB8 = g_cpu.R[0];
    uint32_t _off_08009BB8;
    _off_08009BB8 = 0x00000000u;
    uint32_t _ea_08009BB8 = _base_08009BB8 + _off_08009BB8;
    uint32_t _post_08009BB8 = _base_08009BB8 + _off_08009BB8;
    _cyc_08009BB8 += runtime_mem_cycles(_ea_08009BB8, 4u, 0u);
    uint32_t _v_08009BB8;
    { uint32_t _w = bus_read_u32(_ea_08009BB8 & ~3u); uint32_t _rot = (_ea_08009BB8 & 3u) * 8u; _v_08009BB8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08009BB8;
    g_cpu.R[15] = 0x08009BBAu;
    runtime_tick(_cyc_08009BB8);
    /* 08009BBA  08009bba T adds r0,r4,#0x0 */
    g_cpu.R[15] = 0x08009BBAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BBA = 1u;
    _cyc_08009BBA = 1u;
    uint32_t _rn_08009BBA = g_cpu.R[4];
    uint32_t _r_08009BBA;
    _r_08009BBA = _rn_08009BBA + 0x00000000u;
    arm_set_nzcv_add(_rn_08009BBA, 0x00000000u, _r_08009BBA);
    g_cpu.R[0] = _r_08009BBA;
    g_cpu.R[15] = 0x08009BBCu;
    runtime_tick(_cyc_08009BBA);
    /* 08009BBC  08009bbc T movs r2,#0x3 */
    g_cpu.R[15] = 0x08009BBCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BBC = 1u;
    _cyc_08009BBC = 1u;
    uint32_t _r_08009BBC;
    _r_08009BBC = 0x00000003u;
    arm_set_nzc_logic(_r_08009BBC, cpsr_c());
    g_cpu.R[2] = _r_08009BBC;
    g_cpu.R[15] = 0x08009BBEu;
    runtime_tick(_cyc_08009BBC);
    /* 08009BBE  08009bbe T bl.hi 0x080c2bc2 */
    g_cpu.R[15] = 0x08009BBEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BBE = 1u;
    _cyc_08009BBE = 1u;
    g_cpu.R[14] = 0x080C2BC2u;
    g_cpu.R[15] = 0x08009BC0u;
    runtime_tick(_cyc_08009BBE);
    /* 08009BC0  08009bc0 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08009BC0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BC0 = 1u;
    _cyc_08009BC0 = 3u;
    uint32_t _blt_08009BC0 = (g_cpu.R[14] + 0x00000626u) & ~1u;
    g_cpu.R[14] = 0x08009BC3u;
    g_cpu.R[15] = _blt_08009BC0;
    runtime_call_push_return(0x08009BC2u);
    runtime_tick(_cyc_08009BC0);
    _cyc_08009BC0 = 0u;
    runtime_dispatch(_blt_08009BC0);
    if (g_cpu.R[15] != 0x08009BC2u) { runtime_call_cancel_return(0x08009BC2u); return; }
    g_cpu.R[15] = 0x08009BC2u;
    runtime_tick(_cyc_08009BC0);
    /* fall-through to 0x08009BC2 */
    g_cpu.R[15] = 0x08009BC2u;
    runtime_dispatch(0x08009BC2u);
    return;
}

/* 0x08009BC2  mode=thumb  end=0x08009BE8  branches=2  indirect */


/* 0x08009BC2 thumb */
void gf_tfunc_08009BC2(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009BC2u);
    /* 08009BC2  08009bc2 T movs r0,#0x22 */
    g_cpu.R[15] = 0x08009BC2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BC2 = 1u;
    _cyc_08009BC2 = 1u;
    uint32_t _r_08009BC2;
    _r_08009BC2 = 0x00000022u;
    arm_set_nzc_logic(_r_08009BC2, cpsr_c());
    g_cpu.R[0] = _r_08009BC2;
    g_cpu.R[15] = 0x08009BC4u;
    runtime_tick(_cyc_08009BC2);
    /* 08009BC4  08009bc4 T ldrsh r1,[r5,+r0] */
    g_cpu.R[15] = 0x08009BC4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BC4 = 1u;
    _cyc_08009BC4 = 2u;
    uint32_t _base_08009BC4 = g_cpu.R[5];
    uint32_t _off_08009BC4;
    uint32_t _morm_08009BC4 = g_cpu.R[0];
    _off_08009BC4 = _morm_08009BC4;
    uint32_t _ea_08009BC4 = _base_08009BC4 + _off_08009BC4;
    uint32_t _post_08009BC4 = _base_08009BC4 + _off_08009BC4;
    _cyc_08009BC4 += runtime_mem_cycles(_ea_08009BC4, 2u, 0u);
    uint32_t _v_08009BC4;
    if (_ea_08009BC4 & 1u) _v_08009BC4 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_08009BC4);
    else _v_08009BC4 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_08009BC4);
    g_cpu.R[1] = _v_08009BC4;
    g_cpu.R[15] = 0x08009BC6u;
    runtime_tick(_cyc_08009BC4);
    /* 08009BC6  08009bc6 T movs r1,r1,lsl #1 */
    g_cpu.R[15] = 0x08009BC6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BC6 = 1u;
    _cyc_08009BC6 = 1u;
    uint32_t _rm_08009BC6 = g_cpu.R[1];
    uint32_t _op2_08009BC6;
    uint32_t _co_08009BC6;
    _op2_08009BC6 = _rm_08009BC6 << 1;
    _co_08009BC6 = (_rm_08009BC6 >> 31) & 1u;
    uint32_t _r_08009BC6;
    _r_08009BC6 = _op2_08009BC6;
    arm_set_nzc_logic(_r_08009BC6, _co_08009BC6);
    g_cpu.R[1] = _r_08009BC6;
    g_cpu.R[15] = 0x08009BC8u;
    runtime_tick(_cyc_08009BC6);
    /* 08009BC8  08009bc8 T adds r1,r1,r5 */
    g_cpu.R[15] = 0x08009BC8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BC8 = 1u;
    _cyc_08009BC8 = 1u;
    uint32_t _rm_08009BC8 = g_cpu.R[5];
    uint32_t _op2_08009BC8;
    uint32_t _co_08009BC8;
    _op2_08009BC8 = _rm_08009BC8;
    _co_08009BC8 = cpsr_c();
    uint32_t _rn_08009BC8 = g_cpu.R[1];
    uint32_t _r_08009BC8;
    _r_08009BC8 = _rn_08009BC8 + _op2_08009BC8;
    arm_set_nzcv_add(_rn_08009BC8, _op2_08009BC8, _r_08009BC8);
    g_cpu.R[1] = _r_08009BC8;
    g_cpu.R[15] = 0x08009BCAu;
    runtime_tick(_cyc_08009BC8);
    /* 08009BCA  08009bca T ldrb r0,[r1,#0x19] */
    g_cpu.R[15] = 0x08009BCAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BCA = 1u;
    _cyc_08009BCA = 2u;
    uint32_t _base_08009BCA = g_cpu.R[1];
    uint32_t _off_08009BCA;
    _off_08009BCA = 0x00000019u;
    uint32_t _ea_08009BCA = _base_08009BCA + _off_08009BCA;
    uint32_t _post_08009BCA = _base_08009BCA + _off_08009BCA;
    _cyc_08009BCA += runtime_mem_cycles(_ea_08009BCA, 1u, 0u);
    uint32_t _v_08009BCA;
    _v_08009BCA = bus_read_u8(_ea_08009BCA);
    g_cpu.R[0] = _v_08009BCA;
    g_cpu.R[15] = 0x08009BCCu;
    runtime_tick(_cyc_08009BCA);
    /* 08009BCC  08009bcc T adds r0,r0,#0x1 */
    g_cpu.R[15] = 0x08009BCCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BCC = 1u;
    _cyc_08009BCC = 1u;
    uint32_t _rn_08009BCC = g_cpu.R[0];
    uint32_t _r_08009BCC;
    _r_08009BCC = _rn_08009BCC + 0x00000001u;
    arm_set_nzcv_add(_rn_08009BCC, 0x00000001u, _r_08009BCC);
    g_cpu.R[0] = _r_08009BCC;
    g_cpu.R[15] = 0x08009BCEu;
    runtime_tick(_cyc_08009BCC);
    /* 08009BCE  08009bce T strb r0,[r1,#0x19] */
    g_cpu.R[15] = 0x08009BCEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BCE = 1u;
    _cyc_08009BCE = 1u;
    uint32_t _base_08009BCE = g_cpu.R[1];
    uint32_t _off_08009BCE;
    _off_08009BCE = 0x00000019u;
    uint32_t _ea_08009BCE = _base_08009BCE + _off_08009BCE;
    uint32_t _post_08009BCE = _base_08009BCE + _off_08009BCE;
    _cyc_08009BCE += runtime_mem_cycles(_ea_08009BCE, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009BCEu, _ea_08009BCE, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08009BCE, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08009BD0u;
    runtime_tick(_cyc_08009BCE);
    /* 08009BD0  08009bd0 T movs r1,#0x22 */
    g_cpu.R[15] = 0x08009BD0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BD0 = 1u;
    _cyc_08009BD0 = 1u;
    uint32_t _r_08009BD0;
    _r_08009BD0 = 0x00000022u;
    arm_set_nzc_logic(_r_08009BD0, cpsr_c());
    g_cpu.R[1] = _r_08009BD0;
    g_cpu.R[15] = 0x08009BD2u;
    runtime_tick(_cyc_08009BD0);
    /* 08009BD2  08009bd2 T ldrsh r0,[r5,+r1] */
    g_cpu.R[15] = 0x08009BD2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BD2 = 1u;
    _cyc_08009BD2 = 2u;
    uint32_t _base_08009BD2 = g_cpu.R[5];
    uint32_t _off_08009BD2;
    uint32_t _morm_08009BD2 = g_cpu.R[1];
    _off_08009BD2 = _morm_08009BD2;
    uint32_t _ea_08009BD2 = _base_08009BD2 + _off_08009BD2;
    uint32_t _post_08009BD2 = _base_08009BD2 + _off_08009BD2;
    _cyc_08009BD2 += runtime_mem_cycles(_ea_08009BD2, 2u, 0u);
    uint32_t _v_08009BD2;
    if (_ea_08009BD2 & 1u) _v_08009BD2 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_08009BD2);
    else _v_08009BD2 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_08009BD2);
    g_cpu.R[0] = _v_08009BD2;
    g_cpu.R[15] = 0x08009BD4u;
    runtime_tick(_cyc_08009BD2);
    /* 08009BD4  08009bd4 T movs r0,r0,lsl #1 */
    g_cpu.R[15] = 0x08009BD4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BD4 = 1u;
    _cyc_08009BD4 = 1u;
    uint32_t _rm_08009BD4 = g_cpu.R[0];
    uint32_t _op2_08009BD4;
    uint32_t _co_08009BD4;
    _op2_08009BD4 = _rm_08009BD4 << 1;
    _co_08009BD4 = (_rm_08009BD4 >> 31) & 1u;
    uint32_t _r_08009BD4;
    _r_08009BD4 = _op2_08009BD4;
    arm_set_nzc_logic(_r_08009BD4, _co_08009BD4);
    g_cpu.R[0] = _r_08009BD4;
    g_cpu.R[15] = 0x08009BD6u;
    runtime_tick(_cyc_08009BD4);
    /* 08009BD6  08009bd6 T adds r4,r4,r0 */
    g_cpu.R[15] = 0x08009BD6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BD6 = 1u;
    _cyc_08009BD6 = 1u;
    uint32_t _rm_08009BD6 = g_cpu.R[0];
    uint32_t _op2_08009BD6;
    uint32_t _co_08009BD6;
    _op2_08009BD6 = _rm_08009BD6;
    _co_08009BD6 = cpsr_c();
    uint32_t _rn_08009BD6 = g_cpu.R[4];
    uint32_t _r_08009BD6;
    _r_08009BD6 = _rn_08009BD6 + _op2_08009BD6;
    arm_set_nzcv_add(_rn_08009BD6, _op2_08009BD6, _r_08009BD6);
    g_cpu.R[4] = _r_08009BD6;
    g_cpu.R[15] = 0x08009BD8u;
    runtime_tick(_cyc_08009BD6);
    /* 08009BD8  08009bd8 T ldrb r0,[r4] */
    g_cpu.R[15] = 0x08009BD8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BD8 = 1u;
    _cyc_08009BD8 = 2u;
    uint32_t _base_08009BD8 = g_cpu.R[4];
    uint32_t _off_08009BD8;
    _off_08009BD8 = 0x00000000u;
    uint32_t _ea_08009BD8 = _base_08009BD8 + _off_08009BD8;
    uint32_t _post_08009BD8 = _base_08009BD8 + _off_08009BD8;
    _cyc_08009BD8 += runtime_mem_cycles(_ea_08009BD8, 1u, 0u);
    uint32_t _v_08009BD8;
    _v_08009BD8 = bus_read_u8(_ea_08009BD8);
    g_cpu.R[0] = _v_08009BD8;
    g_cpu.R[15] = 0x08009BDAu;
    runtime_tick(_cyc_08009BD8);
    /* 08009BDA  08009bda T ldr r1,[r5,#0x14] */
    g_cpu.R[15] = 0x08009BDAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BDA = 1u;
    _cyc_08009BDA = 2u;
    uint32_t _base_08009BDA = g_cpu.R[5];
    uint32_t _off_08009BDA;
    _off_08009BDA = 0x00000014u;
    uint32_t _ea_08009BDA = _base_08009BDA + _off_08009BDA;
    uint32_t _post_08009BDA = _base_08009BDA + _off_08009BDA;
    _cyc_08009BDA += runtime_mem_cycles(_ea_08009BDA, 4u, 0u);
    uint32_t _v_08009BDA;
    { uint32_t _w = bus_read_u32(_ea_08009BDA & ~3u); uint32_t _rot = (_ea_08009BDA & 3u) * 8u; _v_08009BDA = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08009BDA;
    g_cpu.R[15] = 0x08009BDCu;
    runtime_tick(_cyc_08009BDA);
    /* 08009BDC  08009bdc T movs r0,r0,lsl #2 */
    g_cpu.R[15] = 0x08009BDCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BDC = 1u;
    _cyc_08009BDC = 1u;
    uint32_t _rm_08009BDC = g_cpu.R[0];
    uint32_t _op2_08009BDC;
    uint32_t _co_08009BDC;
    _op2_08009BDC = _rm_08009BDC << 2;
    _co_08009BDC = (_rm_08009BDC >> 30) & 1u;
    uint32_t _r_08009BDC;
    _r_08009BDC = _op2_08009BDC;
    arm_set_nzc_logic(_r_08009BDC, _co_08009BDC);
    g_cpu.R[0] = _r_08009BDC;
    g_cpu.R[15] = 0x08009BDEu;
    runtime_tick(_cyc_08009BDC);
    /* 08009BDE  08009bde T adds r0,r0,r1 */
    g_cpu.R[15] = 0x08009BDEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BDE = 1u;
    _cyc_08009BDE = 1u;
    uint32_t _rm_08009BDE = g_cpu.R[1];
    uint32_t _op2_08009BDE;
    uint32_t _co_08009BDE;
    _op2_08009BDE = _rm_08009BDE;
    _co_08009BDE = cpsr_c();
    uint32_t _rn_08009BDE = g_cpu.R[0];
    uint32_t _r_08009BDE;
    _r_08009BDE = _rn_08009BDE + _op2_08009BDE;
    arm_set_nzcv_add(_rn_08009BDE, _op2_08009BDE, _r_08009BDE);
    g_cpu.R[0] = _r_08009BDE;
    g_cpu.R[15] = 0x08009BE0u;
    runtime_tick(_cyc_08009BDE);
    /* 08009BE0  08009be0 T ldr r1,[r0] */
    g_cpu.R[15] = 0x08009BE0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BE0 = 1u;
    _cyc_08009BE0 = 2u;
    uint32_t _base_08009BE0 = g_cpu.R[0];
    uint32_t _off_08009BE0;
    _off_08009BE0 = 0x00000000u;
    uint32_t _ea_08009BE0 = _base_08009BE0 + _off_08009BE0;
    uint32_t _post_08009BE0 = _base_08009BE0 + _off_08009BE0;
    _cyc_08009BE0 += runtime_mem_cycles(_ea_08009BE0, 4u, 0u);
    uint32_t _v_08009BE0;
    { uint32_t _w = bus_read_u32(_ea_08009BE0 & ~3u); uint32_t _rot = (_ea_08009BE0 & 3u) * 8u; _v_08009BE0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08009BE0;
    g_cpu.R[15] = 0x08009BE2u;
    runtime_tick(_cyc_08009BE0);
    /* 08009BE2  08009be2 T adds r0,r5,#0x0 */
    g_cpu.R[15] = 0x08009BE2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BE2 = 1u;
    _cyc_08009BE2 = 1u;
    uint32_t _rn_08009BE2 = g_cpu.R[5];
    uint32_t _r_08009BE2;
    _r_08009BE2 = _rn_08009BE2 + 0x00000000u;
    arm_set_nzcv_add(_rn_08009BE2, 0x00000000u, _r_08009BE2);
    g_cpu.R[0] = _r_08009BE2;
    g_cpu.R[15] = 0x08009BE4u;
    runtime_tick(_cyc_08009BE2);
    /* 08009BE4  08009be4 T bl.hi 0x080c2be8 */
    g_cpu.R[15] = 0x08009BE4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BE4 = 1u;
    _cyc_08009BE4 = 1u;
    g_cpu.R[14] = 0x080C2BE8u;
    g_cpu.R[15] = 0x08009BE6u;
    runtime_tick(_cyc_08009BE4);
    /* 08009BE6  08009be6 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08009BE6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BE6 = 1u;
    _cyc_08009BE6 = 3u;
    uint32_t _blt_08009BE6 = (g_cpu.R[14] + 0x000005F8u) & ~1u;
    g_cpu.R[14] = 0x08009BE9u;
    g_cpu.R[15] = _blt_08009BE6;
    runtime_call_push_return(0x08009BE8u);
    runtime_tick(_cyc_08009BE6);
    _cyc_08009BE6 = 0u;
    runtime_dispatch(_blt_08009BE6);
    if (g_cpu.R[15] != 0x08009BE8u) { runtime_call_cancel_return(0x08009BE8u); return; }
    g_cpu.R[15] = 0x08009BE8u;
    runtime_tick(_cyc_08009BE6);
    /* fall-through to 0x08009BE8 */
    g_cpu.R[15] = 0x08009BE8u;
    runtime_dispatch(0x08009BE8u);
    return;
}

/* 0x08009BE8  mode=thumb  end=0x08009BEE  branches=0  indirect */


/* 0x08009BE8 thumb */
void gf_tfunc_08009BE8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009BE8u);
    /* 08009BE8  08009be8 T ldm r13!,{r4,r5} */
    g_cpu.R[15] = 0x08009BE8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BE8 = 1u;
    _cyc_08009BE8 = 2u;
    uint32_t _b_08009BE8 = g_cpu.R[13];
    uint32_t _a_08009BE8 = _b_08009BE8;
    uint32_t _fb_08009BE8 = _b_08009BE8 + 8u;
    _cyc_08009BE8 += runtime_mem_cycles(_a_08009BE8 & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_08009BE8 & ~3u);
    _a_08009BE8 += 4u;
    _cyc_08009BE8 += runtime_mem_cycles(_a_08009BE8 & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_08009BE8 & ~3u);
    _a_08009BE8 += 4u;
    g_cpu.R[13] = _fb_08009BE8;
    g_cpu.R[15] = 0x08009BEAu;
    runtime_tick(_cyc_08009BE8);
    /* 08009BEA  08009bea T ldm r13!,{r0} */
    g_cpu.R[15] = 0x08009BEAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BEA = 1u;
    _cyc_08009BEA = 2u;
    uint32_t _b_08009BEA = g_cpu.R[13];
    uint32_t _a_08009BEA = _b_08009BEA;
    uint32_t _fb_08009BEA = _b_08009BEA + 4u;
    _cyc_08009BEA += runtime_mem_cycles(_a_08009BEA & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_08009BEA & ~3u);
    _a_08009BEA += 4u;
    g_cpu.R[13] = _fb_08009BEA;
    g_cpu.R[15] = 0x08009BECu;
    runtime_tick(_cyc_08009BEA);
    /* 08009BEC  08009bec T bx r0 */
    g_cpu.R[15] = 0x08009BECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BEC = 1u;
    _cyc_08009BEC = 3u;
    uint32_t _bxt_08009BEC = g_cpu.R[0];
    g_cpu.R[15] = _bxt_08009BEC & ~1u;
    if (_bxt_08009BEC & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_08009BEC);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_08009BEC);
    g_cpu.R[15] = 0x08009BEEu;
    runtime_tick(_cyc_08009BEC);
    /* fall-through to 0x08009BEE */
    g_cpu.R[15] = 0x08009BEEu;
    runtime_dispatch(0x08009BEEu);
    return;
}

/* 0x08009BF4  mode=thumb  end=0x08009C28  branches=4  indirect */


/* 0x08009BF4 thumb */
void gf_tfunc_08009BF4(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009BF4u);
    /* 08009BF4  08009bf4 T stm r13!,{r4,r5,r14} */
    g_cpu.R[15] = 0x08009BF4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BF4 = 1u;
    _cyc_08009BF4 = 1u;
    uint32_t _b_08009BF4 = g_cpu.R[13];
    uint32_t _a_08009BF4 = _b_08009BF4 - 12u;
    uint32_t _fb_08009BF4 = _b_08009BF4 - 12u;
    _cyc_08009BF4 += runtime_mem_cycles(_a_08009BF4 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009BF4u, _a_08009BF4 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_08009BF4 & ~3u, g_cpu.R[4]);
    _a_08009BF4 += 4u;
    _cyc_08009BF4 += runtime_mem_cycles(_a_08009BF4 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009BF4u, _a_08009BF4 & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_08009BF4 & ~3u, g_cpu.R[5]);
    _a_08009BF4 += 4u;
    _cyc_08009BF4 += runtime_mem_cycles(_a_08009BF4 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009BF4u, _a_08009BF4 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_08009BF4 & ~3u, g_cpu.R[14]);
    _a_08009BF4 += 4u;
    g_cpu.R[13] = _fb_08009BF4;
    g_cpu.R[15] = 0x08009BF6u;
    runtime_tick(_cyc_08009BF4);
    /* 08009BF6  08009bf6 T adds r4,r0,#0x0 */
    g_cpu.R[15] = 0x08009BF6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BF6 = 1u;
    _cyc_08009BF6 = 1u;
    uint32_t _rn_08009BF6 = g_cpu.R[0];
    uint32_t _r_08009BF6;
    _r_08009BF6 = _rn_08009BF6 + 0x00000000u;
    arm_set_nzcv_add(_rn_08009BF6, 0x00000000u, _r_08009BF6);
    g_cpu.R[4] = _r_08009BF6;
    g_cpu.R[15] = 0x08009BF8u;
    runtime_tick(_cyc_08009BF6);
    /* 08009BF8  08009bf8 T ldr r1,[r4,#0x38] */
    g_cpu.R[15] = 0x08009BF8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BF8 = 1u;
    _cyc_08009BF8 = 2u;
    uint32_t _base_08009BF8 = g_cpu.R[4];
    uint32_t _off_08009BF8;
    _off_08009BF8 = 0x00000038u;
    uint32_t _ea_08009BF8 = _base_08009BF8 + _off_08009BF8;
    uint32_t _post_08009BF8 = _base_08009BF8 + _off_08009BF8;
    _cyc_08009BF8 += runtime_mem_cycles(_ea_08009BF8, 4u, 0u);
    uint32_t _v_08009BF8;
    { uint32_t _w = bus_read_u32(_ea_08009BF8 & ~3u); uint32_t _rot = (_ea_08009BF8 & 3u) * 8u; _v_08009BF8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08009BF8;
    g_cpu.R[15] = 0x08009BFAu;
    runtime_tick(_cyc_08009BF8);
    /* 08009BFA  08009bfa T ldr r0,[r15,#0x58] */
    g_cpu.R[15] = 0x08009BFAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BFA = 1u;
    _cyc_08009BFA = 2u;
    uint32_t _base_08009BFA = 0x08009BFEu & ~3u;
    uint32_t _off_08009BFA;
    _off_08009BFA = 0x00000058u;
    uint32_t _ea_08009BFA = _base_08009BFA + _off_08009BFA;
    uint32_t _post_08009BFA = _base_08009BFA + _off_08009BFA;
    _cyc_08009BFA += runtime_mem_cycles(_ea_08009BFA, 4u, 0u);
    uint32_t _v_08009BFA;
    { uint32_t _w = bus_read_u32(_ea_08009BFA & ~3u); uint32_t _rot = (_ea_08009BFA & 3u) * 8u; _v_08009BFA = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08009BFA;
    g_cpu.R[15] = 0x08009BFCu;
    runtime_tick(_cyc_08009BFA);
    /* 08009BFC  08009bfc T str r0,[r1,#0x24] */
    g_cpu.R[15] = 0x08009BFCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BFC = 1u;
    _cyc_08009BFC = 1u;
    uint32_t _base_08009BFC = g_cpu.R[1];
    uint32_t _off_08009BFC;
    _off_08009BFC = 0x00000024u;
    uint32_t _ea_08009BFC = _base_08009BFC + _off_08009BFC;
    uint32_t _post_08009BFC = _base_08009BFC + _off_08009BFC;
    _cyc_08009BFC += runtime_mem_cycles(_ea_08009BFC, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009BFCu, _ea_08009BFC & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08009BFC & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08009BFEu;
    runtime_tick(_cyc_08009BFC);
    /* 08009BFE  08009bfe T ldrh r2,[r1,#0x2] */
    g_cpu.R[15] = 0x08009BFEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009BFE = 1u;
    _cyc_08009BFE = 2u;
    uint32_t _base_08009BFE = g_cpu.R[1];
    uint32_t _off_08009BFE;
    _off_08009BFE = 0x00000002u;
    uint32_t _ea_08009BFE = _base_08009BFE + _off_08009BFE;
    uint32_t _post_08009BFE = _base_08009BFE + _off_08009BFE;
    _cyc_08009BFE += runtime_mem_cycles(_ea_08009BFE, 2u, 0u);
    uint32_t _v_08009BFE;
    { uint32_t _h = bus_read_u16(_ea_08009BFE & ~1u); if (_ea_08009BFE & 1u) _v_08009BFE = ((_h >> 8) | (_h << 24)); else _v_08009BFE = _h; }
    g_cpu.R[2] = _v_08009BFE;
    g_cpu.R[15] = 0x08009C00u;
    runtime_tick(_cyc_08009BFE);
    /* 08009C00  08009c00 T movs r3,#0x80 */
    g_cpu.R[15] = 0x08009C00u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C00 = 1u;
    _cyc_08009C00 = 1u;
    uint32_t _r_08009C00;
    _r_08009C00 = 0x00000080u;
    arm_set_nzc_logic(_r_08009C00, cpsr_c());
    g_cpu.R[3] = _r_08009C00;
    g_cpu.R[15] = 0x08009C02u;
    runtime_tick(_cyc_08009C00);
    /* 08009C02  08009c02 T movs r3,r3,lsl #3 */
    g_cpu.R[15] = 0x08009C02u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C02 = 1u;
    _cyc_08009C02 = 1u;
    uint32_t _rm_08009C02 = g_cpu.R[3];
    uint32_t _op2_08009C02;
    uint32_t _co_08009C02;
    _op2_08009C02 = _rm_08009C02 << 3;
    _co_08009C02 = (_rm_08009C02 >> 29) & 1u;
    uint32_t _r_08009C02;
    _r_08009C02 = _op2_08009C02;
    arm_set_nzc_logic(_r_08009C02, _co_08009C02);
    g_cpu.R[3] = _r_08009C02;
    g_cpu.R[15] = 0x08009C04u;
    runtime_tick(_cyc_08009C02);
    /* 08009C04  08009c04 T adds r0,r3,#0x0 */
    g_cpu.R[15] = 0x08009C04u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C04 = 1u;
    _cyc_08009C04 = 1u;
    uint32_t _rn_08009C04 = g_cpu.R[3];
    uint32_t _r_08009C04;
    _r_08009C04 = _rn_08009C04 + 0x00000000u;
    arm_set_nzcv_add(_rn_08009C04, 0x00000000u, _r_08009C04);
    g_cpu.R[0] = _r_08009C04;
    g_cpu.R[15] = 0x08009C06u;
    runtime_tick(_cyc_08009C04);
    /* 08009C06  08009c06 T movs r3,#0x0 */
    g_cpu.R[15] = 0x08009C06u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C06 = 1u;
    _cyc_08009C06 = 1u;
    uint32_t _r_08009C06;
    _r_08009C06 = 0x00000000u;
    arm_set_nzc_logic(_r_08009C06, cpsr_c());
    g_cpu.R[3] = _r_08009C06;
    g_cpu.R[15] = 0x08009C08u;
    runtime_tick(_cyc_08009C06);
    /* 08009C08  08009c08 T orrs r0,r0,r2 */
    g_cpu.R[15] = 0x08009C08u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C08 = 1u;
    _cyc_08009C08 = 1u;
    uint32_t _rm_08009C08 = g_cpu.R[2];
    uint32_t _op2_08009C08;
    uint32_t _co_08009C08;
    _op2_08009C08 = _rm_08009C08;
    _co_08009C08 = cpsr_c();
    uint32_t _rn_08009C08 = g_cpu.R[0];
    uint32_t _r_08009C08;
    _r_08009C08 = _rn_08009C08 | _op2_08009C08;
    arm_set_nzc_logic(_r_08009C08, _co_08009C08);
    g_cpu.R[0] = _r_08009C08;
    g_cpu.R[15] = 0x08009C0Au;
    runtime_tick(_cyc_08009C08);
    /* 08009C0A  08009c0a T strh r0,[r1,#0x2] */
    g_cpu.R[15] = 0x08009C0Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C0A = 1u;
    _cyc_08009C0A = 1u;
    uint32_t _base_08009C0A = g_cpu.R[1];
    uint32_t _off_08009C0A;
    _off_08009C0A = 0x00000002u;
    uint32_t _ea_08009C0A = _base_08009C0A + _off_08009C0A;
    uint32_t _post_08009C0A = _base_08009C0A + _off_08009C0A;
    _cyc_08009C0A += runtime_mem_cycles(_ea_08009C0A, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009C0Au, _ea_08009C0A & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08009C0A & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08009C0Cu;
    runtime_tick(_cyc_08009C0A);
    /* 08009C0C  08009c0c T movs r1,#0x22 */
    g_cpu.R[15] = 0x08009C0Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C0C = 1u;
    _cyc_08009C0C = 1u;
    uint32_t _r_08009C0C;
    _r_08009C0C = 0x00000022u;
    arm_set_nzc_logic(_r_08009C0C, cpsr_c());
    g_cpu.R[1] = _r_08009C0C;
    g_cpu.R[15] = 0x08009C0Eu;
    runtime_tick(_cyc_08009C0C);
    /* 08009C0E  08009c0e T ldrsh r0,[r4,+r1] */
    g_cpu.R[15] = 0x08009C0Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C0E = 1u;
    _cyc_08009C0E = 2u;
    uint32_t _base_08009C0E = g_cpu.R[4];
    uint32_t _off_08009C0E;
    uint32_t _morm_08009C0E = g_cpu.R[1];
    _off_08009C0E = _morm_08009C0E;
    uint32_t _ea_08009C0E = _base_08009C0E + _off_08009C0E;
    uint32_t _post_08009C0E = _base_08009C0E + _off_08009C0E;
    _cyc_08009C0E += runtime_mem_cycles(_ea_08009C0E, 2u, 0u);
    uint32_t _v_08009C0E;
    if (_ea_08009C0E & 1u) _v_08009C0E = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_08009C0E);
    else _v_08009C0E = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_08009C0E);
    g_cpu.R[0] = _v_08009C0E;
    g_cpu.R[15] = 0x08009C10u;
    runtime_tick(_cyc_08009C0E);
    /* 08009C10  08009c10 T movs r0,r0,lsl #1 */
    g_cpu.R[15] = 0x08009C10u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C10 = 1u;
    _cyc_08009C10 = 1u;
    uint32_t _rm_08009C10 = g_cpu.R[0];
    uint32_t _op2_08009C10;
    uint32_t _co_08009C10;
    _op2_08009C10 = _rm_08009C10 << 1;
    _co_08009C10 = (_rm_08009C10 >> 31) & 1u;
    uint32_t _r_08009C10;
    _r_08009C10 = _op2_08009C10;
    arm_set_nzc_logic(_r_08009C10, _co_08009C10);
    g_cpu.R[0] = _r_08009C10;
    g_cpu.R[15] = 0x08009C12u;
    runtime_tick(_cyc_08009C10);
    /* 08009C12  08009c12 T adds r0,r0,r4 */
    g_cpu.R[15] = 0x08009C12u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C12 = 1u;
    _cyc_08009C12 = 1u;
    uint32_t _rm_08009C12 = g_cpu.R[4];
    uint32_t _op2_08009C12;
    uint32_t _co_08009C12;
    _op2_08009C12 = _rm_08009C12;
    _co_08009C12 = cpsr_c();
    uint32_t _rn_08009C12 = g_cpu.R[0];
    uint32_t _r_08009C12;
    _r_08009C12 = _rn_08009C12 + _op2_08009C12;
    arm_set_nzcv_add(_rn_08009C12, _op2_08009C12, _r_08009C12);
    g_cpu.R[0] = _r_08009C12;
    g_cpu.R[15] = 0x08009C14u;
    runtime_tick(_cyc_08009C12);
    /* 08009C14  08009c14 T strb r3,[r0,#0x19] */
    g_cpu.R[15] = 0x08009C14u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C14 = 1u;
    _cyc_08009C14 = 1u;
    uint32_t _base_08009C14 = g_cpu.R[0];
    uint32_t _off_08009C14;
    _off_08009C14 = 0x00000019u;
    uint32_t _ea_08009C14 = _base_08009C14 + _off_08009C14;
    uint32_t _post_08009C14 = _base_08009C14 + _off_08009C14;
    _cyc_08009C14 += runtime_mem_cycles(_ea_08009C14, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009C14u, _ea_08009C14, (uint32_t)(g_cpu.R[3] & 0xFFu), 1u);
    bus_write_u8(_ea_08009C14, (uint8_t)(g_cpu.R[3] & 0xFFu));
    g_cpu.R[15] = 0x08009C16u;
    runtime_tick(_cyc_08009C14);
    /* 08009C16  08009c16 T ldr r0,[r15,#0x40] */
    g_cpu.R[15] = 0x08009C16u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C16 = 1u;
    _cyc_08009C16 = 2u;
    uint32_t _base_08009C16 = 0x08009C1Au & ~3u;
    uint32_t _off_08009C16;
    _off_08009C16 = 0x00000040u;
    uint32_t _ea_08009C16 = _base_08009C16 + _off_08009C16;
    uint32_t _post_08009C16 = _base_08009C16 + _off_08009C16;
    _cyc_08009C16 += runtime_mem_cycles(_ea_08009C16, 4u, 0u);
    uint32_t _v_08009C16;
    { uint32_t _w = bus_read_u32(_ea_08009C16 & ~3u); uint32_t _rot = (_ea_08009C16 & 3u) * 8u; _v_08009C16 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08009C16;
    g_cpu.R[15] = 0x08009C18u;
    runtime_tick(_cyc_08009C16);
    /* 08009C18  08009c18 T adds r5,r4,#0x0 */
    g_cpu.R[15] = 0x08009C18u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C18 = 1u;
    _cyc_08009C18 = 1u;
    uint32_t _rn_08009C18 = g_cpu.R[4];
    uint32_t _r_08009C18;
    _r_08009C18 = _rn_08009C18 + 0x00000000u;
    arm_set_nzcv_add(_rn_08009C18, 0x00000000u, _r_08009C18);
    g_cpu.R[5] = _r_08009C18;
    g_cpu.R[15] = 0x08009C1Au;
    runtime_tick(_cyc_08009C18);
    /* 08009C1A  08009c1a T adds r5,r5,#0x18 */
    g_cpu.R[15] = 0x08009C1Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C1A = 1u;
    _cyc_08009C1A = 1u;
    uint32_t _rn_08009C1A = g_cpu.R[5];
    uint32_t _r_08009C1A;
    _r_08009C1A = _rn_08009C1A + 0x00000018u;
    arm_set_nzcv_add(_rn_08009C1A, 0x00000018u, _r_08009C1A);
    g_cpu.R[5] = _r_08009C1A;
    g_cpu.R[15] = 0x08009C1Cu;
    runtime_tick(_cyc_08009C1A);
    /* 08009C1C  08009c1c T adds r1,r4,#0x0 */
    g_cpu.R[15] = 0x08009C1Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C1C = 1u;
    _cyc_08009C1C = 1u;
    uint32_t _rn_08009C1C = g_cpu.R[4];
    uint32_t _r_08009C1C;
    _r_08009C1C = _rn_08009C1C + 0x00000000u;
    arm_set_nzcv_add(_rn_08009C1C, 0x00000000u, _r_08009C1C);
    g_cpu.R[1] = _r_08009C1C;
    g_cpu.R[15] = 0x08009C1Eu;
    runtime_tick(_cyc_08009C1C);
    /* 08009C1E  08009c1e T adds r1,r1,#0x22 */
    g_cpu.R[15] = 0x08009C1Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C1E = 1u;
    _cyc_08009C1E = 1u;
    uint32_t _rn_08009C1E = g_cpu.R[1];
    uint32_t _r_08009C1E;
    _r_08009C1E = _rn_08009C1E + 0x00000022u;
    arm_set_nzcv_add(_rn_08009C1E, 0x00000022u, _r_08009C1E);
    g_cpu.R[1] = _r_08009C1E;
    g_cpu.R[15] = 0x08009C20u;
    runtime_tick(_cyc_08009C1E);
    /* 08009C20  08009c20 T ldr r2,[r0] */
    g_cpu.R[15] = 0x08009C20u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C20 = 1u;
    _cyc_08009C20 = 2u;
    uint32_t _base_08009C20 = g_cpu.R[0];
    uint32_t _off_08009C20;
    _off_08009C20 = 0x00000000u;
    uint32_t _ea_08009C20 = _base_08009C20 + _off_08009C20;
    uint32_t _post_08009C20 = _base_08009C20 + _off_08009C20;
    _cyc_08009C20 += runtime_mem_cycles(_ea_08009C20, 4u, 0u);
    uint32_t _v_08009C20;
    { uint32_t _w = bus_read_u32(_ea_08009C20 & ~3u); uint32_t _rot = (_ea_08009C20 & 3u) * 8u; _v_08009C20 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08009C20;
    g_cpu.R[15] = 0x08009C22u;
    runtime_tick(_cyc_08009C20);
    /* 08009C22  08009c22 T adds r0,r5,#0x0 */
    g_cpu.R[15] = 0x08009C22u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C22 = 1u;
    _cyc_08009C22 = 1u;
    uint32_t _rn_08009C22 = g_cpu.R[5];
    uint32_t _r_08009C22;
    _r_08009C22 = _rn_08009C22 + 0x00000000u;
    arm_set_nzcv_add(_rn_08009C22, 0x00000000u, _r_08009C22);
    g_cpu.R[0] = _r_08009C22;
    g_cpu.R[15] = 0x08009C24u;
    runtime_tick(_cyc_08009C22);
    /* 08009C24  08009c24 T bl.hi 0x080c2c28 */
    g_cpu.R[15] = 0x08009C24u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C24 = 1u;
    _cyc_08009C24 = 1u;
    g_cpu.R[14] = 0x080C2C28u;
    g_cpu.R[15] = 0x08009C26u;
    runtime_tick(_cyc_08009C24);
    /* 08009C26  08009c26 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08009C26u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C26 = 1u;
    _cyc_08009C26 = 3u;
    uint32_t _blt_08009C26 = (g_cpu.R[14] + 0x000005BCu) & ~1u;
    g_cpu.R[14] = 0x08009C29u;
    g_cpu.R[15] = _blt_08009C26;
    runtime_call_push_return(0x08009C28u);
    runtime_tick(_cyc_08009C26);
    _cyc_08009C26 = 0u;
    runtime_dispatch(_blt_08009C26);
    if (g_cpu.R[15] != 0x08009C28u) { runtime_call_cancel_return(0x08009C28u); return; }
    g_cpu.R[15] = 0x08009C28u;
    runtime_tick(_cyc_08009C26);
    /* fall-through to 0x08009C28 */
    g_cpu.R[15] = 0x08009C28u;
    runtime_dispatch(0x08009C28u);
    return;
}

/* 0x08009C28  mode=thumb  end=0x08009C4E  branches=2  indirect */


/* 0x08009C28 thumb */
void gf_tfunc_08009C28(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009C28u);
    /* 08009C28  08009c28 T movs r3,#0x22 */
    g_cpu.R[15] = 0x08009C28u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C28 = 1u;
    _cyc_08009C28 = 1u;
    uint32_t _r_08009C28;
    _r_08009C28 = 0x00000022u;
    arm_set_nzc_logic(_r_08009C28, cpsr_c());
    g_cpu.R[3] = _r_08009C28;
    g_cpu.R[15] = 0x08009C2Au;
    runtime_tick(_cyc_08009C28);
    /* 08009C2A  08009c2a T ldrsh r1,[r4,+r3] */
    g_cpu.R[15] = 0x08009C2Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C2A = 1u;
    _cyc_08009C2A = 2u;
    uint32_t _base_08009C2A = g_cpu.R[4];
    uint32_t _off_08009C2A;
    uint32_t _morm_08009C2A = g_cpu.R[3];
    _off_08009C2A = _morm_08009C2A;
    uint32_t _ea_08009C2A = _base_08009C2A + _off_08009C2A;
    uint32_t _post_08009C2A = _base_08009C2A + _off_08009C2A;
    _cyc_08009C2A += runtime_mem_cycles(_ea_08009C2A, 2u, 0u);
    uint32_t _v_08009C2A;
    if (_ea_08009C2A & 1u) _v_08009C2A = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_08009C2A);
    else _v_08009C2A = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_08009C2A);
    g_cpu.R[1] = _v_08009C2A;
    g_cpu.R[15] = 0x08009C2Cu;
    runtime_tick(_cyc_08009C2A);
    /* 08009C2C  08009c2c T movs r1,r1,lsl #1 */
    g_cpu.R[15] = 0x08009C2Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C2C = 1u;
    _cyc_08009C2C = 1u;
    uint32_t _rm_08009C2C = g_cpu.R[1];
    uint32_t _op2_08009C2C;
    uint32_t _co_08009C2C;
    _op2_08009C2C = _rm_08009C2C << 1;
    _co_08009C2C = (_rm_08009C2C >> 31) & 1u;
    uint32_t _r_08009C2C;
    _r_08009C2C = _op2_08009C2C;
    arm_set_nzc_logic(_r_08009C2C, _co_08009C2C);
    g_cpu.R[1] = _r_08009C2C;
    g_cpu.R[15] = 0x08009C2Eu;
    runtime_tick(_cyc_08009C2C);
    /* 08009C2E  08009c2e T adds r1,r1,r4 */
    g_cpu.R[15] = 0x08009C2Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C2E = 1u;
    _cyc_08009C2E = 1u;
    uint32_t _rm_08009C2E = g_cpu.R[4];
    uint32_t _op2_08009C2E;
    uint32_t _co_08009C2E;
    _op2_08009C2E = _rm_08009C2E;
    _co_08009C2E = cpsr_c();
    uint32_t _rn_08009C2E = g_cpu.R[1];
    uint32_t _r_08009C2E;
    _r_08009C2E = _rn_08009C2E + _op2_08009C2E;
    arm_set_nzcv_add(_rn_08009C2E, _op2_08009C2E, _r_08009C2E);
    g_cpu.R[1] = _r_08009C2E;
    g_cpu.R[15] = 0x08009C30u;
    runtime_tick(_cyc_08009C2E);
    /* 08009C30  08009c30 T ldrb r0,[r1,#0x19] */
    g_cpu.R[15] = 0x08009C30u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C30 = 1u;
    _cyc_08009C30 = 2u;
    uint32_t _base_08009C30 = g_cpu.R[1];
    uint32_t _off_08009C30;
    _off_08009C30 = 0x00000019u;
    uint32_t _ea_08009C30 = _base_08009C30 + _off_08009C30;
    uint32_t _post_08009C30 = _base_08009C30 + _off_08009C30;
    _cyc_08009C30 += runtime_mem_cycles(_ea_08009C30, 1u, 0u);
    uint32_t _v_08009C30;
    _v_08009C30 = bus_read_u8(_ea_08009C30);
    g_cpu.R[0] = _v_08009C30;
    g_cpu.R[15] = 0x08009C32u;
    runtime_tick(_cyc_08009C30);
    /* 08009C32  08009c32 T adds r0,r0,#0x1 */
    g_cpu.R[15] = 0x08009C32u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C32 = 1u;
    _cyc_08009C32 = 1u;
    uint32_t _rn_08009C32 = g_cpu.R[0];
    uint32_t _r_08009C32;
    _r_08009C32 = _rn_08009C32 + 0x00000001u;
    arm_set_nzcv_add(_rn_08009C32, 0x00000001u, _r_08009C32);
    g_cpu.R[0] = _r_08009C32;
    g_cpu.R[15] = 0x08009C34u;
    runtime_tick(_cyc_08009C32);
    /* 08009C34  08009c34 T strb r0,[r1,#0x19] */
    g_cpu.R[15] = 0x08009C34u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C34 = 1u;
    _cyc_08009C34 = 1u;
    uint32_t _base_08009C34 = g_cpu.R[1];
    uint32_t _off_08009C34;
    _off_08009C34 = 0x00000019u;
    uint32_t _ea_08009C34 = _base_08009C34 + _off_08009C34;
    uint32_t _post_08009C34 = _base_08009C34 + _off_08009C34;
    _cyc_08009C34 += runtime_mem_cycles(_ea_08009C34, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009C34u, _ea_08009C34, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08009C34, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08009C36u;
    runtime_tick(_cyc_08009C34);
    /* 08009C36  08009c36 T movs r1,#0x22 */
    g_cpu.R[15] = 0x08009C36u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C36 = 1u;
    _cyc_08009C36 = 1u;
    uint32_t _r_08009C36;
    _r_08009C36 = 0x00000022u;
    arm_set_nzc_logic(_r_08009C36, cpsr_c());
    g_cpu.R[1] = _r_08009C36;
    g_cpu.R[15] = 0x08009C38u;
    runtime_tick(_cyc_08009C36);
    /* 08009C38  08009c38 T ldrsh r0,[r4,+r1] */
    g_cpu.R[15] = 0x08009C38u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C38 = 1u;
    _cyc_08009C38 = 2u;
    uint32_t _base_08009C38 = g_cpu.R[4];
    uint32_t _off_08009C38;
    uint32_t _morm_08009C38 = g_cpu.R[1];
    _off_08009C38 = _morm_08009C38;
    uint32_t _ea_08009C38 = _base_08009C38 + _off_08009C38;
    uint32_t _post_08009C38 = _base_08009C38 + _off_08009C38;
    _cyc_08009C38 += runtime_mem_cycles(_ea_08009C38, 2u, 0u);
    uint32_t _v_08009C38;
    if (_ea_08009C38 & 1u) _v_08009C38 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_08009C38);
    else _v_08009C38 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_08009C38);
    g_cpu.R[0] = _v_08009C38;
    g_cpu.R[15] = 0x08009C3Au;
    runtime_tick(_cyc_08009C38);
    /* 08009C3A  08009c3a T movs r0,r0,lsl #1 */
    g_cpu.R[15] = 0x08009C3Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C3A = 1u;
    _cyc_08009C3A = 1u;
    uint32_t _rm_08009C3A = g_cpu.R[0];
    uint32_t _op2_08009C3A;
    uint32_t _co_08009C3A;
    _op2_08009C3A = _rm_08009C3A << 1;
    _co_08009C3A = (_rm_08009C3A >> 31) & 1u;
    uint32_t _r_08009C3A;
    _r_08009C3A = _op2_08009C3A;
    arm_set_nzc_logic(_r_08009C3A, _co_08009C3A);
    g_cpu.R[0] = _r_08009C3A;
    g_cpu.R[15] = 0x08009C3Cu;
    runtime_tick(_cyc_08009C3A);
    /* 08009C3C  08009c3c T adds r5,r5,r0 */
    g_cpu.R[15] = 0x08009C3Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C3C = 1u;
    _cyc_08009C3C = 1u;
    uint32_t _rm_08009C3C = g_cpu.R[0];
    uint32_t _op2_08009C3C;
    uint32_t _co_08009C3C;
    _op2_08009C3C = _rm_08009C3C;
    _co_08009C3C = cpsr_c();
    uint32_t _rn_08009C3C = g_cpu.R[5];
    uint32_t _r_08009C3C;
    _r_08009C3C = _rn_08009C3C + _op2_08009C3C;
    arm_set_nzcv_add(_rn_08009C3C, _op2_08009C3C, _r_08009C3C);
    g_cpu.R[5] = _r_08009C3C;
    g_cpu.R[15] = 0x08009C3Eu;
    runtime_tick(_cyc_08009C3C);
    /* 08009C3E  08009c3e T ldrb r0,[r5] */
    g_cpu.R[15] = 0x08009C3Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C3E = 1u;
    _cyc_08009C3E = 2u;
    uint32_t _base_08009C3E = g_cpu.R[5];
    uint32_t _off_08009C3E;
    _off_08009C3E = 0x00000000u;
    uint32_t _ea_08009C3E = _base_08009C3E + _off_08009C3E;
    uint32_t _post_08009C3E = _base_08009C3E + _off_08009C3E;
    _cyc_08009C3E += runtime_mem_cycles(_ea_08009C3E, 1u, 0u);
    uint32_t _v_08009C3E;
    _v_08009C3E = bus_read_u8(_ea_08009C3E);
    g_cpu.R[0] = _v_08009C3E;
    g_cpu.R[15] = 0x08009C40u;
    runtime_tick(_cyc_08009C3E);
    /* 08009C40  08009c40 T ldr r1,[r4,#0x14] */
    g_cpu.R[15] = 0x08009C40u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C40 = 1u;
    _cyc_08009C40 = 2u;
    uint32_t _base_08009C40 = g_cpu.R[4];
    uint32_t _off_08009C40;
    _off_08009C40 = 0x00000014u;
    uint32_t _ea_08009C40 = _base_08009C40 + _off_08009C40;
    uint32_t _post_08009C40 = _base_08009C40 + _off_08009C40;
    _cyc_08009C40 += runtime_mem_cycles(_ea_08009C40, 4u, 0u);
    uint32_t _v_08009C40;
    { uint32_t _w = bus_read_u32(_ea_08009C40 & ~3u); uint32_t _rot = (_ea_08009C40 & 3u) * 8u; _v_08009C40 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08009C40;
    g_cpu.R[15] = 0x08009C42u;
    runtime_tick(_cyc_08009C40);
    /* 08009C42  08009c42 T movs r0,r0,lsl #2 */
    g_cpu.R[15] = 0x08009C42u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C42 = 1u;
    _cyc_08009C42 = 1u;
    uint32_t _rm_08009C42 = g_cpu.R[0];
    uint32_t _op2_08009C42;
    uint32_t _co_08009C42;
    _op2_08009C42 = _rm_08009C42 << 2;
    _co_08009C42 = (_rm_08009C42 >> 30) & 1u;
    uint32_t _r_08009C42;
    _r_08009C42 = _op2_08009C42;
    arm_set_nzc_logic(_r_08009C42, _co_08009C42);
    g_cpu.R[0] = _r_08009C42;
    g_cpu.R[15] = 0x08009C44u;
    runtime_tick(_cyc_08009C42);
    /* 08009C44  08009c44 T adds r0,r0,r1 */
    g_cpu.R[15] = 0x08009C44u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C44 = 1u;
    _cyc_08009C44 = 1u;
    uint32_t _rm_08009C44 = g_cpu.R[1];
    uint32_t _op2_08009C44;
    uint32_t _co_08009C44;
    _op2_08009C44 = _rm_08009C44;
    _co_08009C44 = cpsr_c();
    uint32_t _rn_08009C44 = g_cpu.R[0];
    uint32_t _r_08009C44;
    _r_08009C44 = _rn_08009C44 + _op2_08009C44;
    arm_set_nzcv_add(_rn_08009C44, _op2_08009C44, _r_08009C44);
    g_cpu.R[0] = _r_08009C44;
    g_cpu.R[15] = 0x08009C46u;
    runtime_tick(_cyc_08009C44);
    /* 08009C46  08009c46 T ldr r1,[r0] */
    g_cpu.R[15] = 0x08009C46u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C46 = 1u;
    _cyc_08009C46 = 2u;
    uint32_t _base_08009C46 = g_cpu.R[0];
    uint32_t _off_08009C46;
    _off_08009C46 = 0x00000000u;
    uint32_t _ea_08009C46 = _base_08009C46 + _off_08009C46;
    uint32_t _post_08009C46 = _base_08009C46 + _off_08009C46;
    _cyc_08009C46 += runtime_mem_cycles(_ea_08009C46, 4u, 0u);
    uint32_t _v_08009C46;
    { uint32_t _w = bus_read_u32(_ea_08009C46 & ~3u); uint32_t _rot = (_ea_08009C46 & 3u) * 8u; _v_08009C46 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08009C46;
    g_cpu.R[15] = 0x08009C48u;
    runtime_tick(_cyc_08009C46);
    /* 08009C48  08009c48 T adds r0,r4,#0x0 */
    g_cpu.R[15] = 0x08009C48u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C48 = 1u;
    _cyc_08009C48 = 1u;
    uint32_t _rn_08009C48 = g_cpu.R[4];
    uint32_t _r_08009C48;
    _r_08009C48 = _rn_08009C48 + 0x00000000u;
    arm_set_nzcv_add(_rn_08009C48, 0x00000000u, _r_08009C48);
    g_cpu.R[0] = _r_08009C48;
    g_cpu.R[15] = 0x08009C4Au;
    runtime_tick(_cyc_08009C48);
    /* 08009C4A  08009c4a T bl.hi 0x080c2c4e */
    g_cpu.R[15] = 0x08009C4Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C4A = 1u;
    _cyc_08009C4A = 1u;
    g_cpu.R[14] = 0x080C2C4Eu;
    g_cpu.R[15] = 0x08009C4Cu;
    runtime_tick(_cyc_08009C4A);
    /* 08009C4C  08009c4c T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08009C4Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C4C = 1u;
    _cyc_08009C4C = 3u;
    uint32_t _blt_08009C4C = (g_cpu.R[14] + 0x00000592u) & ~1u;
    g_cpu.R[14] = 0x08009C4Fu;
    g_cpu.R[15] = _blt_08009C4C;
    runtime_call_push_return(0x08009C4Eu);
    runtime_tick(_cyc_08009C4C);
    _cyc_08009C4C = 0u;
    runtime_dispatch(_blt_08009C4C);
    if (g_cpu.R[15] != 0x08009C4Eu) { runtime_call_cancel_return(0x08009C4Eu); return; }
    g_cpu.R[15] = 0x08009C4Eu;
    runtime_tick(_cyc_08009C4C);
    /* fall-through to 0x08009C4E */
    g_cpu.R[15] = 0x08009C4Eu;
    runtime_dispatch(0x08009C4Eu);
    return;
}

/* 0x08009C5C  mode=thumb  end=0x08009C76  branches=2 */


/* 0x08009C4E thumb */
void gf_tfunc_08009C4E(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009C4Eu);
    /* 08009C4E  08009c4e T ldm r13!,{r4,r5} */
    g_cpu.R[15] = 0x08009C4Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C4E = 1u;
    _cyc_08009C4E = 2u;
    uint32_t _b_08009C4E = g_cpu.R[13];
    uint32_t _a_08009C4E = _b_08009C4E;
    uint32_t _fb_08009C4E = _b_08009C4E + 8u;
    _cyc_08009C4E += runtime_mem_cycles(_a_08009C4E & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_08009C4E & ~3u);
    _a_08009C4E += 4u;
    _cyc_08009C4E += runtime_mem_cycles(_a_08009C4E & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_08009C4E & ~3u);
    _a_08009C4E += 4u;
    g_cpu.R[13] = _fb_08009C4E;
    g_cpu.R[15] = 0x08009C50u;
    runtime_tick(_cyc_08009C4E);
    /* 08009C50  08009c50 T ldm r13!,{r0} */
    g_cpu.R[15] = 0x08009C50u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C50 = 1u;
    _cyc_08009C50 = 2u;
    uint32_t _b_08009C50 = g_cpu.R[13];
    uint32_t _a_08009C50 = _b_08009C50;
    uint32_t _fb_08009C50 = _b_08009C50 + 4u;
    _cyc_08009C50 += runtime_mem_cycles(_a_08009C50 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_08009C50 & ~3u);
    _a_08009C50 += 4u;
    g_cpu.R[13] = _fb_08009C50;
    g_cpu.R[15] = 0x08009C52u;
    runtime_tick(_cyc_08009C50);
    /* 08009C52  08009c52 T bx r0 */
    g_cpu.R[15] = 0x08009C52u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C52 = 1u;
    _cyc_08009C52 = 3u;
    uint32_t _bxt_08009C52 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_08009C52 & ~1u;
    if (_bxt_08009C52 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_08009C52);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_08009C52);
    g_cpu.R[15] = 0x08009C54u;
    runtime_tick(_cyc_08009C52);
    /* fall-through to 0x08009C54 */
    g_cpu.R[15] = 0x08009C54u;
    runtime_dispatch(0x08009C54u);
    return;
}

/* 0x08009CC8  mode=thumb  end=0x08009CCA  branches=0  indirect */


/* 0x08009C5C thumb */
void gf_tfunc_08009C5C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009C5Cu);
    /* 08009C5C  08009c5c T ldr r2,[r0,#0x38] */
    g_cpu.R[15] = 0x08009C5Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C5C = 1u;
    _cyc_08009C5C = 2u;
    uint32_t _base_08009C5C = g_cpu.R[0];
    uint32_t _off_08009C5C;
    _off_08009C5C = 0x00000038u;
    uint32_t _ea_08009C5C = _base_08009C5C + _off_08009C5C;
    uint32_t _post_08009C5C = _base_08009C5C + _off_08009C5C;
    _cyc_08009C5C += runtime_mem_cycles(_ea_08009C5C, 4u, 0u);
    uint32_t _v_08009C5C;
    { uint32_t _w = bus_read_u32(_ea_08009C5C & ~3u); uint32_t _rot = (_ea_08009C5C & 3u) * 8u; _v_08009C5C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08009C5C;
    g_cpu.R[15] = 0x08009C5Eu;
    runtime_tick(_cyc_08009C5C);
    /* 08009C5E  08009c5e T ldr r0,[r0,#0x28] */
    g_cpu.R[15] = 0x08009C5Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C5E = 1u;
    _cyc_08009C5E = 2u;
    uint32_t _base_08009C5E = g_cpu.R[0];
    uint32_t _off_08009C5E;
    _off_08009C5E = 0x00000028u;
    uint32_t _ea_08009C5E = _base_08009C5E + _off_08009C5E;
    uint32_t _post_08009C5E = _base_08009C5E + _off_08009C5E;
    _cyc_08009C5E += runtime_mem_cycles(_ea_08009C5E, 4u, 0u);
    uint32_t _v_08009C5E;
    { uint32_t _w = bus_read_u32(_ea_08009C5E & ~3u); uint32_t _rot = (_ea_08009C5E & 3u) * 8u; _v_08009C5E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08009C5E;
    g_cpu.R[15] = 0x08009C60u;
    runtime_tick(_cyc_08009C5E);
    /* 08009C60  08009c60 T adds r0,r0,#0x5c */
    g_cpu.R[15] = 0x08009C60u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C60 = 1u;
    _cyc_08009C60 = 1u;
    uint32_t _rn_08009C60 = g_cpu.R[0];
    uint32_t _r_08009C60;
    _r_08009C60 = _rn_08009C60 + 0x0000005Cu;
    arm_set_nzcv_add(_rn_08009C60, 0x0000005Cu, _r_08009C60);
    g_cpu.R[0] = _r_08009C60;
    g_cpu.R[15] = 0x08009C62u;
    runtime_tick(_cyc_08009C60);
    /* 08009C62  08009c62 T ldrb r0,[r0] */
    g_cpu.R[15] = 0x08009C62u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C62 = 1u;
    _cyc_08009C62 = 2u;
    uint32_t _base_08009C62 = g_cpu.R[0];
    uint32_t _off_08009C62;
    _off_08009C62 = 0x00000000u;
    uint32_t _ea_08009C62 = _base_08009C62 + _off_08009C62;
    uint32_t _post_08009C62 = _base_08009C62 + _off_08009C62;
    _cyc_08009C62 += runtime_mem_cycles(_ea_08009C62, 1u, 0u);
    uint32_t _v_08009C62;
    _v_08009C62 = bus_read_u8(_ea_08009C62);
    g_cpu.R[0] = _v_08009C62;
    g_cpu.R[15] = 0x08009C64u;
    runtime_tick(_cyc_08009C62);
    /* 08009C64  08009c64 T movs r0,r0,lsl #24 */
    g_cpu.R[15] = 0x08009C64u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C64 = 1u;
    _cyc_08009C64 = 1u;
    uint32_t _rm_08009C64 = g_cpu.R[0];
    uint32_t _op2_08009C64;
    uint32_t _co_08009C64;
    _op2_08009C64 = _rm_08009C64 << 24;
    _co_08009C64 = (_rm_08009C64 >> 8) & 1u;
    uint32_t _r_08009C64;
    _r_08009C64 = _op2_08009C64;
    arm_set_nzc_logic(_r_08009C64, _co_08009C64);
    g_cpu.R[0] = _r_08009C64;
    g_cpu.R[15] = 0x08009C66u;
    runtime_tick(_cyc_08009C64);
    /* 08009C66  08009c66 T movs r0,r0,asr #24 */
    g_cpu.R[15] = 0x08009C66u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C66 = 1u;
    _cyc_08009C66 = 1u;
    uint32_t _rm_08009C66 = g_cpu.R[0];
    uint32_t _op2_08009C66;
    uint32_t _co_08009C66;
    _op2_08009C66 = (uint32_t)((int32_t)_rm_08009C66 >> 24);
    _co_08009C66 = (_rm_08009C66 >> 23) & 1u;
    uint32_t _r_08009C66;
    _r_08009C66 = _op2_08009C66;
    arm_set_nzc_logic(_r_08009C66, _co_08009C66);
    g_cpu.R[0] = _r_08009C66;
    g_cpu.R[15] = 0x08009C68u;
    runtime_tick(_cyc_08009C66);
    /* 08009C68  08009c68 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x08009C68u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C68 = 1u;
    _cyc_08009C68 = 1u;
    uint32_t _rn_08009C68 = g_cpu.R[0];
    uint32_t _r_08009C68;
    _r_08009C68 = _rn_08009C68 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08009C68, 0x00000000u, _r_08009C68);
    g_cpu.R[15] = 0x08009C6Au;
    runtime_tick(_cyc_08009C68);
    /* 08009C6A  08009c6a T beq 0x08009c76 */
    g_cpu.R[15] = 0x08009C6Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C6A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08009C6A = 3u;
        g_cpu.R[15] = 0x08009C76u;
        runtime_tick(_cyc_08009C6A);
        GBARECOMP_TAIL_CALL(gf_tfunc_08009C76);
    }
    g_cpu.R[15] = 0x08009C6Cu;
    runtime_tick(_cyc_08009C6A);
    /* 08009C6C  08009c6c T adds r2,r2,#0x2a */
    g_cpu.R[15] = 0x08009C6Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C6C = 1u;
    _cyc_08009C6C = 1u;
    uint32_t _rn_08009C6C = g_cpu.R[2];
    uint32_t _r_08009C6C;
    _r_08009C6C = _rn_08009C6C + 0x0000002Au;
    arm_set_nzcv_add(_rn_08009C6C, 0x0000002Au, _r_08009C6C);
    g_cpu.R[2] = _r_08009C6C;
    g_cpu.R[15] = 0x08009C6Eu;
    runtime_tick(_cyc_08009C6C);
    /* 08009C6E  08009c6e T ldrb r1,[r2] */
    g_cpu.R[15] = 0x08009C6Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C6E = 1u;
    _cyc_08009C6E = 2u;
    uint32_t _base_08009C6E = g_cpu.R[2];
    uint32_t _off_08009C6E;
    _off_08009C6E = 0x00000000u;
    uint32_t _ea_08009C6E = _base_08009C6E + _off_08009C6E;
    uint32_t _post_08009C6E = _base_08009C6E + _off_08009C6E;
    _cyc_08009C6E += runtime_mem_cycles(_ea_08009C6E, 1u, 0u);
    uint32_t _v_08009C6E;
    _v_08009C6E = bus_read_u8(_ea_08009C6E);
    g_cpu.R[1] = _v_08009C6E;
    g_cpu.R[15] = 0x08009C70u;
    runtime_tick(_cyc_08009C6E);
    /* 08009C70  08009c70 T movs r0,#0xbf */
    g_cpu.R[15] = 0x08009C70u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C70 = 1u;
    _cyc_08009C70 = 1u;
    uint32_t _r_08009C70;
    _r_08009C70 = 0x000000BFu;
    arm_set_nzc_logic(_r_08009C70, cpsr_c());
    g_cpu.R[0] = _r_08009C70;
    g_cpu.R[15] = 0x08009C72u;
    runtime_tick(_cyc_08009C70);
    /* 08009C72  08009c72 T ands r0,r0,r1 */
    g_cpu.R[15] = 0x08009C72u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C72 = 1u;
    _cyc_08009C72 = 1u;
    uint32_t _rm_08009C72 = g_cpu.R[1];
    uint32_t _op2_08009C72;
    uint32_t _co_08009C72;
    _op2_08009C72 = _rm_08009C72;
    _co_08009C72 = cpsr_c();
    uint32_t _rn_08009C72 = g_cpu.R[0];
    uint32_t _r_08009C72;
    _r_08009C72 = _rn_08009C72 & _op2_08009C72;
    arm_set_nzc_logic(_r_08009C72, _co_08009C72);
    g_cpu.R[0] = _r_08009C72;
    g_cpu.R[15] = 0x08009C74u;
    runtime_tick(_cyc_08009C72);
    /* 08009C74  08009c74 T b 0x08009c7e */
    g_cpu.R[15] = 0x08009C74u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C74 = 1u;
    _cyc_08009C74 = 3u;
    g_cpu.R[15] = 0x08009C7Eu;
    runtime_tick(_cyc_08009C74);
    GBARECOMP_TAIL_CALL(gf_tfunc_08009C7E);
    g_cpu.R[15] = 0x08009C76u;
    runtime_tick(_cyc_08009C74);
    /* fall-through to 0x08009C76 */
    g_cpu.R[15] = 0x08009C76u;
    runtime_dispatch(0x08009C76u);
    return;
}

/* 0x08009C76  mode=thumb  end=0x08009C7E  branches=0  indirect */


/* 0x08009C76 thumb */
void gf_tfunc_08009C76(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009C76u);
    /* 08009C76  08009c76 T adds r2,r2,#0x2a */
    g_cpu.R[15] = 0x08009C76u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C76 = 1u;
    _cyc_08009C76 = 1u;
    uint32_t _rn_08009C76 = g_cpu.R[2];
    uint32_t _r_08009C76;
    _r_08009C76 = _rn_08009C76 + 0x0000002Au;
    arm_set_nzcv_add(_rn_08009C76, 0x0000002Au, _r_08009C76);
    g_cpu.R[2] = _r_08009C76;
    g_cpu.R[15] = 0x08009C78u;
    runtime_tick(_cyc_08009C76);
    /* 08009C78  08009c78 T ldrb r1,[r2] */
    g_cpu.R[15] = 0x08009C78u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C78 = 1u;
    _cyc_08009C78 = 2u;
    uint32_t _base_08009C78 = g_cpu.R[2];
    uint32_t _off_08009C78;
    _off_08009C78 = 0x00000000u;
    uint32_t _ea_08009C78 = _base_08009C78 + _off_08009C78;
    uint32_t _post_08009C78 = _base_08009C78 + _off_08009C78;
    _cyc_08009C78 += runtime_mem_cycles(_ea_08009C78, 1u, 0u);
    uint32_t _v_08009C78;
    _v_08009C78 = bus_read_u8(_ea_08009C78);
    g_cpu.R[1] = _v_08009C78;
    g_cpu.R[15] = 0x08009C7Au;
    runtime_tick(_cyc_08009C78);
    /* 08009C7A  08009c7a T movs r0,#0x40 */
    g_cpu.R[15] = 0x08009C7Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C7A = 1u;
    _cyc_08009C7A = 1u;
    uint32_t _r_08009C7A;
    _r_08009C7A = 0x00000040u;
    arm_set_nzc_logic(_r_08009C7A, cpsr_c());
    g_cpu.R[0] = _r_08009C7A;
    g_cpu.R[15] = 0x08009C7Cu;
    runtime_tick(_cyc_08009C7A);
    /* 08009C7C  08009c7c T orrs r0,r0,r1 */
    g_cpu.R[15] = 0x08009C7Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C7C = 1u;
    _cyc_08009C7C = 1u;
    uint32_t _rm_08009C7C = g_cpu.R[1];
    uint32_t _op2_08009C7C;
    uint32_t _co_08009C7C;
    _op2_08009C7C = _rm_08009C7C;
    _co_08009C7C = cpsr_c();
    uint32_t _rn_08009C7C = g_cpu.R[0];
    uint32_t _r_08009C7C;
    _r_08009C7C = _rn_08009C7C | _op2_08009C7C;
    arm_set_nzc_logic(_r_08009C7C, _co_08009C7C);
    g_cpu.R[0] = _r_08009C7C;
    g_cpu.R[15] = 0x08009C7Eu;
    runtime_tick(_cyc_08009C7C);
    /* fall-through to 0x08009C7E */
    g_cpu.R[15] = 0x08009C7Eu;
    runtime_dispatch(0x08009C7Eu);
    return;
}

/* 0x08009C7E  mode=thumb  end=0x08009C82  branches=0  indirect */


/* 0x08009C7E thumb */
void gf_tfunc_08009C7E(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009C7Eu);
    /* 08009C7E  08009c7e T strb r0,[r2] */
    g_cpu.R[15] = 0x08009C7Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C7E = 1u;
    _cyc_08009C7E = 1u;
    uint32_t _base_08009C7E = g_cpu.R[2];
    uint32_t _off_08009C7E;
    _off_08009C7E = 0x00000000u;
    uint32_t _ea_08009C7E = _base_08009C7E + _off_08009C7E;
    uint32_t _post_08009C7E = _base_08009C7E + _off_08009C7E;
    _cyc_08009C7E += runtime_mem_cycles(_ea_08009C7E, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009C7Eu, _ea_08009C7E, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08009C7E, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08009C80u;
    runtime_tick(_cyc_08009C7E);
    /* 08009C80  08009c80 T bx r14 */
    g_cpu.R[15] = 0x08009C80u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C80 = 1u;
    _cyc_08009C80 = 3u;
    uint32_t _bxt_08009C80 = g_cpu.R[14];
    g_cpu.R[15] = _bxt_08009C80 & ~1u;
    if (_bxt_08009C80 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_08009C80);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_08009C80);
    g_cpu.R[15] = 0x08009C82u;
    runtime_tick(_cyc_08009C80);
    /* fall-through to 0x08009C82 */
    g_cpu.R[15] = 0x08009C82u;
    runtime_dispatch(0x08009C82u);
    return;
}

/* 0x08009C84  mode=thumb  end=0x08009CA2  branches=2 */


/* 0x08009C84 thumb */
void gf_tfunc_08009C84(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009C84u);
    /* 08009C84  08009c84 T adds r3,r0,#0x0 */
    g_cpu.R[15] = 0x08009C84u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C84 = 1u;
    _cyc_08009C84 = 1u;
    uint32_t _rn_08009C84 = g_cpu.R[0];
    uint32_t _r_08009C84;
    _r_08009C84 = _rn_08009C84 + 0x00000000u;
    arm_set_nzcv_add(_rn_08009C84, 0x00000000u, _r_08009C84);
    g_cpu.R[3] = _r_08009C84;
    g_cpu.R[15] = 0x08009C86u;
    runtime_tick(_cyc_08009C84);
    /* 08009C86  08009c86 T ldr r2,[r3,#0x38] */
    g_cpu.R[15] = 0x08009C86u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C86 = 1u;
    _cyc_08009C86 = 2u;
    uint32_t _base_08009C86 = g_cpu.R[3];
    uint32_t _off_08009C86;
    _off_08009C86 = 0x00000038u;
    uint32_t _ea_08009C86 = _base_08009C86 + _off_08009C86;
    uint32_t _post_08009C86 = _base_08009C86 + _off_08009C86;
    _cyc_08009C86 += runtime_mem_cycles(_ea_08009C86, 4u, 0u);
    uint32_t _v_08009C86;
    { uint32_t _w = bus_read_u32(_ea_08009C86 & ~3u); uint32_t _rot = (_ea_08009C86 & 3u) * 8u; _v_08009C86 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08009C86;
    g_cpu.R[15] = 0x08009C88u;
    runtime_tick(_cyc_08009C86);
    /* 08009C88  08009c88 T ldr r0,[r3,#0x28] */
    g_cpu.R[15] = 0x08009C88u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C88 = 1u;
    _cyc_08009C88 = 2u;
    uint32_t _base_08009C88 = g_cpu.R[3];
    uint32_t _off_08009C88;
    _off_08009C88 = 0x00000028u;
    uint32_t _ea_08009C88 = _base_08009C88 + _off_08009C88;
    uint32_t _post_08009C88 = _base_08009C88 + _off_08009C88;
    _cyc_08009C88 += runtime_mem_cycles(_ea_08009C88, 4u, 0u);
    uint32_t _v_08009C88;
    { uint32_t _w = bus_read_u32(_ea_08009C88 & ~3u); uint32_t _rot = (_ea_08009C88 & 3u) * 8u; _v_08009C88 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08009C88;
    g_cpu.R[15] = 0x08009C8Au;
    runtime_tick(_cyc_08009C88);
    /* 08009C8A  08009c8a T adds r0,r0,#0x5c */
    g_cpu.R[15] = 0x08009C8Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C8A = 1u;
    _cyc_08009C8A = 1u;
    uint32_t _rn_08009C8A = g_cpu.R[0];
    uint32_t _r_08009C8A;
    _r_08009C8A = _rn_08009C8A + 0x0000005Cu;
    arm_set_nzcv_add(_rn_08009C8A, 0x0000005Cu, _r_08009C8A);
    g_cpu.R[0] = _r_08009C8A;
    g_cpu.R[15] = 0x08009C8Cu;
    runtime_tick(_cyc_08009C8A);
    /* 08009C8C  08009c8c T ldrb r0,[r0] */
    g_cpu.R[15] = 0x08009C8Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C8C = 1u;
    _cyc_08009C8C = 2u;
    uint32_t _base_08009C8C = g_cpu.R[0];
    uint32_t _off_08009C8C;
    _off_08009C8C = 0x00000000u;
    uint32_t _ea_08009C8C = _base_08009C8C + _off_08009C8C;
    uint32_t _post_08009C8C = _base_08009C8C + _off_08009C8C;
    _cyc_08009C8C += runtime_mem_cycles(_ea_08009C8C, 1u, 0u);
    uint32_t _v_08009C8C;
    _v_08009C8C = bus_read_u8(_ea_08009C8C);
    g_cpu.R[0] = _v_08009C8C;
    g_cpu.R[15] = 0x08009C8Eu;
    runtime_tick(_cyc_08009C8C);
    /* 08009C8E  08009c8e T movs r0,r0,lsl #24 */
    g_cpu.R[15] = 0x08009C8Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C8E = 1u;
    _cyc_08009C8E = 1u;
    uint32_t _rm_08009C8E = g_cpu.R[0];
    uint32_t _op2_08009C8E;
    uint32_t _co_08009C8E;
    _op2_08009C8E = _rm_08009C8E << 24;
    _co_08009C8E = (_rm_08009C8E >> 8) & 1u;
    uint32_t _r_08009C8E;
    _r_08009C8E = _op2_08009C8E;
    arm_set_nzc_logic(_r_08009C8E, _co_08009C8E);
    g_cpu.R[0] = _r_08009C8E;
    g_cpu.R[15] = 0x08009C90u;
    runtime_tick(_cyc_08009C8E);
    /* 08009C90  08009c90 T movs r0,r0,asr #24 */
    g_cpu.R[15] = 0x08009C90u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C90 = 1u;
    _cyc_08009C90 = 1u;
    uint32_t _rm_08009C90 = g_cpu.R[0];
    uint32_t _op2_08009C90;
    uint32_t _co_08009C90;
    _op2_08009C90 = (uint32_t)((int32_t)_rm_08009C90 >> 24);
    _co_08009C90 = (_rm_08009C90 >> 23) & 1u;
    uint32_t _r_08009C90;
    _r_08009C90 = _op2_08009C90;
    arm_set_nzc_logic(_r_08009C90, _co_08009C90);
    g_cpu.R[0] = _r_08009C90;
    g_cpu.R[15] = 0x08009C92u;
    runtime_tick(_cyc_08009C90);
    /* 08009C92  08009c92 T cmps r0,#0x1 */
    g_cpu.R[15] = 0x08009C92u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C92 = 1u;
    _cyc_08009C92 = 1u;
    uint32_t _rn_08009C92 = g_cpu.R[0];
    uint32_t _r_08009C92;
    _r_08009C92 = _rn_08009C92 - 0x00000001u;
    arm_set_nzcv_sub(_rn_08009C92, 0x00000001u, _r_08009C92);
    g_cpu.R[15] = 0x08009C94u;
    runtime_tick(_cyc_08009C92);
    /* 08009C94  08009c94 T beq 0x08009ca2 */
    g_cpu.R[15] = 0x08009C94u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C94 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08009C94 = 3u;
        g_cpu.R[15] = 0x08009CA2u;
        runtime_tick(_cyc_08009C94);
        GBARECOMP_TAIL_CALL(gf_tfunc_08009CA2);
    }
    g_cpu.R[15] = 0x08009C96u;
    runtime_tick(_cyc_08009C94);
    /* 08009C96  08009c96 T adds r2,r2,#0x2a */
    g_cpu.R[15] = 0x08009C96u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C96 = 1u;
    _cyc_08009C96 = 1u;
    uint32_t _rn_08009C96 = g_cpu.R[2];
    uint32_t _r_08009C96;
    _r_08009C96 = _rn_08009C96 + 0x0000002Au;
    arm_set_nzcv_add(_rn_08009C96, 0x0000002Au, _r_08009C96);
    g_cpu.R[2] = _r_08009C96;
    g_cpu.R[15] = 0x08009C98u;
    runtime_tick(_cyc_08009C96);
    /* 08009C98  08009c98 T ldrb r1,[r2] */
    g_cpu.R[15] = 0x08009C98u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C98 = 1u;
    _cyc_08009C98 = 2u;
    uint32_t _base_08009C98 = g_cpu.R[2];
    uint32_t _off_08009C98;
    _off_08009C98 = 0x00000000u;
    uint32_t _ea_08009C98 = _base_08009C98 + _off_08009C98;
    uint32_t _post_08009C98 = _base_08009C98 + _off_08009C98;
    _cyc_08009C98 += runtime_mem_cycles(_ea_08009C98, 1u, 0u);
    uint32_t _v_08009C98;
    _v_08009C98 = bus_read_u8(_ea_08009C98);
    g_cpu.R[1] = _v_08009C98;
    g_cpu.R[15] = 0x08009C9Au;
    runtime_tick(_cyc_08009C98);
    /* 08009C9A  08009c9a T movs r0,#0xbf */
    g_cpu.R[15] = 0x08009C9Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C9A = 1u;
    _cyc_08009C9A = 1u;
    uint32_t _r_08009C9A;
    _r_08009C9A = 0x000000BFu;
    arm_set_nzc_logic(_r_08009C9A, cpsr_c());
    g_cpu.R[0] = _r_08009C9A;
    g_cpu.R[15] = 0x08009C9Cu;
    runtime_tick(_cyc_08009C9A);
    /* 08009C9C  08009c9c T ands r0,r0,r1 */
    g_cpu.R[15] = 0x08009C9Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C9C = 1u;
    _cyc_08009C9C = 1u;
    uint32_t _rm_08009C9C = g_cpu.R[1];
    uint32_t _op2_08009C9C;
    uint32_t _co_08009C9C;
    _op2_08009C9C = _rm_08009C9C;
    _co_08009C9C = cpsr_c();
    uint32_t _rn_08009C9C = g_cpu.R[0];
    uint32_t _r_08009C9C;
    _r_08009C9C = _rn_08009C9C & _op2_08009C9C;
    arm_set_nzc_logic(_r_08009C9C, _co_08009C9C);
    g_cpu.R[0] = _r_08009C9C;
    g_cpu.R[15] = 0x08009C9Eu;
    runtime_tick(_cyc_08009C9C);
    /* 08009C9E  08009c9e T strb r0,[r2] */
    g_cpu.R[15] = 0x08009C9Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009C9E = 1u;
    _cyc_08009C9E = 1u;
    uint32_t _base_08009C9E = g_cpu.R[2];
    uint32_t _off_08009C9E;
    _off_08009C9E = 0x00000000u;
    uint32_t _ea_08009C9E = _base_08009C9E + _off_08009C9E;
    uint32_t _post_08009C9E = _base_08009C9E + _off_08009C9E;
    _cyc_08009C9E += runtime_mem_cycles(_ea_08009C9E, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009C9Eu, _ea_08009C9E, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08009C9E, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08009CA0u;
    runtime_tick(_cyc_08009C9E);
    /* 08009CA0  08009ca0 T b 0x08009ccc */
    g_cpu.R[15] = 0x08009CA0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009CA0 = 1u;
    _cyc_08009CA0 = 3u;
    g_cpu.R[15] = 0x08009CCCu;
    runtime_tick(_cyc_08009CA0);
    GBARECOMP_TAIL_CALL(gf_tfunc_08009CCC);
    g_cpu.R[15] = 0x08009CA2u;
    runtime_tick(_cyc_08009CA0);
    /* fall-through to 0x08009CA2 */
    g_cpu.R[15] = 0x08009CA2u;
    runtime_dispatch(0x08009CA2u);
    return;
}

/* 0x08009CA2  mode=thumb  end=0x08009CC4  branches=2 */


/* 0x08009CA2 thumb */
void gf_tfunc_08009CA2(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009CA2u);
    /* 08009CA2  08009ca2 T movs r0,#0x2a */
    g_cpu.R[15] = 0x08009CA2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009CA2 = 1u;
    _cyc_08009CA2 = 1u;
    uint32_t _r_08009CA2;
    _r_08009CA2 = 0x0000002Au;
    arm_set_nzc_logic(_r_08009CA2, cpsr_c());
    g_cpu.R[0] = _r_08009CA2;
    g_cpu.R[15] = 0x08009CA4u;
    runtime_tick(_cyc_08009CA2);
    /* 08009CA4  08009ca4 T adds r0,r0,r2 */
    g_cpu.R[15] = 0x08009CA4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009CA4 = 1u;
    _cyc_08009CA4 = 1u;
    uint32_t _rm_08009CA4 = g_cpu.R[2];
    uint32_t _op2_08009CA4;
    uint32_t _co_08009CA4;
    _op2_08009CA4 = _rm_08009CA4;
    _co_08009CA4 = cpsr_c();
    uint32_t _rn_08009CA4 = g_cpu.R[0];
    uint32_t _r_08009CA4;
    _r_08009CA4 = _rn_08009CA4 + _op2_08009CA4;
    arm_set_nzcv_add(_rn_08009CA4, _op2_08009CA4, _r_08009CA4);
    g_cpu.R[0] = _r_08009CA4;
    g_cpu.R[15] = 0x08009CA6u;
    runtime_tick(_cyc_08009CA4);
    /* 08009CA6  08009ca6 T mov r12,r0 */
    g_cpu.R[15] = 0x08009CA6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009CA6 = 1u;
    _cyc_08009CA6 = 1u;
    uint32_t _rm_08009CA6 = g_cpu.R[0];
    uint32_t _op2_08009CA6;
    uint32_t _co_08009CA6;
    _op2_08009CA6 = _rm_08009CA6;
    _co_08009CA6 = cpsr_c();
    uint32_t _r_08009CA6;
    _r_08009CA6 = _op2_08009CA6;
    g_cpu.R[12] = _r_08009CA6;
    g_cpu.R[15] = 0x08009CA8u;
    runtime_tick(_cyc_08009CA6);
    /* 08009CA8  08009ca8 T ldrb r1,[r0] */
    g_cpu.R[15] = 0x08009CA8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009CA8 = 1u;
    _cyc_08009CA8 = 2u;
    uint32_t _base_08009CA8 = g_cpu.R[0];
    uint32_t _off_08009CA8;
    _off_08009CA8 = 0x00000000u;
    uint32_t _ea_08009CA8 = _base_08009CA8 + _off_08009CA8;
    uint32_t _post_08009CA8 = _base_08009CA8 + _off_08009CA8;
    _cyc_08009CA8 += runtime_mem_cycles(_ea_08009CA8, 1u, 0u);
    uint32_t _v_08009CA8;
    _v_08009CA8 = bus_read_u8(_ea_08009CA8);
    g_cpu.R[1] = _v_08009CA8;
    g_cpu.R[15] = 0x08009CAAu;
    runtime_tick(_cyc_08009CA8);
    /* 08009CAA  08009caa T movs r0,#0x40 */
    g_cpu.R[15] = 0x08009CAAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009CAA = 1u;
    _cyc_08009CAA = 1u;
    uint32_t _r_08009CAA;
    _r_08009CAA = 0x00000040u;
    arm_set_nzc_logic(_r_08009CAA, cpsr_c());
    g_cpu.R[0] = _r_08009CAA;
    g_cpu.R[15] = 0x08009CACu;
    runtime_tick(_cyc_08009CAA);
    /* 08009CAC  08009cac T orrs r0,r0,r1 */
    g_cpu.R[15] = 0x08009CACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009CAC = 1u;
    _cyc_08009CAC = 1u;
    uint32_t _rm_08009CAC = g_cpu.R[1];
    uint32_t _op2_08009CAC;
    uint32_t _co_08009CAC;
    _op2_08009CAC = _rm_08009CAC;
    _co_08009CAC = cpsr_c();
    uint32_t _rn_08009CAC = g_cpu.R[0];
    uint32_t _r_08009CAC;
    _r_08009CAC = _rn_08009CAC | _op2_08009CAC;
    arm_set_nzc_logic(_r_08009CAC, _co_08009CAC);
    g_cpu.R[0] = _r_08009CAC;
    g_cpu.R[15] = 0x08009CAEu;
    runtime_tick(_cyc_08009CAC);
    /* 08009CAE  08009cae T mov r1,r12 */
    g_cpu.R[15] = 0x08009CAEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009CAE = 1u;
    _cyc_08009CAE = 1u;
    uint32_t _rm_08009CAE = g_cpu.R[12];
    uint32_t _op2_08009CAE;
    uint32_t _co_08009CAE;
    _op2_08009CAE = _rm_08009CAE;
    _co_08009CAE = cpsr_c();
    uint32_t _r_08009CAE;
    _r_08009CAE = _op2_08009CAE;
    g_cpu.R[1] = _r_08009CAE;
    g_cpu.R[15] = 0x08009CB0u;
    runtime_tick(_cyc_08009CAE);
    /* 08009CB0  08009cb0 T strb r0,[r1] */
    g_cpu.R[15] = 0x08009CB0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009CB0 = 1u;
    _cyc_08009CB0 = 1u;
    uint32_t _base_08009CB0 = g_cpu.R[1];
    uint32_t _off_08009CB0;
    _off_08009CB0 = 0x00000000u;
    uint32_t _ea_08009CB0 = _base_08009CB0 + _off_08009CB0;
    uint32_t _post_08009CB0 = _base_08009CB0 + _off_08009CB0;
    _cyc_08009CB0 += runtime_mem_cycles(_ea_08009CB0, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009CB0u, _ea_08009CB0, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08009CB0, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08009CB2u;
    runtime_tick(_cyc_08009CB0);
    /* 08009CB2  08009cb2 T ldr r0,[r3,#0x28] */
    g_cpu.R[15] = 0x08009CB2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009CB2 = 1u;
    _cyc_08009CB2 = 2u;
    uint32_t _base_08009CB2 = g_cpu.R[3];
    uint32_t _off_08009CB2;
    _off_08009CB2 = 0x00000028u;
    uint32_t _ea_08009CB2 = _base_08009CB2 + _off_08009CB2;
    uint32_t _post_08009CB2 = _base_08009CB2 + _off_08009CB2;
    _cyc_08009CB2 += runtime_mem_cycles(_ea_08009CB2, 4u, 0u);
    uint32_t _v_08009CB2;
    { uint32_t _w = bus_read_u32(_ea_08009CB2 & ~3u); uint32_t _rot = (_ea_08009CB2 & 3u) * 8u; _v_08009CB2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08009CB2;
    g_cpu.R[15] = 0x08009CB4u;
    runtime_tick(_cyc_08009CB2);
    /* 08009CB4  08009cb4 T adds r0,r0,#0x60 */
    g_cpu.R[15] = 0x08009CB4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009CB4 = 1u;
    _cyc_08009CB4 = 1u;
    uint32_t _rn_08009CB4 = g_cpu.R[0];
    uint32_t _r_08009CB4;
    _r_08009CB4 = _rn_08009CB4 + 0x00000060u;
    arm_set_nzcv_add(_rn_08009CB4, 0x00000060u, _r_08009CB4);
    g_cpu.R[0] = _r_08009CB4;
    g_cpu.R[15] = 0x08009CB6u;
    runtime_tick(_cyc_08009CB4);
    /* 08009CB6  08009cb6 T ldrb r0,[r0] */
    g_cpu.R[15] = 0x08009CB6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009CB6 = 1u;
    _cyc_08009CB6 = 2u;
    uint32_t _base_08009CB6 = g_cpu.R[0];
    uint32_t _off_08009CB6;
    _off_08009CB6 = 0x00000000u;
    uint32_t _ea_08009CB6 = _base_08009CB6 + _off_08009CB6;
    uint32_t _post_08009CB6 = _base_08009CB6 + _off_08009CB6;
    _cyc_08009CB6 += runtime_mem_cycles(_ea_08009CB6, 1u, 0u);
    uint32_t _v_08009CB6;
    _v_08009CB6 = bus_read_u8(_ea_08009CB6);
    g_cpu.R[0] = _v_08009CB6;
    g_cpu.R[15] = 0x08009CB8u;
    runtime_tick(_cyc_08009CB6);
    /* 08009CB8  08009cb8 T movs r0,r0,lsl #24 */
    g_cpu.R[15] = 0x08009CB8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009CB8 = 1u;
    _cyc_08009CB8 = 1u;
    uint32_t _rm_08009CB8 = g_cpu.R[0];
    uint32_t _op2_08009CB8;
    uint32_t _co_08009CB8;
    _op2_08009CB8 = _rm_08009CB8 << 24;
    _co_08009CB8 = (_rm_08009CB8 >> 8) & 1u;
    uint32_t _r_08009CB8;
    _r_08009CB8 = _op2_08009CB8;
    arm_set_nzc_logic(_r_08009CB8, _co_08009CB8);
    g_cpu.R[0] = _r_08009CB8;
    g_cpu.R[15] = 0x08009CBAu;
    runtime_tick(_cyc_08009CB8);
    /* 08009CBA  08009cba T movs r0,r0,asr #24 */
    g_cpu.R[15] = 0x08009CBAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009CBA = 1u;
    _cyc_08009CBA = 1u;
    uint32_t _rm_08009CBA = g_cpu.R[0];
    uint32_t _op2_08009CBA;
    uint32_t _co_08009CBA;
    _op2_08009CBA = (uint32_t)((int32_t)_rm_08009CBA >> 24);
    _co_08009CBA = (_rm_08009CBA >> 23) & 1u;
    uint32_t _r_08009CBA;
    _r_08009CBA = _op2_08009CBA;
    arm_set_nzc_logic(_r_08009CBA, _co_08009CBA);
    g_cpu.R[0] = _r_08009CBA;
    g_cpu.R[15] = 0x08009CBCu;
    runtime_tick(_cyc_08009CBA);
    /* 08009CBC  08009cbc T cmps r0,#0x0 */
    g_cpu.R[15] = 0x08009CBCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009CBC = 1u;
    _cyc_08009CBC = 1u;
    uint32_t _rn_08009CBC = g_cpu.R[0];
    uint32_t _r_08009CBC;
    _r_08009CBC = _rn_08009CBC - 0x00000000u;
    arm_set_nzcv_sub(_rn_08009CBC, 0x00000000u, _r_08009CBC);
    g_cpu.R[15] = 0x08009CBEu;
    runtime_tick(_cyc_08009CBC);
    /* 08009CBE  08009cbe T beq 0x08009cc8 */
    g_cpu.R[15] = 0x08009CBEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009CBE = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08009CBE = 3u;
        g_cpu.R[15] = 0x08009CC8u;
        runtime_tick(_cyc_08009CBE);
        GBARECOMP_TAIL_CALL(gf_tfunc_08009CC8);
    }
    g_cpu.R[15] = 0x08009CC0u;
    runtime_tick(_cyc_08009CBE);
    /* 08009CC0  08009cc0 T ldr r0,[r15] */
    g_cpu.R[15] = 0x08009CC0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009CC0 = 1u;
    _cyc_08009CC0 = 2u;
    uint32_t _base_08009CC0 = 0x08009CC4u & ~3u;
    uint32_t _off_08009CC0;
    _off_08009CC0 = 0x00000000u;
    uint32_t _ea_08009CC0 = _base_08009CC0 + _off_08009CC0;
    uint32_t _post_08009CC0 = _base_08009CC0 + _off_08009CC0;
    _cyc_08009CC0 += runtime_mem_cycles(_ea_08009CC0, 4u, 0u);
    uint32_t _v_08009CC0;
    { uint32_t _w = bus_read_u32(_ea_08009CC0 & ~3u); uint32_t _rot = (_ea_08009CC0 & 3u) * 8u; _v_08009CC0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08009CC0;
    g_cpu.R[15] = 0x08009CC2u;
    runtime_tick(_cyc_08009CC0);
    /* 08009CC2  08009cc2 T b 0x08009cca */
    g_cpu.R[15] = 0x08009CC2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009CC2 = 1u;
    _cyc_08009CC2 = 3u;
    g_cpu.R[15] = 0x08009CCAu;
    runtime_tick(_cyc_08009CC2);
    GBARECOMP_TAIL_CALL(gf_tfunc_08009CCA);
    g_cpu.R[15] = 0x08009CC4u;
    runtime_tick(_cyc_08009CC2);
    /* fall-through to 0x08009CC4 */
    g_cpu.R[15] = 0x08009CC4u;
    runtime_dispatch(0x08009CC4u);
    return;
}

/* 0x08009CCA  mode=thumb  end=0x08009CCC  branches=0  indirect */


/* 0x08009CC8 thumb */
void gf_tfunc_08009CC8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009CC8u);
    /* 08009CC8  08009cc8 T ldr r0,[r15,#0x4] */
    g_cpu.R[15] = 0x08009CC8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009CC8 = 1u;
    _cyc_08009CC8 = 2u;
    uint32_t _base_08009CC8 = 0x08009CCCu & ~3u;
    uint32_t _off_08009CC8;
    _off_08009CC8 = 0x00000004u;
    uint32_t _ea_08009CC8 = _base_08009CC8 + _off_08009CC8;
    uint32_t _post_08009CC8 = _base_08009CC8 + _off_08009CC8;
    _cyc_08009CC8 += runtime_mem_cycles(_ea_08009CC8, 4u, 0u);
    uint32_t _v_08009CC8;
    { uint32_t _w = bus_read_u32(_ea_08009CC8 & ~3u); uint32_t _rot = (_ea_08009CC8 & 3u) * 8u; _v_08009CC8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08009CC8;
    g_cpu.R[15] = 0x08009CCAu;
    runtime_tick(_cyc_08009CC8);
    /* fall-through to 0x08009CCA */
    g_cpu.R[15] = 0x08009CCAu;
    runtime_dispatch(0x08009CCAu);
    return;
}

/* 0x08009CCC  mode=thumb  end=0x08009CCE  branches=0  indirect */


/* 0x08009CCA thumb */
void gf_tfunc_08009CCA(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009CCAu);
    /* 08009CCA  08009cca T str r0,[r2,#0x24] */
    g_cpu.R[15] = 0x08009CCAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009CCA = 1u;
    _cyc_08009CCA = 1u;
    uint32_t _base_08009CCA = g_cpu.R[2];
    uint32_t _off_08009CCA;
    _off_08009CCA = 0x00000024u;
    uint32_t _ea_08009CCA = _base_08009CCA + _off_08009CCA;
    uint32_t _post_08009CCA = _base_08009CCA + _off_08009CCA;
    _cyc_08009CCA += runtime_mem_cycles(_ea_08009CCA, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08009CCAu, _ea_08009CCA & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08009CCA & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08009CCCu;
    runtime_tick(_cyc_08009CCA);
    /* fall-through to 0x08009CCC */
    g_cpu.R[15] = 0x08009CCCu;
    runtime_dispatch(0x08009CCCu);
    return;
}

/* 0x08010186  mode=thumb  end=0x080101A4  branches=7  indirect */


/* 0x08009CCC thumb */
void gf_tfunc_08009CCC(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08009CCCu);
    /* 08009CCC  08009ccc T bx r14 */
    g_cpu.R[15] = 0x08009CCCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08009CCC = 1u;
    _cyc_08009CCC = 3u;
    uint32_t _bxt_08009CCC = g_cpu.R[14];
    g_cpu.R[15] = _bxt_08009CCC & ~1u;
    if (_bxt_08009CCC & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_08009CCC);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_08009CCC);
    g_cpu.R[15] = 0x08009CCEu;
    runtime_tick(_cyc_08009CCC);
    /* fall-through to 0x08009CCE */
    g_cpu.R[15] = 0x08009CCEu;
    runtime_dispatch(0x08009CCEu);
    return;
}

/* 0x08010158  mode=thumb  end=0x08010168  branches=12  indirect */



