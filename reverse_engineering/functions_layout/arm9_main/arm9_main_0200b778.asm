0200b778  bic r3,r1,#0x80000000
0200b77c  ldr r2,[0x200b7c0]
0200b780  subs r2,r2,r3, lsr #0x14
0200b784  ble 0x0200b7b4
0200b788  cmp r2,#0x20
0200b78c  bge 0x0200b7ac
0200b790  mov r3,r1, lsl #0xb
0200b794  orr r3,r3,#0x80000000
0200b798  orr r3,r3,r0, lsr #0x15
0200b79c  cmp r1,#0x0
0200b7a0  mov r0,r3, lsr r2
0200b7a4  rsbmi r0,r0,#0x0
0200b7a8  bx lr
0200b7ac  mov r0,#0x0
0200b7b0  bx lr
0200b7b4  mvn r0,r1, asr #0x1f
0200b7b8  add r0,r0,#0x80000000
0200b7bc  bx lr
