021a2940  stmdb sp!,{r3,lr}
021a2944  blx 0x02069c1c
021a2948  cmp r0,#0x1
021a294c  moveq r0,#0x1
021a2950  movne r0,#0x0
021a2954  ldmia sp!,{r3,pc}
