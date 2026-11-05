02161468  stmdb sp!,{lr}
0216146c  sub sp,sp,#0x4
02161470  ldrb r12,[r0,#0x0]
02161474  add r3,r0,#0x3
02161478  mov r2,#0x0
0216147c  mov r12,r12, lsl #0x8
02161480  strh r12,[r1,#0x0]
02161484  ldrh lr,[r1,#0x0]
02161488  ldrb r12,[r0,#0x1]
0216148c  add r12,lr,r12
02161490  strh r12,[r1,#0x0]
02161494  ldrb r12,[r0,#0x2]
02161498  add r0,r0,#0x4
0216149c  mov r12,r12, lsl #0x8
021614a0  strh r12,[r1,#0x2]
021614a4  ldrh r12,[r1,#0x2]
021614a8  ldrb r3,[r3,#0x0]
021614ac  add r3,r12,r3
021614b0  strh r3,[r1,#0x2]
021614b4  ldrb r12,[r0],#0x1
021614b8  add r3,r1,r2
021614bc  add r2,r2,#0x1
021614c0  strb r12,[r3,#0x4]
021614c4  cmp r2,#0x1fc
021614c8  blt 0x021614b4
021614cc  add sp,sp,#0x4
021614d0  ldmia sp!,{pc}
