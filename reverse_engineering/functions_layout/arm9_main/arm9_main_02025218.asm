02025218  stmdb sp!,{r3,lr}
0202521c  ldr r0,[r1,#0x68]
02025220  ldrh r1,[r2,#0x0]
02025224  ldr r2,[r0,#0x0]
02025228  ldr r2,[r2,#0xe8]
0202522c  blx r2
02025230  ldmia sp!,{r3,pc}
