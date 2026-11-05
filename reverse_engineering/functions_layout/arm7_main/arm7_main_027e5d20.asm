027e5d20  stmdb sp!,{r4,r5,lr}
027e5d24  sub sp,sp,#0x204
027e5d28  mov r3,r0
027e5d2c  ldr r0,[0x27e5e30]
027e5d30  ldr r4,[r0,#0x550]
027e5d34  ldr r0,[r3,#0x10]
027e5d38  mov r0,r0, lsl #0x10
027e5d3c  mov r5,r0, lsr #0x10
027e5d40  add r0,sp,#0x0
027e5d44  ldr r1,[r3,#0x4]
027e5d48  mov r1,r1, lsl #0x10
027e5d4c  mov r1,r1, lsr #0x10
027e5d50  ldr r2,[r3,#0x8]
027e5d54  mov r2,r2, lsl #0x10
027e5d58  mov r2,r2, lsr #0x10
027e5d5c  ldr r3,[r3,#0xc]
027e5d60  mov r3,r3, lsl #0x10
027e5d64  mov r3,r3, lsr #0x10
027e5d68  bl 0x027e2470
027e5d6c  ldrh r1,[r0,#0x4]
027e5d70  cmp r1,#0x0
027e5d74  beq 0x027e5d84
027e5d78  ldr r0,[0x27e5e34]
027e5d7c  bl 0x027e5ce4
027e5d80  b 0x027e5e24
027e5d84  ldr r0,[0x27e5e38]
027e5d88  cmp r5,r0
027e5d8c  beq 0x027e5dd8
027e5d90  cmp r5,#0x0
027e5d94  moveq r1,#0x1
027e5d98  moveq r0,#0x0
027e5d9c  beq 0x027e5dcc
027e5da0  mov r0,#0x64
027e5da4  mul r3,r5,r0
027e5da8  mov r2,r3, asr #0x1f
027e5dac  mov r1,#0x0
027e5db0  ldr r0,[0x27e5e3c]
027e5db4  umull r12,r5,r3,r0
027e5db8  mla r5,r3,r1,r5
027e5dbc  mla r5,r2,r0,r5
027e5dc0  mov r0,r5, lsr #0x6
027e5dc4  mov r1,r12, lsr #0x6
027e5dc8  orr r1,r1,r5, lsl #0x1a
027e5dcc  str r1,[r4,#0x7b8]
027e5dd0  str r0,[r4,#0x7bc]
027e5dd4  b 0x027e5de4
027e5dd8  mov r0,#0x0
027e5ddc  str r0,[r4,#0x7b8]
027e5de0  str r0,[r4,#0x7bc]
027e5de4  bl 0x037fd6ac
027e5de8  mov r2,#0x0
027e5dec  orr r1,r1,#0x0
027e5df0  orr r3,r0,#0x1
027e5df4  add r0,r4,r2, lsl #0x3
027e5df8  str r3,[r0,#0x738]
027e5dfc  str r1,[r0,#0x73c]
027e5e00  add r2,r2,#0x1
027e5e04  cmp r2,#0x10
027e5e08  blt 0x027e5df4
027e5e0c  bl 0x03808074
027e5e10  mov r1,#0x1d
027e5e14  strh r1,[r0,#0x0]
027e5e18  mov r1,#0x0
027e5e1c  strh r1,[r0,#0x2]
027e5e20  bl 0x038080d0
027e5e24  add sp,sp,#0x204
027e5e28  ldmia sp!,{r4,r5,lr}
027e5e2c  bx lr
