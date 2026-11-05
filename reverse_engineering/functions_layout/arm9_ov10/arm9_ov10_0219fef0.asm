0219fef0  stmdb sp!,{r3,lr}
0219fef4  sub sp,sp,#0x8
0219fef8  ldr r1,[0x219ff38]
0219fefc  ldr r1,[r1,#0x0]
0219ff00  cmp r1,#0x0
0219ff04  beq 0x0219ff30
0219ff08  strb r0,[sp,#0x4]
0219ff0c  bl 0x0219b620
0219ff10  mov r0,r0, lsl #0x18
0219ff14  mov r12,#0xff
0219ff18  mov r3,r0, asr #0x18
0219ff1c  add r1,sp,#0x4
0219ff20  mov r0,#0xd
0219ff24  mov r2,#0x1
0219ff28  str r12,[sp,#0x0]
0219ff2c  bl 0x0219f834
0219ff30  add sp,sp,#0x8
0219ff34  ldmia sp!,{r3,pc}
