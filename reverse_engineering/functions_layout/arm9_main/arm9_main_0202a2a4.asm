0202a2a4  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,lr}
0202a2a8  mov r7,r0
0202a2ac  ldrb r2,[r7,#0x24]
0202a2b0  mov r6,r1
0202a2b4  ldr r1,[r7,#0x18]
0202a2b8  mov r4,r2, lsl #0x1c
0202a2bc  mov r5,r4, lsr #0x1f
0202a2c0  bl 0x0202a34c
0202a2c4  orrs r0,r6,r4, lsr #0x1f
0202a2c8  movne r6,#0x1
0202a2cc  moveq r6,#0x0
0202a2d0  ldr r4,[r7,#0x1c]
0202a2d4  mov r8,#0x0
0202a2d8  mov r9,#0x1
0202a2dc  b 0x0202a30c
0202a2e0  ldrb r0,[r4,#0x25]
0202a2e4  mov r0,r0, lsl #0x1c
0202a2e8  movs r0,r0, lsr #0x1f
0202a2ec  beq 0x0202a308
0202a2f0  mov r0,r4
0202a2f4  mov r1,r6
0202a2f8  bl 0x0202a2a4
0202a2fc  orrs r0,r5,r0
0202a300  movne r5,r9
0202a304  moveq r5,r8
0202a308  ldr r4,[r4,#0x20]
0202a30c  cmp r4,#0x0
0202a310  bne 0x0202a2e0
0202a314  ldrb r2,[r7,#0x25]
0202a318  mov r0,r5, lsl #0x1f
0202a31c  ldr r1,[0x202a348]
0202a320  bic r2,r2,#0x8
0202a324  orr r0,r2,r0, lsr #0x1c
0202a328  strb r0,[r7,#0x25]
0202a32c  ldrb r2,[r7,#0x24]
0202a330  mov r0,r5
0202a334  bic r2,r2,#0x10
0202a338  strb r2,[r7,#0x24]
0202a33c  ldr r1,[r1,#0x28]
0202a340  str r1,[r7,#0x8]
0202a344  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
