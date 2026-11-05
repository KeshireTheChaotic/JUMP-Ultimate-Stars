0214ecc0  stmdb sp!,{r3,lr}
0214ecc4  ldr lr,[r0,#0x4]
0214ecc8  mov r0,#0x1
0214eccc  mvn r3,r0, lsl r1
0214ecd0  ldr r12,[lr,#0x8bc]
0214ecd4  and r3,r12,r3
0214ecd8  orr r1,r3,r2, lsl r1
0214ecdc  str r1,[lr,#0x8bc]
0214ece0  strb r0,[lr,#0x901]
0214ece4  ldmia sp!,{r3,pc}
