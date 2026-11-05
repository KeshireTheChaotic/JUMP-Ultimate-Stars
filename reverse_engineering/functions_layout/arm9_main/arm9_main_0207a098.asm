0207a098  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
0207a09c  mov r5,r1
0207a0a0  ldrsb r3,[r5,#0xe]
0207a0a4  mov r7,#0x0
0207a0a8  sub r1,r7,#0x1
0207a0ac  mov r3,r3, lsl #0x1a
0207a0b0  mov r3,r3, asr #0x1a
0207a0b4  mov r6,r0
0207a0b8  mov r4,r2
0207a0bc  cmp r3,r1
0207a0c0  beq 0x0207a0e8
0207a0c4  mov r0,#0xc
0207a0c8  mul r2,r3,r0
0207a0cc  add r0,r6,r2
0207a0d0  ldrsh r1,[r5,#0xc]
0207a0d4  ldrsh r0,[r0,#0x74]
0207a0d8  cmp r1,r0
0207a0dc  addeq r0,r6,#0x70
0207a0e0  addeq r7,r0,r2
0207a0e4  beq 0x0207a210
0207a0e8  mvn r8,#0x0
0207a0ec  mov r2,r8
0207a0f0  add r0,r6,#0x70
0207a0f4  mov r1,#0x0
0207a0f8  mov r3,r8
0207a0fc  b 0x0207a170
0207a100  cmp r8,r3
0207a104  ldreq r9,[r0,#0x0]
0207a108  ldrsh r10,[r0,#0x4]
0207a10c  cmpeq r9,#0x0
0207a110  ldrh r9,[r0,#0x6]
0207a114  moveq r8,r1
0207a118  mov r9,r9, lsl #0x10
0207a11c  movs r9,r9, lsr #0x1f
0207a120  ldrsh r9,[r5,#0xc]
0207a124  movne r2,r1
0207a128  cmp r10,r9
0207a12c  bne 0x0207a168
0207a130  ldrsb r3,[r5,#0xe]
0207a134  mov r0,r1, lsl #0x18
0207a138  mov r0,r0, asr #0x18
0207a13c  bic r1,r3,#0x3f
0207a140  and r0,r0,#0x3f
0207a144  orr r0,r1,r0
0207a148  strb r0,[r5,#0xe]
0207a14c  ldrsb r1,[r5,#0xe]
0207a150  add r3,r6,#0x70
0207a154  mov r0,#0xc
0207a158  mov r1,r1, lsl #0x1a
0207a15c  mov r1,r1, asr #0x1a
0207a160  mla r7,r1,r0,r3
0207a164  b 0x0207a178
0207a168  add r1,r1,#0x1
0207a16c  add r0,r0,#0xc
0207a170  cmp r1,#0x8
0207a174  bcc 0x0207a100
0207a178  cmp r7,#0x0
0207a17c  bne 0x0207a210
0207a180  mvn r0,#0x0
0207a184  cmp r8,r0
0207a188  bne 0x0207a1a4
0207a18c  mov r0,#0xc
0207a190  mla r1,r2,r0,r6
0207a194  ldr r0,[r6,#0xd0]
0207a198  ldr r1,[r1,#0x70]
0207a19c  mov r8,r2
0207a1a0  bl 0x0207b1c0
0207a1a4  mov r0,#0xc
0207a1a8  mul r9,r8,r0
0207a1ac  add r10,r6,#0x70
0207a1b0  ldrh r1,[r5,#0xc]
0207a1b4  ldr r0,[r6,#0xd0]
0207a1b8  add r7,r10,r9
0207a1bc  bl 0x0207b11c
0207a1c0  cmp r0,#0x0
0207a1c4  ldrne r1,[0x207a2a4]
0207a1c8  str r0,[r10,r9]
0207a1cc  strne r1,[r0,#0x28]
0207a1d0  strne r7,[r0,#0x24]
0207a1d4  strne r6,[r7,#0x8]
0207a1d8  ldrsh r2,[r5,#0xc]
0207a1dc  mov r0,#0x8000
0207a1e0  mov r1,r8, lsl #0x18
0207a1e4  strh r2,[r7,#0x4]
0207a1e8  ldrh r2,[r7,#0x6]
0207a1ec  rsb r0,r0,#0x0
0207a1f0  mov r1,r1, asr #0x18
0207a1f4  and r0,r2,r0
0207a1f8  strh r0,[r7,#0x6]
0207a1fc  ldrsb r2,[r5,#0xe]
0207a200  and r0,r1,#0x3f
0207a204  bic r1,r2,#0x3f
0207a208  orr r0,r1,r0
0207a20c  strb r0,[r5,#0xe]
0207a210  ldrh r8,[r7,#0x6]
0207a214  mov r1,#0x8000
0207a218  rsb r1,r1,#0x0
0207a21c  mov r0,r8, lsl #0x11
0207a220  mov r0,r0, lsr #0x11
0207a224  add r2,r0,#0x1
0207a228  mov r2,r2, lsl #0x10
0207a22c  mov r3,r1, lsr #0x11
0207a230  and r8,r8,r1
0207a234  and r1,r3,r2, lsr #0x10
0207a238  orr r1,r8,r1
0207a23c  strh r1,[r7,#0x6]
0207a240  ldrsb r1,[r5,#0xf]
0207a244  mov r0,r0, lsl #0x18
0207a248  mov r0,r0, asr #0x18
0207a24c  bic r1,r1,#0x3f
0207a250  and r0,r0,#0x3f
0207a254  orr r0,r1,r0
0207a258  strb r0,[r5,#0xf]
0207a25c  ldrh r1,[r7,#0x6]
0207a260  ldr r0,[r7,#0x0]
0207a264  mov r1,r1, lsl #0x11
0207a268  mov r1,r1, lsr #0x11
0207a26c  bl 0x0207b25c
0207a270  mov r0,r6
0207a274  mov r1,r5
0207a278  mov r2,r4
0207a27c  bl 0x02079e40
0207a280  ldrh r0,[r7,#0x6]
0207a284  mov r0,r0, lsl #0x11
0207a288  mov r0,r0, lsr #0x11
0207a28c  cmp r0,#0x1
0207a290  ldmiane sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
0207a294  ldr r0,[r7,#0x0]
0207a298  mov r1,#0x1
0207a29c  bl 0x0207b2d0
0207a2a0  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
