02011ebc  stmdb sp!,{r4,lr}
02011ec0  mov r4,r0
02011ec4  bl 0x02011e7c
02011ec8  ldr r1,[0x2011ed8]
02011ecc  mov r0,r4
02011ed0  str r1,[r4,#0x0]
02011ed4  ldmia sp!,{r4,pc}
