0207a5a4  stmdb sp!,{r3,r4,r5,r6,r7,lr}
0207a5a8  ldr r3,[r0,#0x14]
0207a5ac  ldr r6,[r1,#0x10]
0207a5b0  mov r0,r1
0207a5b4  add r4,r6,r3, lsl #0x4
0207a5b8  mov r7,r2
0207a5bc  bl 0x02011ac8
0207a5c0  ldrb r1,[r4,#0xf]
0207a5c4  mov r5,r0
0207a5c8  mov r0,r1, lsl #0x18
0207a5cc  movs r0,r0, lsr #0x1f
0207a5d0  bne 0x0207a5e0
0207a5d4  mov r0,r4
0207a5d8  mov r1,r5
0207a5dc  bl 0x02079dfc
0207a5e0  ldrsh r0,[r7,#0x0]
0207a5e4  strh r0,[r4,#0x4]
0207a5e8  ldrsh r0,[r7,#0x2]
0207a5ec  strh r0,[r4,#0x6]
0207a5f0  ldrsh r0,[r7,#0x4]
0207a5f4  strh r0,[r4,#0x8]
0207a5f8  ldrsh r0,[r7,#0x6]
0207a5fc  strh r0,[r4,#0xa]
0207a600  ldrb r0,[r4,#0xf]
0207a604  orr r0,r0,#0x40
0207a608  strb r0,[r4,#0xf]
0207a60c  ldrb r0,[r4,#0xe]
0207a610  mov r0,r0, lsl #0x18
0207a614  movs r0,r0, lsr #0x1f
0207a618  ldrshne r1,[r4,#0xc]
0207a61c  mvnne r0,#0x0
0207a620  cmpne r1,r0
0207a624  ldmiaeq sp!,{r3,r4,r5,r6,r7,pc}
0207a628  ldrsb r1,[r4,#0xf]
0207a62c  mov r1,r1, lsl #0x1a
0207a630  cmp r0,r1, asr #0x1a
0207a634  mov r0,r6
0207a638  mov r1,r4
0207a63c  bne 0x0207a64c
0207a640  mov r2,r5
0207a644  bl 0x0207a098
0207a648  ldmia sp!,{r3,r4,r5,r6,r7,pc}
0207a64c  mov r2,r5
0207a650  bl 0x02079e40
0207a654  ldmia sp!,{r3,r4,r5,r6,r7,pc}
