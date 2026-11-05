0204ee48  stmdb sp!,{r0,r1,r2,r3}
0204ee4c  stmdb sp!,{r4,lr}
0204ee50  sub sp,sp,#0x8
0204ee54  ldr r4,[r0,#0x8]
0204ee58  ldr r0,[0x204eef8]
0204ee5c  ldr r1,[sp,#0x14]
0204ee60  sub r0,r0,r4
0204ee64  cmp r1,r0
0204ee68  bls 0x0204ee78
0204ee6c  ldr r0,[0x204eefc]
0204ee70  blx 0x02003bd8
0204ee74  blx 0x02001f18
0204ee78  ldr r0,[0x204ef00]
0204ee7c  cmp r4,r0
0204ee80  bcs 0x0204eeb4
0204ee84  add r0,r4,#0x1
0204ee88  add r0,r0,r0, lsl #0x1
0204ee8c  mov r1,#0x5
0204ee90  bl 0x0200d338
0204ee94  ldr r1,[sp,#0x14]
0204ee98  str r0,[sp,#0x4]
0204ee9c  cmp r0,r1
0204eea0  addcc r0,sp,#0x14
0204eea4  addcs r0,sp,#0x4
0204eea8  ldr r0,[r0,#0x0]
0204eeac  add r0,r4,r0
0204eeb0  b 0x0204eee8
0204eeb4  cmp r4,r0, lsl #0x1
0204eeb8  bcs 0x0204eee4
0204eebc  ldr r0,[sp,#0x14]
0204eec0  add r1,r4,#0x1
0204eec4  mov r2,r1, lsr #0x1
0204eec8  cmp r0,r1, lsr #0x1
0204eecc  addhi r0,sp,#0x14
0204eed0  str r2,[sp,#0x0]
0204eed4  addls r0,sp,#0x0
0204eed8  ldr r0,[r0,#0x0]
0204eedc  add r0,r4,r0
0204eee0  b 0x0204eee8
0204eee4  ldr r0,[0x204eef8]
0204eee8  add sp,sp,#0x8
0204eeec  ldmia sp!,{r4,lr}
0204eef0  add sp,sp,#0x10
0204eef4  bx lr
