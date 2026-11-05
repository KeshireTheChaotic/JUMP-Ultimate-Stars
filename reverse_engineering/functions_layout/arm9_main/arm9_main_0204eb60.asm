0204eb60  stmdb sp!,{r0,r1,r2,r3}
0204eb64  stmdb sp!,{r4,lr}
0204eb68  sub sp,sp,#0x8
0204eb6c  ldr r4,[r0,#0x8]
0204eb70  mvn r0,#0xe0000000
0204eb74  ldr r1,[sp,#0x14]
0204eb78  sub r0,r0,r4
0204eb7c  cmp r1,r0
0204eb80  bls 0x0204eb90
0204eb84  ldr r0,[0x204ec10]
0204eb88  blx 0x02003bd8
0204eb8c  blx 0x02001f18
0204eb90  ldr r0,[0x204ec14]
0204eb94  cmp r4,r0
0204eb98  bcs 0x0204ebcc
0204eb9c  add r0,r4,#0x1
0204eba0  add r0,r0,r0, lsl #0x1
0204eba4  mov r1,#0x5
0204eba8  bl 0x0200d338
0204ebac  ldr r1,[sp,#0x14]
0204ebb0  str r0,[sp,#0x4]
0204ebb4  cmp r0,r1
0204ebb8  addcc r0,sp,#0x14
0204ebbc  addcs r0,sp,#0x4
0204ebc0  ldr r0,[r0,#0x0]
0204ebc4  add r0,r4,r0
0204ebc8  b 0x0204ec00
0204ebcc  cmp r4,r0, lsl #0x1
0204ebd0  bcs 0x0204ebfc
0204ebd4  ldr r0,[sp,#0x14]
0204ebd8  add r1,r4,#0x1
0204ebdc  mov r2,r1, lsr #0x1
0204ebe0  cmp r0,r1, lsr #0x1
0204ebe4  addhi r0,sp,#0x14
0204ebe8  str r2,[sp,#0x0]
0204ebec  addls r0,sp,#0x0
0204ebf0  ldr r0,[r0,#0x0]
0204ebf4  add r0,r4,r0
0204ebf8  b 0x0204ec00
0204ebfc  mvn r0,#0xe0000000
0204ec00  add sp,sp,#0x8
0204ec04  ldmia sp!,{r4,lr}
0204ec08  add sp,sp,#0x10
0204ec0c  bx lr
