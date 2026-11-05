021b36e0  stmdb sp!,{r4,lr}
021b36e4  mov r4,r0
021b36e8  ldr r1,[r4,#0x4]
021b36ec  cmp r1,#0x0
021b36f0  beq 0x021b36f8
021b36f4  bl 0x021b3aec
021b36f8  mov r0,r4
021b36fc  ldmia sp!,{r4,pc}
