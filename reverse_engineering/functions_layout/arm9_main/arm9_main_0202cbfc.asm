0202cbfc  stmdb sp!,{r3,lr}
0202cc00  ldr r2,[r0,#0x0]
0202cc04  ldr r2,[r2,#0x1c]
0202cc08  blx r2
0202cc0c  ldrsh r0,[r0,#0x0]
0202cc10  ldmia sp!,{r3,pc}
