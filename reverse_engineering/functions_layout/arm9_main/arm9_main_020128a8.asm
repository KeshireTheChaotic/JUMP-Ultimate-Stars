020128a8  stmdb sp!,{r3,lr}
020128ac  mov r0,r1
020128b0  ldr r3,[r0,#0x0]
020128b4  ldr r1,[r2,#0x0]
020128b8  ldr r3,[r3,#0x9c]
020128bc  blx r3
020128c0  ldmia sp!,{r3,pc}
