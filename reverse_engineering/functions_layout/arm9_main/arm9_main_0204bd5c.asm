0204bd5c  stmdb sp!,{r4,lr}
0204bd60  mov r4,r0
0204bd64  bl 0x02012318
0204bd68  ldr r1,[r4,#0x38]
0204bd6c  blx r1
0204bd70  ldmia sp!,{r4,pc}
