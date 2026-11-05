0219fea0  stmdb sp!,{r3,lr}
0219fea4  sub sp,sp,#0x8
0219fea8  ldr r2,[0x219feec]
0219feac  ldr r2,[r2,#0x0]
0219feb0  cmp r2,#0x0
0219feb4  beq 0x0219fee4
0219feb8  strb r0,[sp,#0x4]
0219febc  strb r1,[sp,#0x5]
0219fec0  bl 0x0219b620
0219fec4  mov r0,r0, lsl #0x18
0219fec8  mov r12,#0xff
0219fecc  mov r3,r0, asr #0x18
0219fed0  add r1,sp,#0x4
0219fed4  mov r0,#0xc
0219fed8  mov r2,#0x2
0219fedc  str r12,[sp,#0x0]
0219fee0  bl 0x0219f834
0219fee4  add sp,sp,#0x8
0219fee8  ldmia sp!,{r3,pc}
