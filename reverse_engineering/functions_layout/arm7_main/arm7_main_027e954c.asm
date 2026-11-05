027e954c  stmdb sp!,{r4,r5,lr}
027e9550  sub sp,sp,#0x4
027e9554  mov r5,r0
027e9558  mov r4,r1
027e955c  ldr r0,[0x27e95d0]
027e9560  ldr r1,[r0,#0x0]
027e9564  ldr r0,[0x27e95d4]
027e9568  add r0,r1,r0
027e956c  bl 0x037fd998
027e9570  mov r3,#0x0
027e9574  ldr r0,[0x27e95d8]
027e9578  umull r12,r2,r5,r0
027e957c  mla r2,r5,r3,r2
027e9580  mla r2,r3,r0,r2
027e9584  mov r1,r2, lsr #0x6
027e9588  mov r0,r12, lsr #0x6
027e958c  orr r0,r0,r2, lsl #0x1a
027e9590  mov r2,#0x3e8
027e9594  bl 0x038076b8
027e9598  mov r3,r0
027e959c  mov r2,r1
027e95a0  mov r0,#0x0
027e95a4  str r0,[sp,#0x0]
027e95a8  ldr r0,[0x27e95d0]
027e95ac  ldr r1,[r0,#0x0]
027e95b0  ldr r0,[0x27e95d4]
027e95b4  add r0,r1,r0
027e95b8  mov r1,r3
027e95bc  mov r3,r4
027e95c0  bl 0x037fdaa4
027e95c4  add sp,sp,#0x4
027e95c8  ldmia sp!,{r4,r5,lr}
027e95cc  bx lr
