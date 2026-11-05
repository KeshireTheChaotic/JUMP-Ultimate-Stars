020371dc  stmdb sp!,{r4,lr}
020371e0  mov r4,r0
020371e4  bl 0x020371fc
020371e8  ldr r1,[0x20371f8]
020371ec  mov r0,r4
020371f0  str r1,[r4,#0x0]
020371f4  ldmia sp!,{r4,pc}
