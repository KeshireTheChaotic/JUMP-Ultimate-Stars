0204b520  stmdb sp!,{r3,lr}
0204b524  ldr r0,[r0,#0x20]
0204b528  ldr r1,[r0,#0x0]
0204b52c  ldr r1,[r1,#0x1c]
0204b530  blx r1
0204b534  ldmia sp!,{r3,pc}
