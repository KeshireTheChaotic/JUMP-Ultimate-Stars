0202089c  stmdb sp!,{r4,lr}
020208a0  mov r4,r0
020208a4  bl 0x02020e20
020208a8  ldr r1,[0x20208b8]
020208ac  mov r0,r4
020208b0  str r1,[r4,#0x0]
020208b4  ldmia sp!,{r4,pc}
