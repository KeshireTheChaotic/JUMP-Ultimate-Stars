027e0334  ldr r1,[0x27e036c]
027e0338  ldr r3,[r1,#0x574]
027e033c  ldr r2,[0x27e0370]
027e0340  strb r0,[r2,r3]
027e0344  ldr r2,[r1,#0x574]
027e0348  add r2,r2,#0x1
027e034c  and r2,r2,#0x1f
027e0350  str r2,[r1,#0x574]
027e0354  ldr r2,[0x27e0374]
027e0358  ldrh r1,[r2,#0x0]
027e035c  eor r0,r0,r1, lsl #0x1
027e0360  eor r0,r0,r0, lsr #0x10
027e0364  strh r0,[r2,#0x0]
027e0368  bx lr
