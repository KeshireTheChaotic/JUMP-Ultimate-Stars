021567bc  stmdb sp!,{r3,lr}
021567c0  ldr r2,[r0,#0x7c]
021567c4  cmp r2,#0x0
021567c8  ldmiaeq sp!,{r3,pc}
021567cc  ldrh r3,[r1,#0x0]
021567d0  ldr r2,[0x21567e4]
021567d4  and r3,r3,#0xff
021567d8  ldr r2,[r2,r3,lsl #0x2]
021567dc  blx r2
021567e0  ldmia sp!,{r3,pc}
