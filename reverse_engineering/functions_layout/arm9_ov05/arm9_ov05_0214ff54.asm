0214ff54  stmdb sp!,{r4,lr}
0214ff58  mov r4,r0
0214ff5c  blx 0x021b65cc
0214ff60  ldr r0,[r4,#0x4]
0214ff64  ldr r1,[0x214ff70]
0214ff68  bl 0x02028384
0214ff6c  ldmia sp!,{r4,pc}
