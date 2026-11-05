0207a2f4  stmdb sp!,{r3,r4,r5,r6,r7,lr}
0207a2f8  ldr r3,[r0,#0x14]
0207a2fc  ldr r6,[r1,#0x10]
0207a300  mov r0,r1
0207a304  add r4,r6,r3, lsl #0x4
0207a308  mov r7,r2
0207a30c  bl 0x02011ac8
0207a310  ldrb r1,[r4,#0xf]
0207a314  mov r5,r0
0207a318  mov r0,r1, lsl #0x18
0207a31c  movs r0,r0, lsr #0x1f
0207a320  bne 0x0207a330
0207a324  mov r0,r4
0207a328  mov r1,r5
0207a32c  bl 0x02079dfc
0207a330  ldrsh r3,[r7,#0x0]
0207a334  ldrsh r0,[r4,#0xc]
0207a338  cmp r0,r3
0207a33c  ldmiaeq sp!,{r3,r4,r5,r6,r7,pc}
0207a340  ldrb r0,[r4,#0xe]
0207a344  mov r0,r0, lsl #0x18
0207a348  movs r2,r0, lsr #0x1f
0207a34c  ldrsbne r1,[r4,#0xf]
0207a350  mvnne r0,#0x0
0207a354  movne r1,r1, lsl #0x1a
0207a358  movne r1,r1, asr #0x1a
0207a35c  cmpne r1,r0
0207a360  beq 0x0207a390
0207a364  mov r0,r6
0207a368  mov r1,r4
0207a36c  mov r2,r5
0207a370  bl 0x02079f08
0207a374  ldrsh r3,[r7,#0x0]
0207a378  mov r0,r6
0207a37c  mov r1,r4
0207a380  mov r2,r5
0207a384  strh r3,[r4,#0xc]
0207a388  bl 0x0207a098
0207a38c  ldmia sp!,{r3,r4,r5,r6,r7,pc}
0207a390  cmp r2,#0x0
0207a394  beq 0x0207a3c4
0207a398  ldrsb r1,[r4,#0xf]
0207a39c  mvn r0,#0x0
0207a3a0  mov r1,r1, lsl #0x1a
0207a3a4  cmp r0,r1, asr #0x1a
0207a3a8  bne 0x0207a3c4
0207a3ac  mov r0,r6
0207a3b0  mov r1,r4
0207a3b4  mov r2,r5
0207a3b8  strh r3,[r4,#0xc]
0207a3bc  bl 0x0207a098
0207a3c0  ldmia sp!,{r3,r4,r5,r6,r7,pc}
0207a3c4  strh r3,[r4,#0xc]
0207a3c8  ldmia sp!,{r3,r4,r5,r6,r7,pc}
