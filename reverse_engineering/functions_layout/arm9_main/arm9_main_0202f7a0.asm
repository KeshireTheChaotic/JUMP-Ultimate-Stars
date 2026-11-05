0202f7a0  stmdb sp!,{r3,lr}
0202f7a4  ldr r0,[r0,#0x14]
0202f7a8  ldr r2,[r0,#0x0]
0202f7ac  ldr r2,[r2,#0x38]
0202f7b0  blx r2
0202f7b4  ldmia sp!,{r3,pc}
