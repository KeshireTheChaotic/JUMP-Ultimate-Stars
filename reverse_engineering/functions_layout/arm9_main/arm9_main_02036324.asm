02036324  stmdb sp!,{r3,lr}
02036328  mov r0,r1
0203632c  ldr r1,[r0,#0x0]
02036330  ldr r1,[r1,#0xc]
02036334  blx r1
02036338  ldmia sp!,{r3,pc}
