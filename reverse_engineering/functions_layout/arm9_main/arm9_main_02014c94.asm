02014c94  stmdb sp!,{r3,lr}
02014c98  ldrb r2,[r0,#0x10]
02014c9c  mov r3,r2, lsl #0x1c
02014ca0  mov r3,r3, lsr #0x1f
02014ca4  cmp r3,r1
02014ca8  ldmiaeq sp!,{r3,pc}
02014cac  bic r2,r2,#0x8
02014cb0  mov r1,r1, lsl #0x1f
02014cb4  orr r1,r2,r1, lsr #0x1c
02014cb8  strb r1,[r0,#0x10]
02014cbc  bl 0x02014ae0
02014cc0  ldmia sp!,{r3,pc}
