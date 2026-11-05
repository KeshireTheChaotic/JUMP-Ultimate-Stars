0204a9d0  ldr r3,[r0,#0x6c]
0204a9d4  ldr r12,[r0,#0x60]
0204a9d8  mul r3,r2,r3
0204a9dc  add r1,r12,r1
0204a9e0  ldrb r1,[r3,r1]
0204a9e4  ldrb r0,[r0,#0x4d]
0204a9e8  mov r0,r1, asr r0
0204a9ec  tst r0,#0x1
0204a9f0  movne r0,#0x1
0204a9f4  moveq r0,#0x0
0204a9f8  bx lr
