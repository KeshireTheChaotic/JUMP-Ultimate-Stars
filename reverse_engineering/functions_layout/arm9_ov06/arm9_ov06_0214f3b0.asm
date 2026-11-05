0214f3b0  stmdb sp!,{r4,r5,r6,lr}
0214f3b4  mov r6,r0
0214f3b8  ldr r0,[r6,#0x60]
0214f3bc  mov r5,r1
0214f3c0  bl 0x0214f208
0214f3c4  ldr r0,[r6,#0x64]
0214f3c8  mov r1,r5
0214f3cc  bl 0x0214f208
0214f3d0  mov r4,#0x0
0214f3d4  add r0,r6,r4, lsl #0x2
0214f3d8  ldr r0,[r0,#0x68]
0214f3dc  mov r1,r5
0214f3e0  bl 0x0214f208
0214f3e4  add r0,r6,r4, lsl #0x2
0214f3e8  ldr r0,[r0,#0x78]
0214f3ec  mov r1,r5
0214f3f0  bl 0x0214f208
0214f3f4  add r4,r4,#0x1
0214f3f8  cmp r4,#0x4
0214f3fc  blt 0x0214f3d4
0214f400  ldmia sp!,{r4,r5,r6,pc}
