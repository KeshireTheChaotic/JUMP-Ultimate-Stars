0204a810  stmdb sp!,{r4,lr}
0204a814  mov r4,r0
0204a818  bl 0x0204a7f8
0204a81c  ldrh r1,[r0,#0x0]
0204a820  ldrb r0,[r4,#0x4c]
0204a824  mov r0,r1, asr r0
0204a828  tst r0,#0x1
0204a82c  movne r0,#0x1
0204a830  moveq r0,#0x0
0204a834  ldmia sp!,{r4,pc}
