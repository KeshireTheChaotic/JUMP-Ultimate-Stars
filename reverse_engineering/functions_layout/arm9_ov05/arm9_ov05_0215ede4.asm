0215ede4  stmdb sp!,{r3,lr}
0215ede8  ldr lr,[r0,#0x4]
0215edec  mov r0,#0x1
0215edf0  mvn r3,r0, lsl r1
0215edf4  ldr r12,[lr,#0x8bc]
0215edf8  and r3,r12,r3
0215edfc  orr r1,r3,r2, lsl r1
0215ee00  str r1,[lr,#0x8bc]
0215ee04  strb r0,[lr,#0x901]
0215ee08  ldmia sp!,{r3,pc}
