021569ac  stmdb sp!,{r3,lr}
021569b0  ldrh r3,[r1,#0x0]
021569b4  ldr r2,[0x21569c8]
021569b8  and r3,r3,#0xff
021569bc  ldr r2,[r2,r3,lsl #0x2]
021569c0  blx r2
021569c4  ldmia sp!,{r3,pc}
