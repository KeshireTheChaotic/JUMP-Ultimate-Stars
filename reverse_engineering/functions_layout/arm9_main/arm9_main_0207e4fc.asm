0207e4fc  stmdb sp!,{r4,lr}
0207e500  sub sp,sp,#0x10
0207e504  mov r12,r1, lsl #0x10
0207e508  ldr r1,[r0,#0xf8]
0207e50c  mov r4,r3
0207e510  mov r3,r2
0207e514  add r0,sp,#0x0
0207e518  mov r2,r12, asr #0x10
0207e51c  bl 0x0207e538
0207e520  add r1,sp,#0x0
0207e524  mov r0,r4
0207e528  bl 0x0207e594
0207e52c  mov r0,#0x0
0207e530  add sp,sp,#0x10
0207e534  ldmia sp!,{r4,pc}
