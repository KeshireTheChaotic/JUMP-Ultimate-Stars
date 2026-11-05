02020e98  stmdb sp!,{r3,lr}
02020e9c  ldr r0,[r0,#0x4]
02020ea0  ldr r1,[r1,#0x4]
02020ea4  ldr r2,[r0,#0x0]
02020ea8  ldr r2,[r2,#0xf0]
02020eac  blx r2
02020eb0  ldmia sp!,{r3,pc}
