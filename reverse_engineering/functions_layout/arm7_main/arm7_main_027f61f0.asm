027f61f0  stmdb sp!,{r4,lr}
027f61f4  sub sp,sp,#0x8
027f61f8  cmp r1,#0x1
027f61fc  bcc 0x027f6308
027f6200  add r3,r0,r1
027f6204  sub r3,r3,#0x1
027f6208  mov r3,r3, lsr #0x8
027f620c  cmp r3,r0, lsr #0x8
027f6210  andhi r1,r0,#0xff
027f6214  rsbhi r1,r1,#0x100
027f6218  movhi r1,r1, lsl #0x10
027f621c  movhi r1,r1, lsr #0x10
027f6220  and r3,r0,#0xff0000
027f6224  mov r3,r3, lsr #0x10
027f6228  strh r3,[sp,#0x0]
027f622c  and r3,r0,#0xff00
027f6230  mov r3,r3, lsr #0x8
027f6234  strh r3,[sp,#0x2]
027f6238  and r0,r0,#0xff
027f623c  strh r0,[sp,#0x4]
027f6240  ldr r3,[0x27f6314]
027f6244  ldrh r0,[r3,#0x0]
027f6248  ands r0,r0,#0x80
027f624c  bne 0x027f6244
027f6250  mov r0,#0x8900
027f6254  strh r0,[r3,#0x0]
027f6258  mov r0,#0x2
027f625c  ldr lr,[0x27f6318]
027f6260  strh r0,[lr,#0x0]
027f6264  mov r4,#0x0
027f6268  add r3,sp,#0x0
027f626c  ldr r12,[0x27f6314]
027f6270  ldrh r0,[r12,#0x0]
027f6274  ands r0,r0,#0x80
027f6278  bne 0x027f6270
027f627c  mov r0,r4, lsl #0x1
027f6280  ldrh r0,[r3,r0]
027f6284  and r0,r0,#0xff
027f6288  strh r0,[lr,#0x0]
027f628c  add r4,r4,#0x1
027f6290  cmp r4,#0x3
027f6294  blt 0x027f6270
027f6298  mov r12,#0x0
027f629c  sub lr,r1,#0x1
027f62a0  ldr r3,[0x27f6314]
027f62a4  ldr r0,[0x27f6318]
027f62a8  b 0x027f62c8
027f62ac  ldrh r1,[r3,#0x0]
027f62b0  ands r1,r1,#0x80
027f62b4  bne 0x027f62ac
027f62b8  ldrb r1,[r2,r12]
027f62bc  and r1,r1,#0xff
027f62c0  strh r1,[r0,#0x0]
027f62c4  add r12,r12,#0x1
027f62c8  cmp r12,lr
027f62cc  blt 0x027f62ac
027f62d0  ldr r1,[0x27f6314]
027f62d4  ldrh r0,[r1,#0x0]
027f62d8  ands r0,r0,#0x80
027f62dc  bne 0x027f62d4
027f62e0  mov r0,#0x8100
027f62e4  strh r0,[r1,#0x0]
027f62e8  ldrb r0,[r2,r12]
027f62ec  and r1,r0,#0xff
027f62f0  ldr r0,[0x27f6318]
027f62f4  strh r1,[r0,#0x0]
027f62f8  ldr r1,[0x27f6314]
027f62fc  ldrh r0,[r1,#0x0]
027f6300  ands r0,r0,#0x80
027f6304  bne 0x027f62fc
027f6308  add sp,sp,#0x8
027f630c  ldmia sp!,{r4,lr}
027f6310  bx lr
