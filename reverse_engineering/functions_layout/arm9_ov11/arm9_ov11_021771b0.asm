021771b0  stmdb sp!,{r4,lr}
021771b4  ldr r4,[r0,#0x0]
021771b8  cmp r4,#0x0
021771bc  beq 0x021771c8
021771c0  mov r1,r4
021771c4  bl 0x02037c24
021771c8  mov r0,r4
021771cc  ldmia sp!,{r4,pc}
