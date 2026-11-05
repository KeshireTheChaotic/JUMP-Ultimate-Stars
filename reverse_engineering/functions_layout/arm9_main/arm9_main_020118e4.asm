020118e4  stmdb sp!,{r4,lr}
020118e8  mov r4,r0
020118ec  bl 0x0202f250
020118f0  ldr r1,[0x2011900]
020118f4  mov r0,r4
020118f8  str r1,[r4,#0x0]
020118fc  ldmia sp!,{r4,pc}
