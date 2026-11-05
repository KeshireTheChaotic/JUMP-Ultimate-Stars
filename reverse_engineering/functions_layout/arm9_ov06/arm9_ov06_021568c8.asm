021568c8  stmdb sp!,{r3,lr}
021568cc  ldrh r3,[r1,#0x0]
021568d0  ldr r2,[0x21568e4]
021568d4  and r3,r3,#0xff
021568d8  ldr r2,[r2,r3,lsl #0x2]
021568dc  blx r2
021568e0  ldmia sp!,{r3,pc}
