02014c34  stmdb sp!,{r3,lr}
02014c38  ldrb r2,[r0,#0x10]
02014c3c  mov r3,r2, lsl #0x1e
02014c40  mov r3,r3, lsr #0x1f
02014c44  cmp r3,r1
02014c48  ldmiaeq sp!,{r3,pc}
02014c4c  bic r2,r2,#0x2
02014c50  mov r1,r1, lsl #0x1f
02014c54  orr r1,r2,r1, lsr #0x1e
02014c58  strb r1,[r0,#0x10]
02014c5c  bl 0x02014ae0
02014c60  ldmia sp!,{r3,pc}
