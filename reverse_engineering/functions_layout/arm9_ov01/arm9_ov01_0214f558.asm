0214f558  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
0214f55c  ldr r1,[0x214f708]
0214f560  mov r4,#0x1
0214f564  ldr r1,[r1,#0x18]
0214f568  mov r10,r0
0214f56c  mov r0,r1, asr #0xb
0214f570  add r0,r1,r0, lsr #0x14
0214f574  mov r0,r0, asr #0xc
0214f578  mov r1,r0, lsr #0x1f
0214f57c  rsb r0,r1,r0, lsl #0x1d
0214f580  add r8,r1,r0, ror #0x1d
0214f584  ldr r0,[0x214f70c]
0214f588  mov r9,#0x0
0214f58c  sub r5,r0,#0x1
0214f590  mov r6,r4
0214f594  ldr r11,[0x214f710]
0214f598  b 0x0214f6f8
0214f59c  ldr r1,[r10,#0x68]
0214f5a0  mov r0,r1, lsl #0x1d
0214f5a4  movs r0,r0, lsr #0x1f
0214f5a8  beq 0x0214f684
0214f5ac  ldrb r0,[r11,#0x4c]
0214f5b0  tst r0,r6, lsl r9
0214f5b4  beq 0x0214f6f4
0214f5b8  add r0,r10,r9, lsl #0x2
0214f5bc  ldr r0,[r0,#0x24]
0214f5c0  ldr r7,[r0,#0x4]
0214f5c4  ldr r0,[r7,#0x64]
0214f5c8  ldr r1,[r0,#0x0]
0214f5cc  ldr r1,[r1,#0x70]
0214f5d0  blx r1
0214f5d4  mov r0,r7
0214f5d8  ldr r1,[r0,#0x0]
0214f5dc  ldr r1,[r1,#0xc4]
0214f5e0  blx r1
0214f5e4  cmp r9,#0x2
0214f5e8  blt 0x0214f610
0214f5ec  add r0,r10,r9, lsl #0x2
0214f5f0  ldr r0,[r0,#0x24]
0214f5f4  mov r1,r8
0214f5f8  ldr r0,[r0,#0x4]
0214f5fc  mov r2,#0x2
0214f600  ldr r0,[r0,#0x64]
0214f604  ldr r3,[r0,#0x0]
0214f608  ldr r3,[r3,#0x80]
0214f60c  blx r3
0214f610  add r1,r10,r9, lsl #0x2
0214f614  ldr r0,[r1,#0x24]
0214f618  ldr r1,[r1,#0x48]
0214f61c  ldr r0,[r0,#0x4]
0214f620  ldr r0,[r0,#0x64]
0214f624  ldr r2,[r0,#0x0]
0214f628  ldr r2,[r2,#0x68]
0214f62c  blx r2
0214f630  add r0,r10,r9, lsl #0x2
0214f634  ldr r0,[r0,#0xc]
0214f638  mov r1,r5
0214f63c  ldr r0,[r0,#0x4]
0214f640  mov r2,#0x0
0214f644  bl 0x02023894
0214f648  add r0,r10,r9, lsl #0x2
0214f64c  ldr r0,[r0,#0xc]
0214f650  ldr r0,[r0,#0x4]
0214f654  ldr r0,[r0,#0x68]
0214f658  ldr r1,[r0,#0x0]
0214f65c  ldr r1,[r1,#0x6c]
0214f660  blx r1
0214f664  add r0,r10,r9, lsl #0x2
0214f668  ldr r0,[r0,#0xc]
0214f66c  mov r1,#0x1
0214f670  ldr r0,[r0,#0x4]
0214f674  ldr r2,[r0,#0x0]
0214f678  ldr r2,[r2,#0xd8]
0214f67c  blx r2
0214f680  b 0x0214f6f4
0214f684  mov r0,r1, lsl #0x11
0214f688  mov r0,r0, lsr #0x1a
0214f68c  tst r0,r4, lsl r9
0214f690  beq 0x0214f6f4
0214f694  mov r0,r1, lsl #0x17
0214f698  mov r0,r0, lsr #0x1a
0214f69c  tst r0,r4, lsl r9
0214f6a0  bne 0x0214f6f4
0214f6a4  add r0,r10,r9, lsl #0x2
0214f6a8  ldr r0,[r0,#0xc]
0214f6ac  ldr r1,[0x214f70c]
0214f6b0  ldr r0,[r0,#0x4]
0214f6b4  mov r2,#0x0
0214f6b8  bl 0x02023894
0214f6bc  add r0,r10,r9, lsl #0x2
0214f6c0  ldr r0,[r0,#0xc]
0214f6c4  ldr r0,[r0,#0x4]
0214f6c8  ldr r0,[r0,#0x68]
0214f6cc  ldr r1,[r0,#0x0]
0214f6d0  ldr r1,[r1,#0x6c]
0214f6d4  blx r1
0214f6d8  add r0,r10,r9, lsl #0x2
0214f6dc  ldr r0,[r0,#0xc]
0214f6e0  mov r1,#0x1
0214f6e4  ldr r0,[r0,#0x4]
0214f6e8  ldr r2,[r0,#0x0]
0214f6ec  ldr r2,[r2,#0xd8]
0214f6f0  blx r2
0214f6f4  add r9,r9,#0x1
0214f6f8  ldr r0,[r10,#0x60]
0214f6fc  cmp r9,r0
0214f700  blt 0x0214f59c
0214f704  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
