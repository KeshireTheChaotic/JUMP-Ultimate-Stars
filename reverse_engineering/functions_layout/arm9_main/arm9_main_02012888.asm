02012888  stmdb sp!,{r4,lr}
0201288c  mov r0,r1
02012890  ldr r1,[r0,#0x0]
02012894  mov r4,r2
02012898  ldr r1,[r1,#0x98]
0201289c  blx r1
020128a0  str r0,[r4,#0x0]
020128a4  ldmia sp!,{r4,pc}
