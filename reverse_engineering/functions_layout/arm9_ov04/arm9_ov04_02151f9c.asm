02151f9c  ldr r3,[r0,#0x4]
02151fa0  tst r1,#0x8
02151fa4  ldr r0,[r3,#0x124]
02151fa8  ldr r12,[r3,#0x10]
02151fac  sub r3,r0,#0x40
02151fb0  beq 0x02151fd0
02151fb4  cmp r3,#0x0
02151fb8  subgt r3,r3,#0x1
02151fbc  movle r3,#0x2
02151fc0  add r0,r3,#0x3
02151fc4  add r0,r12,r0, lsl #0x2
02151fc8  ldr r0,[r0,#0x64]
02151fcc  str r0,[r2,#0x0]
02151fd0  tst r1,#0x4
02151fd4  bxeq lr
02151fd8  cmp r3,#0x2
02151fdc  addlt r3,r3,#0x1
02151fe0  movge r3,#0x0
02151fe4  add r0,r3,#0x3
02151fe8  add r0,r12,r0, lsl #0x2
02151fec  ldr r0,[r0,#0x64]
02151ff0  str r0,[r2,#0x0]
02151ff4  bx lr
