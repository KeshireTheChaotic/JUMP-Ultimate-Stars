0202ccdc  stmdb sp!,{r3,lr}
0202cce0  ldr r2,[r0,#0x0]
0202cce4  ldr r2,[r2,#0x1c]
0202cce8  blx r2
0202ccec  ldrsb r0,[r0,#0x0]
0202ccf0  ldmia sp!,{r3,pc}
