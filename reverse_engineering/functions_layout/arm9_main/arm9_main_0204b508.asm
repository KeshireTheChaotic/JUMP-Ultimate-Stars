0204b508  stmdb sp!,{r3,lr}
0204b50c  ldr r0,[r0,#0x20]
0204b510  ldr r1,[r0,#0x0]
0204b514  ldr r1,[r1,#0x20]
0204b518  blx r1
0204b51c  ldmia sp!,{r3,pc}
