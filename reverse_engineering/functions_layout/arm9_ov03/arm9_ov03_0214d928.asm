0214d928  stmdb sp!,{r3,lr}
0214d92c  mov r0,#0x2
0214d930  bl 0x020703b8
0214d934  add r0,r0,#0x1
0214d938  and r0,r0,#0xff
0214d93c  ldmia sp!,{r3,pc}
