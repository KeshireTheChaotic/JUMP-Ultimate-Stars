0214e284  ldrb r1,[r0,#0x6]
0214e288  cmp r1,#0x0
0214e28c  movne r0,#0x0
0214e290  bxne lr
0214e294  ldrb r1,[r0,#0xb]
0214e298  mov r1,r1, asr #0x4
0214e29c  and r1,r1,#0xf
0214e2a0  cmp r1,#0x3
0214e2a4  bne 0x0214e2c4
0214e2a8  ldr r1,[0x214e2cc]
0214e2ac  ldrb r2,[r0,#0x7]
0214e2b0  ldr r1,[r1,#0x0]
0214e2b4  mov r0,#0x3c
0214e2b8  smulbb r0,r2,r0
0214e2bc  ldr r1,[r1,#0x40]
0214e2c0  ldrb r1,[r1,r0]
0214e2c4  mov r0,r1
0214e2c8  bx lr
