020151d8  stmdb sp!,{r4,lr}
020151dc  mov r2,#0x0
020151e0  mov r4,r0
020151e4  bl 0x02014604
020151e8  ldr r1,[0x20151f8]
020151ec  mov r0,r4
020151f0  str r1,[r4,#0x0]
020151f4  ldmia sp!,{r4,pc}
