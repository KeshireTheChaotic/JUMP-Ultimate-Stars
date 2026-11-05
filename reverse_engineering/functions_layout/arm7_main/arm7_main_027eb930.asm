027eb930  stmdb sp!,{r4,r5,r6,r7,lr}
027eb934  sub sp,sp,#0x4
027eb938  mov r3,#0x0
027eb93c  mov r2,r3
027eb940  mov r1,r3
027eb944  ldr r0,[0x27ebacc]
027eb948  ldr r5,[0x27ebad0]
027eb94c  b 0x027eb9a8
027eb950  mov r12,r1
027eb954  mov r6,r2, lsl #0x1
027eb958  b 0x027eb99c
027eb95c  mov r4,r12, lsl #0x2
027eb960  ldrh r7,[r0,r4]
027eb964  ldrh r4,[r5,r6]
027eb968  add lr,r0,r12, lsl #0x2
027eb96c  ldrh lr,[lr,#0x2]
027eb970  and r4,r4,lr
027eb974  add lr,r7,#0x4800000
027eb978  add lr,lr,#0x8000
027eb97c  strh r4,[lr,#0x0]
027eb980  ldrh lr,[lr,#0x0]
027eb984  cmp lr,r4
027eb988  beq 0x027eb998
027eb98c  cmp r3,#0x20
027eb990  add r3,r3,#0x1
027eb994  bhi 0x027ebaa0
027eb998  add r12,r12,#0x1
027eb99c  cmp r12,#0x1b
027eb9a0  bcc 0x027eb95c
027eb9a4  add r2,r2,#0x1
027eb9a8  cmp r2,#0x3
027eb9ac  bcc 0x027eb950
027eb9b0  mov r4,#0x0
027eb9b4  ldr r5,[0x27ebad4]
027eb9b8  ldr r2,[0x27ebacc]
027eb9bc  mov r1,r5
027eb9c0  mov r12,r4, lsl #0x2
027eb9c4  add r0,r2,r4, lsl #0x2
027eb9c8  ldrh r0,[r0,#0x2]
027eb9cc  and lr,r5,r0
027eb9d0  ldrh r0,[r2,r12]
027eb9d4  add r0,r0,#0x4800000
027eb9d8  add r0,r0,#0x8000
027eb9dc  strh lr,[r0,#0x0]
027eb9e0  add r0,r5,r1
027eb9e4  mov r0,r0, lsl #0x10
027eb9e8  mov r5,r0, lsr #0x10
027eb9ec  add r4,r4,#0x1
027eb9f0  cmp r4,#0x1b
027eb9f4  bcc 0x027eb9c0
027eb9f8  mov r0,#0x0
027eb9fc  ldr r4,[0x27ebad4]
027eba00  ldr lr,[0x27ebacc]
027eba04  mov r1,r4
027eba08  b 0x027eba50
027eba0c  mov r2,r0, lsl #0x2
027eba10  ldrh r2,[lr,r2]
027eba14  add r2,r2,#0x4800000
027eba18  add r2,r2,#0x8000
027eba1c  ldrh r12,[r2,#0x0]
027eba20  add r2,lr,r0, lsl #0x2
027eba24  ldrh r2,[r2,#0x2]
027eba28  and r2,r4,r2
027eba2c  cmp r12,r2
027eba30  beq 0x027eba40
027eba34  cmp r3,#0x20
027eba38  add r3,r3,#0x1
027eba3c  bhi 0x027ebaa0
027eba40  add r2,r4,r1
027eba44  mov r2,r2, lsl #0x10
027eba48  mov r4,r2, lsr #0x10
027eba4c  add r0,r0,#0x1
027eba50  cmp r0,#0x1b
027eba54  bcc 0x027eba0c
027eba58  mov r4,#0x0
027eba5c  ldr r2,[0x27ebacc]
027eba60  mov r1,r4
027eba64  b 0x027eba98
027eba68  mov r0,r4, lsl #0x2
027eba6c  ldrh r0,[r2,r0]
027eba70  add r0,r0,#0x4800000
027eba74  add r0,r0,#0x8000
027eba78  strh r1,[r0,#0x0]
027eba7c  ldrh r0,[r0,#0x0]
027eba80  cmp r0,#0x0
027eba84  beq 0x027eba94
027eba88  cmp r3,#0x20
027eba8c  add r3,r3,#0x1
027eba90  bhi 0x027ebaa0
027eba94  add r4,r4,#0x1
027eba98  cmp r4,#0x1b
027eba9c  bcc 0x027eba68
027ebaa0  cmp r3,#0x0
027ebaa4  beq 0x027ebac0
027ebaa8  ldr r0,[0x27ebad8]
027ebaac  ldr r0,[r0,#0x0]
027ebab0  add r0,r0,#0x300
027ebab4  ldrh r1,[r0,#0x3e]
027ebab8  orr r1,r1,#0x1
027ebabc  strh r1,[r0,#0x3e]
027ebac0  add sp,sp,#0x4
027ebac4  ldmia sp!,{r4,r5,r6,r7,lr}
027ebac8  bx lr
