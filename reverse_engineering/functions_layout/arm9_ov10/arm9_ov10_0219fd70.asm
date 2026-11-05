0219fd70  stmdb sp!,{r3,lr}
0219fd74  sub sp,sp,#0x8
0219fd78  ldr r1,[0x219fdb8]
0219fd7c  ldr r1,[r1,#0x0]
0219fd80  cmp r1,#0x0
0219fd84  beq 0x0219fdb0
0219fd88  strh r0,[sp,#0x4]
0219fd8c  bl 0x0219b620
0219fd90  mov r0,r0, lsl #0x18
0219fd94  mov r12,#0xff
0219fd98  mov r3,r0, asr #0x18
0219fd9c  add r1,sp,#0x4
0219fda0  mov r0,#0x8
0219fda4  mov r2,#0x2
0219fda8  str r12,[sp,#0x0]
0219fdac  bl 0x0219f834
0219fdb0  add sp,sp,#0x8
0219fdb4  ldmia sp!,{r3,pc}
