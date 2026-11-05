020316e4  stmdb sp!,{r4,lr}
020316e8  ldr r2,[r0,#0x248]
020316ec  cmp r2,r1
020316f0  ldmiaeq sp!,{r4,pc}
020316f4  str r1,[r0,#0x248]
020316f8  ldr r4,[r0,#0x23c]
020316fc  b 0x0203171c
02031700  sub r0,r4,#0x20
02031704  ldrb r1,[r0,#0x29]
02031708  mov r1,r1, lsl #0x18
0203170c  movs r1,r1, lsr #0x1f
02031710  bne 0x02031718
02031714  bl 0x02027edc
02031718  ldr r4,[r4,#0x0]
0203171c  cmp r4,#0x0
02031720  bne 0x02031700
02031724  ldmia sp!,{r4,pc}
