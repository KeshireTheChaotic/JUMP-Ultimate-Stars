021c6138  stmdb sp!,{r4,lr}
021c613c  mov r2,#0x0
021c6140  mov r4,r0
021c6144  bl 0x02014604
021c6148  ldr r1,[0x21c6158]
021c614c  mov r0,r4
021c6150  str r1,[r4,#0x0]
021c6154  ldmia sp!,{r4,pc}
