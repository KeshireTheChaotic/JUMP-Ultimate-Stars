0207d2c8  stmdb sp!,{r3,lr}
0207d2cc  ldr r3,[r0,#0x11c]
0207d2d0  blx r3
0207d2d4  and r0,r0,#0xff
0207d2d8  ldmia sp!,{r3,pc}
