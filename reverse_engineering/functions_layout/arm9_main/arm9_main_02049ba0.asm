02049ba0  stmdb sp!,{r3,lr}
02049ba4  ldr r12,[r0,#0x6c]
02049ba8  ldr lr,[r0,#0xac]
02049bac  mla r12,r2,r12,r1
02049bb0  strb r3,[lr,r12]
02049bb4  bl 0x020474b0
02049bb8  ldmia sp!,{r3,pc}
