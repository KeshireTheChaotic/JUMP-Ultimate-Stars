0214d5e4  stmdb sp!,{r4,r5,r6,lr}
0214d5e8  ldr r0,[0x214d728]
0214d5ec  mov r4,#0x0
0214d5f0  ldr r0,[r0,#0x0]
0214d5f4  mov r3,r4
0214d5f8  add r0,r0,#0x1000
0214d5fc  ldr r2,[r0,#0x8e4]
0214d600  cmp r2,#0x1
0214d604  ldreq r2,[0x214d72c]
0214d608  ldrne r2,[0x214d730]
0214d60c  str r2,[r0,#0x8e8]
0214d610  ldr r2,[0x214d728]
0214d614  ldr r0,[r2,#0x0]
0214d618  add r0,r0,#0x1000
0214d61c  str r4,[r0,#0x8f8]
0214d620  ldr r0,[r2,#0x0]
0214d624  add r0,r0,#0x1000
0214d628  str r4,[r0,#0x8fc]
0214d62c  ldr r0,[r2,#0x0]
0214d630  add r0,r0,#0x1000
0214d634  strb r4,[r0,#0x910]
0214d638  ldr r0,[r2,#0x0]
0214d63c  add r0,r0,r4, lsl #0x1
0214d640  add r0,r0,#0x1900
0214d644  add r4,r4,#0x1
0214d648  strh r3,[r0,#0x0]
0214d64c  cmp r4,#0x8
0214d650  blt 0x0214d638
0214d654  ldr r0,[0x214d728]
0214d658  ldr r2,[0x214d734]
0214d65c  ldr r4,[r0,#0x0]
0214d660  ldr r3,[r2,r1,lsl #0x2]
0214d664  add r2,r4,#0x1000
0214d668  ldr r0,[r4,#0x58]
0214d66c  ldr r1,[r4,#0x30]
0214d670  ldr r2,[r2,#0x8ec]
0214d674  blx r3
0214d678  ldr r2,[0x214d728]
0214d67c  ldr r1,[r2,#0x0]
0214d680  add r1,r1,#0x1000
0214d684  str r0,[r1,#0x8f0]
0214d688  ldr r0,[r2,#0x0]
0214d68c  add r1,r0,#0x1000
0214d690  ldr r0,[r0,#0x58]
0214d694  ldr r1,[r1,#0x8f0]
0214d698  bl 0x0214dd44
0214d69c  ldr lr,[0x214d728]
0214d6a0  ldr r1,[lr,#0x0]
0214d6a4  add r0,r1,#0x1000
0214d6a8  ldr r3,[r0,#0x8f0]
0214d6ac  ldr r2,[r1,#0x58]
0214d6b0  mov r0,#0x1
0214d6b4  b 0x0214d71c
0214d6b8  ldr r1,[r2],#0x8
0214d6bc  ldr r5,[lr,#0x0]
0214d6c0  ldrb r6,[r1,#0x4]
0214d6c4  sub r3,r3,#0x1
0214d6c8  mov r4,r6, asr #0x5
0214d6cc  add r4,r5,r4, lsl #0x2
0214d6d0  add r12,r4,#0x1000
0214d6d4  ldr r5,[r12,#0x8f8]
0214d6d8  and r4,r6,#0x1f
0214d6dc  orr r4,r5,r0, lsl r4
0214d6e0  str r4,[r12,#0x8f8]
0214d6e4  ldr r5,[lr,#0x0]
0214d6e8  ldrsb r4,[r1,#0x8]
0214d6ec  add r12,r5,#0x1000
0214d6f0  ldrb r5,[r12,#0x910]
0214d6f4  orr r4,r5,r0, lsl r4
0214d6f8  strb r4,[r12,#0x910]
0214d6fc  ldrsb r4,[r1,#0x8]
0214d700  ldr r5,[lr,#0x0]
0214d704  ldrsb r12,[r1,#0x9]
0214d708  add r1,r5,r4, lsl #0x1
0214d70c  add r1,r1,#0x1900
0214d710  ldrh r4,[r1,#0x0]
0214d714  orr r4,r4,r0, lsl r12
0214d718  strh r4,[r1,#0x0]
0214d71c  cmp r3,#0x0
0214d720  bne 0x0214d6b8
0214d724  ldmia sp!,{r4,r5,r6,pc}
