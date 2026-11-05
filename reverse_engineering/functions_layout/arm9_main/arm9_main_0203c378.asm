0203c378  stmdb sp!,{r4,lr}
0203c37c  mov r4,r0
0203c380  bl 0x0203b4dc
0203c384  ldr r1,[0x203c394]
0203c388  mov r0,r4
0203c38c  str r1,[r4,#0x0]
0203c390  ldmia sp!,{r4,pc}
