02013038  stmdb sp!,{r4,lr}
0201303c  mov r4,r0
02013040  bl 0x0202c4ac
02013044  ldr r1,[0x2013054]
02013048  mov r0,r4
0201304c  str r1,[r4,#0x0]
02013050  ldmia sp!,{r4,pc}
