0204b800  stmdb sp!,{r3,lr}
0204b804  ldr r1,[r0,#0x0]
0204b808  ldr r1,[r1,#0x4c]
0204b80c  blx r1
0204b810  ldmia sp!,{r3,pc}
