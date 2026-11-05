020118c4  stmdb sp!,{r4,lr}
020118c8  mov r4,r0
020118cc  bl 0x0202f250
020118d0  ldr r1,[0x20118e0]
020118d4  mov r0,r4
020118d8  str r1,[r4,#0x0]
020118dc  ldmia sp!,{r4,pc}
