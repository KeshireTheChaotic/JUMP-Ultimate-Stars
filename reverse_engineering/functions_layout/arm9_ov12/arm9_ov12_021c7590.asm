021c7590  stmdb sp!,{r4,lr}
021c7594  mov r4,r0
021c7598  mov r0,r1, lsl #0x1
021c759c  bl 0x0200c954
021c75a0  mov r1,r0
021c75a4  ldr r0,[0x21c75cc]
021c75a8  bl 0x0200c9e4
021c75ac  ldr r1,[0x21c75d0]
021c75b0  bl 0x0200c5ac
021c75b4  mov r1,r0
021c75b8  ldr r0,[0x21c75d4]
021c75bc  bl 0x0200c9e4
021c75c0  bl 0x0200c8e0
021c75c4  str r0,[r4,#0x0]
021c75c8  ldmia sp!,{r4,pc}
