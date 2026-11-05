020203f0  stmdb sp!,{r3,lr}
020203f4  ldr r2,[r0,#0x0]
020203f8  ldr r2,[r2,#0x140]
020203fc  blx r2
02020400  ldrh r0,[r0,#0x0]
02020404  ldmia sp!,{r3,pc}
