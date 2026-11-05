0204b4d4  stmdb sp!,{r3,lr}
0204b4d8  ldr r0,[r0,#0x20]
0204b4dc  ldr r1,[r0,#0x0]
0204b4e0  ldr r1,[r1,#0x18]
0204b4e4  blx r1
0204b4e8  ldmia sp!,{r3,pc}
