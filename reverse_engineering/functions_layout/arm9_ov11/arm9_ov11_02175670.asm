02175670  stmdb sp!,{r3,lr}
02175674  ldr r0,[r0,#0x8]
02175678  cmp r0,#0x0
0217567c  moveq r0,#0x1
02175680  ldmiaeq sp!,{r3,pc}
02175684  bl 0x0217568c
02175688  ldmia sp!,{r3,pc}
