0214d910  stmdb sp!,{r3,lr}
0214d914  mov r0,#0x1
0214d918  bl 0x020703b8
0214d91c  add r0,r0,#0x1
0214d920  and r0,r0,#0xff
0214d924  ldmia sp!,{r3,pc}
