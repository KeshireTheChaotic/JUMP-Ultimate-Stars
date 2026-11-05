02151a2c  ldr r3,[r0,#0x4]
02151a30  ldr r12,[r0,#0x0]
02151a34  mov r3,r3, lsl #0x2
02151a38  strh r1,[r12,r3]
02151a3c  ldr r3,[r0,#0x0]
02151a40  ldr r1,[r0,#0x4]
02151a44  add r1,r3,r1, lsl #0x2
02151a48  strh r2,[r1,#0x2]
02151a4c  ldr r1,[r0,#0x4]
02151a50  add r1,r1,#0x1
02151a54  str r1,[r0,#0x4]
02151a58  bx lr
