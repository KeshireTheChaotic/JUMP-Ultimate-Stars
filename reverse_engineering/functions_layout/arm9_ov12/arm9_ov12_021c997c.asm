021c997c  stmdb sp!,{r3,r4,r5,lr}
021c9980  ldr r1,[r0,#0x8]
021c9984  ldmia r0,{r2,r3}
021c9988  rsb lr,r2,r2, lsl #0x5
021c998c  rsb r12,r3,r3, lsl #0x5
021c9990  ldr r5,[r0,#0xc]
021c9994  rsb r4,r1,r1, lsl #0x5
021c9998  mov r2,lr, asr #0xb
021c999c  mov r3,r12, asr #0xb
021c99a0  mov r1,r4, asr #0xb
021c99a4  add r2,lr,r2, lsr #0x14
021c99a8  add r3,r12,r3, lsr #0x14
021c99ac  mov r0,r5, asr #0xb
021c99b0  add r1,r4,r1, lsr #0x14
021c99b4  mov r2,r2, lsl #0x4
021c99b8  add r0,r5,r0, lsr #0x14
021c99bc  mov r0,r0, lsl #0x4
021c99c0  mov r3,r3, lsl #0x4
021c99c4  mov r12,r2, lsr #0x10
021c99c8  mov r1,r1, lsl #0x4
021c99cc  mov r2,r3, lsr #0x10
021c99d0  mov r3,r1, lsr #0x10
021c99d4  mov r4,r0, lsr #0x10
021c99d8  mov r0,r2, lsl #0x1b
021c99dc  and r1,r12,#0x1f
021c99e0  orr r0,r1,r0, lsr #0x16
021c99e4  mov r2,r3, lsl #0x1b
021c99e8  mov r1,r4, lsl #0x1f
021c99ec  orr r0,r0,r2, lsr #0x11
021c99f0  orr r0,r0,r1, lsr #0x10
021c99f4  mov r0,r0, lsl #0x10
021c99f8  mov r0,r0, lsr #0x10
021c99fc  ldmia sp!,{r3,r4,r5,pc}
