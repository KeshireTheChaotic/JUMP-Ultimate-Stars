0215f138  stmdb sp!,{r4,r5,r6,r7,r8,lr}
0215f13c  mov r7,r0
0215f140  ldr r0,[r7,#0x1b0]
0215f144  mov r6,r1
0215f148  cmp r6,r0
0215f14c  ldmiage sp!,{r4,r5,r6,r7,r8,pc}
0215f150  ldr r0,[r7,#0x174]
0215f154  mov r1,#0x0
0215f158  ldr r2,[r0,#0x4]
0215f15c  sub r0,r1,#0x1
0215f160  strb r1,[r2,#0x5c]
0215f164  str r0,[r2,#0x54]
0215f168  ldr r0,[r7,#0x0]
0215f16c  ldr r0,[r0,#0x4]
0215f170  ldr r2,[r0,#0x50]
0215f174  ldr r12,[r0,#0x0]
0215f178  ldr r4,[r2,#0x10]
0215f17c  ldr r5,[r2,#0xc]
0215f180  mov r3,r4, asr #0xb
0215f184  mov r2,r5, asr #0xb
0215f188  ldr r12,[r12,#0xd8]
0215f18c  add r2,r5,r2, lsr #0x14
0215f190  add r3,r4,r3, lsr #0x14
0215f194  mov r4,r2, asr #0xc
0215f198  mov r5,r3, asr #0xc
0215f19c  blx r12
0215f1a0  ldr r0,[r7,#0x0]
0215f1a4  ldr r0,[r0,#0x4]
0215f1a8  bl 0x020282f4
0215f1ac  ldr r0,[r7,#0x174]
0215f1b0  ldr r0,[r0,#0x0]
0215f1b4  ldr r8,[r0,#0xc]
0215f1b8  ldr r0,[r8,#0x4]
0215f1bc  ldr r0,[r0,#0x68]
0215f1c0  ldr r1,[r0,#0x0]
0215f1c4  ldr r1,[r1,#0x70]
0215f1c8  blx r1
0215f1cc  ldr r0,[r8,#0x4]
0215f1d0  mov r1,#0x0
0215f1d4  bl 0x02023f7c
0215f1d8  add r0,r7,r6, lsl #0x2
0215f1dc  ldr r0,[r0,#0x17c]
0215f1e0  mov r1,r4, lsl #0xc
0215f1e4  str r0,[r7,#0x174]
0215f1e8  ldr r2,[r0,#0x0]
0215f1ec  mov r0,r5, lsl #0xc
0215f1f0  ldr r2,[r2,#0x8]
0215f1f4  str r2,[r7,#0x0]
0215f1f8  ldr r2,[r2,#0x4]
0215f1fc  ldr r4,[r2,#0x50]
0215f200  str r1,[r4,#0xc]
0215f204  str r0,[r4,#0x10]
0215f208  ldrb r0,[r4,#0x24]
0215f20c  orr r1,r0,#0x1
0215f210  cmp r0,r1
0215f214  beq 0x0215f228
0215f218  mov r0,r4
0215f21c  ldr r2,[r0,#0x0]
0215f220  ldr r2,[r2,#0x18]
0215f224  blx r2
0215f228  ldrb r0,[r4,#0x24]
0215f22c  mov r1,#0x1
0215f230  orr r0,r0,#0x31
0215f234  strb r0,[r4,#0x24]
0215f238  ldr r0,[r7,#0x0]
0215f23c  ldr r0,[r0,#0x4]
0215f240  ldr r2,[r0,#0x0]
0215f244  ldr r2,[r2,#0xd8]
0215f248  blx r2
0215f24c  ldr r0,[r7,#0x0]
0215f250  ldr r0,[r0,#0x4]
0215f254  bl 0x02028330
0215f258  ldr r0,[r7,#0x174]
0215f25c  mov r2,#0x0
0215f260  ldr r1,[r0,#0x0]
0215f264  ldr r0,[r1,#0xc]
0215f268  ldr r1,[r1,#0x88]
0215f26c  ldr r0,[r0,#0x4]
0215f270  bl 0x02023894
0215f274  ldmia sp!,{r4,r5,r6,r7,r8,pc}
