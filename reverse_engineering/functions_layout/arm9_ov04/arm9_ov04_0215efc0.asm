0215efc0  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,lr}
0215efc4  sub sp,sp,#0x4
0215efc8  mov lr,#0x0
0215efcc  mov r5,lr
0215efd0  add r3,sp,#0x0
0215efd4  mvn r4,#0x0
0215efd8  b 0x0215f004
0215efdc  add r2,r0,r5, lsl #0x2
0215efe0  strb r4,[r2,#0x1]
0215efe4  mov r2,r5, lsl #0x2
0215efe8  ldrsb r2,[r0,r2]
0215efec  cmp r1,r2
0215eff0  addeq r2,lr,#0x1
0215eff4  strbeq r5,[r3,lr]
0215eff8  moveq r2,r2, lsl #0x18
0215effc  moveq lr,r2, asr #0x18
0215f000  add r5,r5,#0x1
0215f004  ldrsb r2,[r0,#0x10]
0215f008  cmp r5,r2
0215f00c  blt 0x0215efdc
0215f010  mov r4,#0x0
0215f014  mov r8,lr
0215f018  add r2,sp,#0x0
0215f01c  ldr r12,[0x215f0d8]
0215f020  mov r3,r4
0215f024  mov r1,r4
0215f028  b 0x0215f0c8
0215f02c  mov r5,r12
0215f030  mov r9,r3
0215f034  b 0x0215f064
0215f038  ldrsb r6,[r2,r9]
0215f03c  cmp r6,#0x0
0215f040  blt 0x0215f060
0215f044  add r7,r0,r6, lsl #0x2
0215f048  ldrsb r6,[r7,#0x1]
0215f04c  cmp r6,#0x0
0215f050  bge 0x0215f060
0215f054  ldrh r6,[r7,#0x2]
0215f058  cmp r5,r6
0215f05c  movhi r5,r6
0215f060  add r9,r9,#0x1
0215f064  cmp r9,r8
0215f068  blt 0x0215f038
0215f06c  mov r6,r1
0215f070  mov r7,r1
0215f074  b 0x0215f0a8
0215f078  ldrsb r9,[r2,r7]
0215f07c  cmp r9,#0x0
0215f080  blt 0x0215f0a4
0215f084  add r10,r0,r9, lsl #0x2
0215f088  ldrsb r9,[r10,#0x1]
0215f08c  cmp r9,#0x0
0215f090  bge 0x0215f0a4
0215f094  ldrh r9,[r10,#0x2]
0215f098  cmp r5,r9
0215f09c  strbeq r4,[r10,#0x1]
0215f0a0  addeq r6,r6,#0x1
0215f0a4  add r7,r7,#0x1
0215f0a8  cmp r7,r8
0215f0ac  blt 0x0215f078
0215f0b0  add r4,r4,r6
0215f0b4  sub r5,lr,r6
0215f0b8  mov r4,r4, lsl #0x18
0215f0bc  mov r5,r5, lsl #0x18
0215f0c0  mov r4,r4, asr #0x18
0215f0c4  mov lr,r5, asr #0x18
0215f0c8  cmp lr,#0x0
0215f0cc  bgt 0x0215f02c
0215f0d0  add sp,sp,#0x4
0215f0d4  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,pc}
