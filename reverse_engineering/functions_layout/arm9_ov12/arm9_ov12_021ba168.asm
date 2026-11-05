021ba168  stmdb sp!,{r0,r1,r2,r3}
021ba16c  stmdb sp!,{r4,lr}
021ba170  sub sp,sp,#0x8
021ba174  ldr r4,[r0,#0x8]
021ba178  mvn r0,#0xe0000000
021ba17c  ldr r1,[sp,#0x14]
021ba180  sub r0,r0,r4
021ba184  cmp r1,r0
021ba188  bls 0x021ba198
021ba18c  ldr r0,[0x21ba218]
021ba190  blx 0x02003bd8
021ba194  blx 0x02001f18
021ba198  ldr r0,[0x21ba21c]
021ba19c  cmp r4,r0
021ba1a0  bcs 0x021ba1d4
021ba1a4  add r0,r4,#0x1
021ba1a8  add r0,r0,r0, lsl #0x1
021ba1ac  mov r1,#0x5
021ba1b0  bl 0x0200d338
021ba1b4  ldr r1,[sp,#0x14]
021ba1b8  str r0,[sp,#0x4]
021ba1bc  cmp r0,r1
021ba1c0  addcc r0,sp,#0x14
021ba1c4  addcs r0,sp,#0x4
021ba1c8  ldr r0,[r0,#0x0]
021ba1cc  add r0,r4,r0
021ba1d0  b 0x021ba208
021ba1d4  cmp r4,r0, lsl #0x1
021ba1d8  bcs 0x021ba204
021ba1dc  ldr r0,[sp,#0x14]
021ba1e0  add r1,r4,#0x1
021ba1e4  mov r2,r1, lsr #0x1
021ba1e8  cmp r0,r1, lsr #0x1
021ba1ec  addhi r0,sp,#0x14
021ba1f0  str r2,[sp,#0x0]
021ba1f4  addls r0,sp,#0x0
021ba1f8  ldr r0,[r0,#0x0]
021ba1fc  add r0,r4,r0
021ba200  b 0x021ba208
021ba204  mvn r0,#0xe0000000
021ba208  add sp,sp,#0x8
021ba20c  ldmia sp!,{r4,lr}
021ba210  add sp,sp,#0x10
021ba214  bx lr
