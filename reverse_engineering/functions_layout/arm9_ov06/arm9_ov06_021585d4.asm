021585d4  stmdb sp!,{r3,r4,r5,r6,r7,lr}
021585d8  sub sp,sp,#0x8
021585dc  ldr r0,[r0,#0x7c]
021585e0  mov r6,r2
021585e4  ldr r2,[r0,#0x10]
021585e8  mov r7,r1
021585ec  mov r5,r3
021585f0  mov r6,r6, lsl #0x8
021585f4  ldr r4,[r2,#0x5c]
021585f8  bl 0x0215793c
021585fc  cmp r0,#0x0
02158600  beq 0x0215861c
02158604  mvn r1,#0x0
02158608  mul r0,r6,r1
0215860c  ldrsh r2,[sp,#0x20]
02158610  mov r6,r0
02158614  smulbb r0,r2,r1
02158618  strh r0,[sp,#0x20]
0215861c  ldrsh r0,[sp,#0x24]
02158620  ldr r1,[r4,#0xc]
02158624  ldr r4,[r4,#0x10]
02158628  mov r0,r0, lsl #0x18
0215862c  mov r2,r0, asr #0x10
02158630  ldrsh r0,[sp,#0x20]
02158634  str r2,[sp,#0x0]
02158638  mov r2,#0x0
0215863c  mov r3,r0, lsl #0x18
02158640  ldr r0,[0x2158664]
02158644  str r2,[sp,#0x4]
02158648  ldrb r0,[r0,r7]
0215864c  add r2,r4,r5, lsl #0x8
02158650  add r1,r6,r1
02158654  mov r3,r3, asr #0x10
02158658  bl 0x02164d48
0215865c  add sp,sp,#0x8
02158660  ldmia sp!,{r3,r4,r5,r6,r7,pc}
