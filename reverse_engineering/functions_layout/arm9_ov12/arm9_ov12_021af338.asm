021af338  stmdb sp!,{r4,lr}
021af33c  mov r4,r0
021af340  bl 0x020151fc
021af344  ldr r1,[0x21af354]
021af348  mov r0,r4
021af34c  str r1,[r4,#0x0]
021af350  ldmia sp!,{r4,pc}
