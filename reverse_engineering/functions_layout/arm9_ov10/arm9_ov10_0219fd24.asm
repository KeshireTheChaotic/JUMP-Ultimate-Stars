0219fd24  stmdb sp!,{r3,lr}
0219fd28  sub sp,sp,#0x8
0219fd2c  ldr r1,[0x219fd6c]
0219fd30  ldr r1,[r1,#0x0]
0219fd34  cmp r1,#0x0
0219fd38  beq 0x0219fd64
0219fd3c  strh r0,[sp,#0x4]
0219fd40  bl 0x0219b620
0219fd44  mov r0,r0, lsl #0x18
0219fd48  mov r12,#0xff
0219fd4c  mov r3,r0, asr #0x18
0219fd50  add r1,sp,#0x4
0219fd54  mov r0,#0x7
0219fd58  mov r2,#0x2
0219fd5c  str r12,[sp,#0x0]
0219fd60  bl 0x0219f834
0219fd64  add sp,sp,#0x8
0219fd68  ldmia sp!,{r3,pc}
