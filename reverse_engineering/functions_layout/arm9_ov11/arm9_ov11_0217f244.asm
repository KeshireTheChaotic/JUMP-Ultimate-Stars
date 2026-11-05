0217f244  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
0217f248  sub sp,sp,#0x8
0217f24c  mov r10,r0
0217f250  ldr r6,[r10,#0x4]
0217f254  mov r5,#0x0
0217f258  mov r4,#0x38
0217f25c  b 0x0217f28c
0217f260  mov r1,r6
0217f264  add r0,r10,#0x4
0217f268  bl 0x02037c24
0217f26c  mov r0,r6
0217f270  mov r1,r5
0217f274  mov r2,r4
0217f278  bl 0x020517fc
0217f27c  mov r1,r6
0217f280  add r0,r10,#0xc
0217f284  bl 0x02037b98
0217f288  ldr r6,[r10,#0x4]
0217f28c  cmp r6,#0x0
0217f290  bne 0x0217f260
0217f294  mov r4,#0x0
0217f298  b 0x0217f4dc
0217f29c  bl 0x0208369c
0217f2a0  mov r11,r0
0217f2a4  mvn r0,#0x0
0217f2a8  str r0,[sp,#0x4]
0217f2ac  b 0x0217f4cc
0217f2b0  ldr r5,[r11,#0x8]
0217f2b4  cmp r5,#0x0
0217f2b8  beq 0x0217f4c8
0217f2bc  ldr r0,[r5,#0x2c]
0217f2c0  tst r0,#0x9
0217f2c4  bne 0x0217f4c8
0217f2c8  ldr r9,[r10,#0xc]
0217f2cc  add r0,r10,#0xc
0217f2d0  mov r1,r9
0217f2d4  bl 0x02037c24
0217f2d8  add r0,r10,#0x4
0217f2dc  mov r1,r9
0217f2e0  bl 0x02037b98
0217f2e4  ldr r0,[0x217f5a0]
0217f2e8  str r5,[r9,#0x8]
0217f2ec  ldrsb r0,[r0,r4]
0217f2f0  strb r0,[r9,#0x14]
0217f2f4  ldr r0,[r5,#0x30]
0217f2f8  ldrb r1,[r0,#0x22]
0217f2fc  strb r1,[r9,#0x15]
0217f300  ldrb r0,[r9,#0x14]
0217f304  bl 0x0217f8a4
0217f308  ldrb r1,[r9,#0x14]
0217f30c  mov r7,r0
0217f310  ldrb r0,[r9,#0x15]
0217f314  cmp r1,#0x2
0217f318  moveq r5,#0x8
0217f31c  beq 0x0217f380
0217f320  mov r0,r0, lsl #0x18
0217f324  mov r0,r0, asr #0x18
0217f328  mov r5,#0x0
0217f32c  b 0x0217f374
0217f330  ldr r2,[0x217f5a4]
0217f334  mov r3,#0xa
0217f338  mla r3,r5,r3,r2
0217f33c  mov r6,#0x0
0217f340  b 0x0217f358
0217f344  cmp r0,r8
0217f348  beq 0x0217f380
0217f34c  add r2,r6,#0x1
0217f350  mov r2,r2, lsl #0x18
0217f354  mov r6,r2, asr #0x18
0217f358  ldrsb r8,[r3,r6]
0217f35c  ldr r2,[sp,#0x4]
0217f360  cmp r8,r2
0217f364  bne 0x0217f344
0217f368  add r2,r5,#0x1
0217f36c  mov r2,r2, lsl #0x18
0217f370  mov r5,r2, asr #0x18
0217f374  cmp r5,#0x8
0217f378  blt 0x0217f330
0217f37c  ldr r5,[sp,#0x4]
0217f380  cmp r1,#0x3
0217f384  bne 0x0217f3b8
0217f388  ldr r0,[r9,#0x8]
0217f38c  ldr r0,[r0,#0x30]
0217f390  ldrsh r0,[r0,#0x20]
0217f394  cmp r0,#0x3c
0217f398  sublt r0,r7,#0x3c
0217f39c  movlt r0,r0, lsl #0x10
0217f3a0  movlt r7,r0, asr #0x10
0217f3a4  blt 0x0217f3b8
0217f3a8  cmp r0,#0xb4
0217f3ac  sublt r0,r7,#0x14
0217f3b0  movlt r0,r0, lsl #0x10
0217f3b4  movlt r7,r0, asr #0x10
0217f3b8  ldr r0,[r9,#0x8]
0217f3bc  bl 0x0217f5a8
0217f3c0  str r0,[sp,#0x0]
0217f3c4  add r6,r10,#0xa8
0217f3c8  mov r8,#0x0
0217f3cc  add r0,r9,r8, lsl #0x1
0217f3d0  strh r7,[r0,#0xc]
0217f3d4  ldr r0,[r6,#0x20]
0217f3d8  cmp r0,#0x0
0217f3dc  beq 0x0217f4b8
0217f3e0  ldr r0,[r0,#0x1a8]
0217f3e4  bl 0x0217f5a8
0217f3e8  ldr r1,[sp,#0x0]
0217f3ec  add r2,r9,r8, lsl #0x3
0217f3f0  ldr r3,[r1,#0x0]
0217f3f4  ldr r1,[r0,#0x0]
0217f3f8  sub r1,r3,r1
0217f3fc  str r1,[r2,#0x18]
0217f400  ldr r1,[r0,#0x4]
0217f404  ldr r0,[sp,#0x0]
0217f408  ldr r0,[r0,#0x4]
0217f40c  subs r1,r0,r1
0217f410  str r1,[r2,#0x1c]
0217f414  add r0,r9,r8, lsl #0x3
0217f418  ldr r0,[r0,#0x18]
0217f41c  rsbmi r1,r1,#0x0
0217f420  cmp r0,#0x0
0217f424  rsblt r0,r0,#0x0
0217f428  add r2,r0,r1
0217f42c  add r1,r9,r8, lsl #0x1
0217f430  cmp r2,#0x400
0217f434  movgt r2,#0x400
0217f438  ldrsh r0,[r1,#0xc]
0217f43c  cmp r5,#0x0
0217f440  mul r0,r2,r0
0217f444  mov r0,r0, asr #0xa
0217f448  strh r0,[r1,#0xc]
0217f44c  bne 0x0217f47c
0217f450  ldr r0,[r6,#0x24]
0217f454  ldr r0,[r0,#0x0]
0217f458  cmp r0,#0x0
0217f45c  ldrhne r0,[r0,#0xbc]
0217f460  moveq r0,#0x0
0217f464  rsb r0,r0,#0x100
0217f468  mov r0,r0, asr #0x1
0217f46c  add r0,r0,#0x100
0217f470  mov r0,r0, lsl #0x10
0217f474  mov r2,r0, lsr #0x10
0217f478  b 0x0217f4a4
0217f47c  cmp r5,#0x1
0217f480  movne r2,#0x100
0217f484  bne 0x0217f4a4
0217f488  ldr r0,[r6,#0x24]
0217f48c  ldrh r0,[r0,#0x34]
0217f490  rsb r0,r0,#0x100
0217f494  mov r0,r0, asr #0x1
0217f498  add r0,r0,#0x100
0217f49c  mov r0,r0, lsl #0x10
0217f4a0  mov r2,r0, lsr #0x10
0217f4a4  add r1,r9,r8, lsl #0x1
0217f4a8  ldrsh r0,[r1,#0xc]
0217f4ac  mul r0,r2,r0
0217f4b0  mov r0,r0, asr #0x8
0217f4b4  strh r0,[r1,#0xc]
0217f4b8  add r8,r8,#0x1
0217f4bc  cmp r8,#0x4
0217f4c0  add r6,r6,#0x10c
0217f4c4  blt 0x0217f3cc
0217f4c8  ldr r11,[r11,#0x0]
0217f4cc  cmp r11,#0x0
0217f4d0  bne 0x0217f2b0
0217f4d4  add r0,r4,#0x1
0217f4d8  and r4,r0,#0xff
0217f4dc  ldr r0,[0x217f5a0]
0217f4e0  ldrsb r0,[r0,r4]
0217f4e4  cmp r0,#0x0
0217f4e8  bge 0x0217f29c
0217f4ec  ldr r4,[r10,#0x4]
0217f4f0  b 0x0217f590
0217f4f4  ldr r0,[r4,#0x8]
0217f4f8  bl 0x0217f5a8
0217f4fc  mov r6,r0
0217f500  ldr r7,[r10,#0x4]
0217f504  mov r5,#0x0
0217f508  b 0x0217f584
0217f50c  cmp r4,r7
0217f510  beq 0x0217f580
0217f514  ldr r0,[r7,#0x8]
0217f518  bl 0x0217f5a8
0217f51c  ldr r2,[r0,#0x4]
0217f520  ldr r1,[r6,#0x4]
0217f524  subs r2,r2,r1
0217f528  ldr r1,[r0,#0x0]
0217f52c  ldr r0,[r6,#0x0]
0217f530  rsbmi r2,r2,#0x0
0217f534  subs r0,r1,r0
0217f538  rsbmi r0,r0,#0x0
0217f53c  add r0,r0,r2
0217f540  cmp r0,#0x8000
0217f544  bge 0x0217f580
0217f548  mov r1,r5
0217f54c  rsb r2,r0,#0x8000
0217f550  add r0,r4,r1, lsl #0x1
0217f554  ldrsh r3,[r0,#0xc]
0217f558  add r0,r7,r1, lsl #0x1
0217f55c  add r1,r1,#0x1
0217f560  mul r8,r2,r3
0217f564  mov r3,r8, asr #0xe
0217f568  ldrsh r9,[r0,#0xc]
0217f56c  add r3,r8,r3, lsr #0x11
0217f570  cmp r1,#0x4
0217f574  add r3,r9,r3, asr #0xf
0217f578  strh r3,[r0,#0xc]
0217f57c  blt 0x0217f550
0217f580  ldr r7,[r7,#0x0]
0217f584  cmp r7,#0x0
0217f588  bne 0x0217f50c
0217f58c  ldr r4,[r4,#0x0]
0217f590  cmp r4,#0x0
0217f594  bne 0x0217f4f4
0217f598  add sp,sp,#0x8
0217f59c  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
