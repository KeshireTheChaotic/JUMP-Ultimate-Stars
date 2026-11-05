021b3a90  stmdb sp!,{r4,lr}
021b3a94  mov r4,r0
021b3a98  ldr r0,[r4,#0x4]
021b3a9c  cmp r0,#0x0
021b3aa0  beq 0x021b3aa8
021b3aa4  bl 0x0201b244
021b3aa8  mov r0,r4
021b3aac  ldmia sp!,{r4,pc}
