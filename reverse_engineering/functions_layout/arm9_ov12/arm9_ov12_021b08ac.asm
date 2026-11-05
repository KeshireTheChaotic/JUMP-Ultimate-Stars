021b08ac  stmdb sp!,{r4,lr}
021b08b0  mov r4,r0
021b08b4  bl 0x0202c4ac
021b08b8  ldr r1,[0x21b08c8]
021b08bc  mov r0,r4
021b08c0  str r1,[r4,#0x0]
021b08c4  ldmia sp!,{r4,pc}
