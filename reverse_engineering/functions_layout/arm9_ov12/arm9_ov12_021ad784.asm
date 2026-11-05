021ad784  sub sp,sp,#0x8
021ad788  ldr r0,[r0,#0x0]
021ad78c  cmp r0,#0x0
021ad790  sublt r0,r0,#0xff
021ad794  sublt r0,r0,#0x700
021ad798  strlt r0,[sp,#0x4]
021ad79c  addge r0,r0,#0xff
021ad7a0  addlt r1,sp,#0x4
021ad7a4  addge r0,r0,#0x700
021ad7a8  addge r1,sp,#0x0
021ad7ac  strge r0,[sp,#0x0]
021ad7b0  ldr r1,[r1,#0x0]
021ad7b4  mov r0,r1, asr #0xb
021ad7b8  add r0,r1,r0, lsr #0x14
021ad7bc  mov r0,r0, asr #0xc
021ad7c0  add sp,sp,#0x8
021ad7c4  bx lr
