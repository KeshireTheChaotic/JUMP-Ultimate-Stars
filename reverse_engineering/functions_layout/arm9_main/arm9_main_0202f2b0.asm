0202f2b0  stmdb sp!,{r3,lr}
0202f2b4  ldr r0,[r0,#0x4]
0202f2b8  ldr r1,[r0,#0x0]
0202f2bc  ldr r1,[r1,#0xc]
0202f2c0  blx r1
0202f2c4  ldmia sp!,{r3,pc}
