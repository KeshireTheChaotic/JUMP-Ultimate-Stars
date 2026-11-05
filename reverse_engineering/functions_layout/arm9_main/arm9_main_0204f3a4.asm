0204f3a4  stmdb sp!,{r4,lr}
0204f3a8  mov r4,r0
0204f3ac  bl 0x02025c4c
0204f3b0  ldr r1,[0x204f3c0]
0204f3b4  mov r0,r4
0204f3b8  str r1,[r4,#0x0]
0204f3bc  ldmia sp!,{r4,pc}
