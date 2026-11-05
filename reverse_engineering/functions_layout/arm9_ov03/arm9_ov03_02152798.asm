02152798  stmdb sp!,{r3,lr}
0215279c  ldr lr,[r0,#0x4]
021527a0  mov r0,#0x1
021527a4  mvn r3,r0, lsl r1
021527a8  ldr r12,[lr,#0x8bc]
021527ac  and r3,r12,r3
021527b0  orr r1,r3,r2, lsl r1
021527b4  str r1,[lr,#0x8bc]
021527b8  strb r0,[lr,#0x901]
021527bc  ldmia sp!,{r3,pc}
