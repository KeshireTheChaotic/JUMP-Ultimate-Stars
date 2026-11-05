0215f400  ldr r3,[r0,#0x4]
0215f404  mov r0,#0x28
0215f408  mla r3,r1,r0,r3
0215f40c  ldr r0,[r3,r2,lsl #0x2]
0215f410  add r1,r3,r2, lsl #0x2
0215f414  add r0,r1,r0
0215f418  bx lr
