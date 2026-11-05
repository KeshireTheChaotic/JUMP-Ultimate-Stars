021518b4  stmdb sp!,{r4,lr}
021518b8  mov r4,r0
021518bc  mov r1,#0x0
021518c0  add r0,r4,#0x348
021518c4  str r1,[r4,#0x344]
021518c8  bl 0x021518d4
021518cc  mov r0,r4
021518d0  ldmia sp!,{r4,pc}
