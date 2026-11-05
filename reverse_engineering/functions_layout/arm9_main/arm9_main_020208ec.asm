020208ec  stmdb sp!,{r3,lr}
020208f0  ldr r1,[0x202090c]
020208f4  ldr r0,[r1,r0,lsl #0x2]
020208f8  cmp r0,#0x0
020208fc  moveq r0,#0x0
02020900  ldmiaeq sp!,{r3,pc}
02020904  bl 0x02011b38
02020908  ldmia sp!,{r3,pc}
