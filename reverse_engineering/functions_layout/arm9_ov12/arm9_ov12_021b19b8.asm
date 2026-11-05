021b19b8  stmdb sp!,{r3}
021b19bc  sub sp,sp,#0x4
021b19c0  add r2,r0,r1
021b19c4  ldrh r1,[r0,r1]
021b19c8  ldrh r0,[r2,#0x2]
021b19cc  orr r0,r1,r0, lsl #0x10
021b19d0  str r0,[sp,#0x0]
021b19d4  add sp,sp,#0x4
021b19d8  ldmia sp!,{r3}
021b19dc  bx lr
