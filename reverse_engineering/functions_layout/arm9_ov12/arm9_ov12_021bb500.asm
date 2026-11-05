021bb500  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
021bb504  mov r10,r0
021bb508  ldrsb r2,[r10,#0x98]
021bb50c  ldr r3,[r10,#0x0]
021bb510  mov r0,#0x24
021bb514  mla r5,r2,r0,r3
021bb518  ldrsb r1,[r10,#0x9e]
021bb51c  mov r7,#0x0
021bb520  add r4,r10,#0xcf
021bb524  sub r6,r1,#0x2
021bb528  add r11,r5,#0x4
021bb52c  b 0x021bb5a0
021bb530  mov r0,#0x2a
021bb534  mul r8,r7,r0
021bb538  mov r2,r0
021bb53c  mov r1,#0x0
021bb540  add r0,r4,r8
021bb544  bl 0x020517fc
021bb548  mov r0,#0x13
021bb54c  str r0,[sp,#0x0]
021bb550  add r1,r5,r7, lsl #0x2
021bb554  ldr r1,[r1,#0x4]
021bb558  add r3,r11,r7, lsl #0x2
021bb55c  add r1,r3,r1
021bb560  ldr r3,[0x21bb620]
021bb564  add r0,r4,r8
021bb568  add r2,r10,#0xaa
021bb56c  bl 0x02074080
021bb570  ldrsb r9,[r10,#0x9f]
021bb574  add r0,r4,r8
021bb578  bl 0x02074294
021bb57c  mov r0,r0, lsl #0x18
021bb580  cmp r9,r0, asr #0x18
021bb584  bgt 0x021bb598
021bb588  add r0,r4,r8
021bb58c  bl 0x02074294
021bb590  mov r0,r0, lsl #0x18
021bb594  mov r9,r0, asr #0x18
021bb598  strb r9,[r10,#0x9f]
021bb59c  add r7,r7,#0x1
021bb5a0  cmp r7,r6
021bb5a4  blt 0x021bb530
021bb5a8  mov r2,#0x2a
021bb5ac  mul r4,r6,r2
021bb5b0  add r7,r10,#0xcf
021bb5b4  add r0,r7,r4
021bb5b8  mov r1,#0x0
021bb5bc  bl 0x020517fc
021bb5c0  ldr r0,[r10,#0x80]
021bb5c4  cmp r0,#0x0
021bb5c8  beq 0x021bb5f0
021bb5cc  add r3,r6,#0x1
021bb5d0  add r0,r5,r3, lsl #0x2
021bb5d4  add r2,r5,#0x4
021bb5d8  ldr r1,[r0,#0x4]
021bb5dc  add r2,r2,r3, lsl #0x2
021bb5e0  add r0,r7,r4
021bb5e4  add r1,r2,r1
021bb5e8  bl 0x02074000
021bb5ec  b 0x021bb60c
021bb5f0  add r0,r5,r6, lsl #0x2
021bb5f4  add r2,r5,#0x4
021bb5f8  ldr r1,[r0,#0x4]
021bb5fc  add r2,r2,r6, lsl #0x2
021bb600  add r0,r7,r4
021bb604  add r1,r2,r1
021bb608  bl 0x02074000
021bb60c  ldrsb r1,[r10,#0x9e]
021bb610  mov r0,#0x0
021bb614  sub r1,r1,#0x1
021bb618  strb r1,[r10,#0x9e]
021bb61c  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
