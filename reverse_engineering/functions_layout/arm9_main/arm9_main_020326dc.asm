020326dc  stmdb sp!,{r4,lr}
020326e0  mov r4,r0
020326e4  bl 0x02020e20
020326e8  ldr r1,[0x20326f8]
020326ec  mov r0,r4
020326f0  str r1,[r4,#0x0]
020326f4  ldmia sp!,{r4,pc}
