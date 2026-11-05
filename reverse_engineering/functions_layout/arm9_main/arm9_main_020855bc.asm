020855bc  ldr r1,[r1,#0x8]
020855c0  mov r12,r0
020855c4  ldr r0,[r1,r2,lsl #0x2]
020855c8  ldr r0,[r0,#0x30]
020855cc  add r0,r0,#0x20
020855d0  ldmia r0,{r0,r1,r2,r3}
020855d4  stmia r12,{r0,r1,r2,r3}
020855d8  bx lr
