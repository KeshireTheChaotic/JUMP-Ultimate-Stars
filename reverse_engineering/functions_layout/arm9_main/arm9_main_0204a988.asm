0204a988  stmdb sp!,{r3,r4,r5,lr}
0204a98c  ldr r4,[r0,#0x6c]
0204a990  ldrb lr,[r0,#0x49]
0204a994  mul r12,r2,r4
0204a998  ldr r4,[r0,#0x60]
0204a99c  rsb r2,lr,#0x8
0204a9a0  mov lr,#0xff
0204a9a4  add r5,r4,r1
0204a9a8  ldrb r4,[r0,#0x48]
0204a9ac  mov r0,lr, asr r2
0204a9b0  mov r0,r0, lsl r4
0204a9b4  and r0,r0,#0xff
0204a9b8  ldrb r1,[r5,r12]
0204a9bc  mvn r0,r0
0204a9c0  and r0,r1,r0
0204a9c4  orr r0,r0,r3, lsl r4
0204a9c8  strb r0,[r5,r12]
0204a9cc  ldmia sp!,{r3,r4,r5,pc}
