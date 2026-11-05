02020eb4  stmdb sp!,{r3,lr}
02020eb8  ldr r0,[r0,#0x4]
02020ebc  ldr r1,[r1,#0x4]
02020ec0  ldr r2,[r0,#0x0]
02020ec4  ldr r2,[r2,#0xf4]
02020ec8  blx r2
02020ecc  ldmia sp!,{r3,pc}
