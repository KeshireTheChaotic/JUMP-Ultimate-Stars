0207d240  stmdb sp!,{r3,lr}
0207d244  ldr r3,[r0,#0x124]
0207d248  mov r2,#0x5
0207d24c  blx r3
0207d250  cmp r0,#0x0
0207d254  movne r0,#0x1
0207d258  moveq r0,#0x0
0207d25c  ldmia sp!,{r3,pc}
