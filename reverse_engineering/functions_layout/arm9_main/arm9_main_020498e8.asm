020498e8  stmdb sp!,{r3,lr}
020498ec  ldr r12,[r0,#0x6c]
020498f0  ldr lr,[r0,#0xac]
020498f4  mla r12,r2,r12,r1
020498f8  mov r12,r12, lsl #0x1
020498fc  strh r3,[lr,r12]
02049900  bl 0x020474b0
02049904  ldmia sp!,{r3,pc}
