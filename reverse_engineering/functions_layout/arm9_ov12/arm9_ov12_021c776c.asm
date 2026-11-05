021c776c  stmdb sp!,{r0,r1,r2,r3}
021c7770  stmdb sp!,{r4,lr}
021c7774  sub sp,sp,#0x8
021c7778  ldr r4,[r0,#0x8]
021c777c  mvn r0,#0xe0000000
021c7780  ldr r1,[sp,#0x14]
021c7784  sub r0,r0,r4
021c7788  cmp r1,r0
021c778c  bls 0x021c779c
021c7790  ldr r0,[0x21c781c]
021c7794  blx 0x02003bd8
021c7798  blx 0x02001f18
021c779c  ldr r0,[0x21c7820]
021c77a0  cmp r4,r0
021c77a4  bcs 0x021c77d8
021c77a8  add r0,r4,#0x1
021c77ac  add r0,r0,r0, lsl #0x1
021c77b0  mov r1,#0x5
021c77b4  bl 0x0200d338
021c77b8  ldr r1,[sp,#0x14]
021c77bc  str r0,[sp,#0x4]
021c77c0  cmp r0,r1
021c77c4  addcc r0,sp,#0x14
021c77c8  addcs r0,sp,#0x4
021c77cc  ldr r0,[r0,#0x0]
021c77d0  add r0,r4,r0
021c77d4  b 0x021c780c
021c77d8  cmp r4,r0, lsl #0x1
021c77dc  bcs 0x021c7808
021c77e0  ldr r0,[sp,#0x14]
021c77e4  add r1,r4,#0x1
021c77e8  mov r2,r1, lsr #0x1
021c77ec  cmp r0,r1, lsr #0x1
021c77f0  addhi r0,sp,#0x14
021c77f4  str r2,[sp,#0x0]
021c77f8  addls r0,sp,#0x0
021c77fc  ldr r0,[r0,#0x0]
021c7800  add r0,r4,r0
021c7804  b 0x021c780c
021c7808  mvn r0,#0xe0000000
021c780c  add sp,sp,#0x8
021c7810  ldmia sp!,{r4,lr}
021c7814  add sp,sp,#0x10
021c7818  bx lr
