03806f74  stmdb sp!,{lr}
03806f78  sub sp,sp,#0x4
03806f7c  ldr r2,[0x3806fc4]
03806f80  ldrh r1,[r2,#0x0]
03806f84  ldr r0,[0x3806fc8]
03806f88  cmp r1,r0
03806f8c  moveq r0,#0x0
03806f90  beq 0x03806fb8
03806f94  ldrb r0,[r2,#0x5]
03806f98  mov r0,r0, lsl #0x1e
03806f9c  movs r0,r0, lsr #0x1f
03806fa0  bne 0x03806fa8
03806fa4  bl 0x03806e50
03806fa8  ldr r0,[0x3806fc4]
03806fac  ldrb r0,[r0,#0x5]
03806fb0  mov r0,r0, lsl #0x1e
03806fb4  mov r0,r0, lsr #0x1f
03806fb8  add sp,sp,#0x4
03806fbc  ldmia sp!,{lr}
03806fc0  bx lr
