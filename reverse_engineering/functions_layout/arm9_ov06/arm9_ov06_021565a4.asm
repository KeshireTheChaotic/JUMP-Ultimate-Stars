021565a4  ldr r3,[0x21565bc]
021565a8  ldrsb r3,[r3,r1]
021565ac  strb r1,[r0,r3,lsl #0x4]
021565b0  add r0,r0,r3, lsl #0x4
021565b4  strb r2,[r0,#0x1]
021565b8  bx lr
