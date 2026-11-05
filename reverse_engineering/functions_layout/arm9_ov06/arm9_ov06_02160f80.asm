02160f80  stmdb sp!,{r3,r4,r5,lr}
02160f84  ldr r2,[0x2160fc4]
02160f88  mov r0,#0x1
02160f8c  ldr r4,[r2,#0x0]
02160f90  mov lr,r0
02160f94  ldr r5,[r4,#0x158]
02160f98  mov r2,#0x0
02160f9c  b 0x02160fb8
02160fa0  add r12,r4,lr, lsl #0x2
02160fa4  ldrh r3,[r1,#0x2]
02160fa8  ldr r12,[r12,#0x9c]
02160fac  add lr,lr,#0x1
02160fb0  cmp r12,r3
02160fb4  movlt r0,r2
02160fb8  cmp lr,r5
02160fbc  blt 0x02160fa0
02160fc0  ldmia sp!,{r3,r4,r5,pc}
