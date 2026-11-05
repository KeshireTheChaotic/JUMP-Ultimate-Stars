0202f6dc  stmdb sp!,{r3,lr}
0202f6e0  mov r2,r0
0202f6e4  ldr r0,[r2,#0x14]
0202f6e8  ldr r3,[r0,#0x0]
0202f6ec  ldr r3,[r3,#0x34]
0202f6f0  blx r3
0202f6f4  ldmia sp!,{r3,pc}
