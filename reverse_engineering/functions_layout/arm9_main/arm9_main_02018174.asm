02018174  stmdb sp!,{r3,lr}
02018178  ldrh r12,[r0,#0x8]
0201817c  and r3,r1,#0x7
02018180  ldr lr,[r0,#0xc]
02018184  mul r0,r2,r12
02018188  mov r0,r0, lsr #0x3
0201818c  add r0,r0,r1, lsr #0x3
02018190  ldrb r1,[lr,r0]
02018194  rsb r0,r3,#0x7
02018198  mov r0,r1, asr r0
0201819c  and r0,r0,#0x1
020181a0  ldmia sp!,{r3,pc}
