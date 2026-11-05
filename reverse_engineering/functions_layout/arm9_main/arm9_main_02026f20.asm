02026f20  stmdb sp!,{r4,lr}
02026f24  mov r4,r0
02026f28  bl 0x0202f250
02026f2c  ldr r1,[0x2026f3c]
02026f30  mov r0,r4
02026f34  str r1,[r4,#0x0]
02026f38  ldmia sp!,{r4,pc}
