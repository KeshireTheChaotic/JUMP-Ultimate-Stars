02175628  stmdb sp!,{r3,lr}
0217562c  ldr r0,[r0,#0x4]
02175630  ldr r0,[r0,#0x44]
02175634  cmp r0,#0x0
02175638  moveq r0,#0x0
0217563c  ldmiaeq sp!,{r3,pc}
02175640  bl 0x02175648
02175644  ldmia sp!,{r3,pc}
