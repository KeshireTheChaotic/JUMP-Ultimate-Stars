0215a128  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
0215a12c  sub sp,sp,#0x8
0215a130  ldr r1,[0x215a3f4]
0215a134  ldr r2,[0x215a3f8]
0215a138  mov r0,#0x28
0215a13c  mov r3,#0x3d
0215a140  bl 0x0201a21c
0215a144  mov r1,#0x0
0215a148  mov r2,#0x28
0215a14c  mov r8,r0
0215a150  bl 0x020517fc
0215a154  mov r0,#0xa
0215a158  bl 0x0214f568
0215a15c  ldr r2,[0x215a3fc]
0215a160  mov r0,r8
0215a164  mov r1,#0x9
0215a168  mov r3,#0xa
0215a16c  bl 0x021531d0
0215a170  mov r0,#0xff
0215a174  mov r10,#0x0
0215a178  strh r0,[r8,#0x12]
0215a17c  mov r11,#0x1
0215a180  mov r4,#0x17
0215a184  mov r5,r10
0215a188  mov r0,r10, lsl #0x1
0215a18c  ldrsh r9,[r8,r0]
0215a190  bl 0x0214efa0
0215a194  mov r6,r5
0215a198  ldr r7,[r0,#0x40]
0215a19c  b 0x0215a1b8
0215a1a0  ldrb r0,[r7,#0x0]
0215a1a4  cmp r9,r0
0215a1a8  moveq r0,r11
0215a1ac  beq 0x0215a1cc
0215a1b0  add r6,r6,#0x1
0215a1b4  add r7,r7,#0x28
0215a1b8  bl 0x0214efa0
0215a1bc  ldr r0,[r0,#0x44]
0215a1c0  cmp r6,r0
0215a1c4  bcc 0x0215a1a0
0215a1c8  mov r0,#0x0
0215a1cc  cmp r0,#0x0
0215a1d0  moveq r0,r10, lsl #0x1
0215a1d4  add r10,r10,#0x1
0215a1d8  strheq r4,[r8,r0]
0215a1dc  cmp r10,#0xa
0215a1e0  blt 0x0215a188
0215a1e4  mov r10,#0x0
0215a1e8  add r0,r8,r10, lsl #0x1
0215a1ec  ldrsh r0,[r0,#0x14]
0215a1f0  mov r2,r10, lsl #0x1
0215a1f4  cmp r0,#0x0
0215a1f8  bne 0x0215a390
0215a1fc  add r3,r10,#0x1
0215a200  mov r4,#0x1
0215a204  b 0x0215a228
0215a208  mov r0,r3, lsl #0x1
0215a20c  ldrsh r1,[r8,r0]
0215a210  ldrsh r0,[r8,r2]
0215a214  add r3,r3,#0x1
0215a218  cmp r1,r0
0215a21c  addeq r0,r4,#0x1
0215a220  moveq r0,r0, lsl #0x10
0215a224  moveq r4,r0, asr #0x10
0215a228  cmp r3,#0xa
0215a22c  blt 0x0215a208
0215a230  mov r0,r10, lsl #0x1
0215a234  mov r5,#0x0
0215a238  ldrsh r9,[r8,r0]
0215a23c  bl 0x0214efa0
0215a240  ldr r7,[r0,#0x40]
0215a244  mov r6,r5
0215a248  b 0x0215a274
0215a24c  ldrb r0,[r7,#0x0]
0215a250  cmp r9,r0
0215a254  bne 0x0215a26c
0215a258  ldrb r0,[r7,#0x1]
0215a25c  cmp r0,#0x0
0215a260  addls r0,r5,#0x1
0215a264  movls r0,r0, lsl #0x10
0215a268  movls r5,r0, asr #0x10
0215a26c  add r6,r6,#0x1
0215a270  add r7,r7,#0x28
0215a274  bl 0x0214efa0
0215a278  ldr r0,[r0,#0x44]
0215a27c  cmp r6,r0
0215a280  bcc 0x0215a24c
0215a284  ldr r1,[0x215a3f4]
0215a288  ldr r2,[0x215a3f8]
0215a28c  mov r0,r5, lsl #0x1
0215a290  mov r3,#0x5c
0215a294  bl 0x0201a21c
0215a298  str r0,[sp,#0x4]
0215a29c  ldr r1,[0x215a3f4]
0215a2a0  ldr r2,[0x215a3f8]
0215a2a4  mov r0,r4, lsl #0x1
0215a2a8  mov r3,#0x5d
0215a2ac  bl 0x0201a21c
0215a2b0  mov r9,r0
0215a2b4  ldr r0,[sp,#0x4]
0215a2b8  mov r1,r10, lsl #0x1
0215a2bc  str r0,[sp,#0x0]
0215a2c0  ldrsh r11,[r8,r1]
0215a2c4  bl 0x0214efa0
0215a2c8  ldr r7,[r0,#0x40]
0215a2cc  mov r6,#0x0
0215a2d0  b 0x0215a2fc
0215a2d4  ldrb r0,[r7,#0x0]
0215a2d8  cmp r11,r0
0215a2dc  bne 0x0215a2f4
0215a2e0  ldrb r0,[r7,#0x1]
0215a2e4  cmp r0,#0x0
0215a2e8  ldrls r0,[sp,#0x0]
0215a2ec  strhls r6,[r0],#0x2
0215a2f0  strls r0,[sp,#0x0]
0215a2f4  add r6,r6,#0x1
0215a2f8  add r7,r7,#0x28
0215a2fc  bl 0x0214efa0
0215a300  ldr r0,[r0,#0x44]
0215a304  cmp r6,r0
0215a308  bcc 0x0215a2d4
0215a30c  ldr r2,[sp,#0x4]
0215a310  mov r0,r9
0215a314  mov r1,r4
0215a318  mov r3,r5
0215a31c  bl 0x021531d0
0215a320  ldrsh r2,[r9,#0x0]
0215a324  add r1,r8,r10, lsl #0x1
0215a328  mov r0,r10, lsl #0x1
0215a32c  add r2,r2,#0x1
0215a330  strh r2,[r1,#0x14]
0215a334  add r1,r10,#0x1
0215a338  mov r4,#0x1
0215a33c  b 0x0215a378
0215a340  mov r5,r1, lsl #0x1
0215a344  ldrsh r3,[r8,r5]
0215a348  ldrsh r2,[r8,r0]
0215a34c  cmp r3,r2
0215a350  bne 0x0215a374
0215a354  mov r2,r4, lsl #0x1
0215a358  ldrsh r3,[r9,r2]
0215a35c  add r2,r4,#0x1
0215a360  mov r2,r2, lsl #0x10
0215a364  add r4,r3,#0x1
0215a368  add r3,r8,r5
0215a36c  strh r4,[r3,#0x14]
0215a370  mov r4,r2, asr #0x10
0215a374  add r1,r1,#0x1
0215a378  cmp r1,#0xa
0215a37c  blt 0x0215a340
0215a380  mov r0,r9
0215a384  bl 0x0201b268
0215a388  ldr r0,[sp,#0x4]
0215a38c  bl 0x0201b268
0215a390  add r10,r10,#0x1
0215a394  cmp r10,#0xa
0215a398  blt 0x0215a1e8
0215a39c  mov r4,#0x0
0215a3a0  bl 0x0214efa0
0215a3a4  add r1,r8,r4, lsl #0x1
0215a3a8  ldrsh r1,[r1,#0x14]
0215a3ac  add r0,r0,r4, lsl #0x1
0215a3b0  add r4,r4,#0x1
0215a3b4  sub r1,r1,#0x1
0215a3b8  strh r1,[r0,#0x50]
0215a3bc  cmp r4,#0xa
0215a3c0  blt 0x0215a3a0
0215a3c4  bl 0x0214f514
0215a3c8  bl 0x0214f754
0215a3cc  bl 0x0214f93c
0215a3d0  mov r0,#0x0
0215a3d4  bl 0x0214f718
0215a3d8  mov r0,#0x1
0215a3dc  bl 0x0214f740
0215a3e0  mov r0,r8
0215a3e4  bl 0x0201b244
0215a3e8  bl 0x021592b0
0215a3ec  add sp,sp,#0x8
0215a3f0  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
