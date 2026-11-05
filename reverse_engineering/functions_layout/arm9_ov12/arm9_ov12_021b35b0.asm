021b35b0  stmdb sp!,{r3,lr}
021b35b4  mov r1,r0
021b35b8  ldr r0,[r1,#0x44]
021b35bc  ldr r1,[r1,#0x1c]
021b35c0  ldr r2,[r0,#0x0]
021b35c4  ldr r2,[r2,#0x38]
021b35c8  blx r2
021b35cc  ldmia sp!,{r3,pc}
