02162b60  ldr r12,[r0,#0x10]
02162b64  add r12,r12,r1, lsl #0x2
02162b68  ldr r12,[r12,#0x8]
02162b6c  str r12,[r2,#0x0]
02162b70  ldr r12,[r0,#0x10]
02162b74  add r12,r12,r1, lsl #0x2
02162b78  ldr r12,[r12,#0x18]
02162b7c  sub r12,r12,#0x1
02162b80  str r12,[r2,#0x4]
02162b84  ldr r0,[r0,#0x10]
02162b88  add r0,r0,r1
02162b8c  ldrb r0,[r0,#0x28]
02162b90  cmp r0,#0x0
02162b94  movne r0,#0x1
02162b98  moveq r0,#0x0
02162b9c  strb r0,[r3,#0x0]
02162ba0  bx lr
