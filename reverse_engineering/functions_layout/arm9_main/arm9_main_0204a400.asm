0204a400  push {r3,lr}
0204a402  add r0,#0x80
0204a404  ldr r0,[r0,#0x0]
0204a406  ldr r1,[r0,#0x0]
0204a408  ldr r1,[r1,#0xc]
0204a40a  blx r1
0204a40c  pop {r3,pc}
