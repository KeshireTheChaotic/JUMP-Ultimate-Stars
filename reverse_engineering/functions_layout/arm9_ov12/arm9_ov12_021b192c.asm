021b192c  stmdb sp!,{r3,lr}
021b1930  ldr r2,[r0,#0x0]
021b1934  mov r1,#0x0
021b1938  ldr r2,[r2,#0x14]
021b193c  blx r2
021b1940  ldmia sp!,{r3,pc}
