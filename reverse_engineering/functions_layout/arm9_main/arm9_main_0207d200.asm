0207d200  stmdb sp!,{r3,lr}
0207d204  ldr r3,[r0,#0x124]
0207d208  mov r2,#0x2
0207d20c  blx r3
0207d210  cmp r0,#0x0
0207d214  movne r0,#0x1
0207d218  moveq r0,#0x0
0207d21c  ldmia sp!,{r3,pc}
