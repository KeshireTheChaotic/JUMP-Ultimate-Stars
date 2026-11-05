0204ae94  stmdb sp!,{r3,lr}
0204ae98  ldr r0,[r0,#0x54]
0204ae9c  ldr r2,[r0,#0x0]
0204aea0  ldr r2,[r2,#0xf0]
0204aea4  blx r2
0204aea8  ldmia sp!,{r3,pc}
