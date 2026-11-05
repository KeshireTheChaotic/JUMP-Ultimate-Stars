02158350  stmdb sp!,{r3,lr}
02158354  cmp r0,#0x0
02158358  addne r0,r0,r1, lsl #0x2
0215835c  ldrne r1,[r0,#0x4]
02158360  cmpne r1,#0x0
02158364  ldrsbne r0,[r1,#0x1]
02158368  cmpne r0,#0x0
0215836c  ldmiaeq sp!,{r3,pc}
02158370  ldr r0,[r1,#0x8]
02158374  mov r1,r2
02158378  mov r2,r3
0215837c  bl 0x021586c4
02158380  ldmia sp!,{r3,pc}
