021a20dc  mov r2,#0x0
021a20e0  mov r3,r2
021a20e4  add r1,r0,r3, lsl #0x2
021a20e8  ldr r1,[r1,#0x3c]
021a20ec  add r3,r3,#0x1
021a20f0  cmp r1,#0x0
021a20f4  addne r2,r2,#0x1
021a20f8  cmp r3,#0x3
021a20fc  blt 0x021a20e4
021a2100  mov r0,r2
021a2104  bx lr
