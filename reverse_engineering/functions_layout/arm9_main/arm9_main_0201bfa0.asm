0201bfa0  stmdb sp!,{r4,lr}
0201bfa4  ldr r2,[r0,#0x0]
0201bfa8  mov r4,r0
0201bfac  ldr r2,[r2,#0xf0]
0201bfb0  blx r2
0201bfb4  ldrh r1,[r4,#0x2c]
0201bfb8  strh r1,[r4,#0x2e]
0201bfbc  ldmia sp!,{r4,pc}
