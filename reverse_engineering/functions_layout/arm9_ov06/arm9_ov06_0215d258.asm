0215d258  stmdb sp!,{r4,r5,r6,lr}
0215d25c  sub sp,sp,#0x8
0215d260  ldr r3,[0x215d2e0]
0215d264  ldr r4,[r0,#0x1a8]
0215d268  ldr r0,[r3,#0x0]
0215d26c  ldr r3,[r4,#0x10]
0215d270  ldr r0,[r0,#0x4]
0215d274  mov r6,r1
0215d278  mov r5,r2
0215d27c  ldr r4,[r3,#0x5c]
0215d280  bl 0x02031070
0215d284  mov r1,#0x3
0215d288  bl 0x0200d338
0215d28c  mov r1,r1, lsl #0x9
0215d290  add r0,r1,#0x300
0215d294  mov r0,r0, lsl #0x10
0215d298  sub r1,r1,#0x600
0215d29c  mov r1,r1, lsl #0x10
0215d2a0  mov r1,r1, asr #0x10
0215d2a4  tst r5,#0x1
0215d2a8  mov r3,r0, asr #0x10
0215d2ac  mvnne r0,#0x0
0215d2b0  smulbbne r0,r3,r0
0215d2b4  movne r0,r0, lsl #0x10
0215d2b8  movne r3,r0, asr #0x10
0215d2bc  str r1,[sp,#0x0]
0215d2c0  mov r0,#0x0
0215d2c4  str r0,[sp,#0x4]
0215d2c8  ldr r1,[r4,#0xc]
0215d2cc  ldr r2,[r4,#0x10]
0215d2d0  mov r0,r6
0215d2d4  bl 0x02164d48
0215d2d8  add sp,sp,#0x8
0215d2dc  ldmia sp!,{r4,r5,r6,pc}
