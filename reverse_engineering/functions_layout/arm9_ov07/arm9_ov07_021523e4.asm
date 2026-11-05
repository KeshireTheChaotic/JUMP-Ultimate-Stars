021523e4  stmdb sp!,{r4,lr}
021523e8  mov r2,#0x0
021523ec  mov r4,r0
021523f0  bl 0x02014604
021523f4  ldr r1,[0x2152404]
021523f8  mov r0,r4
021523fc  str r1,[r4,#0x0]
02152400  ldmia sp!,{r4,pc}
