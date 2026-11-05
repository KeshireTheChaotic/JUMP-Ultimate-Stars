021532c4  stmdb sp!,{r4,r5,r6,r7,r8,lr}
021532c8  sub sp,sp,#0x10
021532cc  mov r7,r0
021532d0  ldr r1,[r7,#0x4]
021532d4  ldr r0,[r1,#0x90]
021532d8  ldr r4,[r1,#0x10]
021532dc  and r0,r0,#0x1
021532e0  cmp r0,#0x1
021532e4  bne 0x0215339c
021532e8  add r0,r4,#0x400
021532ec  ldrsb r12,[r0,#0x39]
021532f0  ldr r1,[0x21533a4]
021532f4  mov r0,#0x14
021532f8  mla r5,r12,r0,r1
021532fc  ldr r3,[0x21533a8]
02153300  mov r2,#0x24
02153304  add r0,sp,#0x8
02153308  mov r1,r7
0215330c  mla r6,r12,r2,r3
02153310  ldrb r8,[r5,#0xe]
02153314  bl 0x02152964
02153318  add r1,sp,#0x8
0215331c  ldr r2,[r1,#0x0]
02153320  mov r1,r7
02153324  add r0,sp,#0xc
02153328  add r7,r2,r8, lsl #0xc
0215332c  bl 0x02152950
02153330  mov r0,r7, asr #0xb
02153334  add r3,r7,r0, lsr #0x14
02153338  ldrb r1,[r5,#0xb]
0215333c  add r2,sp,#0xc
02153340  ldr r5,[r2,#0x0]
02153344  sub r0,r1,#0x14
02153348  str r0,[sp,#0x0]
0215334c  add r1,r5,#0x2000
02153350  mov r0,r1, asr #0xb
02153354  ldrb r2,[r4,#0x46d]
02153358  add r1,r1,r0, lsr #0x14
0215335c  mov r3,r3, asr #0xc
02153360  add r0,r2,#0x4
02153364  str r0,[sp,#0x4]
02153368  mov r2,r1, asr #0xc
0215336c  add r0,r4,#0x3dc
02153370  mov r1,#0x0
02153374  bl 0x0215ee88
02153378  ldrsh r2,[r6,#0x18]
0215337c  add r0,r4,#0x3dc
02153380  mov r1,#0x1
02153384  str r2,[sp,#0x0]
02153388  ldrsh r2,[r6,#0x1a]
0215338c  str r2,[sp,#0x4]
02153390  ldrsh r2,[r6,#0x10]
02153394  ldrsh r3,[r6,#0x12]
02153398  bl 0x0215ee88
0215339c  add sp,sp,#0x10
021533a0  ldmia sp!,{r4,r5,r6,r7,r8,pc}
