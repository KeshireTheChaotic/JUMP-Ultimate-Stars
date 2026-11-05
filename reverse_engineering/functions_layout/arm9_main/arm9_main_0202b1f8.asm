0202b1f8  stmdb sp!,{r4,lr}
0202b1fc  mov r4,r0
0202b200  bl 0x02020e20
0202b204  ldr r1,[0x202b214]
0202b208  mov r0,r4
0202b20c  str r1,[r4,#0x0]
0202b210  ldmia sp!,{r4,pc}
