02019970  stmdb sp!,{r3,r4,r5,lr}
02019974  ldr r4,[r1,#0x0]
02019978  ldr r1,[r0,#0x0]
0201997c  ldr r0,[r2,#0x0]
02019980  rsb r2,r1,r1, lsl #0x5
02019984  rsb lr,r4,r4, lsl #0x5
02019988  rsb r4,r0,r0, lsl #0x5
0201998c  mov r0,r2, asr #0xb
02019990  mov r12,lr, asr #0xb
02019994  ldr r5,[r3,#0x0]
02019998  mov r1,r4, asr #0xb
0201999c  add r2,r2,r0, lsr #0x14
020199a0  add r3,lr,r12, lsr #0x14
020199a4  mov r0,r5, asr #0xb
020199a8  add r1,r4,r1, lsr #0x14
020199ac  mov r2,r2, lsl #0x4
020199b0  mov r3,r3, lsl #0x4
020199b4  add r0,r5,r0, lsr #0x14
020199b8  mov r1,r1, lsl #0x4
020199bc  mov r12,r2, lsr #0x10
020199c0  mov r2,r3, lsr #0x10
020199c4  mov r0,r0, lsl #0x4
020199c8  mov r3,r1, lsr #0x10
020199cc  mov r4,r0, lsr #0x10
020199d0  and r1,r12,#0x1f
020199d4  mov r0,r2, lsl #0x1b
020199d8  mov r2,r3, lsl #0x1b
020199dc  orr r0,r1,r0, lsr #0x16
020199e0  mov r1,r4, lsl #0x1f
020199e4  orr r0,r0,r2, lsr #0x11
020199e8  orr r0,r0,r1, lsr #0x10
020199ec  mov r0,r0, lsl #0x10
020199f0  mov r0,r0, lsr #0x10
020199f4  ldmia sp!,{r3,r4,r5,pc}
