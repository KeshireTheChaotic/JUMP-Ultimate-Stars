0202ab8c  stmdb sp!,{r4,lr}
0202ab90  mov r4,r0
0202ab94  ldr r1,[r4,#0x30]
0202ab98  add r0,r4,#0x3c
0202ab9c  bl 0x02019f00
0202aba0  ldrb r0,[r4,#0x24]
0202aba4  mov r0,r0, lsl #0x1d
0202aba8  movs r0,r0, lsr #0x1f
0202abac  beq 0x0202abe0
0202abb0  add r0,r4,#0x3c
0202abb4  add r1,r4,#0x34
0202abb8  bl 0x02018ac8
0202abbc  add r0,r4,#0x44
0202abc0  add r1,r4,#0x38
0202abc4  bl 0x02018ac8
0202abc8  add r0,r4,#0x40
0202abcc  add r1,r4,#0x34
0202abd0  bl 0x02018ac8
0202abd4  add r0,r4,#0x48
0202abd8  add r1,r4,#0x38
0202abdc  bl 0x02018ac8
0202abe0  ldr r0,[r4,#0xc]
0202abe4  str r0,[r4,#0x4c]
0202abe8  ldr r0,[r4,#0x10]
0202abec  str r0,[r4,#0x50]
0202abf0  ldmia sp!,{r4,pc}
