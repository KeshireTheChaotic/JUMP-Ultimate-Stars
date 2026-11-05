0207d1a8  stmdb sp!,{r3,lr}
0207d1ac  ldr r3,[r0,#0x10c]
0207d1b0  blx r3
0207d1b4  cmp r0,#0x0
0207d1b8  movne r0,#0x1
0207d1bc  moveq r0,#0x0
0207d1c0  ldmia sp!,{r3,pc}
