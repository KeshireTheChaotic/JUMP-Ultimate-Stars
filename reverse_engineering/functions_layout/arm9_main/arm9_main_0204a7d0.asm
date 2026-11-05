0204a7d0  stmdb sp!,{r4,lr}
0204a7d4  mov r4,r0
0204a7d8  bl 0x0204a7f8
0204a7dc  ldrh r1,[r0,#0x0]
0204a7e0  ldrb r0,[r4,#0x4d]
0204a7e4  mov r0,r1, asr r0
0204a7e8  tst r0,#0x1
0204a7ec  movne r0,#0x1
0204a7f0  moveq r0,#0x0
0204a7f4  ldmia sp!,{r4,pc}
