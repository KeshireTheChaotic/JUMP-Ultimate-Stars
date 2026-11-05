0200d10c  stmdb sp!,{r4,r5,lr}
0200d110  umull r5,r4,r0,r2
0200d114  mla r4,r0,r3,r4
0200d118  mla r4,r2,r1,r4
0200d11c  mov r1,r4
0200d120  mov r0,r5
0200d124  ldmia sp!,{r4,r5,lr}
0200d128  bx lr
