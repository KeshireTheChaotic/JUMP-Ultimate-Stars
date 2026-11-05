021ba274  stmdb sp!,{r4,lr}
021ba278  mov r4,r0
021ba27c  mov r1,#0x0
021ba280  str r1,[r4,#0x4]
021ba284  bl 0x021ba370
021ba288  mov r0,r4
021ba28c  ldmia sp!,{r4,pc}
