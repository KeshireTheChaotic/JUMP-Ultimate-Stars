0215baac  stmdb sp!,{r4,lr}
0215bab0  mov r4,r0
0215bab4  blx 0x021b65cc
0215bab8  ldr r0,[r4,#0x4]
0215babc  ldr r1,[0x215bac8]
0215bac0  bl 0x02028384
0215bac4  ldmia sp!,{r4,pc}
