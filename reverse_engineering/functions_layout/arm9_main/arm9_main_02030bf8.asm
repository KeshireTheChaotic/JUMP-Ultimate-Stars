02030bf8  stmdb sp!,{r3,lr}
02030bfc  ldr r2,[r0,#0x0]
02030c00  ldr r2,[r2,#0x40]
02030c04  blx r2
02030c08  ldmia sp!,{r3,pc}
