0214e238  ldrb r2,[r0,#0x6]
0214e23c  cmp r2,#0x0
0214e240  movne r0,#0x0
0214e244  bxne lr
0214e248  ldrsb r2,[r0,#0x8]
0214e24c  subs r12,r2,#0x3
0214e250  movmi r0,#0x0
0214e254  bxmi lr
0214e258  ldr r2,[0x214e280]
0214e25c  ldrb r3,[r0,#0x7]
0214e260  ldr r2,[r2,#0x0]
0214e264  mov r0,#0x3c
0214e268  ldr r2,[r2,#0x40]
0214e26c  mla r0,r3,r0,r2
0214e270  add r0,r0,r12, lsl #0x2
0214e274  add r0,r0,r1
0214e278  ldrb r0,[r0,#0x12]
0214e27c  bx lr
