021ba0b0  stmdb sp!,{r0,r1,r2,r3}
021ba0b4  stmdb sp!,{r4,lr}
021ba0b8  sub sp,sp,#0x8
021ba0bc  ldr r4,[r0,#0x8]
021ba0c0  mvn r0,#0xe0000000
021ba0c4  ldr r1,[sp,#0x14]
021ba0c8  sub r0,r0,r4
021ba0cc  cmp r1,r0
021ba0d0  bls 0x021ba0e0
021ba0d4  ldr r0,[0x21ba160]
021ba0d8  blx 0x02003bd8
021ba0dc  blx 0x02001f18
021ba0e0  ldr r0,[0x21ba164]
021ba0e4  cmp r4,r0
021ba0e8  bcs 0x021ba11c
021ba0ec  add r0,r4,#0x1
021ba0f0  add r0,r0,r0, lsl #0x1
021ba0f4  mov r1,#0x5
021ba0f8  bl 0x0200d338
021ba0fc  ldr r1,[sp,#0x14]
021ba100  str r0,[sp,#0x4]
021ba104  cmp r0,r1
021ba108  addcc r0,sp,#0x14
021ba10c  addcs r0,sp,#0x4
021ba110  ldr r0,[r0,#0x0]
021ba114  add r0,r4,r0
021ba118  b 0x021ba150
021ba11c  cmp r4,r0, lsl #0x1
021ba120  bcs 0x021ba14c
021ba124  ldr r0,[sp,#0x14]
021ba128  add r1,r4,#0x1
021ba12c  mov r2,r1, lsr #0x1
021ba130  cmp r0,r1, lsr #0x1
021ba134  addhi r0,sp,#0x14
021ba138  str r2,[sp,#0x0]
021ba13c  addls r0,sp,#0x0
021ba140  ldr r0,[r0,#0x0]
021ba144  add r0,r4,r0
021ba148  b 0x021ba150
021ba14c  mvn r0,#0xe0000000
021ba150  add sp,sp,#0x8
021ba154  ldmia sp!,{r4,lr}
021ba158  add sp,sp,#0x10
021ba15c  bx lr
