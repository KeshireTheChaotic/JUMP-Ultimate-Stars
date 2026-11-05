0219b5ec  stmdb sp!,{r3,lr}
0219b5f0  bl 0x0219b4f4
0219b5f4  cmp r0,#0x0
0219b5f8  ldrhne r0,[r0,#0x32]
0219b5fc  moveq r0,#0x0
0219b600  ldmia sp!,{r3,pc}
