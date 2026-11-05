020361fc  stmdb sp!,{r3,lr}
02036200  mov r0,r1
02036204  ldr r1,[r0,#0x0]
02036208  ldr r1,[r1,#0xc]
0203620c  blx r1
02036210  ldmia sp!,{r3,pc}
