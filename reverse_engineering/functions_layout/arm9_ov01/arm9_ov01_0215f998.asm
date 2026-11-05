0215f998  stmdb sp!,{r3,lr}
0215f99c  ldr r0,[r0,#0x4]
0215f9a0  mov r1,#0x0
0215f9a4  ldr r2,[r0,#0x0]
0215f9a8  ldr r2,[r2,#0xd8]
0215f9ac  blx r2
0215f9b0  ldmia sp!,{r3,pc}
