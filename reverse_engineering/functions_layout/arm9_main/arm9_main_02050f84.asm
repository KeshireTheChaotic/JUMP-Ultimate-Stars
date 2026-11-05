02050f84  stmdb sp!,{r4,lr}
02050f88  cmp r3,#0x0
02050f8c  ldrh r4,[r1,#0x0]
02050f90  mov lr,#0x0
02050f94  bls 0x02050fc0
02050f98  ldrb r12,[r2,#0x0]
02050f9c  add lr,lr,#0x1
02050fa0  cmp lr,r3
02050fa4  eor r12,r4,r12
02050fa8  and r12,r12,#0xff
02050fac  mov r12,r12, lsl #0x1
02050fb0  ldrh r12,[r0,r12]
02050fb4  add r2,r2,#0x1
02050fb8  eor r4,r12,r4, lsr #0x8
02050fbc  bcc 0x02050f98
02050fc0  strh r4,[r1,#0x0]
02050fc4  ldmia sp!,{r4,lr}
02050fc8  bx lr
