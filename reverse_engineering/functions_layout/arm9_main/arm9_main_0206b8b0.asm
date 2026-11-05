0206b8b0  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
0206b8b4  mov r4,r1
0206b8b8  mov r5,r0, asr #0xa
0206b8bc  mov r1,r4, asr #0xa
0206b8c0  and r8,r5,#0x1f
0206b8c4  and r1,r1,#0x1f
0206b8c8  mov r5,r0, asr #0x5
0206b8cc  mov r10,r2
0206b8d0  sub r1,r1,r8
0206b8d4  and r7,r0,#0x1f
0206b8d8  mov r9,r3
0206b8dc  mul r0,r10,r1
0206b8e0  mov r1,r9
0206b8e4  and r6,r5,#0x1f
0206b8e8  bl 0x0200d12c
0206b8ec  and r1,r4,#0x1f
0206b8f0  sub r1,r1,r7
0206b8f4  mov r5,r0
0206b8f8  mul r0,r10,r1
0206b8fc  mov r1,r9
0206b900  bl 0x0200d12c
0206b904  mov r1,r4, asr #0x5
0206b908  and r1,r1,#0x1f
0206b90c  sub r1,r1,r6
0206b910  mov r4,r0
0206b914  mul r0,r10,r1
0206b918  mov r1,r9
0206b91c  bl 0x0200d12c
0206b920  add r1,r7,r4
0206b924  add r0,r6,r0
0206b928  add r2,r8,r5
0206b92c  and r1,r1,#0xff
0206b930  and r0,r0,#0xff
0206b934  and r2,r2,#0xff
0206b938  orr r0,r1,r0, lsl #0x5
0206b93c  orr r0,r0,r2, lsl #0xa
0206b940  mov r0,r0, lsl #0x10
0206b944  mov r0,r0, lsr #0x10
0206b948  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
