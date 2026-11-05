02155578  stmdb sp!,{r3,lr}
0215557c  ldr lr,[r0,#0x4]
02155580  mov r0,#0x1
02155584  mvn r3,r0, lsl r1
02155588  ldr r12,[lr,#0x8bc]
0215558c  and r3,r12,r3
02155590  orr r1,r3,r2, lsl r1
02155594  str r1,[lr,#0x8bc]
02155598  strb r0,[lr,#0x901]
0215559c  ldmia sp!,{r3,pc}
