020254ac  stmdb sp!,{r3,lr}
020254b0  mov r0,r1
020254b4  ldr r3,[r0,#0x0]
020254b8  ldrb r1,[r2,#0x0]
020254bc  ldr r3,[r3,#0x108]
020254c0  blx r3
020254c4  ldmia sp!,{r3,pc}
