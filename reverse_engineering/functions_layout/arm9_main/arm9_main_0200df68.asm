0200df68  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
0200df6c  sub sp,sp,#0xa4
0200df70  mov r9,r0
0200df74  mov r8,r1
0200df78  str r2,[sp,#0x0]
0200df7c  ldr r2,[r8,#0x8]
0200df80  cmp r2,#0x0
0200df84  bne 0x0200dfc4
0200df88  mov r0,r9
0200df8c  mov r1,r8
0200df90  bl 0x0200f480
0200df94  mov r1,r8
0200df98  bl 0x0200dabc
0200df9c  ldr r0,[r8,#0x4]
0200dfa0  cmp r0,#0x0
0200dfa4  bne 0x0200dfac
0200dfa8  bl 0x0200f280
0200dfac  mov r0,r9
0200dfb0  mov r1,r8
0200dfb4  bl 0x0200f4dc
0200dfb8  ldr r2,[r8,#0x8]
0200dfbc  cmp r2,#0x0
0200dfc0  beq 0x0200df7c
0200dfc4  ldrb r7,[r2,#0x0]
0200dfc8  and r0,r7,#0x1f
0200dfcc  cmp r0,#0x13
0200dfd0  addls pc,pc,r0, lsl #0x2
0200dfd4  b 0x0200e7fc
0200dfd8  b 0x0200e7fc
0200dfdc  b 0x0200e028
0200dfe0  b 0x0200e048
0200dfe4  b 0x0200e094
0200dfe8  b 0x0200e114
0200dfec  b 0x0200e174
0200dff0  b 0x0200e1f8
0200dff4  b 0x0200e268
0200dff8  b 0x0200e2d8
0200dffc  b 0x0200e380
0200e000  b 0x0200e434
0200e004  b 0x0200e490
0200e008  b 0x0200e520
0200e00c  b 0x0200e54c
0200e010  b 0x0200e7fc
0200e014  b 0x0200e598
0200e018  b 0x0200e5d4
0200e01c  b 0x0200e678
0200e020  b 0x0200e724
0200e024  b 0x0200e7e8
0200e028  add r1,sp,#0xa0
0200e02c  add r0,r2,#0x1
0200e030  bl 0x0200d940
0200e034  ldr r1,[r8,#0x8]
0200e038  ldr r0,[sp,#0xa0]
0200e03c  add r0,r1,r0
0200e040  str r0,[r8,#0x8]
0200e044  b 0x0200e800
0200e048  add r1,sp,#0x9c
0200e04c  add r0,r2,#0x1
0200e050  bl 0x0200d940
0200e054  mov r4,r0
0200e058  ldrb r1,[r4,#0x0]
0200e05c  ldrb r0,[r4,#0x1]
0200e060  ldrb r2,[r4,#0x2]
0200e064  ldrb r3,[r4,#0x3]
0200e068  orr r0,r1,r0, lsl #0x8
0200e06c  orr r0,r0,r2, lsl #0x10
0200e070  ldr r5,[r9,#0x18]
0200e074  ldr r1,[sp,#0x9c]
0200e078  orr r2,r0,r3, lsl #0x18
0200e07c  add r0,r5,r1
0200e080  mvn r1,#0x0
0200e084  blx r2
0200e088  add r0,r4,#0x4
0200e08c  str r0,[r8,#0x8]
0200e090  b 0x0200e800
0200e094  add r1,sp,#0x94
0200e098  add r0,r2,#0x1
0200e09c  and r4,r7,#0x40
0200e0a0  bl 0x0200d940
0200e0a4  add r1,sp,#0x98
0200e0a8  bl 0x0200d940
0200e0ac  ldrb r2,[r0,#0x0]
0200e0b0  ldrb r1,[r0,#0x1]
0200e0b4  ldrb r3,[r0,#0x2]
0200e0b8  ldrb r5,[r0,#0x3]
0200e0bc  orr r1,r2,r1, lsl #0x8
0200e0c0  orr r1,r1,r3, lsl #0x10
0200e0c4  cmp r4,#0x0
0200e0c8  orr r2,r1,r5, lsl #0x18
0200e0cc  add r4,r0,#0x4
0200e0d0  ldreq r1,[r9,#0x18]
0200e0d4  ldreq r0,[sp,#0x94]
0200e0d8  ldrbeq r0,[r1,r0]
0200e0dc  beq 0x0200e0f0
0200e0e0  ldr r0,[sp,#0x94]
0200e0e4  add r0,r9,r0, lsl #0x2
0200e0e8  ldr r0,[r0,#0x1c]
0200e0ec  and r0,r0,#0xff
0200e0f0  cmp r0,#0x0
0200e0f4  beq 0x0200e10c
0200e0f8  ldr r3,[r9,#0x18]
0200e0fc  ldr r0,[sp,#0x98]
0200e100  mvn r1,#0x0
0200e104  add r0,r3,r0
0200e108  blx r2
0200e10c  str r4,[r8,#0x8]
0200e110  b 0x0200e800
0200e114  add r1,sp,#0x90
0200e118  add r0,r2,#0x1
0200e11c  and r4,r7,#0x20
0200e120  bl 0x0200d940
0200e124  ldrb r2,[r0,#0x0]
0200e128  ldrb r1,[r0,#0x1]
0200e12c  ldrb r3,[r0,#0x2]
0200e130  ldrb r5,[r0,#0x3]
0200e134  orr r1,r2,r1, lsl #0x8
0200e138  orr r1,r1,r3, lsl #0x10
0200e13c  cmp r4,#0x0
0200e140  orr r2,r1,r5, lsl #0x18
0200e144  add r4,r0,#0x4
0200e148  ldreq r1,[r9,#0x18]
0200e14c  ldreq r0,[sp,#0x90]
0200e150  ldreq r0,[r1,r0]
0200e154  beq 0x0200e164
0200e158  ldr r0,[sp,#0x90]
0200e15c  add r0,r9,r0, lsl #0x2
0200e160  ldr r0,[r0,#0x1c]
0200e164  mvn r1,#0x0
0200e168  blx r2
0200e16c  str r4,[r8,#0x8]
0200e170  b 0x0200e800
0200e174  add r1,sp,#0x84
0200e178  add r0,r2,#0x1
0200e17c  bl 0x0200d940
0200e180  add r1,sp,#0x88
0200e184  bl 0x0200d9cc
0200e188  add r1,sp,#0x8c
0200e18c  bl 0x0200d9cc
0200e190  ldr r3,[r9,#0x18]
0200e194  ldr r2,[sp,#0x84]
0200e198  ldr r6,[sp,#0x88]
0200e19c  ldrb r5,[r0,#0x0]
0200e1a0  ldrb r4,[r0,#0x1]
0200e1a4  ldr r1,[sp,#0x8c]
0200e1a8  add r2,r3,r2
0200e1ac  ldrb r10,[r0,#0x2]
0200e1b0  orr r3,r5,r4, lsl #0x8
0200e1b4  mla r4,r6,r1,r2
0200e1b8  ldrb r2,[r0,#0x3]
0200e1bc  orr r1,r3,r10, lsl #0x10
0200e1c0  cmp r6,#0x0
0200e1c4  orr r5,r1,r2, lsl #0x18
0200e1c8  add r11,r0,#0x4
0200e1cc  beq 0x0200e1f0
0200e1d0  mvn r10,#0x0
0200e1d4  ldr r0,[sp,#0x8c]
0200e1d8  mov r1,r10
0200e1dc  sub r4,r4,r0
0200e1e0  mov r0,r4
0200e1e4  blx r5
0200e1e8  subs r6,r6,#0x1
0200e1ec  bne 0x0200e1d4
0200e1f0  str r11,[r8,#0x8]
0200e1f4  b 0x0200e800
0200e1f8  add r1,sp,#0x7c
0200e1fc  add r0,r2,#0x1
0200e200  and r4,r7,#0x20
0200e204  bl 0x0200d940
0200e208  add r1,sp,#0x80
0200e20c  bl 0x0200d940
0200e210  ldrb r2,[r0,#0x0]
0200e214  ldrb r1,[r0,#0x1]
0200e218  ldrb r3,[r0,#0x2]
0200e21c  ldrb r5,[r0,#0x3]
0200e220  orr r1,r2,r1, lsl #0x8
0200e224  orr r1,r1,r3, lsl #0x10
0200e228  cmp r4,#0x0
0200e22c  orr r2,r1,r5, lsl #0x18
0200e230  add r4,r0,#0x4
0200e234  ldreq r1,[r9,#0x18]
0200e238  ldreq r0,[sp,#0x7c]
0200e23c  ldreq r3,[r1,r0]
0200e240  beq 0x0200e250
0200e244  ldr r0,[sp,#0x7c]
0200e248  add r0,r9,r0, lsl #0x2
0200e24c  ldr r3,[r0,#0x1c]
0200e250  ldr r0,[sp,#0x80]
0200e254  mov r1,#0x0
0200e258  add r0,r3,r0
0200e25c  blx r2
0200e260  str r4,[r8,#0x8]
0200e264  b 0x0200e800
0200e268  add r1,sp,#0x74
0200e26c  add r0,r2,#0x1
0200e270  and r4,r7,#0x20
0200e274  bl 0x0200d940
0200e278  add r1,sp,#0x78
0200e27c  bl 0x0200d940
0200e280  ldrb r2,[r0,#0x0]
0200e284  ldrb r1,[r0,#0x1]
0200e288  ldrb r3,[r0,#0x2]
0200e28c  ldrb r5,[r0,#0x3]
0200e290  orr r1,r2,r1, lsl #0x8
0200e294  orr r1,r1,r3, lsl #0x10
0200e298  cmp r4,#0x0
0200e29c  orr r2,r1,r5, lsl #0x18
0200e2a0  add r4,r0,#0x4
0200e2a4  ldreq r1,[r9,#0x18]
0200e2a8  ldreq r0,[sp,#0x74]
0200e2ac  ldreq r3,[r1,r0]
0200e2b0  beq 0x0200e2c0
0200e2b4  ldr r0,[sp,#0x74]
0200e2b8  add r0,r9,r0, lsl #0x2
0200e2bc  ldr r3,[r0,#0x1c]
0200e2c0  ldr r0,[sp,#0x78]
0200e2c4  mvn r1,#0x0
0200e2c8  add r0,r3,r0
0200e2cc  blx r2
0200e2d0  str r4,[r8,#0x8]
0200e2d4  b 0x0200e800
0200e2d8  add r1,sp,#0x68
0200e2dc  add r0,r2,#0x1
0200e2e0  and r4,r7,#0x20
0200e2e4  bl 0x0200d940
0200e2e8  add r1,sp,#0x6c
0200e2ec  bl 0x0200d940
0200e2f0  add r1,sp,#0x70
0200e2f4  bl 0x0200d940
0200e2f8  ldrb r2,[r0,#0x0]
0200e2fc  ldrb r1,[r0,#0x1]
0200e300  ldrb r3,[r0,#0x2]
0200e304  ldrb r5,[r0,#0x3]
0200e308  orr r1,r2,r1, lsl #0x8
0200e30c  orr r1,r1,r3, lsl #0x10
0200e310  orr r2,r1,r5, lsl #0x18
0200e314  tst r7,#0x40
0200e318  add r5,r0,#0x4
0200e31c  ldreq r1,[r9,#0x18]
0200e320  ldreq r0,[sp,#0x68]
0200e324  ldrsheq r0,[r1,r0]
0200e328  beq 0x0200e340
0200e32c  ldr r0,[sp,#0x68]
0200e330  add r0,r9,r0, lsl #0x2
0200e334  ldr r0,[r0,#0x1c]
0200e338  mov r0,r0, lsl #0x10
0200e33c  mov r0,r0, asr #0x10
0200e340  cmp r0,#0x0
0200e344  beq 0x0200e378
0200e348  cmp r4,#0x0
0200e34c  ldreq r1,[r9,#0x18]
0200e350  ldreq r0,[sp,#0x6c]
0200e354  ldreq r3,[r1,r0]
0200e358  beq 0x0200e368
0200e35c  ldr r0,[sp,#0x6c]
0200e360  add r0,r9,r0, lsl #0x2
0200e364  ldr r3,[r0,#0x1c]
0200e368  ldr r0,[sp,#0x70]
0200e36c  mvn r1,#0x0
0200e370  add r0,r3,r0
0200e374  blx r2
0200e378  str r5,[r8,#0x8]
0200e37c  b 0x0200e800
0200e380  add r1,sp,#0x58
0200e384  add r0,r2,#0x1
0200e388  and r4,r7,#0x20
0200e38c  bl 0x0200d940
0200e390  add r1,sp,#0x5c
0200e394  bl 0x0200d940
0200e398  add r1,sp,#0x60
0200e39c  bl 0x0200d9cc
0200e3a0  add r1,sp,#0x64
0200e3a4  bl 0x0200d9cc
0200e3a8  ldrb r2,[r0,#0x0]
0200e3ac  ldrb r1,[r0,#0x1]
0200e3b0  ldrb r3,[r0,#0x2]
0200e3b4  ldrb r5,[r0,#0x3]
0200e3b8  orr r1,r2,r1, lsl #0x8
0200e3bc  orr r1,r1,r3, lsl #0x10
0200e3c0  cmp r4,#0x0
0200e3c4  orr r5,r1,r5, lsl #0x18
0200e3c8  add r11,r0,#0x4
0200e3cc  beq 0x0200e3e4
0200e3d0  ldr r1,[sp,#0x58]
0200e3d4  ldr r0,[sp,#0x5c]
0200e3d8  add r1,r9,r1, lsl #0x2
0200e3dc  ldr r1,[r1,#0x1c]
0200e3e0  b 0x0200e3f4
0200e3e4  ldr r2,[r9,#0x18]
0200e3e8  ldr r1,[sp,#0x58]
0200e3ec  ldr r0,[sp,#0x5c]
0200e3f0  ldr r1,[r2,r1]
0200e3f4  add r4,r1,r0
0200e3f8  ldr r6,[sp,#0x60]
0200e3fc  ldr r0,[sp,#0x64]
0200e400  cmp r6,#0x0
0200e404  mla r4,r6,r0,r4
0200e408  beq 0x0200e42c
0200e40c  mvn r10,#0x0
0200e410  ldr r0,[sp,#0x64]
0200e414  mov r1,r10
0200e418  sub r4,r4,r0
0200e41c  mov r0,r4
0200e420  blx r5
0200e424  subs r6,r6,#0x1
0200e428  bne 0x0200e410
0200e42c  str r11,[r8,#0x8]
0200e430  b 0x0200e800
0200e434  add r1,sp,#0x54
0200e438  add r0,r2,#0x1
0200e43c  and r4,r7,#0x20
0200e440  bl 0x0200d940
0200e444  ldrb r2,[r0,#0x0]
0200e448  ldrb r1,[r0,#0x1]
0200e44c  ldrb r3,[r0,#0x2]
0200e450  ldrb r5,[r0,#0x3]
0200e454  orr r1,r2,r1, lsl #0x8
0200e458  orr r1,r1,r3, lsl #0x10
0200e45c  cmp r4,#0x0
0200e460  orr r2,r1,r5, lsl #0x18
0200e464  add r4,r0,#0x4
0200e468  ldreq r1,[r9,#0x18]
0200e46c  ldreq r0,[sp,#0x54]
0200e470  ldreq r0,[r1,r0]
0200e474  beq 0x0200e484
0200e478  ldr r0,[sp,#0x54]
0200e47c  add r0,r9,r0, lsl #0x2
0200e480  ldr r0,[r0,#0x1c]
0200e484  blx r2
0200e488  str r4,[r8,#0x8]
0200e48c  b 0x0200e800
0200e490  add r1,sp,#0x4c
0200e494  add r0,r2,#0x1
0200e498  and r4,r7,#0x20
0200e49c  bl 0x0200d940
0200e4a0  add r1,sp,#0x50
0200e4a4  bl 0x0200d940
0200e4a8  ldrb r2,[r0,#0x0]
0200e4ac  ldrb r1,[r0,#0x1]
0200e4b0  ldrb r3,[r0,#0x2]
0200e4b4  ldrb r5,[r0,#0x3]
0200e4b8  orr r1,r2,r1, lsl #0x8
0200e4bc  orr r1,r1,r3, lsl #0x10
0200e4c0  tst r7,#0x40
0200e4c4  orr r1,r1,r5, lsl #0x18
0200e4c8  add r5,r0,#0x4
0200e4cc  ldreq r2,[r9,#0x18]
0200e4d0  ldreq r0,[sp,#0x4c]
0200e4d4  ldrbeq r0,[r2,r0]
0200e4d8  beq 0x0200e4ec
0200e4dc  ldr r0,[sp,#0x4c]
0200e4e0  add r0,r9,r0, lsl #0x2
0200e4e4  ldr r0,[r0,#0x1c]
0200e4e8  and r0,r0,#0xff
0200e4ec  cmp r0,#0x0
0200e4f0  beq 0x0200e518
0200e4f4  cmp r4,#0x0
0200e4f8  ldreq r2,[r9,#0x18]
0200e4fc  ldreq r0,[sp,#0x50]
0200e500  ldreq r0,[r2,r0]
0200e504  beq 0x0200e514
0200e508  ldr r0,[sp,#0x50]
0200e50c  add r0,r9,r0, lsl #0x2
0200e510  ldr r0,[r0,#0x1c]
0200e514  blx r1
0200e518  str r5,[r8,#0x8]
0200e51c  b 0x0200e800
0200e520  ldr r0,[sp,#0x0]
0200e524  cmp r0,r2
0200e528  addeq sp,sp,#0xa4
0200e52c  ldmiaeq sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
0200e530  add r1,sp,#0x44
0200e534  add r0,r2,#0x5
0200e538  bl 0x0200d9cc
0200e53c  add r1,sp,#0x48
0200e540  bl 0x0200d940
0200e544  str r0,[r8,#0x8]
0200e548  b 0x0200e800
0200e54c  add r1,sp,#0x40
0200e550  add r0,r2,#0x1
0200e554  bl 0x0200d940
0200e558  ldr r2,[r9,#0x18]
0200e55c  ldr r1,[sp,#0x40]
0200e560  mov r4,r0
0200e564  add r0,r2,r1
0200e568  ldr r2,[r0,#0x8]
0200e56c  cmp r2,#0x0
0200e570  beq 0x0200e590
0200e574  ldr r0,[r0,#0x0]
0200e578  ldr r1,[r9,#0x4]
0200e57c  cmp r1,r0
0200e580  streq r2,[r9,#0x8]
0200e584  beq 0x0200e590
0200e588  mvn r1,#0x0
0200e58c  blx r2
0200e590  str r4,[r8,#0x8]
0200e594  b 0x0200e800
0200e598  ldr r0,[sp,#0x0]
0200e59c  cmp r0,r2
0200e5a0  addeq sp,sp,#0xa4
0200e5a4  ldmiaeq sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
0200e5a8  add r1,sp,#0x34
0200e5ac  add r0,r2,#0x1
0200e5b0  bl 0x0200d9cc
0200e5b4  add r1,sp,#0x38
0200e5b8  bl 0x0200d9cc
0200e5bc  add r1,sp,#0x3c
0200e5c0  bl 0x0200d940
0200e5c4  ldr r1,[sp,#0x34]
0200e5c8  add r0,r0,r1, lsl #0x2
0200e5cc  str r0,[r8,#0x8]
0200e5d0  b 0x0200e800
0200e5d4  add r1,sp,#0x24
0200e5d8  add r0,r2,#0x1
0200e5dc  and r4,r7,#0x20
0200e5e0  bl 0x0200d940
0200e5e4  add r1,sp,#0x28
0200e5e8  bl 0x0200d940
0200e5ec  ldrb r2,[r0,#0x0]
0200e5f0  ldrb r1,[r0,#0x1]
0200e5f4  ldrb r3,[r0,#0x2]
0200e5f8  ldrb r5,[r0,#0x3]
0200e5fc  orr r1,r2,r1, lsl #0x8
0200e600  orr r1,r1,r3, lsl #0x10
0200e604  orr r2,r1,r5, lsl #0x18
0200e608  add r1,sp,#0x2c
0200e60c  add r0,r0,#0x4
0200e610  str r2,[sp,#0x30]
0200e614  bl 0x0200d940
0200e618  ldrb r2,[r0,#0x0]
0200e61c  ldrb r1,[r0,#0x1]
0200e620  ldrb r3,[r0,#0x2]
0200e624  ldrb r5,[r0,#0x3]
0200e628  orr r1,r2,r1, lsl #0x8
0200e62c  orr r1,r1,r3, lsl #0x10
0200e630  cmp r4,#0x0
0200e634  orr r2,r1,r5, lsl #0x18
0200e638  add r4,r0,#0x4
0200e63c  ldreq r1,[r9,#0x18]
0200e640  ldreq r0,[sp,#0x24]
0200e644  ldreq r5,[r1,r0]
0200e648  beq 0x0200e658
0200e64c  ldr r0,[sp,#0x24]
0200e650  add r0,r9,r0, lsl #0x2
0200e654  ldr r5,[r0,#0x1c]
0200e658  ldr r0,[sp,#0x28]
0200e65c  ldr r3,[sp,#0x30]
0200e660  ldr r1,[sp,#0x2c]
0200e664  add r0,r5,r0
0200e668  add r1,r3,r1
0200e66c  blx r2
0200e670  str r4,[r8,#0x8]
0200e674  b 0x0200e800
0200e678  add r1,sp,#0x14
0200e67c  add r0,r2,#0x1
0200e680  and r5,r7,#0x20
0200e684  bl 0x0200d940
0200e688  add r1,sp,#0x1c
0200e68c  bl 0x0200d940
0200e690  ldrb r2,[r0],#0x1
0200e694  add r1,sp,#0x18
0200e698  and r4,r2,#0x20
0200e69c  bl 0x0200d940
0200e6a0  add r1,sp,#0x20
0200e6a4  bl 0x0200d940
0200e6a8  ldrb r2,[r0,#0x0]
0200e6ac  ldrb r1,[r0,#0x1]
0200e6b0  ldrb r3,[r0,#0x2]
0200e6b4  ldrb r6,[r0,#0x3]
0200e6b8  orr r1,r2,r1, lsl #0x8
0200e6bc  orr r1,r1,r3, lsl #0x10
0200e6c0  cmp r5,#0x0
0200e6c4  orr r2,r1,r6, lsl #0x18
0200e6c8  add r5,r0,#0x4
0200e6cc  ldreq r1,[r9,#0x18]
0200e6d0  ldreq r0,[sp,#0x14]
0200e6d4  ldreq r0,[r1,r0]
0200e6d8  beq 0x0200e6e8
0200e6dc  ldr r0,[sp,#0x14]
0200e6e0  add r0,r9,r0, lsl #0x2
0200e6e4  ldr r0,[r0,#0x1c]
0200e6e8  cmp r4,#0x0
0200e6ec  ldreq r3,[r9,#0x18]
0200e6f0  ldreq r1,[sp,#0x18]
0200e6f4  ldreq r4,[r3,r1]
0200e6f8  beq 0x0200e708
0200e6fc  ldr r1,[sp,#0x18]
0200e700  add r1,r9,r1, lsl #0x2
0200e704  ldr r4,[r1,#0x1c]
0200e708  ldr r3,[sp,#0x1c]
0200e70c  ldr r1,[sp,#0x20]
0200e710  add r0,r0,r3
0200e714  add r1,r4,r1
0200e718  blx r2
0200e71c  str r5,[r8,#0x8]
0200e720  b 0x0200e800
0200e724  add r1,sp,#0x8
0200e728  add r0,r2,#0x1
0200e72c  and r4,r7,#0x20
0200e730  bl 0x0200d940
0200e734  ldrb r2,[r0],#0x1
0200e738  add r1,sp,#0xc
0200e73c  and r6,r2,#0x20
0200e740  bl 0x0200d940
0200e744  add r1,sp,#0x10
0200e748  bl 0x0200d9cc
0200e74c  ldrb r2,[r0,#0x0]
0200e750  ldrb r1,[r0,#0x1]
0200e754  ldrb r3,[r0,#0x2]
0200e758  ldrb r5,[r0,#0x3]
0200e75c  orr r1,r2,r1, lsl #0x8
0200e760  orr r1,r1,r3, lsl #0x10
0200e764  cmp r4,#0x0
0200e768  orr r5,r1,r5, lsl #0x18
0200e76c  add r11,r0,#0x4
0200e770  ldreq r1,[r9,#0x18]
0200e774  ldreq r0,[sp,#0x8]
0200e778  ldreq r4,[r1,r0]
0200e77c  beq 0x0200e78c
0200e780  ldr r0,[sp,#0x8]
0200e784  add r0,r9,r0, lsl #0x2
0200e788  ldr r4,[r0,#0x1c]
0200e78c  cmp r6,#0x0
0200e790  ldreq r1,[r9,#0x18]
0200e794  ldreq r0,[sp,#0xc]
0200e798  ldreq r0,[r1,r0]
0200e79c  beq 0x0200e7ac
0200e7a0  ldr r0,[sp,#0xc]
0200e7a4  add r0,r9,r0, lsl #0x2
0200e7a8  ldr r0,[r0,#0x1c]
0200e7ac  ldr r1,[sp,#0x10]
0200e7b0  add r4,r4,r0
0200e7b4  bl 0x0200d338
0200e7b8  movs r6,r0
0200e7bc  beq 0x0200e7e0
0200e7c0  mvn r10,#0x0
0200e7c4  ldr r0,[sp,#0x10]
0200e7c8  mov r1,r10
0200e7cc  sub r4,r4,r0
0200e7d0  mov r0,r4
0200e7d4  blx r5
0200e7d8  subs r6,r6,#0x1
0200e7dc  bne 0x0200e7c4
0200e7e0  str r11,[r8,#0x8]
0200e7e4  b 0x0200e800
0200e7e8  add r1,sp,#0x4
0200e7ec  add r0,r2,#0x1
0200e7f0  bl 0x0200d940
0200e7f4  str r0,[r8,#0x8]
0200e7f8  b 0x0200e800
0200e7fc  bl 0x0200f280
0200e800  tst r7,#0x80
0200e804  movne r0,#0x0
0200e808  strne r0,[r8,#0x8]
0200e80c  b 0x0200df7c
