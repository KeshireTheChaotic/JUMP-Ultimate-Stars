02076ce0  mov r3,#0x14
02076ce4  mla r0,r2,r3,r0
02076ce8  add r0,r0,r1, lsl #0x2
02076cec  ldr r0,[r0,#0x8]
02076cf0  cmp r0,#0x0
02076cf4  ldrne r0,[r0,#0x34]
02076cf8  moveq r0,#0x0
02076cfc  bx lr
