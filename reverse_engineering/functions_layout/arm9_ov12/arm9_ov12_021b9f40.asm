021b9f40  stmdb sp!,{r0,r1,r2,r3}
021b9f44  stmdb sp!,{r4,lr}
021b9f48  sub sp,sp,#0x8
021b9f4c  ldr r4,[r0,#0x8]
021b9f50  mvn r0,#0xe0000000
021b9f54  ldr r1,[sp,#0x14]
021b9f58  sub r0,r0,r4
021b9f5c  cmp r1,r0
021b9f60  bls 0x021b9f70
021b9f64  ldr r0,[0x21b9ff0]
021b9f68  blx 0x02003bd8
021b9f6c  blx 0x02001f18
021b9f70  ldr r0,[0x21b9ff4]
021b9f74  cmp r4,r0
021b9f78  bcs 0x021b9fac
021b9f7c  add r0,r4,#0x1
021b9f80  add r0,r0,r0, lsl #0x1
021b9f84  mov r1,#0x5
021b9f88  bl 0x0200d338
021b9f8c  ldr r1,[sp,#0x14]
021b9f90  str r0,[sp,#0x4]
021b9f94  cmp r0,r1
021b9f98  addcc r0,sp,#0x14
021b9f9c  addcs r0,sp,#0x4
021b9fa0  ldr r0,[r0,#0x0]
021b9fa4  add r0,r4,r0
021b9fa8  b 0x021b9fe0
021b9fac  cmp r4,r0, lsl #0x1
021b9fb0  bcs 0x021b9fdc
021b9fb4  ldr r0,[sp,#0x14]
021b9fb8  add r1,r4,#0x1
021b9fbc  mov r2,r1, lsr #0x1
021b9fc0  cmp r0,r1, lsr #0x1
021b9fc4  addhi r0,sp,#0x14
021b9fc8  str r2,[sp,#0x0]
021b9fcc  addls r0,sp,#0x0
021b9fd0  ldr r0,[r0,#0x0]
021b9fd4  add r0,r4,r0
021b9fd8  b 0x021b9fe0
021b9fdc  mvn r0,#0xe0000000
021b9fe0  add sp,sp,#0x8
021b9fe4  ldmia sp!,{r4,lr}
021b9fe8  add sp,sp,#0x10
021b9fec  bx lr
