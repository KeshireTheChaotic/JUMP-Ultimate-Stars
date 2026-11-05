021b03e4  stmdb sp!,{r4,lr}
021b03e8  mov r4,r0
021b03ec  mov r1,#0x0
021b03f0  str r1,[r4,#0x4]
021b03f4  bl 0x021b0400
021b03f8  mov r0,r4
021b03fc  ldmia sp!,{r4,pc}
