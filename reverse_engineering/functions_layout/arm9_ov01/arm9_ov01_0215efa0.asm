0215efa0  stmia r10,{r0,r2,r4,r8,r9,r10,r12,sp,lr,pc}^
0215efa4  ldmdbmi r4,{r5,r6,r7,r9,r11,sp,lr}
0215efa8  cdpvs p8,0x4,cr6,cr0,cr0,0x2
0215efac  cdpvs p8,0x9,cr6,cr2,cr2,0x0
0215efb0  stmiavs r0!,{r4,r7,r8,r9,r10,lr}
