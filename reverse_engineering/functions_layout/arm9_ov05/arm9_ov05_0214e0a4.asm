0214e0a4  ldr r2,[0x214e108]
0214e0a8  ldr r2,[r2,#0x0]
0214e0ac  ldr r3,[r2,#0x44]
0214e0b0  cmp r3,#0x0
0214e0b4  moveq r0,#0x0
0214e0b8  bxeq lr
0214e0bc  ldrb r2,[r0,#0x6]
0214e0c0  cmp r2,#0x0
0214e0c4  movne r0,#0x0
0214e0c8  bxne lr
0214e0cc  ldrsb r2,[r0,#0x8]
0214e0d0  subs r12,r2,#0x3
0214e0d4  movmi r0,#0x0
0214e0d8  bxmi lr
0214e0dc  ldrb r2,[r0,#0x7]
0214e0e0  mov r0,#0xd4
0214e0e4  mla r3,r2,r0,r3
0214e0e8  add r0,r3,r12, lsl #0x4
0214e0ec  add r2,r0,r1, lsl #0x2
0214e0f0  add r0,r3,#0x4
0214e0f4  add r0,r0,r12, lsl #0x4
0214e0f8  ldr r2,[r2,#0x4]
0214e0fc  add r0,r0,r1, lsl #0x2
0214e100  add r0,r2,r0
0214e104  bx lr
