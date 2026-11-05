02030440  stmdb sp!,{r3,lr}
02030444  ldr r2,[r0,#0x0]
02030448  ldr r2,[r2,#0x40]
0203044c  blx r2
02030450  ldmia sp!,{r3,pc}
