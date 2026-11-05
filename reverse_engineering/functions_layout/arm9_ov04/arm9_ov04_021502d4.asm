021502d4  stmdb sp!,{r3,lr}
021502d8  cmp r0,#0x0
021502dc  ldmiaeq sp!,{r3,pc}
021502e0  str r1,[r0,#0x28]
021502e4  str r1,[r0,#0x2c]
021502e8  bl 0x021503b4
021502ec  ldmia sp!,{r3,pc}
