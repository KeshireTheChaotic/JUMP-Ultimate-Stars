0217f8a4  cmp r0,#0x2
0217f8a8  ldreq r0,[0x217f8f8]
0217f8ac  moveq r1,r1, lsl #0x1
0217f8b0  ldrsheq r0,[r0,r1]
0217f8b4  bxeq lr
0217f8b8  mov r12,#0x0
0217f8bc  ldr r2,[0x217f8fc]
0217f8c0  mvn r0,#0x0
0217f8c4  b 0x0217f8e0
0217f8c8  cmp r1,r3
0217f8cc  ldreq r0,[0x217f900]
0217f8d0  moveq r1,r12, lsl #0x2
0217f8d4  ldrsheq r0,[r0,r1]
0217f8d8  bxeq lr
0217f8dc  add r12,r12,#0x1
0217f8e0  mov r3,r12, lsl #0x2
0217f8e4  ldrsh r3,[r2,r3]
0217f8e8  cmp r3,r0
0217f8ec  bne 0x0217f8c8
0217f8f0  mvn r0,#0x0
0217f8f4  bx lr
