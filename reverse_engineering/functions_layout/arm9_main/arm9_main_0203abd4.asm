0203abd4  stmdb sp!,{r4,lr}
0203abd8  mov r4,r0
0203abdc  bl 0x0202b430
0203abe0  ldr r1,[0x203abf0]
0203abe4  mov r0,r4
0203abe8  str r1,[r4,#0x0]
0203abec  ldmia sp!,{r4,pc}
