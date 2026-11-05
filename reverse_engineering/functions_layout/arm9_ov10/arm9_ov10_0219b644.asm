0219b644  stmdb sp!,{r4,lr}
0219b648  movs r4,r0
0219b64c  moveq r0,#0x1
0219b650  ldmiaeq sp!,{r4,pc}
0219b654  blx 0x0217668c
0219b658  sub r1,r4,#0x1
0219b65c  mov r2,#0x1
0219b660  mov r1,r2, lsl r1
0219b664  b 0x0219b678
0219b668  tst r0,r1
0219b66c  movne r0,#0x0
0219b670  ldmiane sp!,{r4,pc}
0219b674  mov r1,r1, lsr #0x1
0219b678  cmp r1,#0x0
0219b67c  bne 0x0219b668
0219b680  mov r0,#0x1
0219b684  ldmia sp!,{r4,pc}
