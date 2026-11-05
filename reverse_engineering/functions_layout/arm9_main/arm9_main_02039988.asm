02039988  stmdb sp!,{r3,lr}
0203998c  ldrh r3,[r0,#0x8]
02039990  mov r12,r2, lsr #0x3
02039994  mov lr,r1, lsr #0x1
02039998  mul r3,r12,r3
0203999c  mov r3,r3, lsr #0x3
020399a0  and r12,lr,#0x3
020399a4  add r3,r3,r1, lsr #0x3
020399a8  mov lr,r2, lsl #0x1d
020399ac  add r2,r12,r3, lsl #0x5
020399b0  tst r1,#0x1
020399b4  ldr r0,[r0,#0xc]
020399b8  add r1,r2,lr, lsr #0x1b
020399bc  ldrb r0,[r0,r1]
020399c0  andeq r0,r0,#0xf
020399c4  movne r0,r0, asr #0x4
020399c8  ldmia sp!,{r3,pc}
