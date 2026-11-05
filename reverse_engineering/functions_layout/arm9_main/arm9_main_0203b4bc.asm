0203b4bc  stmdb sp!,{r4,lr}
0203b4c0  mov r4,r0
0203b4c4  bl 0x0203b4dc
0203b4c8  ldr r1,[0x203b4d8]
0203b4cc  mov r0,r4
0203b4d0  str r1,[r4,#0x0]
0203b4d4  ldmia sp!,{r4,pc}
