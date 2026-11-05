0207e2e0  stmdb sp!,{r3,lr}
0207e2e4  sub sp,sp,#0x10
0207e2e8  cmp r2,#0x0
0207e2ec  mov r1,r1, lsl #0x10
0207e2f0  ldr r0,[r0,#0xf8]
0207e2f4  beq 0x0207e304
0207e2f8  mov r1,r1, asr #0x10
0207e2fc  bl 0x0216293c
0207e300  b 0x0207e310
0207e304  add r2,sp,#0x0
0207e308  mov r1,r1, asr #0x10
0207e30c  bl 0x0216293c
0207e310  add sp,sp,#0x10
0207e314  ldmia sp!,{r3,pc}
