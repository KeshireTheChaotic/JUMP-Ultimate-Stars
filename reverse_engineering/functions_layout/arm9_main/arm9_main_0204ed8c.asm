0204ed8c  stmdb sp!,{r0,r1,r2,r3}
0204ed90  stmdb sp!,{r4,lr}
0204ed94  sub sp,sp,#0x8
0204ed98  ldr r4,[r0,#0x8]
0204ed9c  ldr r0,[0x204ee3c]
0204eda0  ldr r1,[sp,#0x14]
0204eda4  sub r0,r0,r4
0204eda8  cmp r1,r0
0204edac  bls 0x0204edbc
0204edb0  ldr r0,[0x204ee40]
0204edb4  blx 0x02003bd8
0204edb8  blx 0x02001f18
0204edbc  ldr r0,[0x204ee44]
0204edc0  cmp r4,r0
0204edc4  bcs 0x0204edf8
0204edc8  add r0,r4,#0x1
0204edcc  add r0,r0,r0, lsl #0x1
0204edd0  mov r1,#0x5
0204edd4  bl 0x0200d338
0204edd8  ldr r1,[sp,#0x14]
0204eddc  str r0,[sp,#0x4]
0204ede0  cmp r0,r1
0204ede4  addcc r0,sp,#0x14
0204ede8  addcs r0,sp,#0x4
0204edec  ldr r0,[r0,#0x0]
0204edf0  add r0,r4,r0
0204edf4  b 0x0204ee2c
0204edf8  cmp r4,r0, lsl #0x1
0204edfc  bcs 0x0204ee28
0204ee00  ldr r0,[sp,#0x14]
0204ee04  add r1,r4,#0x1
0204ee08  mov r2,r1, lsr #0x1
0204ee0c  cmp r0,r1, lsr #0x1
0204ee10  addhi r0,sp,#0x14
0204ee14  str r2,[sp,#0x0]
0204ee18  addls r0,sp,#0x0
0204ee1c  ldr r0,[r0,#0x0]
0204ee20  add r0,r4,r0
0204ee24  b 0x0204ee2c
0204ee28  ldr r0,[0x204ee3c]
0204ee2c  add sp,sp,#0x8
0204ee30  ldmia sp!,{r4,lr}
0204ee34  add sp,sp,#0x10
0204ee38  bx lr
