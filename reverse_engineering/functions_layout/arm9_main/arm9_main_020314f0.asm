020314f0  stmdb sp!,{r3,lr}
020314f4  ldrb r2,[r0,#0x28]
020314f8  mov r1,r1, lsl #0x1f
020314fc  bic r2,r2,#0x80
02031500  orr r1,r2,r1, lsr #0x18
02031504  strb r1,[r0,#0x28]
02031508  ldrb r1,[r0,#0x29]
0203150c  mov r1,r1, lsl #0x18
02031510  movs r1,r1, lsr #0x1f
02031514  ldmiane sp!,{r3,pc}
02031518  bl 0x02027edc
0203151c  ldmia sp!,{r3,pc}
