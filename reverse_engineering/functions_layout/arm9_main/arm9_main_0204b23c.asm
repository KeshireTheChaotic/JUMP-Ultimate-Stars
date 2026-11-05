0204b23c  stmdb sp!,{r3,lr}
0204b240  ldrh r2,[r2,#0x0]
0204b244  ldr r0,[r1,#0x50]
0204b248  strh r2,[r0,#0x26]
0204b24c  ldr r1,[r0,#0x0]
0204b250  ldr r1,[r1,#0x14]
0204b254  blx r1
0204b258  ldmia sp!,{r3,pc}
