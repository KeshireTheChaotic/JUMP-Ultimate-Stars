02014d94  stmdb sp!,{r3,lr}
02014d98  ldrb r2,[r0,#0x10]
02014d9c  mov r3,r2, lsl #0x18
02014da0  mov r3,r3, lsr #0x1f
02014da4  cmp r3,r1
02014da8  ldmiaeq sp!,{r3,pc}
02014dac  bic r2,r2,#0x80
02014db0  mov r1,r1, lsl #0x1f
02014db4  orr r1,r2,r1, lsr #0x18
02014db8  strb r1,[r0,#0x10]
02014dbc  bl 0x02014ae0
02014dc0  ldmia sp!,{r3,pc}
