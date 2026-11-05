037f86b8  stmdb sp!,{r4,r5,r6,lr}
037f86bc  mov r4,r0
037f86c0  ldr r0,[0x37f8724]
037f86c4  ldr r5,[r0,#0x0]
037f86c8  ldr r0,[0x37f8728]
037f86cc  bl 0x037fbc10
037f86d0  mov r6,r4, lsl #0x1
037f86d4  ldrh r4,[r5,r6]
037f86d8  ldr r2,[0x37f872c]
037f86dc  cmp r4,r2
037f86e0  beq 0x037f8714
037f86e4  add lr,r5,#0xbc
037f86e8  mov r12,#0x0
037f86ec  mov r3,r4, lsl #0x3
037f86f0  add r1,lr,r4, lsl #0x3
037f86f4  strh r12,[r1,#0x2]
037f86f8  ldrh r1,[lr,r3]
037f86fc  cmp r1,r2
037f8700  strheq r2,[r5,r6]
037f8704  addeq r1,r5,r6
037f8708  strheq r2,[r1,#0x8]
037f870c  strhne r1,[r5,r6]
037f8710  strhne r2,[lr,r3]
037f8714  bl 0x037fbc4c
037f8718  mov r0,r4
037f871c  ldmia sp!,{r4,r5,r6,lr}
037f8720  bx lr
