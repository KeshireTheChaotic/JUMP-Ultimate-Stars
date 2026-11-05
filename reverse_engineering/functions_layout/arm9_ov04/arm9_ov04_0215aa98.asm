0215aa98  stmdb sp!,{r3,r4,r5,lr}
0215aa9c  mov r5,r0
0215aaa0  mov r4,#0x0
0215aaa4  ldr r0,[r5,r4,lsl #0x2]
0215aaa8  cmp r0,#0x0
0215aaac  beq 0x0215aab4
0215aab0  bl 0x021500f0
0215aab4  add r4,r4,#0x1
0215aab8  cmp r4,#0x6
0215aabc  blt 0x0215aaa4
0215aac0  mov r0,r5
0215aac4  bl 0x0201b244
0215aac8  ldmia sp!,{r3,r4,r5,pc}
