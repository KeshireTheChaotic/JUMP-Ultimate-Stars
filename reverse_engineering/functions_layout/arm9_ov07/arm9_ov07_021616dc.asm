021616dc  ldrh r2,[r0,#0x0]
021616e0  add r3,r1,#0x3
021616e4  mov r12,#0x0
021616e8  mov r2,r2, asr #0x8
021616ec  strb r2,[r1,#0x0]
021616f0  ldrh r2,[r0,#0x0]
021616f4  strb r2,[r1,#0x1]
021616f8  ldrh r2,[r0,#0x2]
021616fc  mov r2,r2, asr #0x8
02161700  strb r2,[r1,#0x2]
02161704  ldrh r2,[r0,#0x2]
02161708  add r1,r1,#0x4
0216170c  strb r2,[r3,#0x0]
02161710  add r2,r0,r12
02161714  ldrb r2,[r2,#0x4]
02161718  add r12,r12,#0x1
0216171c  cmp r12,#0x1fc
02161720  strb r2,[r1],#0x1
02161724  blt 0x02161710
02161728  bx lr
