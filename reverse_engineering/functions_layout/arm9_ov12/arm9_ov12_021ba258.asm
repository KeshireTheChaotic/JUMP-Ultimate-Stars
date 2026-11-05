021ba258  stmdb sp!,{r4,lr}
021ba25c  mov r4,r0
021ba260  mov r1,#0x0
021ba264  str r1,[r4,#0x4]
021ba268  bl 0x021ba3b0
021ba26c  mov r0,r4
021ba270  ldmia sp!,{r4,pc}
