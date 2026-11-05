0204a940  stmdb sp!,{r3,r4,r5,lr}
0204a944  ldr r4,[r0,#0x6c]
0204a948  ldrb lr,[r0,#0x4b]
0204a94c  mul r12,r2,r4
0204a950  ldr r4,[r0,#0x60]
0204a954  rsb r2,lr,#0x8
0204a958  mov lr,#0xff
0204a95c  add r5,r4,r1
0204a960  ldrb r4,[r0,#0x4a]
0204a964  mov r0,lr, asr r2
0204a968  mov r0,r0, lsl r4
0204a96c  and r0,r0,#0xff
0204a970  ldrb r1,[r5,r12]
0204a974  mvn r0,r0
0204a978  and r0,r1,r0
0204a97c  orr r0,r0,r3, lsl r4
0204a980  strb r0,[r5,r12]
0204a984  ldmia sp!,{r3,r4,r5,pc}
