02174f7c  stmdb sp!,{r3,r4,r5,r6,r7,lr}
02174f80  ldr r5,[0x2174fb8]
02174f84  mov r7,r0
02174f88  mov r6,#0x0
02174f8c  mov r4,#0x1
02174f90  ldr r1,[r5,r6,lsl #0x2]
02174f94  mov r0,r7
02174f98  mov r2,r4
02174f9c  bl 0x021751cc
02174fa0  add r1,r7,r6, lsl #0x2
02174fa4  add r6,r6,#0x1
02174fa8  str r0,[r1,#0x28]
02174fac  cmp r6,#0x2
02174fb0  blt 0x02174f90
02174fb4  ldmia sp!,{r3,r4,r5,r6,r7,pc}
