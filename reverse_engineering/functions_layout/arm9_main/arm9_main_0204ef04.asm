0204ef04  stmdb sp!,{r0,r1,r2,r3}
0204ef08  stmdb sp!,{r4,lr}
0204ef0c  sub sp,sp,#0x8
0204ef10  ldr r4,[r0,#0x8]
0204ef14  mvn r0,#0xf0000000
0204ef18  ldr r1,[sp,#0x14]
0204ef1c  sub r0,r0,r4
0204ef20  cmp r1,r0
0204ef24  bls 0x0204ef34
0204ef28  ldr r0,[0x204efb4]
0204ef2c  blx 0x02003bd8
0204ef30  blx 0x02001f18
0204ef34  ldr r0,[0x204efb8]
0204ef38  cmp r4,r0
0204ef3c  bcs 0x0204ef70
0204ef40  add r0,r4,#0x1
0204ef44  add r0,r0,r0, lsl #0x1
0204ef48  mov r1,#0x5
0204ef4c  bl 0x0200d338
0204ef50  ldr r1,[sp,#0x14]
0204ef54  str r0,[sp,#0x4]
0204ef58  cmp r0,r1
0204ef5c  addcc r0,sp,#0x14
0204ef60  addcs r0,sp,#0x4
0204ef64  ldr r0,[r0,#0x0]
0204ef68  add r0,r4,r0
0204ef6c  b 0x0204efa4
0204ef70  cmp r4,r0, lsl #0x1
0204ef74  bcs 0x0204efa0
0204ef78  ldr r0,[sp,#0x14]
0204ef7c  add r1,r4,#0x1
0204ef80  mov r2,r1, lsr #0x1
0204ef84  cmp r0,r1, lsr #0x1
0204ef88  addhi r0,sp,#0x14
0204ef8c  str r2,[sp,#0x0]
0204ef90  addls r0,sp,#0x0
0204ef94  ldr r0,[r0,#0x0]
0204ef98  add r0,r4,r0
0204ef9c  b 0x0204efa4
0204efa0  mvn r0,#0xf0000000
0204efa4  add sp,sp,#0x8
0204efa8  ldmia sp!,{r4,lr}
0204efac  add sp,sp,#0x10
0204efb0  bx lr
