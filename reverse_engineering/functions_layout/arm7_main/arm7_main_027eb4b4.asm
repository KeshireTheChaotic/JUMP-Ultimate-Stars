027eb4b4  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
027eb4b8  sub sp,sp,#0x4
027eb4bc  mov r9,#0x0
027eb4c0  ldr r0,[0x27eb7a0]
027eb4c4  ldr r0,[r0,#0x0]
027eb4c8  add r0,r0,#0x500
027eb4cc  ldrh r0,[r0,#0xf8]
027eb4d0  cmp r0,#0x5
027eb4d4  ldreq r10,[0x27eb7a4]
027eb4d8  ldrne r10,[0x27eb7a8]
027eb4dc  mov r6,#0x0
027eb4e0  mov r5,#0xff
027eb4e4  mvn r4,#0x0
027eb4e8  b 0x027eb508
027eb4ec  mov r0,r6
027eb4f0  mov r1,r5
027eb4f4  bl 0x027e9b60
027eb4f8  cmp r0,r4
027eb4fc  moveq r9,#0x1
027eb500  beq 0x027eb774
027eb504  add r6,r6,#0x1
027eb508  cmp r6,#0x69
027eb50c  bcc 0x027eb4ec
027eb510  mov r4,#0x0
027eb514  mov r5,r4
027eb518  b 0x027eb558
027eb51c  mov r0,r5, lsl #0x1
027eb520  ldrh r0,[r10,r0]
027eb524  cmp r4,r0
027eb528  addeq r5,r5,#0x1
027eb52c  beq 0x027eb554
027eb530  mov r0,r4
027eb534  bl 0x027e9ba0
027eb538  mov r0,r0, lsl #0x10
027eb53c  mov r0,r0, lsr #0x10
027eb540  cmp r0,#0xff
027eb544  beq 0x027eb554
027eb548  cmp r9,#0x20
027eb54c  add r9,r9,#0x1
027eb550  bhi 0x027eb774
027eb554  add r4,r4,#0x1
027eb558  cmp r4,#0x69
027eb55c  bcc 0x027eb51c
027eb560  mov r5,#0x0
027eb564  mov r4,r5
027eb568  mov r0,r5
027eb56c  mov r1,r4
027eb570  bl 0x027e9b60
027eb574  add r5,r5,#0x1
027eb578  cmp r5,#0x69
027eb57c  bcc 0x027eb568
027eb580  mov r5,#0x0
027eb584  mov r4,r5
027eb588  b 0x027eb5c4
027eb58c  mov r0,r4, lsl #0x1
027eb590  ldrh r0,[r10,r0]
027eb594  cmp r5,r0
027eb598  addeq r4,r4,#0x1
027eb59c  beq 0x027eb5c0
027eb5a0  mov r0,r5
027eb5a4  bl 0x027e9ba0
027eb5a8  mov r0,r0, lsl #0x10
027eb5ac  movs r0,r0, lsr #0x10
027eb5b0  beq 0x027eb5c0
027eb5b4  cmp r9,#0x20
027eb5b8  add r9,r9,#0x1
027eb5bc  bhi 0x027eb774
027eb5c0  add r5,r5,#0x1
027eb5c4  cmp r5,#0x69
027eb5c8  bcc 0x027eb58c
027eb5cc  mov r5,#0x55
027eb5d0  mov r4,#0x0
027eb5d4  mov r0,r4
027eb5d8  mov r1,r5
027eb5dc  bl 0x027e9b60
027eb5e0  add r4,r4,#0x1
027eb5e4  mvn r0,r5
027eb5e8  mov r0,r0, lsl #0x10
027eb5ec  mov r5,r0, lsr #0x10
027eb5f0  cmp r4,#0x69
027eb5f4  bcc 0x027eb5d4
027eb5f8  mov r5,#0x55
027eb5fc  mov r6,#0x0
027eb600  mov r4,r6
027eb604  b 0x027eb654
027eb608  mov r0,r4, lsl #0x1
027eb60c  ldrh r0,[r10,r0]
027eb610  cmp r6,r0
027eb614  addeq r4,r4,#0x1
027eb618  beq 0x027eb640
027eb61c  mov r0,r6
027eb620  bl 0x027e9ba0
027eb624  mov r0,r0, lsl #0x10
027eb628  mov r0,r0, lsr #0x10
027eb62c  cmp r0,r5
027eb630  beq 0x027eb640
027eb634  cmp r9,#0x20
027eb638  add r9,r9,#0x1
027eb63c  bhi 0x027eb774
027eb640  add r6,r6,#0x1
027eb644  mvn r0,r5
027eb648  and r0,r0,#0xff
027eb64c  mov r0,r0, lsl #0x10
027eb650  mov r5,r0, lsr #0x10
027eb654  cmp r6,#0x69
027eb658  bcc 0x027eb608
027eb65c  mov r4,#0xff
027eb660  mov r5,#0x0
027eb664  mov r0,r5
027eb668  mov r1,r4
027eb66c  bl 0x027e9b60
027eb670  add r5,r5,#0x1
027eb674  sub r0,r4,#0x1
027eb678  mov r0,r0, lsl #0x10
027eb67c  mov r4,r0, lsr #0x10
027eb680  cmp r5,#0x69
027eb684  bcc 0x027eb664
027eb688  mov r5,#0xff
027eb68c  mov r6,#0x0
027eb690  mov r4,r6
027eb694  b 0x027eb6e0
027eb698  mov r0,r4, lsl #0x1
027eb69c  ldrh r0,[r10,r0]
027eb6a0  cmp r6,r0
027eb6a4  addeq r4,r4,#0x1
027eb6a8  beq 0x027eb6d0
027eb6ac  mov r0,r6
027eb6b0  bl 0x027e9ba0
027eb6b4  mov r0,r0, lsl #0x10
027eb6b8  mov r0,r0, lsr #0x10
027eb6bc  cmp r0,r5
027eb6c0  beq 0x027eb6d0
027eb6c4  cmp r9,#0x20
027eb6c8  add r9,r9,#0x1
027eb6cc  bhi 0x027eb774
027eb6d0  add r6,r6,#0x1
027eb6d4  sub r0,r5,#0x1
027eb6d8  mov r0,r0, lsl #0x10
027eb6dc  mov r5,r0, lsr #0x10
027eb6e0  cmp r6,#0x69
027eb6e4  bcc 0x027eb698
027eb6e8  mov r6,#0x0
027eb6ec  mov r5,r6
027eb6f0  mov r4,#0x1
027eb6f4  mov r11,r6
027eb6f8  b 0x027eb76c
027eb6fc  mov r0,r5, lsl #0x1
027eb700  ldrh r0,[r10,r0]
027eb704  cmp r6,r0
027eb708  addeq r5,r5,#0x1
027eb70c  beq 0x027eb768
027eb710  mov r7,r4
027eb714  mov r8,r11
027eb718  b 0x027eb760
027eb71c  mov r0,r6
027eb720  mov r1,r7
027eb724  bl 0x027e9b60
027eb728  mov r0,r6
027eb72c  bl 0x027e9ba0
027eb730  mov r0,r0, lsl #0x10
027eb734  mov r0,r0, lsr #0x10
027eb738  cmp r0,r7
027eb73c  beq 0x027eb74c
027eb740  cmp r9,#0x20
027eb744  add r9,r9,#0x1
027eb748  bhi 0x027eb774
027eb74c  mov r0,r7, lsl #0x1
027eb750  and r0,r0,#0xff
027eb754  mov r0,r0, lsl #0x10
027eb758  mov r7,r0, lsr #0x10
027eb75c  add r8,r8,#0x1
027eb760  cmp r8,#0x9
027eb764  bcc 0x027eb71c
027eb768  add r6,r6,#0x1
027eb76c  cmp r6,#0x69
027eb770  bcc 0x027eb6fc
027eb774  cmp r9,#0x0
027eb778  beq 0x027eb794
027eb77c  ldr r0,[0x27eb7a0]
027eb780  ldr r0,[r0,#0x0]
027eb784  add r0,r0,#0x300
027eb788  ldrh r1,[r0,#0x3e]
027eb78c  orr r1,r1,#0x8
027eb790  strh r1,[r0,#0x3e]
027eb794  add sp,sp,#0x4
027eb798  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
027eb79c  bx lr
