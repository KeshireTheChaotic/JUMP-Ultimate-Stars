02156190  stmdb sp!,{r3,lr}
02156194  ldr r0,[r0,#0x4]
02156198  ldr r1,[r0,#0x0]
0215619c  ldr r1,[r1,#0x128]
021561a0  blx r1
021561a4  ldmia sp!,{r3,pc}
