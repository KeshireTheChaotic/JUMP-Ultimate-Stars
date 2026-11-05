0219b5c4  stmdb sp!,{r3,lr}
0219b5c8  bl 0x0219b4f4
0219b5cc  cmp r0,#0x0
0219b5d0  ldrhne r0,[r0,#0x30]
0219b5d4  moveq r0,#0x0
0219b5d8  ldmia sp!,{r3,pc}
