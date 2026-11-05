0205f438  stmdb sp!,{r4,r5,r6,lr}
0205f43c  mov r3,r0, lsr #0x3
0205f440  mov r6,r1, lsr #0x3
0205f444  mul r12,r3,r6
0205f448  and r2,r0,#0x4
0205f44c  and lr,r0,#0x2
0205f450  and r0,r0,#0x1
0205f454  add r4,r0,lr, lsr #0x1
0205f458  mov r5,r2, lsr #0x2
0205f45c  and r0,r1,#0x4
0205f460  add lr,r12,#0x0
0205f464  add r12,r5,r4, lsl #0x1
0205f468  mla r12,r6,r12,lr
0205f46c  and lr,r1,#0x2
0205f470  and r1,r1,#0x1
0205f474  add lr,r1,lr, lsr #0x1
0205f478  mov r1,r0, lsr #0x2
0205f47c  add r1,r1,lr, lsl #0x1
0205f480  mla r12,r3,r1,r12
0205f484  add r1,r4,r2, lsr #0x2
0205f488  add r0,lr,r0, lsr #0x2
0205f48c  mla r0,r1,r0,r12
0205f490  ldmia sp!,{r4,r5,r6,pc}
