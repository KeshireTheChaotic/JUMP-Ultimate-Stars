02033350  stmdb sp!,{r3,lr}
02033354  ldr r0,[r0,#0x4]
02033358  ldr r2,[r0,#0x0]
0203335c  ldr r2,[r2,#0x24]
02033360  blx r2
02033364  ldmia sp!,{r3,pc}
