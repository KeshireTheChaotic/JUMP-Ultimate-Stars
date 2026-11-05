0204a410  push {r3,lr}
0204a412  add r0,#0x80
0204a414  ldr r0,[r0,#0x0]
0204a416  ldr r1,[r0,#0x0]
0204a418  ldr r1,[r1,#0x8]
0204a41a  blx r1
0204a41c  pop {r3,pc}
