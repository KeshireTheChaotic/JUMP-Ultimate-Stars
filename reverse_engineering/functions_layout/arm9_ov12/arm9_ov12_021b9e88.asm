021b9e88  stmdb sp!,{r0,r1,r2,r3}
021b9e8c  stmdb sp!,{r4,lr}
021b9e90  sub sp,sp,#0x8
021b9e94  ldr r4,[r0,#0x8]
021b9e98  mvn r0,#0xe0000000
021b9e9c  ldr r1,[sp,#0x14]
021b9ea0  sub r0,r0,r4
021b9ea4  cmp r1,r0
021b9ea8  bls 0x021b9eb8
021b9eac  ldr r0,[0x21b9f38]
021b9eb0  blx 0x02003bd8
021b9eb4  blx 0x02001f18
021b9eb8  ldr r0,[0x21b9f3c]
021b9ebc  cmp r4,r0
021b9ec0  bcs 0x021b9ef4
021b9ec4  add r0,r4,#0x1
021b9ec8  add r0,r0,r0, lsl #0x1
021b9ecc  mov r1,#0x5
021b9ed0  bl 0x0200d338
021b9ed4  ldr r1,[sp,#0x14]
021b9ed8  str r0,[sp,#0x4]
021b9edc  cmp r0,r1
021b9ee0  addcc r0,sp,#0x14
021b9ee4  addcs r0,sp,#0x4
021b9ee8  ldr r0,[r0,#0x0]
021b9eec  add r0,r4,r0
021b9ef0  b 0x021b9f28
021b9ef4  cmp r4,r0, lsl #0x1
021b9ef8  bcs 0x021b9f24
021b9efc  ldr r0,[sp,#0x14]
021b9f00  add r1,r4,#0x1
021b9f04  mov r2,r1, lsr #0x1
021b9f08  cmp r0,r1, lsr #0x1
021b9f0c  addhi r0,sp,#0x14
021b9f10  str r2,[sp,#0x0]
021b9f14  addls r0,sp,#0x0
021b9f18  ldr r0,[r0,#0x0]
021b9f1c  add r0,r4,r0
021b9f20  b 0x021b9f28
021b9f24  mvn r0,#0xe0000000
021b9f28  add sp,sp,#0x8
021b9f2c  ldmia sp!,{r4,lr}
021b9f30  add sp,sp,#0x10
021b9f34  bx lr
