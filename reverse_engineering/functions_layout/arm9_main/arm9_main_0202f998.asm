0202f998  stmdb sp!,{r3,lr}
0202f99c  ldr r2,[r0,#0x0]
0202f9a0  mov r1,#0x0
0202f9a4  ldr r2,[r2,#0x14]
0202f9a8  blx r2
0202f9ac  ldmia sp!,{r3,pc}
