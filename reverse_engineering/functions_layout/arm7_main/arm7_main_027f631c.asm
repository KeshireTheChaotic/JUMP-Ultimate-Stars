027f631c  stmdb sp!,{r4,lr}
027f6320  sub sp,sp,#0x8
027f6324  cmp r1,#0x1
027f6328  bcc 0x027f6434
027f632c  add r3,r0,r1
027f6330  sub r3,r3,#0x1
027f6334  mov r3,r3, lsr #0x8
027f6338  cmp r3,r0, lsr #0x8
027f633c  andhi r1,r0,#0xff
027f6340  rsbhi r1,r1,#0x100
027f6344  movhi r1,r1, lsl #0x10
027f6348  movhi r1,r1, lsr #0x10
027f634c  and r3,r0,#0xff0000
027f6350  mov r3,r3, lsr #0x10
027f6354  strh r3,[sp,#0x0]
027f6358  and r3,r0,#0xff00
027f635c  mov r3,r3, lsr #0x8
027f6360  strh r3,[sp,#0x2]
027f6364  and r0,r0,#0xff
027f6368  strh r0,[sp,#0x4]
027f636c  ldr r3,[0x27f6440]
027f6370  ldrh r0,[r3,#0x0]
027f6374  ands r0,r0,#0x80
027f6378  bne 0x027f6370
027f637c  mov r0,#0x8900
027f6380  strh r0,[r3,#0x0]
027f6384  mov r0,#0xa
027f6388  ldr lr,[0x27f6444]
027f638c  strh r0,[lr,#0x0]
027f6390  mov r4,#0x0
027f6394  add r3,sp,#0x0
027f6398  ldr r12,[0x27f6440]
027f639c  ldrh r0,[r12,#0x0]
027f63a0  ands r0,r0,#0x80
027f63a4  bne 0x027f639c
027f63a8  mov r0,r4, lsl #0x1
027f63ac  ldrh r0,[r3,r0]
027f63b0  and r0,r0,#0xff
027f63b4  strh r0,[lr,#0x0]
027f63b8  add r4,r4,#0x1
027f63bc  cmp r4,#0x3
027f63c0  blt 0x027f639c
027f63c4  mov r12,#0x0
027f63c8  sub lr,r1,#0x1
027f63cc  ldr r3,[0x27f6440]
027f63d0  ldr r0,[0x27f6444]
027f63d4  b 0x027f63f4
027f63d8  ldrh r1,[r3,#0x0]
027f63dc  ands r1,r1,#0x80
027f63e0  bne 0x027f63d8
027f63e4  ldrb r1,[r2,r12]
027f63e8  and r1,r1,#0xff
027f63ec  strh r1,[r0,#0x0]
027f63f0  add r12,r12,#0x1
027f63f4  cmp r12,lr
027f63f8  blt 0x027f63d8
027f63fc  ldr r1,[0x27f6440]
027f6400  ldrh r0,[r1,#0x0]
027f6404  ands r0,r0,#0x80
027f6408  bne 0x027f6400
027f640c  mov r0,#0x8100
027f6410  strh r0,[r1,#0x0]
027f6414  ldrb r0,[r2,r12]
027f6418  and r1,r0,#0xff
027f641c  ldr r0,[0x27f6444]
027f6420  strh r1,[r0,#0x0]
027f6424  ldr r1,[0x27f6440]
027f6428  ldrh r0,[r1,#0x0]
027f642c  ands r0,r0,#0x80
027f6430  bne 0x027f6428
027f6434  add sp,sp,#0x8
027f6438  ldmia sp!,{r4,lr}
027f643c  bx lr
