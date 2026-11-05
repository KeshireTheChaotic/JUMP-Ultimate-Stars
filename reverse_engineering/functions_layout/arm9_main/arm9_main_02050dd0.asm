02050dd0  ldr r1,[0x2050e08]
02050dd4  ldr r2,[0x2050e0c]
02050dd8  and r1,r1,r0, lsr #0x1
02050ddc  sub r0,r0,r1
02050de0  and r1,r0,r2
02050de4  and r0,r2,r0, lsr #0x2
02050de8  add r1,r1,r0
02050dec  ldr r0,[0x2050e10]
02050df0  add r1,r1,r1, lsr #0x4
02050df4  and r0,r1,r0
02050df8  add r0,r0,r0, lsr #0x8
02050dfc  add r0,r0,r0, lsr #0x10
02050e00  and r0,r0,#0xff
02050e04  bx lr
