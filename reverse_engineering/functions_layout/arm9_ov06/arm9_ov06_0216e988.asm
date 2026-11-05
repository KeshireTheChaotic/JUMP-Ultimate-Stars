0216e988  stmdb sp!,{r4,lr}
0216e98c  mov r4,r0
0216e990  mov r0,r1, lsl #0x1
0216e994  bl 0x0200c954
0216e998  mov r1,r0
0216e99c  ldr r0,[0x216e9c4]
0216e9a0  bl 0x0200c9e4
0216e9a4  ldr r1,[0x216e9c8]
0216e9a8  bl 0x0200c5ac
0216e9ac  mov r1,r0
0216e9b0  ldr r0,[0x216e9cc]
0216e9b4  bl 0x0200c9e4
0216e9b8  bl 0x0200c8e0
0216e9bc  str r0,[r4,#0x0]
0216e9c0  ldmia sp!,{r4,pc}
