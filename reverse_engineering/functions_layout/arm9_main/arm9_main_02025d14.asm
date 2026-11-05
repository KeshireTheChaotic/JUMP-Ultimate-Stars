02025d14  stmdb sp!,{r4,lr}
02025d18  mov r4,r0
02025d1c  bl 0x02025c4c
02025d20  ldr r1,[0x2025d30]
02025d24  mov r0,r4
02025d28  str r1,[r4,#0x0]
02025d2c  ldmia sp!,{r4,pc}
