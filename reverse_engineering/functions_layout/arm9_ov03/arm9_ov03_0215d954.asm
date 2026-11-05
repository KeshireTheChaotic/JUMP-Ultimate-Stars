0215d954  stmdb sp!,{r3,lr}
0215d958  mov r3,#0x0
0215d95c  ldr r0,[0x215d974]
0215d960  sub r1,r3,#0x30
0215d964  sub r2,r3,#0x10
0215d968  str r3,[sp,#0x0]
0215d96c  bl 0x0214ee3c
0215d970  ldmia sp!,{r3,pc}
