0215f3c0  stmdb sp!,{r3,r4,r5,lr}
0215f3c4  mov r5,r0
0215f3c8  ldr r0,[r5,#0x174]
0215f3cc  mov r4,r1
0215f3d0  ldr r0,[r0,#0x0]
0215f3d4  bl 0x0215f364
0215f3d8  strb r4,[r5,#0x1c1]
0215f3dc  ldmia sp!,{r3,r4,r5,pc}
