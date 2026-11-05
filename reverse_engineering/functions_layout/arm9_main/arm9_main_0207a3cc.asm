0207a3cc  stmdb sp!,{r3,r4,r5,lr}
0207a3d0  ldr r2,[0x207a3fc]
0207a3d4  mov r4,r1
0207a3d8  ldr r1,[r2,r4,lsl #0x2]
0207a3dc  mov r5,r0
0207a3e0  mov r2,r1
0207a3e4  bl 0x02021800
0207a3e8  ldr r1,[0x207a400]
0207a3ec  mov r0,r5
0207a3f0  str r1,[r5,#0x0]
0207a3f4  str r4,[r5,#0x14]
0207a3f8  ldmia sp!,{r3,r4,r5,pc}
