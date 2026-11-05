0215d978  stmdb sp!,{r3,lr}
0215d97c  mov r3,#0x0
0215d980  ldr r0,[0x215d998]
0215d984  sub r1,r3,#0x30
0215d988  sub r2,r3,#0x10
0215d98c  str r3,[sp,#0x0]
0215d990  bl 0x0214ee3c
0215d994  ldmia sp!,{r3,pc}
