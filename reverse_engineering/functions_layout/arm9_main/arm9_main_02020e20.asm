02020e20  stmdb sp!,{r4,lr}
02020e24  mov r4,r0
02020e28  bl 0x02026f20
02020e2c  ldr r1,[0x2020e3c]
02020e30  mov r0,r4
02020e34  str r1,[r4,#0x0]
02020e38  ldmia sp!,{r4,pc}
