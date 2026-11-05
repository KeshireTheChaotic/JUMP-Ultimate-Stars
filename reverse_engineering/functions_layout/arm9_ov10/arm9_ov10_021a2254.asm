021a2254  stmdb sp!,{r3,lr}
021a2258  add r0,r0,#0x40
021a225c  blx 0x020698cc
021a2260  cmp r0,#0x1
021a2264  moveq r0,#0x1
021a2268  movne r0,#0x0
021a226c  ldmia sp!,{r3,pc}
