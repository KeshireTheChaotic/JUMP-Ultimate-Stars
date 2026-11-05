021552e0  ldr r1,[0x2155304]
021552e4  ldr r0,[0x2155308]
021552e8  ldr r3,[r1,#0x0]
021552ec  ldr r2,[r0,#0x0]
021552f0  sub r3,r3,#0x1
021552f4  ldr r0,[0x215530c]
021552f8  str r3,[r1,#0x0]
021552fc  str r2,[r0,r3,lsl #0x2]
02155300  bx lr
