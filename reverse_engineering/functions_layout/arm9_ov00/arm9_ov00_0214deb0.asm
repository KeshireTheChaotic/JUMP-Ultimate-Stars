0214deb0  stmdb sp!,{r3,r4,r5,r6,r7,r8,lr}
0214deb4  sub sp,sp,#0x1c
0214deb8  mov r4,r0
0214debc  ldr r0,[r4,#0xc]
0214dec0  ldr r0,[r0,#0x4]
0214dec4  ldr r1,[r0,#0x0]
0214dec8  ldr r1,[r1,#0x128]
0214decc  blx r1
0214ded0  mov r5,r0
0214ded4  ldr r1,[r4,#0xc]
0214ded8  add r0,sp,#0x8
0214dedc  bl 0x0214e290
0214dee0  add r0,sp,#0x8
0214dee4  ldr r3,[r0,#0x0]
0214dee8  ldr r1,[r4,#0xc]
0214deec  mov r2,r3, asr #0xb
0214def0  add r2,r3,r2, lsr #0x14
0214def4  add r0,sp,#0xc
0214def8  mov r6,r2, asr #0xc
0214defc  bl 0x0214e27c
0214df00  add r0,sp,#0xc
0214df04  ldr r2,[r0,#0x0]
0214df08  cmp r5,#0x0
0214df0c  mov r1,r2, asr #0xb
0214df10  add r1,r2,r1, lsr #0x14
0214df14  movne r3,#0x1
0214df18  ldr r0,[r4,#0x3c]
0214df1c  moveq r3,#0x0
0214df20  mov r2,r6
0214df24  mov r1,r1, asr #0xc
0214df28  bl 0x021518c4
0214df2c  ldr r0,[r4,#0x8]
0214df30  bl 0x0214e2a4
0214df34  tst r0,#0x100
0214df38  beq 0x0214df54
0214df3c  ldr r0,[r4,#0x8]
0214df40  bl 0x0214e2a4
0214df44  tst r0,#0x200
0214df48  movne r0,#0xb1
0214df4c  strhne r0,[r4,#0x52]
0214df50  bne 0x0214dfb0
0214df54  ldr r0,[r4,#0x8]
0214df58  bl 0x0214db5c
0214df5c  tst r0,#0x100
0214df60  beq 0x0214df84
0214df64  ldrh r0,[r4,#0x52]
0214df68  add r0,r0,#0x1
0214df6c  strh r0,[r4,#0x52]
0214df70  ldrh r0,[r4,#0x52]
0214df74  cmp r0,#0xb9
0214df78  movhi r0,#0xb1
0214df7c  strhhi r0,[r4,#0x52]
0214df80  b 0x0214dfb0
0214df84  ldr r0,[r4,#0x8]
0214df88  bl 0x0214db5c
0214df8c  tst r0,#0x200
0214df90  beq 0x0214dfb0
0214df94  ldrh r0,[r4,#0x52]
0214df98  sub r0,r0,#0x1
0214df9c  strh r0,[r4,#0x52]
0214dfa0  ldrh r0,[r4,#0x52]
0214dfa4  cmp r0,#0xb1
0214dfa8  movcc r0,#0xb9
0214dfac  strhcc r0,[r4,#0x52]
0214dfb0  ldr r0,[r4,#0xc]
0214dfb4  ldr r0,[r0,#0x4]
0214dfb8  ldr r1,[r0,#0x0]
0214dfbc  ldr r1,[r1,#0x128]
0214dfc0  blx r1
0214dfc4  cmp r0,#0x0
0214dfc8  ldrb r0,[r4,#0x56]
0214dfcc  beq 0x0214e224
0214dfd0  tst r0,#0x1
0214dfd4  beq 0x0214e1c8
0214dfd8  mov r0,#0x0
0214dfdc  str r0,[sp,#0x10]
0214dfe0  str r0,[sp,#0x14]
0214dfe4  str r0,[sp,#0x18]
0214dfe8  ldr r0,[r4,#0xc]
0214dfec  ldr r0,[r0,#0x4]
0214dff0  ldr r0,[r0,#0x50]
0214dff4  ldr r3,[r0,#0xc]
0214dff8  str r3,[sp,#0x10]
0214dffc  ldr r1,[r0,#0x10]
0214e000  str r1,[sp,#0x14]
0214e004  ldr r0,[r0,#0x14]
0214e008  str r0,[sp,#0x18]
0214e00c  ldrsh r7,[r4,#0x4e]
0214e010  ldrsh r6,[r4,#0x4c]
0214e014  rsb r2,r1,r7, lsl #0xc
0214e018  mov r1,r2, asr #0xb
0214e01c  rsb r3,r3,r6, lsl #0xc
0214e020  add r1,r2,r1, lsr #0x14
0214e024  mov r0,r3, asr #0xb
0214e028  mov r1,r1, asr #0xc
0214e02c  add r0,r3,r0, lsr #0x14
0214e030  mov r2,r1, lsl #0x10
0214e034  mov r0,r0, lsl #0x4
0214e038  movs r3,r2, asr #0x10
0214e03c  mov r1,r0, asr #0x10
0214e040  rsbmi r0,r3,#0x0
0214e044  movpl r0,r3
0214e048  cmp r1,#0x0
0214e04c  rsblt r2,r1,#0x0
0214e050  movge r2,r1
0214e054  cmp r2,r0
0214e058  ble 0x0214e0fc
0214e05c  mov r0,r3, lsl #0x8
0214e060  bl 0x0200d12c
0214e064  mov r5,r0, lsl #0x10
0214e068  add r0,sp,#0x10
0214e06c  mov r1,r6
0214e070  bl 0x0214e2b8
0214e074  cmp r0,#0x0
0214e078  beq 0x0214e0ac
0214e07c  ldr r3,[sp,#0x10]
0214e080  ldr r2,[sp,#0x14]
0214e084  mov r0,r3, asr #0xb
0214e088  mov r1,r2, asr #0xb
0214e08c  add r0,r3,r0, lsr #0x14
0214e090  add r1,r2,r1, lsr #0x14
0214e094  mov r0,r0, lsl #0x4
0214e098  mov r1,r1, asr #0xc
0214e09c  mov r6,r0, asr #0x10
0214e0a0  mov r8,r1, lsl #0x8
0214e0a4  ldrsh r7,[r4,#0x4c]
0214e0a8  b 0x0214e0f0
0214e0ac  ldr r2,[sp,#0x10]
0214e0b0  ldrsh r1,[r4,#0x4e]
0214e0b4  mov r0,r2, asr #0xb
0214e0b8  add r0,r2,r0, lsr #0x14
0214e0bc  mov r0,r0, lsl #0x4
0214e0c0  ldrsh r6,[r4,#0x4c]
0214e0c4  mov r7,r0, asr #0x10
0214e0c8  mov r8,r1, lsl #0x8
0214e0cc  b 0x0214e0f0
0214e0d0  mov r1,r6, lsl #0x10
0214e0d4  mov r2,r8, lsl #0x8
0214e0d8  mov r0,r4
0214e0dc  mov r1,r1, asr #0x10
0214e0e0  mov r2,r2, asr #0x10
0214e0e4  bl 0x0214e2cc
0214e0e8  add r8,r8,r5, asr #0x10
0214e0ec  add r6,r6,#0x1
0214e0f0  cmp r6,r7
0214e0f4  ble 0x0214e0d0
0214e0f8  b 0x0214e19c
0214e0fc  mov r0,r1, lsl #0x8
0214e100  mov r1,r3
0214e104  bl 0x0200d12c
0214e108  mov r5,r0, lsl #0x10
0214e10c  add r0,sp,#0x14
0214e110  mov r1,r7
0214e114  bl 0x0214e2b8
0214e118  cmp r0,#0x0
0214e11c  beq 0x0214e150
0214e120  ldr r3,[sp,#0x14]
0214e124  ldr r2,[sp,#0x10]
0214e128  mov r0,r3, asr #0xb
0214e12c  mov r1,r2, asr #0xb
0214e130  add r0,r3,r0, lsr #0x14
0214e134  add r1,r2,r1, lsr #0x14
0214e138  mov r0,r0, lsl #0x4
0214e13c  mov r1,r1, asr #0xc
0214e140  mov r6,r0, asr #0x10
0214e144  mov r8,r1, lsl #0x8
0214e148  ldrsh r7,[r4,#0x4e]
0214e14c  b 0x0214e194
0214e150  ldr r2,[sp,#0x14]
0214e154  ldrsh r1,[r4,#0x4c]
0214e158  mov r0,r2, asr #0xb
0214e15c  add r0,r2,r0, lsr #0x14
0214e160  mov r0,r0, lsl #0x4
0214e164  ldrsh r6,[r4,#0x4e]
0214e168  mov r7,r0, asr #0x10
0214e16c  mov r8,r1, lsl #0x8
0214e170  b 0x0214e194
0214e174  mov r1,r8, lsl #0x8
0214e178  mov r2,r6, lsl #0x10
0214e17c  mov r0,r4
0214e180  mov r1,r1, asr #0x10
0214e184  mov r2,r2, asr #0x10
0214e188  bl 0x0214e2cc
0214e18c  add r8,r8,r5, asr #0x10
0214e190  add r6,r6,#0x1
0214e194  cmp r6,r7
0214e198  ble 0x0214e174
0214e19c  ldr r1,[sp,#0x10]
0214e1a0  mov r0,r1, asr #0xb
0214e1a4  add r0,r1,r0, lsr #0x14
0214e1a8  mov r0,r0, asr #0xc
0214e1ac  strh r0,[r4,#0x4c]
0214e1b0  ldr r1,[sp,#0x14]
0214e1b4  mov r0,r1, asr #0xb
0214e1b8  add r0,r1,r0, lsr #0x14
0214e1bc  mov r0,r0, asr #0xc
0214e1c0  strh r0,[r4,#0x4e]
0214e1c4  b 0x0214e218
0214e1c8  orr r0,r0,#0x1
0214e1cc  strb r0,[r4,#0x56]
0214e1d0  ldr r1,[r4,#0xc]
0214e1d4  add r0,sp,#0x4
0214e1d8  bl 0x0214e27c
0214e1dc  add r1,sp,#0x4
0214e1e0  ldr r2,[r1,#0x0]
0214e1e4  add r0,sp,#0x0
0214e1e8  mov r1,r2, asr #0xb
0214e1ec  add r1,r2,r1, lsr #0x14
0214e1f0  mov r1,r1, asr #0xc
0214e1f4  strh r1,[r4,#0x4c]
0214e1f8  ldr r1,[r4,#0xc]
0214e1fc  bl 0x0214e290
0214e200  add r0,sp,#0x0
0214e204  ldr r1,[r0,#0x0]
0214e208  mov r0,r1, asr #0xb
0214e20c  add r0,r1,r0, lsr #0x14
0214e210  mov r0,r0, asr #0xc
0214e214  strh r0,[r4,#0x4e]
0214e218  mov r0,#0x0
0214e21c  strh r0,[r4,#0x54]
0214e220  b 0x0214e22c
0214e224  bic r0,r0,#0x1
0214e228  strb r0,[r4,#0x56]
0214e22c  ldrh r1,[r4,#0x54]
0214e230  add r0,r1,#0x1
0214e234  strh r0,[r4,#0x54]
0214e238  cmp r1,#0x5a
0214e23c  bls 0x0214e274
0214e240  mov r0,#0x3
0214e244  bl 0x0203b424
0214e248  ldr r0,[r0,#0x88]
0214e24c  ldr r0,[r0,#0x4]
0214e250  ldr r0,[r0,#0x948]
0214e254  blx r0
0214e258  mov r1,#0x0
0214e25c  mov r2,#0xc000
0214e260  bl 0x020517fc
0214e264  ldr r0,[r4,#0x3c]
0214e268  bl 0x02151898
0214e26c  mov r0,#0x0
0214e270  strh r0,[r4,#0x54]
0214e274  add sp,sp,#0x1c
0214e278  ldmia sp!,{r3,r4,r5,r6,r7,r8,pc}
