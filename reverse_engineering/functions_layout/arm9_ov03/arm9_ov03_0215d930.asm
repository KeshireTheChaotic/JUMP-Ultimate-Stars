0215d930  stmdb sp!,{r3,lr}
0215d934  mov r3,#0x0
0215d938  ldr r0,[0x215d950]
0215d93c  sub r1,r3,#0x30
0215d940  sub r2,r3,#0x10
0215d944  str r3,[sp,#0x0]
0215d948  bl 0x0214ee3c
0215d94c  ldmia sp!,{r3,pc}
