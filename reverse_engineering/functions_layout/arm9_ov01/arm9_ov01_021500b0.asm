021500b0  stmdb sp!,{r3,lr}
021500b4  ldr lr,[r0,#0x4]
021500b8  mov r0,#0x1
021500bc  mvn r3,r0, lsl r1
021500c0  ldr r12,[lr,#0x8bc]
021500c4  and r3,r12,r3
021500c8  orr r1,r3,r2, lsl r1
021500cc  str r1,[lr,#0x8bc]
021500d0  strb r0,[lr,#0x901]
021500d4  ldmia sp!,{r3,pc}
