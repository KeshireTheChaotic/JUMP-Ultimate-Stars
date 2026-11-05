02024c7c  stmdb sp!,{r3,lr}
02024c80  ldr r0,[r1,#0x50]
02024c84  mov r1,r2
02024c88  ldr r2,[r0,#0x0]
02024c8c  ldr r2,[r2,#0x44]
02024c90  blx r2
02024c94  ldmia sp!,{r3,pc}
