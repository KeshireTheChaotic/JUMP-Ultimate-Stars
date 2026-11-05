02014fd8  stmdb sp!,{r3,lr}
02014fdc  ldrb r2,[r0,#0x10]
02014fe0  mov r3,r2, lsl #0x1a
02014fe4  mov r3,r3, lsr #0x1f
02014fe8  cmp r3,r1
02014fec  ldmiaeq sp!,{r3,pc}
02014ff0  bic r2,r2,#0x20
02014ff4  mov r1,r1, lsl #0x1f
02014ff8  orr r1,r2,r1, lsr #0x1a
02014ffc  strb r1,[r0,#0x10]
02015000  bl 0x02014ae0
02015004  ldmia sp!,{r3,pc}
