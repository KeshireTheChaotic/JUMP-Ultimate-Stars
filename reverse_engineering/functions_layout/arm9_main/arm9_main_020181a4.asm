020181a4  stmdb sp!,{r3,lr}
020181a8  ldrh r12,[r0,#0x8]
020181ac  and lr,r1,#0x7
020181b0  rsb lr,lr,#0x7
020181b4  mul r12,r2,r12
020181b8  mov r2,r12, lsr #0x3
020181bc  ldr r12,[r0,#0xc]
020181c0  add r2,r2,r1, lsr #0x3
020181c4  ldrb r1,[r12,r2]
020181c8  mov r0,r3, lsl lr
020181cc  and r1,r1,#0x1
020181d0  orr r0,r0,r1, lsl lr
020181d4  strb r0,[r12,r2]
020181d8  ldmia sp!,{r3,pc}
