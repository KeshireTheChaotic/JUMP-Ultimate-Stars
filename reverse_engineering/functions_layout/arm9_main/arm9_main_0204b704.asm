0204b704  stmdb sp!,{r3,lr}
0204b708  ldr r0,[r0,#0x40]
0204b70c  ldr r1,[r0,#0x0]
0204b710  ldr r1,[r1,#0x8]
0204b714  blx r1
0204b718  ldmia sp!,{r3,pc}
