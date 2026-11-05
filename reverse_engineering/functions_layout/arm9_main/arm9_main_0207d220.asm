0207d220  stmdb sp!,{r3,lr}
0207d224  ldr r3,[r0,#0x124]
0207d228  mov r2,#0x0
0207d22c  blx r3
0207d230  cmp r0,#0x0
0207d234  movne r0,#0x1
0207d238  moveq r0,#0x0
0207d23c  ldmia sp!,{r3,pc}
