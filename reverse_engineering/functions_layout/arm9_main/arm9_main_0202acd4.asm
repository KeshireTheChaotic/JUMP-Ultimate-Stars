0202acd4  stmdb sp!,{r3,lr}
0202acd8  ldr r2,[r0,#0x0]
0202acdc  ldrb r1,[r0,#0x24]
0202ace0  ldr r2,[r2,#0x18]
0202ace4  blx r2
0202ace8  ldmia sp!,{r3,pc}
