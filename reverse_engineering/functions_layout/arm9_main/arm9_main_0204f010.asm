0204f010  stmdb sp!,{r4,lr}
0204f014  mov r4,r0
0204f018  mov r1,#0x0
0204f01c  str r1,[r4,#0x4]
0204f020  bl 0x0204f18c
0204f024  mov r0,r4
0204f028  ldmia sp!,{r4,pc}
