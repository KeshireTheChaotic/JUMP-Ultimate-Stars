0207d288  stmdb sp!,{r3,lr}
0207d28c  ldr r3,[r0,#0x124]
0207d290  mov r2,#0x8
0207d294  blx r3
0207d298  cmp r0,#0x0
0207d29c  movne r0,#0x1
0207d2a0  moveq r0,#0x0
0207d2a4  ldmia sp!,{r3,pc}
