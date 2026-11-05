02029260  ldr r2,[r0,#0x70]
02029264  ldr r1,[r0,#0x74]
02029268  add r2,r0,r2, lsl #0x2
0202926c  add r0,r0,r1, lsl #0x2
02029270  ldr r1,[r2,#0x18]
02029274  ldr r0,[r0,#0x18]
02029278  mvn r1,r1
0202927c  and r0,r1,r0
02029280  bx lr
