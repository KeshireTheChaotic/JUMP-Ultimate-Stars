03806cdc  mov r12,#0x0
03806ce0  ldr r2,[0x3806d00]
03806ce4  ands r3,r0,#0x1
03806ce8  strne r1,[r2,r12,lsl #0x2]
03806cec  mov r0,r0, lsr #0x1
03806cf0  add r12,r12,#0x1
03806cf4  cmp r12,#0x19
03806cf8  blt 0x03806ce4
03806cfc  bx lr
