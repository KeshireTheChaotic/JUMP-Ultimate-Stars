021b36c0  stmdb sp!,{r4,lr}
021b36c4  mov r4,r0
021b36c8  ldr r1,[r4,#0x4]
021b36cc  cmp r1,#0x0
021b36d0  beq 0x021b36d8
021b36d4  bl 0x021b3ab0
021b36d8  mov r0,r4
021b36dc  ldmia sp!,{r4,pc}
