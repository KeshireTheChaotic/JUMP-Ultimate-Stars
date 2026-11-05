02029234  ldr r1,[r0,#0x74]
02029238  ldr r2,[r0,#0x70]
0202923c  add r1,r0,r1, lsl #0x2
02029240  add r2,r0,r2, lsl #0x2
02029244  ldr r1,[r1,#0x18]
02029248  ldr r2,[r2,#0x18]
0202924c  mvn r1,r1
02029250  ldr r3,[r0,#0x28]
02029254  and r0,r2,r1
02029258  orr r0,r3,r0
0202925c  bx lr
