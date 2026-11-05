0219fe08  stmdb sp!,{r3,lr}
0219fe0c  sub sp,sp,#0x8
0219fe10  ldr r1,[0x219fe50]
0219fe14  ldr r1,[r1,#0x0]
0219fe18  cmp r1,#0x0
0219fe1c  beq 0x0219fe48
0219fe20  strb r0,[sp,#0x4]
0219fe24  bl 0x0219b620
0219fe28  mov r0,r0, lsl #0x18
0219fe2c  mov r12,#0xff
0219fe30  mov r3,r0, asr #0x18
0219fe34  add r1,sp,#0x4
0219fe38  mov r0,#0xa
0219fe3c  mov r2,#0x1
0219fe40  str r12,[sp,#0x0]
0219fe44  bl 0x0219f834
0219fe48  add sp,sp,#0x8
0219fe4c  ldmia sp!,{r3,pc}
