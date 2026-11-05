02030ebc  stmdb sp!,{r3,lr}
02030ec0  cmp r0,#0x0
02030ec4  ldmiaeq sp!,{r3,pc}
02030ec8  ldr r1,[r0,#0x0]
02030ecc  ldr r1,[r1,#0x4]
02030ed0  blx r1
02030ed4  ldmia sp!,{r3,pc}
