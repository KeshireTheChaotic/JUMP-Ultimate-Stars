02017590  stmdb sp!,{r3,lr}
02017594  ldrh r12,[r0,#0x8]
02017598  ldr lr,[r0,#0xc]
0201759c  mla r0,r2,r12,r1
020175a0  strb r3,[lr,r0]
020175a4  ldmia sp!,{r3,pc}
