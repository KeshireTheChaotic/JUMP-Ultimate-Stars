021ca51c  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
021ca520  sub sp,sp,#0x10
021ca524  ldr r2,[0x21ca7d8]
021ca528  mov r5,r1
021ca52c  mul r1,r5,r2
021ca530  mov r2,r1, lsr #0x10
021ca534  mov r10,r0
021ca538  mov r1,r5, lsl #0x10
021ca53c  mov r4,r2, lsl #0x18
021ca540  ldr r0,[r10,#0x54]
021ca544  mov r2,r10
021ca548  add r0,r0,r4, lsr #0x16
021ca54c  mov r1,r1, lsr #0x10
021ca550  blx 0x021cab0c
021ca554  movs r6,r0
021ca558  mov r0,r10
021ca55c  beq 0x021ca57c
021ca560  mov r1,r6
021ca564  blx 0x021cb590
021ca568  ldr r0,[r10,#0x40]
021ca56c  sub r0,r6,r0
021ca570  mov r0,r0, lsl #0xd
021ca574  mov r0,r0, asr #0x10
021ca578  b 0x021ca7d0
021ca57c  blx 0x021cb528
021ca580  mov r9,r0
021ca584  ldr r3,[r10,#0x40]
021ca588  mov r1,r9, lsl #0x3
021ca58c  ldrh r2,[r3,r1]
021ca590  ldr r0,[0x21ca7dc]
021ca594  cmp r2,r0
021ca598  beq 0x021ca5c0
021ca59c  ldr r0,[0x21ca7d8]
021ca5a0  ldr r6,[r10,#0x54]
021ca5a4  mul r0,r2,r0
021ca5a8  mov r0,r0, lsr #0x10
021ca5ac  mov r0,r0, lsl #0x18
021ca5b0  mov r2,r10
021ca5b4  add r0,r6,r0, lsr #0x16
021ca5b8  add r1,r3,r1
021ca5bc  blx 0x021caabc
021ca5c0  ldr r1,[r10,#0x40]
021ca5c4  mov r0,r9, lsl #0x3
021ca5c8  strh r5,[r1,r0]
021ca5cc  ldr r0,[r10,#0x40]
021ca5d0  mov r1,#0x1
021ca5d4  add r0,r0,r9, lsl #0x3
021ca5d8  strh r1,[r0,#0x2]
021ca5dc  ldr r0,[r10,#0x54]
021ca5e0  ldr r1,[r10,#0x40]
021ca5e4  mov r2,r10
021ca5e8  add r0,r0,r4, lsr #0x16
021ca5ec  add r1,r1,r9, lsl #0x3
021ca5f0  blx 0x021caa18
021ca5f4  ldrb r0,[r10,#0x78]
021ca5f8  mov r1,r5
021ca5fc  cmp r0,#0x0
021ca600  movne r2,#0x80
021ca604  moveq r2,#0x40
021ca608  ldr r0,[r10,#0x4c]
021ca60c  mul r2,r9,r2
021ca610  ldr r3,[r0,#0x0]
021ca614  str r2,[sp,#0x4]
021ca618  ldr r3,[r3,#0x10]
021ca61c  blx r3
021ca620  mov r4,r0
021ca624  ldr r0,[r10,#0x4c]
021ca628  ldr r1,[r0,#0x0]
021ca62c  ldr r1,[r1,#0x18]
021ca630  blx r1
021ca634  cmp r0,#0x0
021ca638  beq 0x021ca6b8
021ca63c  cmp r4,r0
021ca640  bcs 0x021ca684
021ca644  ldr r6,[r10,#0x3c]
021ca648  mov r7,r4, lsr #0x1
021ca64c  ldrh r5,[r10,#0x38]
021ca650  mov r0,r7
021ca654  mov r1,r6
021ca658  bl 0x0200d338
021ca65c  and r0,r4,#0x1
021ca660  mul r3,r5,r1
021ca664  mul r2,r0,r5
021ca668  mov r0,r7
021ca66c  mov r1,r6
021ca670  add r4,r3,r2, lsr #0x1
021ca674  bl 0x0200d338
021ca678  ldrh r1,[r10,#0x3a]
021ca67c  mul r5,r1,r0
021ca680  b 0x021ca6e4
021ca684  ldr r5,[r10,#0x3c]
021ca688  sub r4,r4,r0, lsr #0x1
021ca68c  mov r0,r4
021ca690  mov r1,r5
021ca694  bl 0x0200d338
021ca698  ldrh r2,[r10,#0x38]
021ca69c  mov r0,r4
021ca6a0  mul r4,r2,r1
021ca6a4  mov r1,r5
021ca6a8  bl 0x0200d338
021ca6ac  ldrh r1,[r10,#0x3a]
021ca6b0  mul r5,r1,r0
021ca6b4  b 0x021ca6e4
021ca6b8  ldr r5,[r10,#0x3c]
021ca6bc  mov r0,r4
021ca6c0  mov r1,r5
021ca6c4  bl 0x0200d338
021ca6c8  ldrh r2,[r10,#0x38]
021ca6cc  mov r0,r4
021ca6d0  mul r4,r2,r1
021ca6d4  mov r1,r5
021ca6d8  bl 0x0200d338
021ca6dc  ldrh r1,[r10,#0x3a]
021ca6e0  mul r5,r1,r0
021ca6e4  mov r6,#0x0
021ca6e8  b 0x021ca7c0
021ca6ec  mov r0,r6, lsr #0x3
021ca6f0  str r0,[sp,#0x8]
021ca6f4  ldr r0,[sp,#0x4]
021ca6f8  mov r1,r6, lsl #0x1d
021ca6fc  add r8,r0,r1, lsr #0x1b
021ca700  mov r7,#0x0
021ca704  b 0x021ca7a8
021ca708  ldr r1,[sp,#0x8]
021ca70c  mov r2,r7, lsr #0x2
021ca710  add r1,r2,r1, lsl #0x1
021ca714  mov r1,r1, lsl #0x6
021ca718  cmp r7,r0, lsr #0x1
021ca71c  mov r11,r1, lsr #0x1
021ca720  ldr r0,[r10,#0x30]
021ca724  add r1,r4,r7, lsl #0x1
021ca728  bcs 0x021ca780
021ca72c  ldr r3,[r0,#0x0]
021ca730  add r2,r5,r6
021ca734  ldr r3,[r3,#0x2c]
021ca738  str r1,[sp,#0x0]
021ca73c  blx r3
021ca740  str r0,[sp,#0xc]
021ca744  ldr r0,[r10,#0x30]
021ca748  ldr r1,[sp,#0x0]
021ca74c  ldr r3,[r0,#0x0]
021ca750  add r1,r1,#0x1
021ca754  ldr r3,[r3,#0x2c]
021ca758  add r2,r5,r6
021ca75c  blx r3
021ca760  ldr r1,[sp,#0xc]
021ca764  add r2,r1,r0, lsl #0x4
021ca768  ldr r0,[r10,#0x74]
021ca76c  and r1,r7,#0x3
021ca770  add r0,r8,r0
021ca774  add r0,r1,r0
021ca778  strb r2,[r11,r0]
021ca77c  b 0x021ca7a4
021ca780  ldr r3,[r0,#0x0]
021ca784  add r2,r5,r6
021ca788  ldr r3,[r3,#0x2c]
021ca78c  blx r3
021ca790  ldr r1,[r10,#0x74]
021ca794  and r2,r7,#0x3
021ca798  add r1,r8,r1
021ca79c  add r1,r2,r1
021ca7a0  strb r0,[r11,r1]
021ca7a4  add r7,r7,#0x1
021ca7a8  ldrh r0,[r10,#0x38]
021ca7ac  add r1,r0,#0x1
021ca7b0  add r1,r1,r1, lsr #0x1f
021ca7b4  cmp r7,r1, asr #0x1
021ca7b8  bcc 0x021ca708
021ca7bc  add r6,r6,#0x1
021ca7c0  ldrh r0,[r10,#0x3a]
021ca7c4  cmp r6,r0
021ca7c8  bcc 0x021ca6ec
021ca7cc  mov r0,r9
021ca7d0  add sp,sp,#0x10
021ca7d4  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
