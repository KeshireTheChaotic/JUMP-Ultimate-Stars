02049430  stmdb sp!,{r3,lr}
02049434  ldr r0,[r0,#0x4]
02049438  ldr r1,[r0,#0x0]
0204943c  ldr r1,[r1,#0x8]
02049440  blx r1
02049444  ldmia sp!,{r3,pc}
