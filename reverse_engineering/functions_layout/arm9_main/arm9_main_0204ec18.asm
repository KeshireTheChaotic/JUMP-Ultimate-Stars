0204ec18  stmdb sp!,{r0,r1,r2,r3}
0204ec1c  stmdb sp!,{r4,lr}
0204ec20  sub sp,sp,#0x8
0204ec24  ldr r4,[r0,#0x8]
0204ec28  mvn r0,#0xe0000000
0204ec2c  ldr r1,[sp,#0x14]
0204ec30  sub r0,r0,r4
0204ec34  cmp r1,r0
0204ec38  bls 0x0204ec48
0204ec3c  ldr r0,[0x204ecc8]
0204ec40  blx 0x02003bd8
0204ec44  blx 0x02001f18
0204ec48  ldr r0,[0x204eccc]
0204ec4c  cmp r4,r0
0204ec50  bcs 0x0204ec84
0204ec54  add r0,r4,#0x1
0204ec58  add r0,r0,r0, lsl #0x1
0204ec5c  mov r1,#0x5
0204ec60  bl 0x0200d338
0204ec64  ldr r1,[sp,#0x14]
0204ec68  str r0,[sp,#0x4]
0204ec6c  cmp r0,r1
0204ec70  addcc r0,sp,#0x14
0204ec74  addcs r0,sp,#0x4
0204ec78  ldr r0,[r0,#0x0]
0204ec7c  add r0,r4,r0
0204ec80  b 0x0204ecb8
0204ec84  cmp r4,r0, lsl #0x1
0204ec88  bcs 0x0204ecb4
0204ec8c  ldr r0,[sp,#0x14]
0204ec90  add r1,r4,#0x1
0204ec94  mov r2,r1, lsr #0x1
0204ec98  cmp r0,r1, lsr #0x1
0204ec9c  addhi r0,sp,#0x14
0204eca0  str r2,[sp,#0x0]
0204eca4  addls r0,sp,#0x0
0204eca8  ldr r0,[r0,#0x0]
0204ecac  add r0,r4,r0
0204ecb0  b 0x0204ecb8
0204ecb4  mvn r0,#0xe0000000
0204ecb8  add sp,sp,#0x8
0204ecbc  ldmia sp!,{r4,lr}
0204ecc0  add sp,sp,#0x10
0204ecc4  bx lr
