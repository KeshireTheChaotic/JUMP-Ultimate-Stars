0216c328  stmdb sp!,{r3,r4,lr}
0216c32c  sub sp,sp,#0x4
0216c330  mov r4,r0
0216c334  ldrb r1,[r4,#0x4d]
0216c338  add r0,r4,#0x2c
0216c33c  add r1,r1,#0x1
0216c340  strb r1,[r4,#0x4d]
0216c344  bl 0x0216ce38
0216c348  ldrh r0,[r4,#0x26]
0216c34c  tst r0,#0x1
0216c350  beq 0x0216c364
0216c354  mov r0,r4
0216c358  add r1,r4,#0x2c
0216c35c  bl 0x0216cd9c
0216c360  b 0x0216c424
0216c364  ldrh r12,[r4,#0x20]
0216c368  ldrsh r2,[r4,#0x48]
0216c36c  ldrsh r0,[r4,#0x4a]
0216c370  ldrsh r1,[r4,#0x58]
0216c374  mul r2,r12,r2
0216c378  mul r3,r12,r0
0216c37c  mov r0,r2, lsl #0x8
0216c380  sub r1,r1,r0, asr #0x10
0216c384  strh r1,[r4,#0x58]
0216c388  ldrsh r2,[r4,#0x5a]
0216c38c  mov r1,r3, lsl #0x8
0216c390  sub r2,r2,r1, asr #0x10
0216c394  strh r2,[r4,#0x5a]
0216c398  ldrsh r2,[r4,#0x58]
0216c39c  subs r0,r2,r0, asr #0x10
0216c3a0  bmi 0x0216c3b0
0216c3a4  ldrsh r0,[r4,#0x5a]
0216c3a8  subs r0,r0,r1, asr #0x10
0216c3ac  bpl 0x0216c414
0216c3b0  ldr r0,[r4,#0x30]
0216c3b4  mov r2,#0x0
0216c3b8  b 0x0216c40c
0216c3bc  ldrb r1,[r0,#0x6]
0216c3c0  tst r1,#0x1
0216c3c4  bne 0x0216c404
0216c3c8  ldrb r2,[r4,#0x64]
0216c3cc  ldr r1,[0x216c42c]
0216c3d0  ldr r12,[r4,#0x8]
0216c3d4  ldrb r2,[r1,r2]
0216c3d8  mov r3,r4
0216c3dc  add r1,r4,#0x2c
0216c3e0  add r2,r12,r2, lsl #0x2
0216c3e4  ldr r2,[r2,#0x10]
0216c3e8  str r2,[sp,#0x0]
0216c3ec  ldr r2,[r4,#0x2c]
0216c3f0  bl 0x0216c5f0
0216c3f4  ldrb r0,[r4,#0x64]
0216c3f8  eor r0,r0,#0x1
0216c3fc  strb r0,[r4,#0x64]
0216c400  b 0x0216c414
0216c404  add r2,r2,#0x1
0216c408  add r0,r0,#0x8
0216c40c  cmp r2,#0x20
0216c410  bcc 0x0216c3bc
0216c414  mov r0,r4
0216c418  add r1,r4,#0x2c
0216c41c  bl 0x0216cd10
0216c420  mov r0,#0x1
0216c424  add sp,sp,#0x4
0216c428  ldmia sp!,{r3,r4,pc}
