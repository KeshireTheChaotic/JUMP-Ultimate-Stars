0215262c  stmdb sp!,{r3,r4,r5,lr}
02152630  ldr r4,[r1,#0x0]
02152634  ldr r1,[r0,#0x0]
02152638  ldr r0,[r2,#0x0]
0215263c  rsb r2,r1,r1, lsl #0x5
02152640  rsb lr,r4,r4, lsl #0x5
02152644  rsb r4,r0,r0, lsl #0x5
02152648  mov r0,r2, asr #0xb
0215264c  mov r12,lr, asr #0xb
02152650  ldr r5,[r3,#0x0]
02152654  mov r1,r4, asr #0xb
02152658  add r2,r2,r0, lsr #0x14
0215265c  add r3,lr,r12, lsr #0x14
02152660  mov r0,r5, asr #0xb
02152664  add r1,r4,r1, lsr #0x14
02152668  mov r2,r2, lsl #0x4
0215266c  mov r3,r3, lsl #0x4
02152670  add r0,r5,r0, lsr #0x14
02152674  mov r1,r1, lsl #0x4
02152678  mov r12,r2, lsr #0x10
0215267c  mov r2,r3, lsr #0x10
02152680  mov r0,r0, lsl #0x4
02152684  mov r3,r1, lsr #0x10
02152688  mov r4,r0, lsr #0x10
0215268c  and r1,r12,#0x1f
02152690  mov r0,r2, lsl #0x1b
02152694  mov r2,r3, lsl #0x1b
02152698  orr r0,r1,r0, lsr #0x16
0215269c  mov r1,r4, lsl #0x1f
021526a0  orr r0,r0,r2, lsr #0x11
021526a4  orr r0,r0,r1, lsr #0x10
021526a8  mov r0,r0, lsl #0x10
021526ac  mov r0,r0, lsr #0x10
021526b0  ldmia sp!,{r3,r4,r5,pc}
