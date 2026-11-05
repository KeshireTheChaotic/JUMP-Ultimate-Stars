021b032c  stmdb sp!,{r0,r1,r2,r3}
021b0330  stmdb sp!,{r4,lr}
021b0334  sub sp,sp,#0x8
021b0338  ldr r4,[r0,#0x8]
021b033c  mvn r0,#0xc0000000
021b0340  ldr r1,[sp,#0x14]
021b0344  sub r0,r0,r4
021b0348  cmp r1,r0
021b034c  bls 0x021b035c
021b0350  ldr r0,[0x21b03dc]
021b0354  blx 0x02003bd8
021b0358  blx 0x02001f18
021b035c  ldr r0,[0x21b03e0]
021b0360  cmp r4,r0
021b0364  bcs 0x021b0398
021b0368  add r0,r4,#0x1
021b036c  add r0,r0,r0, lsl #0x1
021b0370  mov r1,#0x5
021b0374  bl 0x0200d338
021b0378  ldr r1,[sp,#0x14]
021b037c  str r0,[sp,#0x4]
021b0380  cmp r0,r1
021b0384  addcc r0,sp,#0x14
021b0388  addcs r0,sp,#0x4
021b038c  ldr r0,[r0,#0x0]
021b0390  add r0,r4,r0
021b0394  b 0x021b03cc
021b0398  cmp r4,r0, lsl #0x1
021b039c  bcs 0x021b03c8
021b03a0  ldr r0,[sp,#0x14]
021b03a4  add r1,r4,#0x1
021b03a8  mov r2,r1, lsr #0x1
021b03ac  cmp r0,r1, lsr #0x1
021b03b0  addhi r0,sp,#0x14
021b03b4  str r2,[sp,#0x0]
021b03b8  addls r0,sp,#0x0
021b03bc  ldr r0,[r0,#0x0]
021b03c0  add r0,r4,r0
021b03c4  b 0x021b03cc
021b03c8  mvn r0,#0xc0000000
021b03cc  add sp,sp,#0x8
021b03d0  ldmia sp!,{r4,lr}
021b03d4  add sp,sp,#0x10
021b03d8  bx lr
