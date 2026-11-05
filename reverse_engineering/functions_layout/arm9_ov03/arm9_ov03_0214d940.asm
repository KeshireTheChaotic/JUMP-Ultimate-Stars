0214d940  stmdb sp!,{r3,lr}
0214d944  mov r0,#0x3
0214d948  bl 0x020703b8
0214d94c  add r0,r0,#0x1
0214d950  and r0,r0,#0xff
0214d954  ldmia sp!,{r3,pc}
