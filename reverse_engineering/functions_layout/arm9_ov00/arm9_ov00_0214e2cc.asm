0214e2cc  stmdb sp!,{r3,r4,r5,r6,r7,lr}
0214e2d0  mov r6,r0
0214e2d4  mov r0,#0x3
0214e2d8  mov r5,r1
0214e2dc  mov r4,r2
0214e2e0  bl 0x0203b424
0214e2e4  ldr r0,[r0,#0x88]
0214e2e8  ldr r0,[r0,#0x4]
0214e2ec  ldr r0,[r0,#0x948]
0214e2f0  blx r0
0214e2f4  cmp r5,#0x0
0214e2f8  subgt r1,r5,#0x1
0214e2fc  movgt r1,r1, lsl #0x10
0214e300  movgt r5,r1, asr #0x10
0214e304  mov r1,r5, asr #0x1
0214e308  and r3,r5,#0x3
0214e30c  add r1,r5,r1, lsr #0x1e
0214e310  mov r2,r4, lsl #0x6
0214e314  add r2,r2,r1, asr #0x2
0214e318  mov r1,r3, lsl #0x3
0214e31c  mov r5,#0xff
0214e320  mvn r7,r5, lsl r1
0214e324  ldr r5,[r0,r2,lsl #0x2]
0214e328  cmp r4,#0x0
0214e32c  and r12,r5,r7
0214e330  str r12,[r0,r2,lsl #0x2]
0214e334  ldrh r5,[r6,#0x52]
0214e338  orr r5,r12,r5, lsl r1
0214e33c  str r5,[r0,r2,lsl #0x2]
0214e340  beq 0x0214e360
0214e344  sub lr,r2,#0x40
0214e348  ldr r5,[r0,lr,lsl #0x2]
0214e34c  and r12,r5,r7
0214e350  str r12,[r0,lr,lsl #0x2]
0214e354  ldrh r5,[r6,#0x52]
0214e358  orr r1,r12,r5, lsl r1
0214e35c  str r1,[r0,lr,lsl #0x2]
0214e360  add r1,r3,#0x1
0214e364  and r3,r1,#0xff
0214e368  cmp r3,#0x3
0214e36c  movhi r3,#0x0
0214e370  addhi r2,r2,#0x1
0214e374  mov r1,r3, lsl #0x3
0214e378  mov r3,#0xff
0214e37c  mvn r5,r3, lsl r1
0214e380  ldr r3,[r0,r2,lsl #0x2]
0214e384  cmp r4,#0x0
0214e388  and r4,r3,r5
0214e38c  str r4,[r0,r2,lsl #0x2]
0214e390  ldrh r3,[r6,#0x52]
0214e394  orr r3,r4,r3, lsl r1
0214e398  str r3,[r0,r2,lsl #0x2]
0214e39c  ldmiaeq sp!,{r3,r4,r5,r6,r7,pc}
0214e3a0  sub r4,r2,#0x40
0214e3a4  ldr r2,[r0,r4,lsl #0x2]
0214e3a8  and r3,r2,r5
0214e3ac  str r3,[r0,r4,lsl #0x2]
0214e3b0  ldrh r2,[r6,#0x52]
0214e3b4  orr r1,r3,r2, lsl r1
0214e3b8  str r1,[r0,r4,lsl #0x2]
0214e3bc  ldmia sp!,{r3,r4,r5,r6,r7,pc}
