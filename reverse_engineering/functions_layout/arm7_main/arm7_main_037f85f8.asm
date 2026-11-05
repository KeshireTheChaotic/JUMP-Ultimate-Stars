037f85f8  stmdb sp!,{r4,r5,r6,r7,lr}
037f85fc  sub sp,sp,#0x4
037f8600  mov r7,r0
037f8604  mov r6,r1
037f8608  ldr r0,[0x37f86ac]
037f860c  ldr r5,[r0,#0x0]
037f8610  add r4,r5,#0xbc
037f8614  ldr r0,[0x37f86b0]
037f8618  bl 0x037fbc10
037f861c  mov r12,r6, lsl #0x3
037f8620  add r2,r4,r6, lsl #0x3
037f8624  ldrh r1,[r2,#0x2]
037f8628  cmp r1,#0x0
037f862c  bne 0x037f8670
037f8630  mov r1,#0x1
037f8634  strh r1,[r2,#0x2]
037f8638  ldr r3,[0x37f86b4]
037f863c  strh r3,[r4,r12]
037f8640  mov r2,r7, lsl #0x1
037f8644  add r1,r5,r7, lsl #0x1
037f8648  ldrh r1,[r1,#0x8]
037f864c  cmp r1,r3
037f8650  strheq r6,[r5,r2]
037f8654  addne r1,r5,r1, lsl #0x3
037f8658  strhne r6,[r1,#0xbc]
037f865c  add r1,r5,r7, lsl #0x1
037f8660  strh r6,[r1,#0x8]
037f8664  ldrh r1,[r5,#0x10]
037f8668  cmp r7,r1
037f866c  strhlt r7,[r5,#0x10]
037f8670  bl 0x037fbc4c
037f8674  cmp r7,#0x3
037f8678  beq 0x037f86a0
037f867c  ldrh r0,[r5,#0x12]
037f8680  cmp r0,#0x3
037f8684  bne 0x037f86a0
037f8688  ldr r0,[0x37f86ac]
037f868c  ldr r0,[r0,#0x0]
037f8690  ldr r0,[r0,#0x308]
037f8694  mov r1,#0x0
037f8698  mov r2,r1
037f869c  bl 0x037fcc6c
037f86a0  add sp,sp,#0x4
037f86a4  ldmia sp!,{r4,r5,r6,r7,lr}
037f86a8  bx lr
