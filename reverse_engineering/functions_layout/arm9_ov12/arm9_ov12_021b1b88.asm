021b1b88  stmdb sp!,{r4,lr}
021b1b8c  mov r0,r1
021b1b90  ldr r1,[r0,#0x0]
021b1b94  mov r4,r2
021b1b98  ldr r1,[r1,#0x5c]
021b1b9c  blx r1
021b1ba0  str r0,[r4,#0x0]
021b1ba4  ldmia sp!,{r4,pc}
