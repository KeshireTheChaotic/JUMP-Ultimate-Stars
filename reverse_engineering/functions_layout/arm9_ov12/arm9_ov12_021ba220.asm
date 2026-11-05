021ba220  stmdb sp!,{r4,lr}
021ba224  mov r4,r0
021ba228  mov r1,#0x0
021ba22c  str r1,[r4,#0x4]
021ba230  bl 0x021ba430
021ba234  mov r0,r4
021ba238  ldmia sp!,{r4,pc}
