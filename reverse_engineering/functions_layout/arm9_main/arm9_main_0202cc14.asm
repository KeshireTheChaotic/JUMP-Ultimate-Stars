0202cc14  stmdb sp!,{r3,lr}
0202cc18  strh r2,[sp,#0x0]
0202cc1c  ldr r3,[r0,#0x0]
0202cc20  add r2,sp,#0x0
0202cc24  ldr r3,[r3,#0x24]
0202cc28  blx r3
0202cc2c  ldmia sp!,{r3,pc}
