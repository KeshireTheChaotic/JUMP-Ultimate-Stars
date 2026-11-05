021af158  stmdb sp!,{r4,lr}
021af15c  mov r4,r0
021af160  bl 0x020151fc
021af164  ldr r1,[0x21af174]
021af168  mov r0,r4
021af16c  str r1,[r4,#0x0]
021af170  ldmia sp!,{r4,pc}
