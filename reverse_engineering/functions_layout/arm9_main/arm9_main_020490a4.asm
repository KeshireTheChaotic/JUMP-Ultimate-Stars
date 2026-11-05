020490a4  stmdb sp!,{r4,lr}
020490a8  mov r4,r0
020490ac  ldr r1,[0x20490c4]
020490b0  add r0,r4,#0x4
020490b4  str r1,[r4,#0x0]
020490b8  bl 0x02053f5c
020490bc  mov r0,r4
020490c0  ldmia sp!,{r4,pc}
