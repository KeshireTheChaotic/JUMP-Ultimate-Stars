021af474  stmdb sp!,{r4,lr}
021af478  mov r4,r0
021af47c  bl 0x020151fc
021af480  ldr r1,[0x21af490]
021af484  mov r0,r4
021af488  str r1,[r4,#0x0]
021af48c  ldmia sp!,{r4,pc}
