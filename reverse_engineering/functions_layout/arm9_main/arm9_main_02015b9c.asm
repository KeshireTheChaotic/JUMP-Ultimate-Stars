02015b9c  stmdb sp!,{r4,lr}
02015ba0  mov r4,r0
02015ba4  bl 0x02020e20
02015ba8  ldr r1,[0x2015bb8]
02015bac  mov r0,r4
02015bb0  str r1,[r4,#0x0]
02015bb4  ldmia sp!,{r4,pc}
