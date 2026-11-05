020499d4  stmdb sp!,{r3,r4,r5,lr}
020499d8  ldr lr,[r0,#0x6c]
020499dc  mov r12,#0x400
020499e0  mla lr,r2,lr,r1
020499e4  ldr r5,[r0,#0xac]
020499e8  mov r4,lr, lsl #0x1
020499ec  ldrh lr,[r5,r4]
020499f0  rsb r12,r12,#0x0
020499f4  and r12,lr,r12
020499f8  orr r3,r12,r3
020499fc  strh r3,[r5,r4]
02049a00  bl 0x020474b0
02049a04  ldmia sp!,{r3,r4,r5,pc}
