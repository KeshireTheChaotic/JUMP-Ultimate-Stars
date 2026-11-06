0215912c  ldr r0,[r0,#0x4]
02159130  tst r1,#0x1
02159134  ldr r12,[r0,#0x10]
02159138  ldr r3,[r0,#0x124]
0215913c  beq 0x0215915c
02159140  cmp r3,#0x0
02159144  subgt r0,r3,#0x1
02159148  addgt r0,r12,r0, lsl #0x2
0215914c  ldrgt r0,[r0,#0xc]
02159150  strgt r0,[r2,#0x0]
02159154  ldrle r0,[r12,#0x14]
02159158  strle r0,[r2,#0x0]
0215915c  tst r1,#0x2
02159160  bxeq lr
02159164  cmp r3,#0x2
02159168  addlt r0,r3,#0x1
0215916c  addlt r0,r12,r0, lsl #0x2
02159170  ldrlt r0,[r0,#0xc]
02159174  strlt r0,[r2,#0x0]
02159178  ldrge r0,[r12,#0xc]
0215917c  strge r0,[r2,#0x0]
02159180  bx lr
