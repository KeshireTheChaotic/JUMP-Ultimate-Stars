02026f40  stmdb sp!,{r4,lr}
02026f44  mov r4,r0
02026f48  bl 0x0202f250
02026f4c  ldr r1,[0x2026f5c]
02026f50  mov r0,r4
02026f54  str r1,[r4,#0x0]
02026f58  ldmia sp!,{r4,pc}
