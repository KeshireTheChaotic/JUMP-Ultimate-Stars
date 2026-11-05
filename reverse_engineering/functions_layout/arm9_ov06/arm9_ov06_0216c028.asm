0216c028  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
0216c02c  sub sp,sp,#0x14
0216c030  mov r9,r1
0216c034  ldr r8,[r9,#0x4]
0216c038  ldr r6,[r9,#0x38]
0216c03c  mov r10,r0
0216c040  add r5,r8,#0x8
0216c044  mov r7,#0x1
0216c048  mov r4,#0x0
0216c04c  mov r11,#0xc
0216c050  ldrb r0,[r5,#0x6]
0216c054  tst r0,#0x1
0216c058  beq 0x0216c0c8
0216c05c  tst r0,#0x8
0216c060  bne 0x0216c0c8
0216c064  ldr r0,[r5,#0x0]
0216c068  ldrsh r1,[r5,#0x4]
0216c06c  ldr r0,[r0,#0x10]
0216c070  ldr r0,[r0,#0x5c]
0216c074  smulbb r3,r1,r11
0216c078  ldr r2,[r0,#0xc]
0216c07c  add r1,r6,r3
0216c080  str r2,[r0,#0x14]
0216c084  ldr r2,[r0,#0x10]
0216c088  str r2,[r0,#0x18]
0216c08c  ldr r2,[r6,r3]
0216c090  str r2,[r0,#0xc]
0216c094  ldr r2,[r1,#0x4]
0216c098  str r2,[r0,#0x10]
0216c09c  ldr r0,[r5,#0x0]
0216c0a0  ldr r1,[r1,#0x8]
0216c0a4  ldr r0,[r0,#0x8]
0216c0a8  ldr r0,[r0,#0x4]
0216c0ac  bl 0x02023738
0216c0b0  ldrsh r0,[r5,#0x4]
0216c0b4  add r0,r0,#0x1
0216c0b8  strh r0,[r5,#0x4]
0216c0bc  ldrsh r0,[r5,#0x4]
0216c0c0  cmp r0,#0x80
0216c0c4  strhge r4,[r5,#0x4]
0216c0c8  add r7,r7,#0x1
0216c0cc  cmp r7,#0x20
0216c0d0  add r5,r5,#0x8
0216c0d4  bcc 0x0216c050
0216c0d8  ldrb r2,[r9,#0x3c]
0216c0dc  mov r1,#0xc
0216c0e0  ldr r0,[r8,#0x0]
0216c0e4  mla r4,r2,r1,r6
0216c0e8  bl 0x0216b740
0216c0ec  mov r1,r0
0216c0f0  mov r0,r4
0216c0f4  bl 0x02166a1c
0216c0f8  ldr r0,[r8,#0x0]
0216c0fc  ldr r0,[r0,#0x8]
0216c100  ldr r0,[r0,#0x4]
0216c104  ldr r0,[r0,#0x50]
0216c108  ldr r1,[r0,#0x0]
0216c10c  ldr r1,[r1,#0x60]
0216c110  blx r1
0216c114  str r0,[r4,#0x8]
0216c118  ldrb r0,[r9,#0x3c]
0216c11c  add r1,r0,#0x1
0216c120  and r0,r1,#0xff
0216c124  cmp r0,#0x80
0216c128  strb r1,[r9,#0x3c]
0216c12c  movcs r0,#0x0
0216c130  strbcs r0,[r9,#0x3c]
0216c134  ldrsh r0,[r9,#0x1c]
0216c138  ldrsh r5,[r9,#0x1e]
0216c13c  smulbb r0,r0,r0
0216c140  bl 0x0200c954
0216c144  mov r4,r0
0216c148  smulbb r0,r5,r5
0216c14c  bl 0x0200c954
0216c150  mov r1,r0
0216c154  mov r0,r4
0216c158  bl 0x0200bfb4
0216c15c  bl 0x0200cb80
0216c160  mov r1,r0
0216c164  ldr r0,[0x216c2f4]
0216c168  bl 0x0200c9e4
0216c16c  bl 0x0200c8e0
0216c170  str r0,[sp,#0x10]
0216c174  ldrsh r1,[r9,#0x1c]
0216c178  add r0,sp,#0xc
0216c17c  add r2,sp,#0x10
0216c180  bl 0x0216c2fc
0216c184  add r1,sp,#0xc
0216c188  ldr r1,[r1,#0x0]
0216c18c  add r0,sp,#0x8
0216c190  mov r3,r1, lsl #0x8
0216c194  mov r1,r3, asr #0xb
0216c198  add r1,r3,r1, lsr #0x14
0216c19c  mov r1,r1, asr #0xc
0216c1a0  strh r1,[r9,#0x1c]
0216c1a4  ldrsh r1,[r9,#0x1e]
0216c1a8  add r2,sp,#0x10
0216c1ac  bl 0x0216c2fc
0216c1b0  add r0,sp,#0x8
0216c1b4  ldr r0,[r0,#0x0]
0216c1b8  mov r1,r0, lsl #0x8
0216c1bc  mov r0,r1, asr #0xb
0216c1c0  add r0,r1,r0, lsr #0x14
0216c1c4  mov r0,r0, asr #0xc
0216c1c8  strh r0,[r9,#0x1e]
0216c1cc  ldrsh r0,[r9,#0x1c]
0216c1d0  mov r0,r0, lsl #0xc
0216c1d4  bl 0x0200c954
0216c1d8  ldr r1,[0x216c2f4]
0216c1dc  bl 0x0200c5ac
0216c1e0  mov r5,r0
0216c1e4  ldrsh r0,[r9,#0x1e]
0216c1e8  mov r0,r0, lsl #0xc
0216c1ec  bl 0x0200c954
0216c1f0  ldr r1,[0x216c2f4]
0216c1f4  bl 0x0200c5ac
0216c1f8  bl 0x0200c85c
0216c1fc  mov r4,r0
0216c200  mov r6,r1
0216c204  mov r0,r5
0216c208  bl 0x0200c85c
0216c20c  mov r2,r0
0216c210  mov r3,r1
0216c214  mov r0,r4
0216c218  mov r1,r6
0216c21c  blx 0x02009d2c
0216c220  bl 0x0200b6c4
0216c224  mov r1,r0
0216c228  ldr r0,[0x216c2f4]
0216c22c  bl 0x0200c9e4
0216c230  bl 0x0200c8e0
0216c234  mov r0,r0, lsl #0x10
0216c238  add r0,r0,r0, lsr #0x1f
0216c23c  mov r0,r0, asr #0x1
0216c240  bl 0x0200c954
0216c244  ldr r1,[0x216c2f8]
0216c248  bl 0x0200c5ac
0216c24c  bl 0x0200c8e0
0216c250  cmp r0,#0x0
0216c254  sublt r0,r0,#0xff
0216c258  sublt r0,r0,#0x700
0216c25c  strlt r0,[sp,#0x0]
0216c260  addge r0,r0,#0xff
0216c264  addlt r5,sp,#0x0
0216c268  addge r0,r0,#0x700
0216c26c  addge r5,sp,#0x4
0216c270  strge r0,[sp,#0x4]
0216c274  ldrh r4,[r10,#0x20]
0216c278  ldrsh r0,[r9,#0x1c]
0216c27c  ldrsh r2,[r9,#0x1e]
0216c280  ldr r1,[r8,#0x0]
0216c284  mul r0,r4,r0
0216c288  mul r3,r4,r2
0216c28c  ldr r1,[r1,#0x10]
0216c290  ldr r4,[r5,#0x0]
0216c294  ldr r2,[r1,#0x5c]
0216c298  mov r1,r0, asr #0x8
0216c29c  strh r1,[r2,#0x24]
0216c2a0  mov r1,r3, asr #0x8
0216c2a4  strh r1,[r2,#0x26]
0216c2a8  mov r0,r4, asr #0xb
0216c2ac  add r0,r4,r0, lsr #0x14
0216c2b0  mov r0,r0, lsl #0x4
0216c2b4  mov r1,r0, lsr #0x10
0216c2b8  ldrsb r3,[r9,#0x35]
0216c2bc  mvn r2,#0x0
0216c2c0  ldr r0,[r8,#0x0]
0216c2c4  cmp r3,r2
0216c2c8  bne 0x0216c2e0
0216c2cc  ldr r0,[r0,#0x8]
0216c2d0  sub r1,r1,#0x8000
0216c2d4  ldr r0,[r0,#0x4]
0216c2d8  bl 0x02023738
0216c2dc  b 0x0216c2ec
0216c2e0  ldr r0,[r0,#0x8]
0216c2e4  ldr r0,[r0,#0x4]
0216c2e8  bl 0x02023738
0216c2ec  add sp,sp,#0x14
0216c2f0  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
