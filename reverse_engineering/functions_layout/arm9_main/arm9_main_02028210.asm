02028210  stmdb sp!,{r3,lr}
02028214  ldr r1,[0x202822c]
02028218  bl 0x02028818
0202821c  cmp r0,#0x0
02028220  moveq r0,#0x0
02028224  ldrne r0,[r0,#0xc]
02028228  ldmia sp!,{r3,pc}
