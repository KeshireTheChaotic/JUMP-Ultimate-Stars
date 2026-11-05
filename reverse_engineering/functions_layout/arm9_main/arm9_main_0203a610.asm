0203a610  ldr r1,[r0,#0xe0]
0203a614  cmp r1,#0x0
0203a618  bxne lr
0203a61c  ldr r12,[0x203a794]
0203a620  ldrh r1,[r12,#0x0]
0203a624  and r1,r1,#0x8000
0203a628  mov r1,r1, asr #0xf
0203a62c  cmp r1,#0x1
0203a630  bxeq lr
0203a634  ldr r2,[0x203a798]
0203a638  ldr r1,[0x203a79c]
0203a63c  ldrh r3,[r2,#0x0]
0203a640  ldrh r2,[r12,#0x0]
0203a644  orr r2,r3,r2
0203a648  eor r2,r2,r1
0203a64c  and r1,r2,r1
0203a650  mov r1,r1, lsl #0x10
0203a654  mov r1,r1, lsr #0x10
0203a658  tst r1,#0x1
0203a65c  ldrne r3,[r0,#0x78]
0203a660  addne r12,r0,#0x18
0203a664  ldrne r2,[r12,r3,lsl #0x2]
0203a668  orrne r2,r2,#0x10
0203a66c  strne r2,[r12,r3,lsl #0x2]
0203a670  tst r1,#0x2
0203a674  ldrne r3,[r0,#0x78]
0203a678  addne r12,r0,#0x18
0203a67c  ldrne r2,[r12,r3,lsl #0x2]
0203a680  orrne r2,r2,#0x20
0203a684  strne r2,[r12,r3,lsl #0x2]
0203a688  tst r1,#0x400
0203a68c  ldrne r3,[r0,#0x78]
0203a690  addne r12,r0,#0x18
0203a694  ldrne r2,[r12,r3,lsl #0x2]
0203a698  orrne r2,r2,#0x40
0203a69c  strne r2,[r12,r3,lsl #0x2]
0203a6a0  tst r1,#0x800
0203a6a4  ldrne r3,[r0,#0x78]
0203a6a8  addne r12,r0,#0x18
0203a6ac  ldrne r2,[r12,r3,lsl #0x2]
0203a6b0  orrne r2,r2,#0x80
0203a6b4  strne r2,[r12,r3,lsl #0x2]
0203a6b8  tst r1,#0x200
0203a6bc  ldrne r3,[r0,#0x78]
0203a6c0  addne r12,r0,#0x18
0203a6c4  ldrne r2,[r12,r3,lsl #0x2]
0203a6c8  orrne r2,r2,#0x100
0203a6cc  strne r2,[r12,r3,lsl #0x2]
0203a6d0  tst r1,#0x100
0203a6d4  ldrne r3,[r0,#0x78]
0203a6d8  addne r12,r0,#0x18
0203a6dc  ldrne r2,[r12,r3,lsl #0x2]
0203a6e0  orrne r2,r2,#0x200
0203a6e4  strne r2,[r12,r3,lsl #0x2]
0203a6e8  tst r1,#0x8
0203a6ec  ldrne r3,[r0,#0x78]
0203a6f0  addne r12,r0,#0x18
0203a6f4  ldrne r2,[r12,r3,lsl #0x2]
0203a6f8  orrne r2,r2,#0x8000
0203a6fc  strne r2,[r12,r3,lsl #0x2]
0203a700  tst r1,#0x4
0203a704  ldrne r3,[r0,#0x78]
0203a708  addne r12,r0,#0x18
0203a70c  ldrne r2,[r12,r3,lsl #0x2]
0203a710  orrne r2,r2,#0x4000
0203a714  strne r2,[r12,r3,lsl #0x2]
0203a718  tst r1,#0x2000
0203a71c  ldrne r3,[r0,#0x78]
0203a720  addne r12,r0,#0x18
0203a724  ldrne r2,[r12,r3,lsl #0x2]
0203a728  orrne r2,r2,#0x2000
0203a72c  strne r2,[r12,r3,lsl #0x2]
0203a730  tst r1,#0x10
0203a734  ldrne r3,[r0,#0x78]
0203a738  addne r12,r0,#0x18
0203a73c  ldrne r2,[r12,r3,lsl #0x2]
0203a740  orrne r2,r2,#0x4
0203a744  strne r2,[r12,r3,lsl #0x2]
0203a748  tst r1,#0x20
0203a74c  ldrne r3,[r0,#0x78]
0203a750  addne r12,r0,#0x18
0203a754  ldrne r2,[r12,r3,lsl #0x2]
0203a758  orrne r2,r2,#0x8
0203a75c  strne r2,[r12,r3,lsl #0x2]
0203a760  tst r1,#0x40
0203a764  ldrne r3,[r0,#0x78]
0203a768  addne r12,r0,#0x18
0203a76c  ldrne r2,[r12,r3,lsl #0x2]
0203a770  orrne r2,r2,#0x1
0203a774  strne r2,[r12,r3,lsl #0x2]
0203a778  tst r1,#0x80
0203a77c  ldrne r1,[r0,#0x78]
0203a780  addne r2,r0,#0x18
0203a784  ldrne r0,[r2,r1,lsl #0x2]
0203a788  orrne r0,r0,#0x2
0203a78c  strne r0,[r2,r1,lsl #0x2]
0203a790  bx lr
