0216d4c0  ldr r3,[r0,#0x4]
0216d4c4  mov r0,#0x14
0216d4c8  mla r3,r1,r0,r3
0216d4cc  add r0,r3,r2, lsl #0x2
0216d4d0  add r1,r3,#0x4
0216d4d4  ldr r0,[r0,#0x4]
0216d4d8  add r1,r1,r2, lsl #0x2
0216d4dc  add r0,r1,r0
0216d4e0  bx lr
