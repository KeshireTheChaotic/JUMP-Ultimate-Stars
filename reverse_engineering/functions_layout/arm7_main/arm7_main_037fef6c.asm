037fef6c  ldr r1,[0x37fefc8]
037fef70  str r0,[r1,#0x0]
037fef74  cmp r0,#0x0
037fef78  blt 0x037fefa0
037fef7c  mov r2,#0x0
037fef80  and r1,r0,#0xff
037fef84  mov r0,r2, lsl #0x4
037fef88  add r0,r0,#0x4000000
037fef8c  strb r1,[r0,#0x402]
037fef90  add r2,r2,#0x1
037fef94  cmp r2,#0x10
037fef98  blt 0x037fef84
037fef9c  bx lr
037fefa0  mov r3,#0x0
037fefa4  ldr r2,[0x37fefcc]
037fefa8  ldrb r1,[r2,r3]
037fefac  mov r0,r3, lsl #0x4
037fefb0  add r0,r0,#0x4000000
037fefb4  strb r1,[r0,#0x402]
037fefb8  add r3,r3,#0x1
037fefbc  cmp r3,#0x10
037fefc0  blt 0x037fefa8
037fefc4  bx lr
