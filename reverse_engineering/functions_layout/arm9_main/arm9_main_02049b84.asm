02049b84  stmdb sp!,{r3,lr}
02049b88  ldr r12,[r0,#0x6c]
02049b8c  ldr lr,[r0,#0xac]
02049b90  mla r12,r2,r12,r1
02049b94  strb r3,[lr,r12]
02049b98  bl 0x020474b0
02049b9c  ldmia sp!,{r3,pc}
