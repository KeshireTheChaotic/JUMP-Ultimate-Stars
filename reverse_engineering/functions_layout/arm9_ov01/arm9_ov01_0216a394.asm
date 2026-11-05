0216a394  stmdb sp!,{r3,lr}
0216a398  mov r3,#0x0
0216a39c  ldr r0,[0x216a3b4]
0216a3a0  sub r1,r3,#0x30
0216a3a4  sub r2,r3,#0x10
0216a3a8  str r3,[sp,#0x0]
0216a3ac  bl 0x0214dc98
0216a3b0  ldmia sp!,{r3,pc}
