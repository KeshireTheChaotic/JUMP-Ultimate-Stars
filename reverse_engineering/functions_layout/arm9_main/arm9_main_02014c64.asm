02014c64  stmdb sp!,{r3,lr}
02014c68  ldrb r2,[r0,#0x10]
02014c6c  mov r3,r2, lsl #0x1d
02014c70  mov r3,r3, lsr #0x1f
02014c74  cmp r3,r1
02014c78  ldmiaeq sp!,{r3,pc}
02014c7c  bic r2,r2,#0x4
02014c80  mov r1,r1, lsl #0x1f
02014c84  orr r1,r2,r1, lsr #0x1d
02014c88  strb r1,[r0,#0x10]
02014c8c  bl 0x02014ae0
02014c90  ldmia sp!,{r3,pc}
