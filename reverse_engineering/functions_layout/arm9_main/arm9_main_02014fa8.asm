02014fa8  stmdb sp!,{r3,lr}
02014fac  ldrb r2,[r0,#0x10]
02014fb0  mov r3,r2, lsl #0x1b
02014fb4  mov r3,r3, lsr #0x1f
02014fb8  cmp r3,r1
02014fbc  ldmiaeq sp!,{r3,pc}
02014fc0  bic r2,r2,#0x10
02014fc4  mov r1,r1, lsl #0x1f
02014fc8  orr r1,r2,r1, lsr #0x1b
02014fcc  strb r1,[r0,#0x10]
02014fd0  bl 0x02014ae0
02014fd4  ldmia sp!,{r3,pc}
