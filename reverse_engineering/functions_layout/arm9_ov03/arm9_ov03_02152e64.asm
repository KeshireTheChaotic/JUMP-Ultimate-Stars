02152e64  ldr r12,[r0,#0x4]
02152e68  mov r0,#0x1
02152e6c  strb r0,[r12,#0x901]
02152e70  ldrsh r3,[r2,#0x0]
02152e74  add r0,r12,r1, lsl #0x3
02152e78  add r0,r0,#0x800
02152e7c  strh r3,[r0,#0xd8]
02152e80  ldrsh r1,[r2,#0x2]
02152e84  strh r1,[r0,#0xda]
02152e88  ldrsh r1,[r2,#0x4]
02152e8c  strh r1,[r0,#0xdc]
02152e90  ldrsh r1,[r2,#0x6]
02152e94  strh r1,[r0,#0xde]
02152e98  bx lr
