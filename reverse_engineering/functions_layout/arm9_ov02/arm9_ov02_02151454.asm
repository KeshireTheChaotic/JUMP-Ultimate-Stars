02151454  stmdb sp!,{r3,lr}
02151458  ldr r0,[r0,#0x4]
0215145c  bl 0x02023fb0
02151460  cmp r0,#0x0
02151464  moveq r0,#0x0
02151468  ldmiaeq sp!,{r3,pc}
0215146c  bl 0x0214f194
02151470  ldmia sp!,{r3,pc}
