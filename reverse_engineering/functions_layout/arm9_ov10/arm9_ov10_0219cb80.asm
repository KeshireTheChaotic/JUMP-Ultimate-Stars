0219cb80  ldr r2,[0x219cba0]
0219cb84  mov r3,#0x1
0219cb88  ldr r2,[r2,#0x0]
0219cb8c  add r12,r2,#0x64
0219cb90  ldrb r2,[r12,r0]
0219cb94  orr r1,r2,r3, lsl r1
0219cb98  strb r1,[r12,r0]
0219cb9c  bx lr
