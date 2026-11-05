02155b08  stmdb sp!,{r3,lr}
02155b0c  ldr r0,[r0,#0x4]
02155b10  bl 0x02023fb0
02155b14  cmp r0,#0x0
02155b18  moveq r0,#0x0
02155b1c  ldmiaeq sp!,{r3,pc}
02155b20  bl 0x021556a0
02155b24  ldmia sp!,{r3,pc}
