02028f68  stmdb sp!,{r3,lr}
02028f6c  ldr r1,[r0,#0x78]
02028f70  mov r2,#0x0
02028f74  add r1,r1,#0x1
02028f78  and r1,r1,#0x3
02028f7c  str r1,[r0,#0x78]
02028f80  add r1,r0,r1, lsl #0x2
02028f84  str r2,[r1,#0x18]
02028f88  ldr r1,[r0,#0x0]
02028f8c  ldr r1,[r1,#0x14]
02028f90  blx r1
02028f94  ldmia sp!,{r3,pc}
