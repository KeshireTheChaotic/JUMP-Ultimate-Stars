0214ebc0  ldr r2,[r0,#0x0]
0214ebc4  ldr r0,[r2,#0x74]
0214ebc8  ldr r1,[r2,#0x70]
0214ebcc  add r0,r2,r0, lsl #0x2
0214ebd0  add r1,r2,r1, lsl #0x2
0214ebd4  ldr r0,[r0,#0x18]
0214ebd8  ldr r1,[r1,#0x18]
0214ebdc  mvn r0,r0
0214ebe0  and r0,r1,r0
0214ebe4  bx lr
