0202e510  stmdb sp!,{r4,lr}
0202e514  mov r0,r2
0202e518  mov r4,r1
0202e51c  bl 0x02038294
0202e520  str r0,[r4,#0x0]
0202e524  mov r0,#0x0
0202e528  ldmia sp!,{r4,pc}
