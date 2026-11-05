02162f78  stmdb sp!,{r3,lr}
02162f7c  mvn r1,#0x0
02162f80  str r1,[r0,#0xb0]
02162f84  bl 0x0214dd50
02162f88  mov r1,#0x7
02162f8c  bl 0x0214dd60
02162f90  ldmia sp!,{r3,pc}
