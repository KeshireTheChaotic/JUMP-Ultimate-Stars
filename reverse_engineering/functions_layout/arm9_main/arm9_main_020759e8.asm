020759e8  ldr r1,[0x2075a08]
020759ec  mov r2,r0, lsr #0x5
020759f0  ldr r1,[r1,r2,lsl #0x2]
020759f4  and r2,r0,#0x1f
020759f8  mov r0,#0x1
020759fc  tst r1,r0, lsl r2
02075a00  moveq r0,#0x0
02075a04  bx lr
