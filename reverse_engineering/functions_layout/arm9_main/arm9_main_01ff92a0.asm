01ff92a0  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,r12,lr}
01ff92a4  ldr r1,[r0,#0x0]
01ff92a8  mov r2,#0x0
01ff92ac  ldrh r3,[r1],#0x2
01ff92b0  add r0,r0,#0x24
01ff92b4  mov r3,r3, lsl #0x10
01ff92b8  ldmia r0,{r4,r5,r6,r7,r8}
01ff92bc  stmdb sp!,{r4,r5,r6,r7,r8}
01ff92c0  ldr r12,[r0,#0x58]
01ff92c4  stmdb sp!,{r12}
01ff92c8  ldr r11,[r0,#0x54]
01ff92cc  stmdb sp!,{r11}
01ff92d0  stmia r0,{r4,r5,r6,r7,r8}
01ff92d4  ldr r8,[r0,#0x10]
01ff92d8  mov r4,#0x0
01ff92dc  str r4,[r8,#0x0]
01ff92e0  ldr r4,[r8,#-0x4]
01ff92e4  ldr r6,[r8,#-0x48]
01ff92e8  ldr r8,[r8,#-0x44]
01ff92ec  mov r5,r4, asr #0x8
01ff92f0  mov r4,r4, lsl #0x18
01ff92f4  movs r4,r4, asr #0x18
01ff92f8  addlt r5,r5,#0x1
01ff92fc  mov r7,r6, asr #0x8
01ff9300  mov r6,r6, lsl #0x18
01ff9304  movs r6,r6, asr #0x18
01ff9308  addlt r7,r7,#0x1
01ff930c  mov r9,r8, asr #0x8
01ff9310  mov r8,r8, lsl #0x18
01ff9314  movs r8,r8, asr #0x18
01ff9318  addlt r9,r9,#0x1
01ff931c  add r10,r5,r7
01ff9320  add r10,r10,r9
01ff9324  cmp r5,r7
01ff9328  movle r11,r5
01ff932c  movle r12,r7
01ff9330  movgt r11,r7
01ff9334  movgt r12,r5
01ff9338  cmp r11,r9
01ff933c  movgt r11,r9
01ff9340  cmp r12,r9
01ff9344  movle r12,r9
01ff9348  sub r10,r10,r11
01ff934c  sub r10,r10,r12
01ff9350  add r5,r4,r6
01ff9354  add r5,r5,r8
01ff9358  cmp r4,r6
01ff935c  movle r11,r4
01ff9360  movle r12,r6
01ff9364  movgt r11,r6
01ff9368  movgt r12,r4
01ff936c  cmp r11,r8
01ff9370  movgt r11,r8
01ff9374  cmp r12,r8
01ff9378  movle r12,r8
01ff937c  sub r5,r5,r11
01ff9380  sub r5,r5,r12
01ff9384  mov r11,r5
01ff9388  mov r12,r10
01ff938c  bl 0x01ffaa4c
01ff9390  ldmia r0,{r4,r5,r6,r7,r8}
01ff9394  add r4,r4,#0x10
01ff9398  add r5,r5,#0x10
01ff939c  add r6,r6,#0x4
01ff93a0  add r7,r7,#0x2
01ff93a4  add r8,r8,#0x4
01ff93a8  ldmia sp!,{r11}
01ff93ac  subs r11,r11,#0x10
01ff93b0  bne 0x01ff92cc
01ff93b4  ldr r9,[r0,#0x54]
01ff93b8  add r4,r4,#0x1000
01ff93bc  mov r9,r9, asr #0x4
01ff93c0  sub r4,r4,r9, lsl #0x4
01ff93c4  add r5,r5,#0x800
01ff93c8  sub r5,r5,r9, lsl #0x4
01ff93cc  add r6,r6,#0x104
01ff93d0  sub r6,r6,r9, lsl #0x2
01ff93d4  add r7,r7,#0x42
01ff93d8  sub r7,r7,r9, lsl #0x1
01ff93dc  add r8,r8,#0x48
01ff93e0  sub r8,r8,r9, lsl #0x2
01ff93e4  ldmia sp!,{r12}
01ff93e8  subs r12,r12,#0x10
01ff93ec  bne 0x01ff92c4
01ff93f0  ldmia sp!,{r4,r5,r6,r7,r8}
01ff93f4  stmia r0,{r4,r5,r6,r7,r8}
01ff93f8  ldr r2,[r0,#-0x24]
01ff93fc  sub r0,r1,r2
01ff9400  sub r0,r0,#0x2
01ff9404  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,r12,lr}
01ff9408  mov pc,lr
