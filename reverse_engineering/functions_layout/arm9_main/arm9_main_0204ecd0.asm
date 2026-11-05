0204ecd0  stmdb sp!,{r0,r1,r2,r3}
0204ecd4  stmdb sp!,{r4,lr}
0204ecd8  sub sp,sp,#0x8
0204ecdc  ldr r4,[r0,#0x8]
0204ece0  ldr r0,[0x204ed80]
0204ece4  ldr r1,[sp,#0x14]
0204ece8  sub r0,r0,r4
0204ecec  cmp r1,r0
0204ecf0  bls 0x0204ed00
0204ecf4  ldr r0,[0x204ed84]
0204ecf8  blx 0x02003bd8
0204ecfc  blx 0x02001f18
0204ed00  ldr r0,[0x204ed88]
0204ed04  cmp r4,r0
0204ed08  bcs 0x0204ed3c
0204ed0c  add r0,r4,#0x1
0204ed10  add r0,r0,r0, lsl #0x1
0204ed14  mov r1,#0x5
0204ed18  bl 0x0200d338
0204ed1c  ldr r1,[sp,#0x14]
0204ed20  str r0,[sp,#0x4]
0204ed24  cmp r0,r1
0204ed28  addcc r0,sp,#0x14
0204ed2c  addcs r0,sp,#0x4
0204ed30  ldr r0,[r0,#0x0]
0204ed34  add r0,r4,r0
0204ed38  b 0x0204ed70
0204ed3c  cmp r4,r0, lsl #0x1
0204ed40  bcs 0x0204ed6c
0204ed44  ldr r0,[sp,#0x14]
0204ed48  add r1,r4,#0x1
0204ed4c  mov r2,r1, lsr #0x1
0204ed50  cmp r0,r1, lsr #0x1
0204ed54  addhi r0,sp,#0x14
0204ed58  str r2,[sp,#0x0]
0204ed5c  addls r0,sp,#0x0
0204ed60  ldr r0,[r0,#0x0]
0204ed64  add r0,r4,r0
0204ed68  b 0x0204ed70
0204ed6c  ldr r0,[0x204ed80]
0204ed70  add sp,sp,#0x8
0204ed74  ldmia sp!,{r4,lr}
0204ed78  add sp,sp,#0x10
0204ed7c  bx lr
