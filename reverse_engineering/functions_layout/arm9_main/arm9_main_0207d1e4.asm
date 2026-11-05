0207d1e4  stmdb sp!,{r3,lr}
0207d1e8  ldr r3,[r0,#0x118]
0207d1ec  blx r3
0207d1f0  cmp r0,#0x0
0207d1f4  movne r0,#0x1
0207d1f8  moveq r0,#0x0
0207d1fc  ldmia sp!,{r3,pc}
