0214fdfc  stmdb sp!,{r3,lr}
0214fe00  mov r0,r1, lsl #0x10
0214fe04  mov r0,r0, lsr #0x10
0214fe08  cmp r0,#0x78
0214fe0c  ldmiane sp!,{r3,pc}
0214fe10  mov r1,r1, lsr #0x10
0214fe14  bl 0x0207342c
0214fe18  ldmia sp!,{r3,pc}
