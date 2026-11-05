02076d00  ldr r1,[0x2076d2c]
02076d04  ldrsb r2,[r0,#0x8]
02076d08  ldr r1,[r1,#0x0]
02076d0c  ldrsb r3,[r0,#0x9]
02076d10  ldr r12,[r1,#0x38]
02076d14  mov r0,#0x18
02076d18  ldr r1,[r12,r2,lsl #0x2]
02076d1c  add r2,r12,#0x40
02076d20  add r1,r3,r1
02076d24  mla r0,r1,r0,r2
02076d28  bx lr
