02028818  stmdb sp!,{r3,lr}
0202881c  ldr r0,[r0,#0x38]
02028820  cmp r0,#0x0
02028824  moveq r0,#0x0
02028828  ldmiaeq sp!,{r3,pc}
0202882c  mov r2,#0x0
02028830  blx 0x0201b57c
02028834  ldmia sp!,{r3,pc}
