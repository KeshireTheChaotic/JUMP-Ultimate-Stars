02157eb0  stmdb sp!,{r3,lr}
02157eb4  cmp r0,#0x0
02157eb8  ldrsbne r2,[r0,#0x1]
02157ebc  cmpne r2,#0x0
02157ec0  ldmiaeq sp!,{r3,pc}
02157ec4  ldr r0,[r0,#0x4]
02157ec8  bl 0x02150270
02157ecc  ldmia sp!,{r3,pc}
