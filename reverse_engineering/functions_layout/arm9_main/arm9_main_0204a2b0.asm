0204a2b0  push {r4,lr}
0204a2b2  add r4,r0,#0x0
0204a2b4  ldr r0,[r4,#0x4]
0204a2b6  ldr r2,[r0,#0x0]
0204a2b8  ldr r2,[r2,#0x60]
0204a2ba  blx r2
0204a2bc  str r0,[r4,#0x4]
0204a2be  pop {r4,pc}
