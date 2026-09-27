/* Auto-split from gbarecomp shards. Module: irq_timers
 * 2 guest functions. Do not hand-edit function bodies.
 */

#include "runtime_arm.h"
#include "recompiled.h"

/* 0x08001918 thumb */
void gf_irq_dispatch_inner(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08001918u);
    /* 08001918  08001918 T stm r13!,{r4,r5,r14} */
    g_cpu.R[15] = 0x08001918u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001918 = 1u;
    _cyc_08001918 = 1u;
    uint32_t _b_08001918 = g_cpu.R[13];
    uint32_t _a_08001918 = _b_08001918 - 12u;
    uint32_t _fb_08001918 = _b_08001918 - 12u;
    _cyc_08001918 += runtime_mem_cycles(_a_08001918 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08001918u, _a_08001918 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_08001918 & ~3u, g_cpu.R[4]);
    _a_08001918 += 4u;
    _cyc_08001918 += runtime_mem_cycles(_a_08001918 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08001918u, _a_08001918 & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_08001918 & ~3u, g_cpu.R[5]);
    _a_08001918 += 4u;
    _cyc_08001918 += runtime_mem_cycles(_a_08001918 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08001918u, _a_08001918 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_08001918 & ~3u, g_cpu.R[14]);
    _a_08001918 += 4u;
    g_cpu.R[13] = _fb_08001918;
    g_cpu.R[15] = 0x0800191Au;
    runtime_tick(_cyc_08001918);
    /* 0800191A  0800191a T adds r4,r0,#0x0 */
    g_cpu.R[15] = 0x0800191Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800191A = 1u;
    _cyc_0800191A = 1u;
    uint32_t _rn_0800191A = g_cpu.R[0];
    uint32_t _r_0800191A;
    _r_0800191A = _rn_0800191A + 0x00000000u;
    arm_set_nzcv_add(_rn_0800191A, 0x00000000u, _r_0800191A);
    g_cpu.R[4] = _r_0800191A;
    g_cpu.R[15] = 0x0800191Cu;
    runtime_tick(_cyc_0800191A);
    /* 0800191C  0800191c T ldr r2,[r15,#0x50] */
    g_cpu.R[15] = 0x0800191Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800191C = 1u;
    _cyc_0800191C = 2u;
    uint32_t _base_0800191C = 0x08001920u & ~3u;
    uint32_t _off_0800191C;
    _off_0800191C = 0x00000050u;
    uint32_t _ea_0800191C = _base_0800191C + _off_0800191C;
    uint32_t _post_0800191C = _base_0800191C + _off_0800191C;
    _cyc_0800191C += runtime_mem_cycles(_ea_0800191C, 4u, 0u);
    uint32_t _v_0800191C;
    { uint32_t _w = bus_read_u32(_ea_0800191C & ~3u); uint32_t _rot = (_ea_0800191C & 3u) * 8u; _v_0800191C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_0800191C;
    g_cpu.R[15] = 0x0800191Eu;
    runtime_tick(_cyc_0800191C);
    /* 0800191E  0800191e T movs r3,#0x0 */
    g_cpu.R[15] = 0x0800191Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800191E = 1u;
    _cyc_0800191E = 1u;
    uint32_t _r_0800191E;
    _r_0800191E = 0x00000000u;
    arm_set_nzc_logic(_r_0800191E, cpsr_c());
    g_cpu.R[3] = _r_0800191E;
    g_cpu.R[15] = 0x08001920u;
    runtime_tick(_cyc_0800191E);
    /* 08001920  08001920 T movs r1,#0x0 */
    g_cpu.R[15] = 0x08001920u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001920 = 1u;
    _cyc_08001920 = 1u;
    uint32_t _r_08001920;
    _r_08001920 = 0x00000000u;
    arm_set_nzc_logic(_r_08001920, cpsr_c());
    g_cpu.R[1] = _r_08001920;
    g_cpu.R[15] = 0x08001922u;
    runtime_tick(_cyc_08001920);
    /* 08001922  08001922 T movs r0,#0xff */
    g_cpu.R[15] = 0x08001922u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001922 = 1u;
    _cyc_08001922 = 1u;
    uint32_t _r_08001922;
    _r_08001922 = 0x000000FFu;
    arm_set_nzc_logic(_r_08001922, cpsr_c());
    g_cpu.R[0] = _r_08001922;
    g_cpu.R[15] = 0x08001924u;
    runtime_tick(_cyc_08001922);
    /* 08001924  08001924 T strh r0,[r2,#0x4] */
    g_cpu.R[15] = 0x08001924u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001924 = 1u;
    _cyc_08001924 = 1u;
    uint32_t _base_08001924 = g_cpu.R[2];
    uint32_t _off_08001924;
    _off_08001924 = 0x00000004u;
    uint32_t _ea_08001924 = _base_08001924 + _off_08001924;
    uint32_t _post_08001924 = _base_08001924 + _off_08001924;
    _cyc_08001924 += runtime_mem_cycles(_ea_08001924, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08001924u, _ea_08001924 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08001924 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08001926u;
    runtime_tick(_cyc_08001924);
    /* 08001926  08001926 T strh r1,[r2,#0x8] */
    g_cpu.R[15] = 0x08001926u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001926 = 1u;
    _cyc_08001926 = 1u;
    uint32_t _base_08001926 = g_cpu.R[2];
    uint32_t _off_08001926;
    _off_08001926 = 0x00000008u;
    uint32_t _ea_08001926 = _base_08001926 + _off_08001926;
    uint32_t _post_08001926 = _base_08001926 + _off_08001926;
    _cyc_08001926 += runtime_mem_cycles(_ea_08001926, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08001926u, _ea_08001926 & ~1u, (uint32_t)(g_cpu.R[1] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08001926 & ~1u, (uint16_t)(g_cpu.R[1] & 0xFFFFu));
    g_cpu.R[15] = 0x08001928u;
    runtime_tick(_cyc_08001926);
    /* 08001928  08001928 T movs r1,#0x22 */
    g_cpu.R[15] = 0x08001928u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001928 = 1u;
    _cyc_08001928 = 1u;
    uint32_t _r_08001928;
    _r_08001928 = 0x00000022u;
    arm_set_nzc_logic(_r_08001928, cpsr_c());
    g_cpu.R[1] = _r_08001928;
    g_cpu.R[15] = 0x0800192Au;
    runtime_tick(_cyc_08001928);
    /* 0800192A  0800192a T ldrsh r0,[r4,+r1] */
    g_cpu.R[15] = 0x0800192Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800192A = 1u;
    _cyc_0800192A = 2u;
    uint32_t _base_0800192A = g_cpu.R[4];
    uint32_t _off_0800192A;
    uint32_t _morm_0800192A = g_cpu.R[1];
    _off_0800192A = _morm_0800192A;
    uint32_t _ea_0800192A = _base_0800192A + _off_0800192A;
    uint32_t _post_0800192A = _base_0800192A + _off_0800192A;
    _cyc_0800192A += runtime_mem_cycles(_ea_0800192A, 2u, 0u);
    uint32_t _v_0800192A;
    if (_ea_0800192A & 1u) _v_0800192A = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_0800192A);
    else _v_0800192A = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_0800192A);
    g_cpu.R[0] = _v_0800192A;
    g_cpu.R[15] = 0x0800192Cu;
    runtime_tick(_cyc_0800192A);
    /* 0800192C  0800192c T movs r0,r0,lsl #1 */
    g_cpu.R[15] = 0x0800192Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800192C = 1u;
    _cyc_0800192C = 1u;
    uint32_t _rm_0800192C = g_cpu.R[0];
    uint32_t _op2_0800192C;
    uint32_t _co_0800192C;
    _op2_0800192C = _rm_0800192C << 1;
    _co_0800192C = (_rm_0800192C >> 31) & 1u;
    uint32_t _r_0800192C;
    _r_0800192C = _op2_0800192C;
    arm_set_nzc_logic(_r_0800192C, _co_0800192C);
    g_cpu.R[0] = _r_0800192C;
    g_cpu.R[15] = 0x0800192Eu;
    runtime_tick(_cyc_0800192C);
    /* 0800192E  0800192e T adds r0,r0,r4 */
    g_cpu.R[15] = 0x0800192Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800192E = 1u;
    _cyc_0800192E = 1u;
    uint32_t _rm_0800192E = g_cpu.R[4];
    uint32_t _op2_0800192E;
    uint32_t _co_0800192E;
    _op2_0800192E = _rm_0800192E;
    _co_0800192E = cpsr_c();
    uint32_t _rn_0800192E = g_cpu.R[0];
    uint32_t _r_0800192E;
    _r_0800192E = _rn_0800192E + _op2_0800192E;
    arm_set_nzcv_add(_rn_0800192E, _op2_0800192E, _r_0800192E);
    g_cpu.R[0] = _r_0800192E;
    g_cpu.R[15] = 0x08001930u;
    runtime_tick(_cyc_0800192E);
    /* 08001930  08001930 T strb r3,[r0,#0x19] */
    g_cpu.R[15] = 0x08001930u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001930 = 1u;
    _cyc_08001930 = 1u;
    uint32_t _base_08001930 = g_cpu.R[0];
    uint32_t _off_08001930;
    _off_08001930 = 0x00000019u;
    uint32_t _ea_08001930 = _base_08001930 + _off_08001930;
    uint32_t _post_08001930 = _base_08001930 + _off_08001930;
    _cyc_08001930 += runtime_mem_cycles(_ea_08001930, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08001930u, _ea_08001930, (uint32_t)(g_cpu.R[3] & 0xFFu), 1u);
    bus_write_u8(_ea_08001930, (uint8_t)(g_cpu.R[3] & 0xFFu));
    g_cpu.R[15] = 0x08001932u;
    runtime_tick(_cyc_08001930);
    /* 08001932  08001932 T ldr r0,[r15,#0x40] */
    g_cpu.R[15] = 0x08001932u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001932 = 1u;
    _cyc_08001932 = 2u;
    uint32_t _base_08001932 = 0x08001936u & ~3u;
    uint32_t _off_08001932;
    _off_08001932 = 0x00000040u;
    uint32_t _ea_08001932 = _base_08001932 + _off_08001932;
    uint32_t _post_08001932 = _base_08001932 + _off_08001932;
    _cyc_08001932 += runtime_mem_cycles(_ea_08001932, 4u, 0u);
    uint32_t _v_08001932;
    { uint32_t _w = bus_read_u32(_ea_08001932 & ~3u); uint32_t _rot = (_ea_08001932 & 3u) * 8u; _v_08001932 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08001932;
    g_cpu.R[15] = 0x08001934u;
    runtime_tick(_cyc_08001932);
    /* 08001934  08001934 T adds r5,r4,#0x0 */
    g_cpu.R[15] = 0x08001934u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001934 = 1u;
    _cyc_08001934 = 1u;
    uint32_t _rn_08001934 = g_cpu.R[4];
    uint32_t _r_08001934;
    _r_08001934 = _rn_08001934 + 0x00000000u;
    arm_set_nzcv_add(_rn_08001934, 0x00000000u, _r_08001934);
    g_cpu.R[5] = _r_08001934;
    g_cpu.R[15] = 0x08001936u;
    runtime_tick(_cyc_08001934);
    /* 08001936  08001936 T adds r5,r5,#0x18 */
    g_cpu.R[15] = 0x08001936u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001936 = 1u;
    _cyc_08001936 = 1u;
    uint32_t _rn_08001936 = g_cpu.R[5];
    uint32_t _r_08001936;
    _r_08001936 = _rn_08001936 + 0x00000018u;
    arm_set_nzcv_add(_rn_08001936, 0x00000018u, _r_08001936);
    g_cpu.R[5] = _r_08001936;
    g_cpu.R[15] = 0x08001938u;
    runtime_tick(_cyc_08001936);
    /* 08001938  08001938 T adds r1,r4,#0x0 */
    g_cpu.R[15] = 0x08001938u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001938 = 1u;
    _cyc_08001938 = 1u;
    uint32_t _rn_08001938 = g_cpu.R[4];
    uint32_t _r_08001938;
    _r_08001938 = _rn_08001938 + 0x00000000u;
    arm_set_nzcv_add(_rn_08001938, 0x00000000u, _r_08001938);
    g_cpu.R[1] = _r_08001938;
    g_cpu.R[15] = 0x0800193Au;
    runtime_tick(_cyc_08001938);
    /* 0800193A  0800193a T adds r1,r1,#0x22 */
    g_cpu.R[15] = 0x0800193Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800193A = 1u;
    _cyc_0800193A = 1u;
    uint32_t _rn_0800193A = g_cpu.R[1];
    uint32_t _r_0800193A;
    _r_0800193A = _rn_0800193A + 0x00000022u;
    arm_set_nzcv_add(_rn_0800193A, 0x00000022u, _r_0800193A);
    g_cpu.R[1] = _r_0800193A;
    g_cpu.R[15] = 0x0800193Cu;
    runtime_tick(_cyc_0800193A);
    /* 0800193C  0800193c T ldr r2,[r0] */
    g_cpu.R[15] = 0x0800193Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800193C = 1u;
    _cyc_0800193C = 2u;
    uint32_t _base_0800193C = g_cpu.R[0];
    uint32_t _off_0800193C;
    _off_0800193C = 0x00000000u;
    uint32_t _ea_0800193C = _base_0800193C + _off_0800193C;
    uint32_t _post_0800193C = _base_0800193C + _off_0800193C;
    _cyc_0800193C += runtime_mem_cycles(_ea_0800193C, 4u, 0u);
    uint32_t _v_0800193C;
    { uint32_t _w = bus_read_u32(_ea_0800193C & ~3u); uint32_t _rot = (_ea_0800193C & 3u) * 8u; _v_0800193C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_0800193C;
    g_cpu.R[15] = 0x0800193Eu;
    runtime_tick(_cyc_0800193C);
    /* 0800193E  0800193e T adds r0,r5,#0x0 */
    g_cpu.R[15] = 0x0800193Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800193E = 1u;
    _cyc_0800193E = 1u;
    uint32_t _rn_0800193E = g_cpu.R[5];
    uint32_t _r_0800193E;
    _r_0800193E = _rn_0800193E + 0x00000000u;
    arm_set_nzcv_add(_rn_0800193E, 0x00000000u, _r_0800193E);
    g_cpu.R[0] = _r_0800193E;
    g_cpu.R[15] = 0x08001940u;
    runtime_tick(_cyc_0800193E);
    /* 08001940  08001940 T bl.hi 0x080c2944 */
    g_cpu.R[15] = 0x08001940u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001940 = 1u;
    _cyc_08001940 = 1u;
    g_cpu.R[14] = 0x080C2944u;
    g_cpu.R[15] = 0x08001942u;
    runtime_tick(_cyc_08001940);
    /* 08001942  08001942 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08001942u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001942 = 1u;
    _cyc_08001942 = 3u;
    uint32_t _blt_08001942 = (g_cpu.R[14] + 0x000008A0u) & ~1u;
    g_cpu.R[14] = 0x08001945u;
    g_cpu.R[15] = _blt_08001942;
    runtime_call_push_return(0x08001944u);
    runtime_tick(_cyc_08001942);
    _cyc_08001942 = 0u;
    runtime_dispatch(_blt_08001942);
    if (g_cpu.R[15] != 0x08001944u) { runtime_call_cancel_return(0x08001944u); return; }
    g_cpu.R[15] = 0x08001944u;
    runtime_tick(_cyc_08001942);
    /* fall-through to 0x08001944 */
    g_cpu.R[15] = 0x08001944u;
    runtime_dispatch(0x08001944u);
    return;
}

/* 0x08001944  mode=thumb  end=0x0800196A  branches=2  indirect */


/* 0x08001978 thumb */
void gf_irq_dispatch_tail(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08001978u);
    /* 08001978  08001978 T stm r13!,{r4,r5,r14} */
    g_cpu.R[15] = 0x08001978u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001978 = 1u;
    _cyc_08001978 = 1u;
    uint32_t _b_08001978 = g_cpu.R[13];
    uint32_t _a_08001978 = _b_08001978 - 12u;
    uint32_t _fb_08001978 = _b_08001978 - 12u;
    _cyc_08001978 += runtime_mem_cycles(_a_08001978 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08001978u, _a_08001978 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_08001978 & ~3u, g_cpu.R[4]);
    _a_08001978 += 4u;
    _cyc_08001978 += runtime_mem_cycles(_a_08001978 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08001978u, _a_08001978 & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_08001978 & ~3u, g_cpu.R[5]);
    _a_08001978 += 4u;
    _cyc_08001978 += runtime_mem_cycles(_a_08001978 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08001978u, _a_08001978 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_08001978 & ~3u, g_cpu.R[14]);
    _a_08001978 += 4u;
    g_cpu.R[13] = _fb_08001978;
    g_cpu.R[15] = 0x0800197Au;
    runtime_tick(_cyc_08001978);
    /* 0800197A  0800197a T adds r5,r0,#0x0 */
    g_cpu.R[15] = 0x0800197Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800197A = 1u;
    _cyc_0800197A = 1u;
    uint32_t _rn_0800197A = g_cpu.R[0];
    uint32_t _r_0800197A;
    _r_0800197A = _rn_0800197A + 0x00000000u;
    arm_set_nzcv_add(_rn_0800197A, 0x00000000u, _r_0800197A);
    g_cpu.R[5] = _r_0800197A;
    g_cpu.R[15] = 0x0800197Cu;
    runtime_tick(_cyc_0800197A);
    /* 0800197C  0800197c T ldr r1,[r15,#0x58] */
    g_cpu.R[15] = 0x0800197Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800197C = 1u;
    _cyc_0800197C = 2u;
    uint32_t _base_0800197C = 0x08001980u & ~3u;
    uint32_t _off_0800197C;
    _off_0800197C = 0x00000058u;
    uint32_t _ea_0800197C = _base_0800197C + _off_0800197C;
    uint32_t _post_0800197C = _base_0800197C + _off_0800197C;
    _cyc_0800197C += runtime_mem_cycles(_ea_0800197C, 4u, 0u);
    uint32_t _v_0800197C;
    { uint32_t _w = bus_read_u32(_ea_0800197C & ~3u); uint32_t _rot = (_ea_0800197C & 3u) * 8u; _v_0800197C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0800197C;
    g_cpu.R[15] = 0x0800197Eu;
    runtime_tick(_cyc_0800197C);
    /* 0800197E  0800197e T ldrh r0,[r1,#0x8] */
    g_cpu.R[15] = 0x0800197Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800197E = 1u;
    _cyc_0800197E = 2u;
    uint32_t _base_0800197E = g_cpu.R[1];
    uint32_t _off_0800197E;
    _off_0800197E = 0x00000008u;
    uint32_t _ea_0800197E = _base_0800197E + _off_0800197E;
    uint32_t _post_0800197E = _base_0800197E + _off_0800197E;
    _cyc_0800197E += runtime_mem_cycles(_ea_0800197E, 2u, 0u);
    uint32_t _v_0800197E;
    { uint32_t _h = bus_read_u16(_ea_0800197E & ~1u); if (_ea_0800197E & 1u) _v_0800197E = ((_h >> 8) | (_h << 24)); else _v_0800197E = _h; }
    g_cpu.R[0] = _v_0800197E;
    g_cpu.R[15] = 0x08001980u;
    runtime_tick(_cyc_0800197E);
    /* 08001980  08001980 T adds r0,r0,#0x1 */
    g_cpu.R[15] = 0x08001980u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001980 = 1u;
    _cyc_08001980 = 1u;
    uint32_t _rn_08001980 = g_cpu.R[0];
    uint32_t _r_08001980;
    _r_08001980 = _rn_08001980 + 0x00000001u;
    arm_set_nzcv_add(_rn_08001980, 0x00000001u, _r_08001980);
    g_cpu.R[0] = _r_08001980;
    g_cpu.R[15] = 0x08001982u;
    runtime_tick(_cyc_08001980);
    /* 08001982  08001982 T strh r0,[r1,#0x8] */
    g_cpu.R[15] = 0x08001982u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001982 = 1u;
    _cyc_08001982 = 1u;
    uint32_t _base_08001982 = g_cpu.R[1];
    uint32_t _off_08001982;
    _off_08001982 = 0x00000008u;
    uint32_t _ea_08001982 = _base_08001982 + _off_08001982;
    uint32_t _post_08001982 = _base_08001982 + _off_08001982;
    _cyc_08001982 += runtime_mem_cycles(_ea_08001982, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08001982u, _ea_08001982 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08001982 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08001984u;
    runtime_tick(_cyc_08001982);
    /* 08001984  08001984 T movs r0,r0,lsl #16 */
    g_cpu.R[15] = 0x08001984u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001984 = 1u;
    _cyc_08001984 = 1u;
    uint32_t _rm_08001984 = g_cpu.R[0];
    uint32_t _op2_08001984;
    uint32_t _co_08001984;
    _op2_08001984 = _rm_08001984 << 16;
    _co_08001984 = (_rm_08001984 >> 16) & 1u;
    uint32_t _r_08001984;
    _r_08001984 = _op2_08001984;
    arm_set_nzc_logic(_r_08001984, _co_08001984);
    g_cpu.R[0] = _r_08001984;
    g_cpu.R[15] = 0x08001986u;
    runtime_tick(_cyc_08001984);
    /* 08001986  08001986 T movs r0,r0,lsr #16 */
    g_cpu.R[15] = 0x08001986u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001986 = 1u;
    _cyc_08001986 = 1u;
    uint32_t _rm_08001986 = g_cpu.R[0];
    uint32_t _op2_08001986;
    uint32_t _co_08001986;
    _op2_08001986 = _rm_08001986 >> 16;
    _co_08001986 = (_rm_08001986 >> 15) & 1u;
    uint32_t _r_08001986;
    _r_08001986 = _op2_08001986;
    arm_set_nzc_logic(_r_08001986, _co_08001986);
    g_cpu.R[0] = _r_08001986;
    g_cpu.R[15] = 0x08001988u;
    runtime_tick(_cyc_08001986);
    /* 08001988  08001988 T cmps r0,#0xf */
    g_cpu.R[15] = 0x08001988u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001988 = 1u;
    _cyc_08001988 = 1u;
    uint32_t _rn_08001988 = g_cpu.R[0];
    uint32_t _r_08001988;
    _r_08001988 = _rn_08001988 - 0x0000000Fu;
    arm_set_nzcv_sub(_rn_08001988, 0x0000000Fu, _r_08001988);
    g_cpu.R[15] = 0x0800198Au;
    runtime_tick(_cyc_08001988);
    /* 0800198A  0800198a T bls 0x080019d0 */
    g_cpu.R[15] = 0x0800198Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800198A = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_0800198A = 3u;
        g_cpu.R[15] = 0x080019D0u;
        runtime_tick(_cyc_0800198A);
        GBARECOMP_TAIL_CALL(gf_tfunc_080019D0);
    }
    g_cpu.R[15] = 0x0800198Cu;
    runtime_tick(_cyc_0800198A);
    /* 0800198C  0800198c T movs r1,#0x22 */
    g_cpu.R[15] = 0x0800198Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800198C = 1u;
    _cyc_0800198C = 1u;
    uint32_t _r_0800198C;
    _r_0800198C = 0x00000022u;
    arm_set_nzc_logic(_r_0800198C, cpsr_c());
    g_cpu.R[1] = _r_0800198C;
    g_cpu.R[15] = 0x0800198Eu;
    runtime_tick(_cyc_0800198C);
    /* 0800198E  0800198e T ldrsh r0,[r5,+r1] */
    g_cpu.R[15] = 0x0800198Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800198E = 1u;
    _cyc_0800198E = 2u;
    uint32_t _base_0800198E = g_cpu.R[5];
    uint32_t _off_0800198E;
    uint32_t _morm_0800198E = g_cpu.R[1];
    _off_0800198E = _morm_0800198E;
    uint32_t _ea_0800198E = _base_0800198E + _off_0800198E;
    uint32_t _post_0800198E = _base_0800198E + _off_0800198E;
    _cyc_0800198E += runtime_mem_cycles(_ea_0800198E, 2u, 0u);
    uint32_t _v_0800198E;
    if (_ea_0800198E & 1u) _v_0800198E = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_0800198E);
    else _v_0800198E = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_0800198E);
    g_cpu.R[0] = _v_0800198E;
    g_cpu.R[15] = 0x08001990u;
    runtime_tick(_cyc_0800198E);
    /* 08001990  08001990 T movs r0,r0,lsl #1 */
    g_cpu.R[15] = 0x08001990u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001990 = 1u;
    _cyc_08001990 = 1u;
    uint32_t _rm_08001990 = g_cpu.R[0];
    uint32_t _op2_08001990;
    uint32_t _co_08001990;
    _op2_08001990 = _rm_08001990 << 1;
    _co_08001990 = (_rm_08001990 >> 31) & 1u;
    uint32_t _r_08001990;
    _r_08001990 = _op2_08001990;
    arm_set_nzc_logic(_r_08001990, _co_08001990);
    g_cpu.R[0] = _r_08001990;
    g_cpu.R[15] = 0x08001992u;
    runtime_tick(_cyc_08001990);
    /* 08001992  08001992 T adds r0,r0,r5 */
    g_cpu.R[15] = 0x08001992u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001992 = 1u;
    _cyc_08001992 = 1u;
    uint32_t _rm_08001992 = g_cpu.R[5];
    uint32_t _op2_08001992;
    uint32_t _co_08001992;
    _op2_08001992 = _rm_08001992;
    _co_08001992 = cpsr_c();
    uint32_t _rn_08001992 = g_cpu.R[0];
    uint32_t _r_08001992;
    _r_08001992 = _rn_08001992 + _op2_08001992;
    arm_set_nzcv_add(_rn_08001992, _op2_08001992, _r_08001992);
    g_cpu.R[0] = _r_08001992;
    g_cpu.R[15] = 0x08001994u;
    runtime_tick(_cyc_08001992);
    /* 08001994  08001994 T movs r1,#0x0 */
    g_cpu.R[15] = 0x08001994u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001994 = 1u;
    _cyc_08001994 = 1u;
    uint32_t _r_08001994;
    _r_08001994 = 0x00000000u;
    arm_set_nzc_logic(_r_08001994, cpsr_c());
    g_cpu.R[1] = _r_08001994;
    g_cpu.R[15] = 0x08001996u;
    runtime_tick(_cyc_08001994);
    /* 08001996  08001996 T strb r1,[r0,#0x19] */
    g_cpu.R[15] = 0x08001996u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001996 = 1u;
    _cyc_08001996 = 1u;
    uint32_t _base_08001996 = g_cpu.R[0];
    uint32_t _off_08001996;
    _off_08001996 = 0x00000019u;
    uint32_t _ea_08001996 = _base_08001996 + _off_08001996;
    uint32_t _post_08001996 = _base_08001996 + _off_08001996;
    _cyc_08001996 += runtime_mem_cycles(_ea_08001996, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08001996u, _ea_08001996, (uint32_t)(g_cpu.R[1] & 0xFFu), 1u);
    bus_write_u8(_ea_08001996, (uint8_t)(g_cpu.R[1] & 0xFFu));
    g_cpu.R[15] = 0x08001998u;
    runtime_tick(_cyc_08001996);
    /* 08001998  08001998 T ldr r0,[r15,#0x40] */
    g_cpu.R[15] = 0x08001998u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001998 = 1u;
    _cyc_08001998 = 2u;
    uint32_t _base_08001998 = 0x0800199Cu & ~3u;
    uint32_t _off_08001998;
    _off_08001998 = 0x00000040u;
    uint32_t _ea_08001998 = _base_08001998 + _off_08001998;
    uint32_t _post_08001998 = _base_08001998 + _off_08001998;
    _cyc_08001998 += runtime_mem_cycles(_ea_08001998, 4u, 0u);
    uint32_t _v_08001998;
    { uint32_t _w = bus_read_u32(_ea_08001998 & ~3u); uint32_t _rot = (_ea_08001998 & 3u) * 8u; _v_08001998 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08001998;
    g_cpu.R[15] = 0x0800199Au;
    runtime_tick(_cyc_08001998);
    /* 0800199A  0800199a T adds r4,r5,#0x0 */
    g_cpu.R[15] = 0x0800199Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800199A = 1u;
    _cyc_0800199A = 1u;
    uint32_t _rn_0800199A = g_cpu.R[5];
    uint32_t _r_0800199A;
    _r_0800199A = _rn_0800199A + 0x00000000u;
    arm_set_nzcv_add(_rn_0800199A, 0x00000000u, _r_0800199A);
    g_cpu.R[4] = _r_0800199A;
    g_cpu.R[15] = 0x0800199Cu;
    runtime_tick(_cyc_0800199A);
    /* 0800199C  0800199c T adds r4,r4,#0x18 */
    g_cpu.R[15] = 0x0800199Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800199C = 1u;
    _cyc_0800199C = 1u;
    uint32_t _rn_0800199C = g_cpu.R[4];
    uint32_t _r_0800199C;
    _r_0800199C = _rn_0800199C + 0x00000018u;
    arm_set_nzcv_add(_rn_0800199C, 0x00000018u, _r_0800199C);
    g_cpu.R[4] = _r_0800199C;
    g_cpu.R[15] = 0x0800199Eu;
    runtime_tick(_cyc_0800199C);
    /* 0800199E  0800199e T adds r1,r5,#0x0 */
    g_cpu.R[15] = 0x0800199Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800199E = 1u;
    _cyc_0800199E = 1u;
    uint32_t _rn_0800199E = g_cpu.R[5];
    uint32_t _r_0800199E;
    _r_0800199E = _rn_0800199E + 0x00000000u;
    arm_set_nzcv_add(_rn_0800199E, 0x00000000u, _r_0800199E);
    g_cpu.R[1] = _r_0800199E;
    g_cpu.R[15] = 0x080019A0u;
    runtime_tick(_cyc_0800199E);
    /* 080019A0  080019a0 T adds r1,r1,#0x22 */
    g_cpu.R[15] = 0x080019A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080019A0 = 1u;
    _cyc_080019A0 = 1u;
    uint32_t _rn_080019A0 = g_cpu.R[1];
    uint32_t _r_080019A0;
    _r_080019A0 = _rn_080019A0 + 0x00000022u;
    arm_set_nzcv_add(_rn_080019A0, 0x00000022u, _r_080019A0);
    g_cpu.R[1] = _r_080019A0;
    g_cpu.R[15] = 0x080019A2u;
    runtime_tick(_cyc_080019A0);
    /* 080019A2  080019a2 T ldr r2,[r0] */
    g_cpu.R[15] = 0x080019A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080019A2 = 1u;
    _cyc_080019A2 = 2u;
    uint32_t _base_080019A2 = g_cpu.R[0];
    uint32_t _off_080019A2;
    _off_080019A2 = 0x00000000u;
    uint32_t _ea_080019A2 = _base_080019A2 + _off_080019A2;
    uint32_t _post_080019A2 = _base_080019A2 + _off_080019A2;
    _cyc_080019A2 += runtime_mem_cycles(_ea_080019A2, 4u, 0u);
    uint32_t _v_080019A2;
    { uint32_t _w = bus_read_u32(_ea_080019A2 & ~3u); uint32_t _rot = (_ea_080019A2 & 3u) * 8u; _v_080019A2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_080019A2;
    g_cpu.R[15] = 0x080019A4u;
    runtime_tick(_cyc_080019A2);
    /* 080019A4  080019a4 T adds r0,r4,#0x0 */
    g_cpu.R[15] = 0x080019A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080019A4 = 1u;
    _cyc_080019A4 = 1u;
    uint32_t _rn_080019A4 = g_cpu.R[4];
    uint32_t _r_080019A4;
    _r_080019A4 = _rn_080019A4 + 0x00000000u;
    arm_set_nzcv_add(_rn_080019A4, 0x00000000u, _r_080019A4);
    g_cpu.R[0] = _r_080019A4;
    g_cpu.R[15] = 0x080019A6u;
    runtime_tick(_cyc_080019A4);
    /* 080019A6  080019a6 T bl.hi 0x080c29aa */
    g_cpu.R[15] = 0x080019A6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080019A6 = 1u;
    _cyc_080019A6 = 1u;
    g_cpu.R[14] = 0x080C29AAu;
    g_cpu.R[15] = 0x080019A8u;
    runtime_tick(_cyc_080019A6);
    /* 080019A8  080019a8 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x080019A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080019A8 = 1u;
    _cyc_080019A8 = 3u;
    uint32_t _blt_080019A8 = (g_cpu.R[14] + 0x0000083Au) & ~1u;
    g_cpu.R[14] = 0x080019ABu;
    g_cpu.R[15] = _blt_080019A8;
    runtime_call_push_return(0x080019AAu);
    runtime_tick(_cyc_080019A8);
    _cyc_080019A8 = 0u;
    runtime_dispatch(_blt_080019A8);
    if (g_cpu.R[15] != 0x080019AAu) { runtime_call_cancel_return(0x080019AAu); return; }
    g_cpu.R[15] = 0x080019AAu;
    runtime_tick(_cyc_080019A8);
    /* fall-through to 0x080019AA */
    g_cpu.R[15] = 0x080019AAu;
    runtime_dispatch(0x080019AAu);
    return;
}

/* 0x080019AA  mode=thumb  end=0x080019D0  branches=2  indirect */


