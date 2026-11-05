0204b734  stmdb sp!,{r3,lr}
0204b738  ldr r0,[r0,#0x40]
0204b73c  ldr r1,[r0,#0x0]
0204b740  ldr r1,[r1,#0x20]
0204b744  blx r1
0204b748  ldmia sp!,{r3,pc}
