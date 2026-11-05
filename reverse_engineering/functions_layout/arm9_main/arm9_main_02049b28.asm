02049b28  stmdb sp!,{r3,lr}
02049b2c  ldr r12,[r0,#0x6c]
02049b30  ldr lr,[r0,#0xac]
02049b34  mla r12,r2,r12,r1
02049b38  strb r3,[lr,r12]
02049b3c  bl 0x020474b0
02049b40  ldmia sp!,{r3,pc}
