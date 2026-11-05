0219ff8c  stmdb sp!,{r3,lr}
0219ff90  sub sp,sp,#0x8
0219ff94  ldr r1,[0x219ffd4]
0219ff98  ldr r1,[r1,#0x0]
0219ff9c  cmp r1,#0x0
0219ffa0  beq 0x0219ffcc
0219ffa4  str r0,[sp,#0x4]
0219ffa8  bl 0x0219b620
0219ffac  mov r0,r0, lsl #0x18
0219ffb0  mov r12,#0xff
0219ffb4  mov r3,r0, asr #0x18
0219ffb8  add r1,sp,#0x4
0219ffbc  mov r0,#0x12
0219ffc0  mov r2,#0x4
0219ffc4  str r12,[sp,#0x0]
0219ffc8  bl 0x0219f834
0219ffcc  add sp,sp,#0x8
0219ffd0  ldmia sp!,{r3,pc}
