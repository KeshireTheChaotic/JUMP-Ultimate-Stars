0204b3ac  stmdb sp!,{r3,lr}
0204b3b0  mov r0,#0x20
0204b3b4  bl 0x0201a228
0204b3b8  cmp r0,#0x0
0204b3bc  ldmiaeq sp!,{r3,pc}
0204b3c0  bl 0x020194ec
0204b3c4  ldmia sp!,{r3,pc}
