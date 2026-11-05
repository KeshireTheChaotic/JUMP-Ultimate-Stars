0205f108  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
0205f10c  sub sp,sp,#0x3c
0205f110  mov r7,r0
0205f114  mov r0,r1
0205f118  cmp r0,#0x8
0205f11c  ldr r0,[sp,#0x60]
0205f120  str r1,[sp,#0x10]
0205f124  str r0,[sp,#0x60]
0205f128  ldr r0,[sp,#0x6c]
0205f12c  str r2,[sp,#0x14]
0205f130  str r0,[sp,#0x6c]
0205f134  ldrlt r0,[sp,#0x10]
0205f138  mov r11,r3
0205f13c  ldr r6,[sp,#0x64]
0205f140  ldr r5,[sp,#0x68]
0205f144  movge r2,#0x3
0205f148  clzlt r0,r0
0205f14c  rsblt r2,r0,#0x1f
0205f150  ldr r0,[sp,#0x14]
0205f154  cmp r0,#0x8
0205f158  ldrlt r0,[sp,#0x14]
0205f15c  movge r1,#0x3
0205f160  clzlt r0,r0
0205f164  rsblt r1,r0,#0x1f
0205f168  ldr r0,[0x205f428]
0205f16c  mvn r3,#0x0
0205f170  add r1,r0,r1, lsl #0x3
0205f174  add r0,r1,r2, lsl #0x1
0205f178  ldrb r4,[r1,r2,lsl #0x1]
0205f17c  ldrb r1,[r0,#0x1]
0205f180  ldr r2,[sp,#0x14]
0205f184  cmp r6,#0x0
0205f188  str r1,[sp,#0x18]
0205f18c  ldr r1,[sp,#0x10]
0205f190  and r1,r1,r3, lsl r4
0205f194  str r1,[sp,#0x1c]
0205f198  ldr r1,[sp,#0x18]
0205f19c  and r1,r2,r3, lsl r1
0205f1a0  str r1,[sp,#0x20]
0205f1a4  moveq r1,#0x1
0205f1a8  streq r1,[sp,#0x24]
0205f1ac  movne r1,#0x2
0205f1b0  strne r1,[sp,#0x24]
0205f1b4  mov r1,#0x0
0205f1b8  str r1,[sp,#0x28]
0205f1bc  bl 0x02060304
0205f1c0  ldr r1,[sp,#0x10]
0205f1c4  ldr r2,[sp,#0x14]
0205f1c8  mov r10,r1, asr r4
0205f1cc  ldr r1,[sp,#0x18]
0205f1d0  mov r1,r2, asr r1
0205f1d4  str r1,[sp,#0x2c]
0205f1d8  ldr r1,[sp,#0x24]
0205f1dc  mov r2,r1, lsl r4
0205f1e0  ldr r1,[sp,#0x18]
0205f1e4  mov r2,r2, lsl r1
0205f1e8  ldr r1,[sp,#0x6c]
0205f1ec  mov r9,r2, asr r1
0205f1f0  mov r1,#0x0
0205f1f4  str r1,[sp,#0x30]
0205f1f8  str r1,[sp,#0x34]
0205f1fc  b 0x0205f2a0
0205f200  ldr r2,[sp,#0x30]
0205f204  ldr r1,[sp,#0x18]
0205f208  ldr r8,[sp,#0x34]
0205f20c  mov r2,r2, lsl r1
0205f210  ldr r1,[sp,#0x60]
0205f214  add lr,r1,r2, lsl #0x3
0205f218  b 0x0205f28c
0205f21c  mov r1,r8, lsl r4
0205f220  add r2,r11,r1, lsl #0x3
0205f224  ldr r1,[0x205f42c]
0205f228  ldr r3,[r7,#0x0]
0205f22c  and r12,r2,r1
0205f230  ldr r1,[0x205f430]
0205f234  and r2,lr,#0xff
0205f238  and r1,r3,r1
0205f23c  orr r1,r1,r2
0205f240  orr r1,r1,r12, lsl #0x10
0205f244  str r1,[r7,#0x0]
0205f248  ldr r3,[r7,#0x0]
0205f24c  ldr r1,[0x205f434]
0205f250  mov r2,#0x400
0205f254  and r1,r3,r1
0205f258  orr r1,r1,r0
0205f25c  str r1,[r7,#0x0]
0205f260  rsb r1,r2,#0x0
0205f264  ldrh r2,[r7,#0x4]
0205f268  add r8,r8,#0x1
0205f26c  and r1,r2,r1
0205f270  orr r1,r1,r5
0205f274  strh r1,[r7,#0x4]
0205f278  ldr r1,[r7,#0x0]
0205f27c  add r5,r5,r9
0205f280  bic r1,r1,#0x2000
0205f284  orr r1,r1,r6, lsl #0xd
0205f288  str r1,[r7],#0x8
0205f28c  cmp r8,r10
0205f290  blt 0x0205f21c
0205f294  ldr r1,[sp,#0x30]
0205f298  add r1,r1,#0x1
0205f29c  str r1,[sp,#0x30]
0205f2a0  ldr r2,[sp,#0x30]
0205f2a4  ldr r1,[sp,#0x2c]
0205f2a8  cmp r2,r1
0205f2ac  blt 0x0205f200
0205f2b0  ldr r0,[sp,#0x28]
0205f2b4  mla r0,r10,r1,r0
0205f2b8  str r0,[sp,#0x28]
0205f2bc  ldr r1,[sp,#0x1c]
0205f2c0  ldr r0,[sp,#0x10]
0205f2c4  cmp r1,r0
0205f2c8  bcs 0x0205f330
0205f2cc  ldr r0,[sp,#0x60]
0205f2d0  ldr r1,[sp,#0x10]
0205f2d4  str r0,[sp,#0x0]
0205f2d8  ldr r0,[sp,#0x1c]
0205f2dc  str r6,[sp,#0x4]
0205f2e0  sub r4,r1,r0
0205f2e4  ldr r1,[sp,#0x6c]
0205f2e8  str r5,[sp,#0x8]
0205f2ec  str r1,[sp,#0xc]
0205f2f0  ldr r1,[sp,#0x1c]
0205f2f4  ldr r2,[sp,#0x20]
0205f2f8  add r3,r11,r1, lsl #0x3
0205f2fc  mov r0,r7
0205f300  mov r1,r4
0205f304  bl 0x0205f108
0205f308  ldr r1,[sp,#0x24]
0205f30c  add r7,r7,r0, lsl #0x3
0205f310  mul r2,r1,r4
0205f314  ldr r1,[sp,#0x20]
0205f318  mul r2,r1,r2
0205f31c  ldr r1,[sp,#0x6c]
0205f320  add r5,r5,r2, lsr r1
0205f324  ldr r1,[sp,#0x28]
0205f328  add r0,r1,r0
0205f32c  str r0,[sp,#0x28]
0205f330  ldr r1,[sp,#0x20]
0205f334  ldr r0,[sp,#0x14]
0205f338  cmp r1,r0
0205f33c  bcs 0x0205f3a8
0205f340  ldr r1,[sp,#0x60]
0205f344  ldr r0,[sp,#0x20]
0205f348  mov r3,r11
0205f34c  add r0,r1,r0, lsl #0x3
0205f350  str r0,[sp,#0x0]
0205f354  str r6,[sp,#0x4]
0205f358  ldr r1,[sp,#0x14]
0205f35c  ldr r0,[sp,#0x20]
0205f360  str r5,[sp,#0x8]
0205f364  sub r4,r1,r0
0205f368  ldr r1,[sp,#0x6c]
0205f36c  mov r0,r7
0205f370  str r1,[sp,#0xc]
0205f374  ldr r1,[sp,#0x1c]
0205f378  mov r2,r4
0205f37c  bl 0x0205f108
0205f380  ldr r2,[sp,#0x24]
0205f384  ldr r1,[sp,#0x1c]
0205f388  add r7,r7,r0, lsl #0x3
0205f38c  mul r1,r2,r1
0205f390  mul r2,r4,r1
0205f394  ldr r1,[sp,#0x6c]
0205f398  add r5,r5,r2, lsr r1
0205f39c  ldr r1,[sp,#0x28]
0205f3a0  add r0,r1,r0
0205f3a4  str r0,[sp,#0x28]
0205f3a8  ldr r1,[sp,#0x1c]
0205f3ac  ldr r0,[sp,#0x10]
0205f3b0  cmp r1,r0
0205f3b4  bcs 0x0205f41c
0205f3b8  ldr r1,[sp,#0x20]
0205f3bc  ldr r0,[sp,#0x14]
0205f3c0  cmp r1,r0
0205f3c4  bcs 0x0205f41c
0205f3c8  ldr r1,[sp,#0x60]
0205f3cc  ldr r0,[sp,#0x20]
0205f3d0  ldr r2,[sp,#0x10]
0205f3d4  add r0,r1,r0, lsl #0x3
0205f3d8  ldr r1,[sp,#0x1c]
0205f3dc  ldr r3,[sp,#0x14]
0205f3e0  str r0,[sp,#0x0]
0205f3e4  sub r1,r2,r1
0205f3e8  ldr r2,[sp,#0x20]
0205f3ec  str r6,[sp,#0x4]
0205f3f0  sub r2,r3,r2
0205f3f4  ldr r3,[sp,#0x1c]
0205f3f8  ldr r4,[sp,#0x6c]
0205f3fc  str r5,[sp,#0x8]
0205f400  mov r0,r7
0205f404  add r3,r11,r3, lsl #0x3
0205f408  str r4,[sp,#0xc]
0205f40c  bl 0x0205f108
0205f410  ldr r1,[sp,#0x28]
0205f414  add r0,r1,r0
0205f418  str r0,[sp,#0x28]
0205f41c  ldr r0,[sp,#0x28]
0205f420  add sp,sp,#0x3c
0205f424  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
