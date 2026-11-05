0206b138  stmdb sp!,{r3,r4,r5,lr}
0206b13c  mov r5,r0
0206b140  mov r4,#0x0
0206b144  b 0x0206b158
0206b148  ldr r0,[r5,#0x0]
0206b14c  ldr r0,[r0,r4,lsl #0x2]
0206b150  bl 0x0206ae98
0206b154  add r4,r4,#0x1
0206b158  ldr r0,[r5,#0x4]
0206b15c  cmp r4,r0
0206b160  blt 0x0206b148
0206b164  ldr r0,[r5,#0x0]
0206b168  bl 0x0201b268
0206b16c  mov r0,r5
0206b170  bl 0x0201b244
0206b174  ldmia sp!,{r3,r4,r5,pc}
