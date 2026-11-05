02156188  stmdb sp!,{r3,lr}
0215618c  ldrh r3,[r1,#0x0]
02156190  ldr r2,[0x21561a4]
02156194  and r3,r3,#0xff
02156198  ldr r2,[r2,r3,lsl #0x2]
0215619c  blx r2
021561a0  ldmia sp!,{r3,pc}
