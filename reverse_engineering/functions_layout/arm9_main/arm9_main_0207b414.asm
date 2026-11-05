0207b414  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
0207b418  sub sp,sp,#0x20
0207b41c  mov r10,r0
0207b420  add r0,sp,#0x14
0207b424  bl 0x0201899c
0207b428  add r0,r10,#0x10
0207b42c  mov r1,#0x0
0207b430  mov r2,#0x80
0207b434  bl 0x020517fc
0207b438  mov r0,#0x0
0207b43c  strh r0,[r10,#0x90]
0207b440  ldr r4,[r10,#0x8]
0207b444  b 0x0207b7e0
0207b448  ldr r5,[r4,#0x8]
0207b44c  cmp r5,#0x0
0207b450  beq 0x0207b7dc
0207b454  ldr r0,[r4,#0x18]
0207b458  add r1,sp,#0x14
0207b45c  bl 0x0207afdc
0207b460  ldrsh r0,[r4,#0x3a]
0207b464  strh r0,[r4,#0x3c]
0207b468  ldrsh r0,[r4,#0x34]
0207b46c  strh r0,[r4,#0x38]
0207b470  ldrsh r0,[r4,#0x36]
0207b474  strh r0,[r4,#0x3a]
0207b478  ldr r1,[sp,#0x14]
0207b47c  mov r0,r1, asr #0xb
0207b480  add r0,r1,r0, lsr #0x14
0207b484  mov r0,r0, asr #0xc
0207b488  strh r0,[r4,#0x34]
0207b48c  ldr r1,[sp,#0x18]
0207b490  mov r0,r1, asr #0xb
0207b494  add r0,r1,r0, lsr #0x14
0207b498  mov r0,r0, asr #0xc
0207b49c  strh r0,[r4,#0x36]
0207b4a0  add r0,r10,#0x39c
0207b4a4  add r0,r0,#0xc00
0207b4a8  str r0,[sp,#0xc]
0207b4ac  add r0,r10,#0x10
0207b4b0  str r0,[sp,#0x10]
0207b4b4  b 0x0207b7d4
0207b4b8  ldr r0,[r5,#0x0]
0207b4bc  str r0,[sp,#0x4]
0207b4c0  ldrb r0,[r5,#0x18]
0207b4c4  tst r0,#0x10
0207b4c8  beq 0x0207b4e4
0207b4cc  mov r0,r4
0207b4d0  mov r1,r5
0207b4d4  bl 0x0207b1c0
0207b4d8  mov r0,r5
0207b4dc  bl 0x0201b244
0207b4e0  b 0x0207b7d0
0207b4e4  bic r0,r0,#0x4
0207b4e8  and r1,r0,#0xff
0207b4ec  strb r0,[r5,#0x18]
0207b4f0  tst r1,#0x1
0207b4f4  ldrhne r0,[r5,#0xc]
0207b4f8  cmpne r0,#0x0
0207b4fc  beq 0x0207b7d0
0207b500  tst r1,#0x2
0207b504  bne 0x0207b7d0
0207b508  add r0,r5,#0x2c
0207b50c  add r1,r5,#0x34
0207b510  mov r2,#0x8
0207b514  bl 0x02051890
0207b518  ldrh r0,[r5,#0xc]
0207b51c  str r0,[sp,#0x0]
0207b520  cmp r0,#0x1
0207b524  bne 0x0207b53c
0207b528  add r0,r5,#0x3c
0207b52c  add r1,r5,#0x2c
0207b530  mov r2,#0x8
0207b534  bl 0x02051890
0207b538  b 0x0207b5f0
0207b53c  ldrsh r3,[r5,#0x40]
0207b540  ldrsh r2,[r5,#0x3c]
0207b544  ldrsh r1,[r5,#0x42]
0207b548  ldrsh r0,[r5,#0x3e]
0207b54c  sub r8,r2,r3
0207b550  add r11,r2,r3
0207b554  sub r9,r0,r1
0207b558  add r12,r0,r1
0207b55c  mov r7,#0x1
0207b560  add r6,r5,#0x44
0207b564  b 0x0207b5b4
0207b568  ldrsh lr,[r6,#0x4]
0207b56c  ldrsh r0,[r6,#0x0]
0207b570  ldrsh r1,[r6,#0x6]
0207b574  ldrsh r2,[r6,#0x2]
0207b578  sub r3,r0,lr
0207b57c  str r3,[sp,#0x8]
0207b580  cmp r8,r3
0207b584  sub r3,r2,r1
0207b588  ldrgt r8,[sp,#0x8]
0207b58c  cmp r9,r3
0207b590  add r0,r0,lr
0207b594  movgt r9,r3
0207b598  cmp r11,r0
0207b59c  add r1,r2,r1
0207b5a0  movlt r11,r0
0207b5a4  cmp r12,r1
0207b5a8  movlt r12,r1
0207b5ac  add r7,r7,#0x1
0207b5b0  add r6,r6,#0x8
0207b5b4  ldr r0,[sp,#0x0]
0207b5b8  cmp r7,r0
0207b5bc  bcc 0x0207b568
0207b5c0  sub r0,r11,r8
0207b5c4  mov r0,r0, asr #0x1
0207b5c8  strh r0,[r5,#0x30]
0207b5cc  sub r0,r12,r9
0207b5d0  mov r0,r0, asr #0x1
0207b5d4  strh r0,[r5,#0x32]
0207b5d8  ldrsh r0,[r5,#0x30]
0207b5dc  add r0,r8,r0
0207b5e0  strh r0,[r5,#0x2c]
0207b5e4  ldrsh r0,[r5,#0x32]
0207b5e8  add r0,r9,r0
0207b5ec  strh r0,[r5,#0x2e]
0207b5f0  ldr r2,[sp,#0x14]
0207b5f4  ldrsh r1,[r5,#0x2c]
0207b5f8  mov r0,r2, asr #0xb
0207b5fc  add r0,r2,r0, lsr #0x14
0207b600  mov r0,r0, lsl #0x4
0207b604  add r7,r1,r0, asr #0x10
0207b608  mov r0,r0, asr #0x10
0207b60c  ldrsh r1,[r5,#0x30]
0207b610  ldr r3,[sp,#0x18]
0207b614  ldrsh r2,[r5,#0x2e]
0207b618  sub r6,r7,r1
0207b61c  add r8,r1,r7
0207b620  mov r1,r3, asr #0xb
0207b624  add r1,r3,r1, lsr #0x14
0207b628  mov r1,r1, lsl #0x4
0207b62c  add r3,r2,r1, asr #0x10
0207b630  mov r11,r1, asr #0x10
0207b634  ldrsh r2,[r5,#0x32]
0207b638  ldrb r1,[r5,#0x18]
0207b63c  sub r7,r3,r2
0207b640  add r9,r2,r3
0207b644  tst r1,#0x40
0207b648  bne 0x0207b720
0207b64c  cmp r6,r0
0207b650  movgt r6,r0
0207b654  cmp r7,r11
0207b658  movgt r7,r11
0207b65c  cmp r8,r0
0207b660  movlt r8,r0
0207b664  cmp r9,r11
0207b668  bge 0x0207b6b4
0207b66c  mov r9,r11
0207b670  sub r0,r11,r7
0207b674  mov r0,r0, asr #0x1
0207b678  strh r0,[r5,#0x32]
0207b67c  ldrsh r0,[r5,#0x32]
0207b680  add r0,r7,r0
0207b684  strh r0,[r5,#0x2e]
0207b688  ldrsh r2,[r5,#0x2e]
0207b68c  ldr r1,[sp,#0x18]
0207b690  mov r0,r1, asr #0xb
0207b694  add r0,r1,r0, lsr #0x14
0207b698  mov r0,r0, lsl #0x4
0207b69c  sub r0,r2,r0, asr #0x10
0207b6a0  strh r0,[r5,#0x2e]
0207b6a4  ldrsh r0,[r5,#0x2e]
0207b6a8  rsb r0,r0,#0x0
0207b6ac  strh r0,[r5,#0x32]
0207b6b0  b 0x0207b6e8
0207b6b4  sub r0,r9,r7
0207b6b8  mov r0,r0, asr #0x1
0207b6bc  strh r0,[r5,#0x32]
0207b6c0  ldrsh r0,[r5,#0x32]
0207b6c4  add r0,r7,r0
0207b6c8  strh r0,[r5,#0x2e]
0207b6cc  ldrsh r2,[r5,#0x2e]
0207b6d0  ldr r1,[sp,#0x18]
0207b6d4  mov r0,r1, asr #0xb
0207b6d8  add r0,r1,r0, lsr #0x14
0207b6dc  mov r0,r0, lsl #0x4
0207b6e0  sub r0,r2,r0, asr #0x10
0207b6e4  strh r0,[r5,#0x2e]
0207b6e8  sub r0,r8,r6
0207b6ec  add r0,r0,#0x1
0207b6f0  mov r0,r0, asr #0x1
0207b6f4  strh r0,[r5,#0x30]
0207b6f8  ldrsh r0,[r5,#0x30]
0207b6fc  add r0,r6,r0
0207b700  strh r0,[r5,#0x2c]
0207b704  ldrsh r2,[r5,#0x2c]
0207b708  ldr r1,[sp,#0x14]
0207b70c  mov r0,r1, asr #0xb
0207b710  add r0,r1,r0, lsr #0x14
0207b714  mov r0,r0, lsl #0x4
0207b718  sub r0,r2,r0, asr #0x10
0207b71c  strh r0,[r5,#0x2c]
0207b720  mov r6,r6, asr #0x8
0207b724  cmp r6,#0x4
0207b728  mov r7,r7, asr #0x8
0207b72c  movge r6,#0x3
0207b730  cmp r7,#0x4
0207b734  mov r8,r8, asr #0x8
0207b738  movge r7,#0x3
0207b73c  cmp r8,#0x4
0207b740  mov r9,r9, asr #0x8
0207b744  movge r8,#0x3
0207b748  cmp r9,#0x4
0207b74c  movge r9,#0x3
0207b750  cmp r6,#0x0
0207b754  movlt r6,#0x0
0207b758  cmp r7,#0x0
0207b75c  movlt r7,#0x0
0207b760  cmp r8,#0x0
0207b764  movlt r8,#0x0
0207b768  cmp r9,#0x0
0207b76c  movlt r9,#0x0
0207b770  b 0x0207b7c8
0207b774  mov r11,r6
0207b778  b 0x0207b7bc
0207b77c  ldrh r2,[r10,#0x90]
0207b780  cmp r2,#0x180
0207b784  bcs 0x0207b7b8
0207b788  ldr r0,[sp,#0xc]
0207b78c  mov r1,#0xc
0207b790  mla r1,r2,r1,r0
0207b794  mov r3,r2
0207b798  add r0,r11,r7, lsl #0x2
0207b79c  mov r2,r0, lsl #0x10
0207b7a0  add r0,r3,#0x1
0207b7a4  strh r0,[r10,#0x90]
0207b7a8  ldr r0,[sp,#0x10]
0207b7ac  str r5,[r1,#0x8]
0207b7b0  add r0,r0,r2, lsr #0xd
0207b7b4  bl 0x02037b98
0207b7b8  add r11,r11,#0x1
0207b7bc  cmp r11,r8
0207b7c0  bls 0x0207b77c
0207b7c4  add r7,r7,#0x1
0207b7c8  cmp r7,r9
0207b7cc  bls 0x0207b774
0207b7d0  ldr r5,[sp,#0x4]
0207b7d4  cmp r5,#0x0
0207b7d8  bne 0x0207b4b8
0207b7dc  ldr r4,[r4,#0x0]
0207b7e0  cmp r4,#0x0
0207b7e4  bne 0x0207b448
0207b7e8  add sp,sp,#0x20
0207b7ec  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
