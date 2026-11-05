0215dec0  stmdb sp!,{r4,lr}
0215dec4  mov r4,r0
0215dec8  blx 0x021b65cc
0215decc  ldr r0,[r4,#0x4]
0215ded0  ldr r1,[0x215dedc]
0215ded4  bl 0x02028384
0215ded8  ldmia sp!,{r4,pc}
