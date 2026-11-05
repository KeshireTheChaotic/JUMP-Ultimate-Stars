021a12e0  ldr r1,[r0,#0x18]
021a12e4  ldr r0,[r0,#0x14]
021a12e8  cmp r0,r1
021a12ec  addlt r0,r0,#0x8000
021a12f0  sub r0,r0,r1
021a12f4  bx lr
