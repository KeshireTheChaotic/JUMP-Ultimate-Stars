0204a9fc  ldr r3,[r0,#0x6c]
0204aa00  ldr r12,[r0,#0x60]
0204aa04  mul r3,r2,r3
0204aa08  add r1,r12,r1
0204aa0c  ldrb r1,[r3,r1]
0204aa10  ldrb r0,[r0,#0x4c]
0204aa14  mov r0,r1, asr r0
0204aa18  tst r0,#0x1
0204aa1c  movne r0,#0x1
0204aa20  moveq r0,#0x0
0204aa24  bx lr
