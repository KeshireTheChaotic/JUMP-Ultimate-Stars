0202c634  stmdb sp!,{r3,lr}
0202c638  ldr r2,[r0,#0x0]
0202c63c  ldr r2,[r2,#0x2c]
0202c640  blx r2
0202c644  cmp r0,#0x0
0202c648  movne r0,#0x1
0202c64c  moveq r0,#0x0
0202c650  ldmia sp!,{r3,pc}
