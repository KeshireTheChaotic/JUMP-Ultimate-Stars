0216b4f4  stmdb sp!,{r4,lr}
0216b4f8  mov r4,r0
0216b4fc  bl 0x0216b514
0216b500  ldrh r1,[r4,#0x26]
0216b504  mov r0,r4
0216b508  orr r1,r1,#0x2
0216b50c  strh r1,[r4,#0x26]
0216b510  ldmia sp!,{r4,pc}
