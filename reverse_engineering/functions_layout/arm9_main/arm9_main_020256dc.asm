020256dc  stmdb sp!,{r4,lr}
020256e0  mov r4,r1
020256e4  mov r0,r2
020256e8  mov r1,#0x0
020256ec  bl 0x02011450
020256f0  str r0,[r4,#0x54]
020256f4  ldmia sp!,{r4,pc}
