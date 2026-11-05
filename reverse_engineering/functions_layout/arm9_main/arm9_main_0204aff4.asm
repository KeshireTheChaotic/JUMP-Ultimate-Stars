0204aff4  stmdb sp!,{r3,lr}
0204aff8  ldr r0,[r0,#0x54]
0204affc  ldr r1,[r0,#0x0]
0204b000  ldr r1,[r1,#0xa8]
0204b004  blx r1
0204b008  ldmia sp!,{r3,pc}
