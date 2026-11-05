0215f0f4  ldr r1,[0x215f118]
0215f0f8  ldr r0,[0x215f11c]
0215f0fc  ldr r3,[r1,#0x0]
0215f100  ldr r2,[r0,#0x0]
0215f104  sub r3,r3,#0x1
0215f108  ldr r0,[0x215f120]
0215f10c  str r3,[r1,#0x0]
0215f110  str r2,[r0,r3,lsl #0x2]
0215f114  bx lr
