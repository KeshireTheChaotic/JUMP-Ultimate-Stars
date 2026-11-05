0214cfc8  ldr r1,[0x214cfec]
0214cfcc  ldr r2,[0x214cff0]
0214cfd0  ldr r3,[r1,#0x0]
0214cfd4  ldr r0,[0x214cff4]
0214cfd8  ldr r2,[r2,r3,lsl #0x2]
0214cfdc  add r3,r3,#0x1
0214cfe0  str r3,[r1,#0x0]
0214cfe4  str r2,[r0,#0x0]
0214cfe8  bx lr
