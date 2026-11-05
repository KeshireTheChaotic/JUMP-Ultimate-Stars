037fa528  ldr r3,[0x37fa5c8]
037fa52c  ldr r1,[r3,#0x0]
037fa530  ldr r0,[0x37fa5cc]
037fa534  add r0,r1,r0
037fa538  mov r2,#0x80
037fa53c  ldr r1,[0x37fa5d0]
037fa540  strh r2,[r1,#0x0]
037fa544  ldr r1,[r3,#0x0]
037fa548  add r1,r1,#0x600
037fa54c  ldrh r1,[r1,#0x90]
037fa550  ands r1,r1,#0x20
037fa554  bxeq lr
037fa558  ldr r1,[0x37fa5d4]
037fa55c  ldrh r1,[r1,#0x0]
037fa560  and r1,r1,#0xff
037fa564  mov r1,r1, lsl #0x10
037fa568  mov r2,r1, lsr #0x10
037fa56c  ldr r1,[0x37fa5d8]
037fa570  ldrh r3,[r1,#0x0]
037fa574  cmp r2,#0x3
037fa578  bxcc lr
037fa57c  cmp r2,#0x5
037fa580  bxhi lr
037fa584  ldr r2,[r0,#0x58]
037fa588  ldr r1,[0x37fa5dc]
037fa58c  and r2,r1,r2, lsr #0x1
037fa590  cmp r3,r2
037fa594  bxcc lr
037fa598  ldr r0,[r0,#0x30]
037fa59c  and r0,r1,r0, lsr #0x1
037fa5a0  cmp r3,r0
037fa5a4  bxhi lr
037fa5a8  ldr r1,[0x37fa5e0]
037fa5ac  ldrh r0,[r1,#0x0]
037fa5b0  orr r0,r0,#0x80
037fa5b4  strh r0,[r1,#0x0]
037fa5b8  ldrh r0,[r1,#0x0]
037fa5bc  bic r0,r0,#0x80
037fa5c0  strh r0,[r1,#0x0]
037fa5c4  bx lr
