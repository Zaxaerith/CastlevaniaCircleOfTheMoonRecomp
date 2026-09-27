/* Auto-split from gbarecomp shards. Module: engine_hot
 * 1 guest functions. Do not hand-edit function bodies.
 */

#include "runtime_arm.h"
#include "recompiled.h"

/* 0x080BFB50 thumb */
void gf_engine_hot_a(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080BFB50u);
    /* 080BFB50  080bfb50 T mov r12,r4 */
    g_cpu.R[15] = 0x080BFB50u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080BFB50 = 1u;
    _cyc_080BFB50 = 1u;
    uint32_t _rm_080BFB50 = g_cpu.R[4];
    uint32_t _op2_080BFB50;
    uint32_t _co_080BFB50;
    _op2_080BFB50 = _rm_080BFB50;
    _co_080BFB50 = cpsr_c();
    uint32_t _r_080BFB50;
    _r_080BFB50 = _op2_080BFB50;
    g_cpu.R[12] = _r_080BFB50;
    g_cpu.R[15] = 0x080BFB52u;
    runtime_tick(_cyc_080BFB50);
    /* 080BFB52  080bfb52 T movs r1,#0x0 */
    g_cpu.R[15] = 0x080BFB52u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080BFB52 = 1u;
    _cyc_080BFB52 = 1u;
    uint32_t _r_080BFB52;
    _r_080BFB52 = 0x00000000u;
    arm_set_nzc_logic(_r_080BFB52, cpsr_c());
    g_cpu.R[1] = _r_080BFB52;
    g_cpu.R[15] = 0x080BFB54u;
    runtime_tick(_cyc_080BFB52);
    /* 080BFB54  080bfb54 T movs r2,#0x0 */
    g_cpu.R[15] = 0x080BFB54u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080BFB54 = 1u;
    _cyc_080BFB54 = 1u;
    uint32_t _r_080BFB54;
    _r_080BFB54 = 0x00000000u;
    arm_set_nzc_logic(_r_080BFB54, cpsr_c());
    g_cpu.R[2] = _r_080BFB54;
    g_cpu.R[15] = 0x080BFB56u;
    runtime_tick(_cyc_080BFB54);
    /* 080BFB56  080bfb56 T movs r3,#0x0 */
    g_cpu.R[15] = 0x080BFB56u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080BFB56 = 1u;
    _cyc_080BFB56 = 1u;
    uint32_t _r_080BFB56;
    _r_080BFB56 = 0x00000000u;
    arm_set_nzc_logic(_r_080BFB56, cpsr_c());
    g_cpu.R[3] = _r_080BFB56;
    g_cpu.R[15] = 0x080BFB58u;
    runtime_tick(_cyc_080BFB56);
    /* 080BFB58  080bfb58 T movs r4,#0x0 */
    g_cpu.R[15] = 0x080BFB58u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080BFB58 = 1u;
    _cyc_080BFB58 = 1u;
    uint32_t _r_080BFB58;
    _r_080BFB58 = 0x00000000u;
    arm_set_nzc_logic(_r_080BFB58, cpsr_c());
    g_cpu.R[4] = _r_080BFB58;
    g_cpu.R[15] = 0x080BFB5Au;
    runtime_tick(_cyc_080BFB58);
    /* 080BFB5A  080bfb5a T stm r0!,{r1,r2,r3,r4} */
    g_cpu.R[15] = 0x080BFB5Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080BFB5A = 1u;
    _cyc_080BFB5A = 1u;
    uint32_t _b_080BFB5A = g_cpu.R[0];
    uint32_t _a_080BFB5A = _b_080BFB5A;
    uint32_t _fb_080BFB5A = _b_080BFB5A + 16u;
    _cyc_080BFB5A += runtime_mem_cycles(_a_080BFB5A & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080BFB5Au, _a_080BFB5A & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_a_080BFB5A & ~3u, g_cpu.R[1]);
    _a_080BFB5A += 4u;
    _cyc_080BFB5A += runtime_mem_cycles(_a_080BFB5A & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080BFB5Au, _a_080BFB5A & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_a_080BFB5A & ~3u, g_cpu.R[2]);
    _a_080BFB5A += 4u;
    _cyc_080BFB5A += runtime_mem_cycles(_a_080BFB5A & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080BFB5Au, _a_080BFB5A & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_a_080BFB5A & ~3u, g_cpu.R[3]);
    _a_080BFB5A += 4u;
    _cyc_080BFB5A += runtime_mem_cycles(_a_080BFB5A & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080BFB5Au, _a_080BFB5A & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_080BFB5A & ~3u, g_cpu.R[4]);
    _a_080BFB5A += 4u;
    g_cpu.R[0] = _fb_080BFB5A;
    g_cpu.R[15] = 0x080BFB5Cu;
    runtime_tick(_cyc_080BFB5A);
    /* 080BFB5C  080bfb5c T stm r0!,{r1,r2,r3,r4} */
    g_cpu.R[15] = 0x080BFB5Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080BFB5C = 1u;
    _cyc_080BFB5C = 1u;
    uint32_t _b_080BFB5C = g_cpu.R[0];
    uint32_t _a_080BFB5C = _b_080BFB5C;
    uint32_t _fb_080BFB5C = _b_080BFB5C + 16u;
    _cyc_080BFB5C += runtime_mem_cycles(_a_080BFB5C & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080BFB5Cu, _a_080BFB5C & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_a_080BFB5C & ~3u, g_cpu.R[1]);
    _a_080BFB5C += 4u;
    _cyc_080BFB5C += runtime_mem_cycles(_a_080BFB5C & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080BFB5Cu, _a_080BFB5C & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_a_080BFB5C & ~3u, g_cpu.R[2]);
    _a_080BFB5C += 4u;
    _cyc_080BFB5C += runtime_mem_cycles(_a_080BFB5C & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080BFB5Cu, _a_080BFB5C & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_a_080BFB5C & ~3u, g_cpu.R[3]);
    _a_080BFB5C += 4u;
    _cyc_080BFB5C += runtime_mem_cycles(_a_080BFB5C & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080BFB5Cu, _a_080BFB5C & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_080BFB5C & ~3u, g_cpu.R[4]);
    _a_080BFB5C += 4u;
    g_cpu.R[0] = _fb_080BFB5C;
    g_cpu.R[15] = 0x080BFB5Eu;
    runtime_tick(_cyc_080BFB5C);
    /* 080BFB5E  080bfb5e T stm r0!,{r1,r2,r3,r4} */
    g_cpu.R[15] = 0x080BFB5Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080BFB5E = 1u;
    _cyc_080BFB5E = 1u;
    uint32_t _b_080BFB5E = g_cpu.R[0];
    uint32_t _a_080BFB5E = _b_080BFB5E;
    uint32_t _fb_080BFB5E = _b_080BFB5E + 16u;
    _cyc_080BFB5E += runtime_mem_cycles(_a_080BFB5E & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080BFB5Eu, _a_080BFB5E & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_a_080BFB5E & ~3u, g_cpu.R[1]);
    _a_080BFB5E += 4u;
    _cyc_080BFB5E += runtime_mem_cycles(_a_080BFB5E & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080BFB5Eu, _a_080BFB5E & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_a_080BFB5E & ~3u, g_cpu.R[2]);
    _a_080BFB5E += 4u;
    _cyc_080BFB5E += runtime_mem_cycles(_a_080BFB5E & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080BFB5Eu, _a_080BFB5E & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_a_080BFB5E & ~3u, g_cpu.R[3]);
    _a_080BFB5E += 4u;
    _cyc_080BFB5E += runtime_mem_cycles(_a_080BFB5E & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080BFB5Eu, _a_080BFB5E & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_080BFB5E & ~3u, g_cpu.R[4]);
    _a_080BFB5E += 4u;
    g_cpu.R[0] = _fb_080BFB5E;
    g_cpu.R[15] = 0x080BFB60u;
    runtime_tick(_cyc_080BFB5E);
    /* 080BFB60  080bfb60 T stm r0!,{r1,r2,r3,r4} */
    g_cpu.R[15] = 0x080BFB60u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080BFB60 = 1u;
    _cyc_080BFB60 = 1u;
    uint32_t _b_080BFB60 = g_cpu.R[0];
    uint32_t _a_080BFB60 = _b_080BFB60;
    uint32_t _fb_080BFB60 = _b_080BFB60 + 16u;
    _cyc_080BFB60 += runtime_mem_cycles(_a_080BFB60 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080BFB60u, _a_080BFB60 & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_a_080BFB60 & ~3u, g_cpu.R[1]);
    _a_080BFB60 += 4u;
    _cyc_080BFB60 += runtime_mem_cycles(_a_080BFB60 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080BFB60u, _a_080BFB60 & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_a_080BFB60 & ~3u, g_cpu.R[2]);
    _a_080BFB60 += 4u;
    _cyc_080BFB60 += runtime_mem_cycles(_a_080BFB60 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080BFB60u, _a_080BFB60 & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_a_080BFB60 & ~3u, g_cpu.R[3]);
    _a_080BFB60 += 4u;
    _cyc_080BFB60 += runtime_mem_cycles(_a_080BFB60 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080BFB60u, _a_080BFB60 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_080BFB60 & ~3u, g_cpu.R[4]);
    _a_080BFB60 += 4u;
    g_cpu.R[0] = _fb_080BFB60;
    g_cpu.R[15] = 0x080BFB62u;
    runtime_tick(_cyc_080BFB60);
    /* 080BFB62  080bfb62 T mov r4,r12 */
    g_cpu.R[15] = 0x080BFB62u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080BFB62 = 1u;
    _cyc_080BFB62 = 1u;
    uint32_t _rm_080BFB62 = g_cpu.R[12];
    uint32_t _op2_080BFB62;
    uint32_t _co_080BFB62;
    _op2_080BFB62 = _rm_080BFB62;
    _co_080BFB62 = cpsr_c();
    uint32_t _r_080BFB62;
    _r_080BFB62 = _op2_080BFB62;
    g_cpu.R[4] = _r_080BFB62;
    g_cpu.R[15] = 0x080BFB64u;
    runtime_tick(_cyc_080BFB62);
    /* 080BFB64  080bfb64 T bx r14 */
    g_cpu.R[15] = 0x080BFB64u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080BFB64 = 1u;
    _cyc_080BFB64 = 3u;
    uint32_t _bxt_080BFB64 = g_cpu.R[14];
    g_cpu.R[15] = _bxt_080BFB64 & ~1u;
    if (_bxt_080BFB64 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_080BFB64);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    GBARECOMP_TAIL_DISPATCH_WITH_EXCHANGE(_bxt_080BFB64);
    g_cpu.R[15] = 0x080BFB66u;
    runtime_tick(_cyc_080BFB64);
    /* fall-through to 0x080BFB66 */
    g_cpu.R[15] = 0x080BFB66u;
    runtime_dispatch(0x080BFB66u);
    return;
}

/* 0x080BFB68  mode=thumb  end=0x080BFB7A  branches=3 */


