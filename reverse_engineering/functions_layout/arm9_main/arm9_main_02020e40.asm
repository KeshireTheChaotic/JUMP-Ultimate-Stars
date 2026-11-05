02020e40  stmdb sp!,{r4,lr}
02020e44  mov r4,r0
02020e48  bl 0x02026f20
02020e4c  ldr r1,[0x2020e5c]
02020e50  mov r0,r4
02020e54  str r1,[r4,#0x0]
02020e58  ldmia sp!,{r4,pc}
