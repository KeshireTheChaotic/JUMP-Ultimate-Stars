0207d340  stmdb sp!,{r3,lr}
0207d344  ldr r3,[r0,#0x12c]
0207d348  mov r2,#0x0
0207d34c  blx r3
0207d350  cmp r0,#0x0
0207d354  movne r0,#0x1
0207d358  moveq r0,#0x0
0207d35c  ldmia sp!,{r3,pc}
