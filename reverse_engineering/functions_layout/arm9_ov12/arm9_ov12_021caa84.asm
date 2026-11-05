021caa84  ldr r3,[r0,#0x0]
021caa88  mov r0,#0x1
021caa8c  cmp r3,#0x0
021caa90  bxeq lr
021caa94  ldr r2,[r1,#0x40]
021caa98  mov r12,#0x0
021caa9c  cmp r2,r3
021caaa0  ldrls r1,[r1,#0x50]
021caaa4  addls r1,r2,r1, lsl #0x3
021caaa8  cmpls r3,r1
021caaac  movls r12,r0
021caab0  cmp r12,#0x0
021caab4  moveq r0,#0x0
021caab8  bx lr
