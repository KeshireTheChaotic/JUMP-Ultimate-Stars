027f5d00  stmdb sp!,{r4,r5,lr}
027f5d04  sub sp,sp,#0xc
027f5d08  ands r1,r0,#0x2000000
027f5d0c  beq 0x027f5d30
027f5d10  mov r5,#0x0
027f5d14  mov lr,r5
027f5d18  ldr r1,[0x27f5ea0]
027f5d1c  mov r4,r5, lsl #0x1
027f5d20  strh lr,[r1,r4]
027f5d24  add r5,r5,#0x1
027f5d28  cmp r5,#0x10
027f5d2c  blt 0x027f5d1c
027f5d30  and r1,r0,#0xf0000
027f5d34  mov r1,r1, lsr #0x10
027f5d38  mov r4,r1, lsl #0x1
027f5d3c  ldr r1,[0x27f5ea0]
027f5d40  strh r0,[r1,r4]
027f5d44  ands r0,r0,#0x1000000
027f5d48  beq 0x027f5e94
027f5d4c  ldrh r0,[r1,#0x0]
027f5d50  and r4,r0,#0xff00
027f5d54  mov r4,r4, lsl #0x8
027f5d58  mov r4,r4, lsr #0x10
027f5d5c  sub lr,r4,#0x22
027f5d60  cmp lr,#0xa
027f5d64  addls pc,pc,lr, lsl #0x2
027f5d68  b 0x027f5e68
027f5d6c  b 0x027f5d98
027f5d70  b 0x027f5dd4
027f5d74  b 0x027f5dd4
027f5d78  b 0x027f5e1c
027f5d7c  b 0x027f5e1c
027f5d80  b 0x027f5e5c
027f5d84  b 0x027f5e5c
027f5d88  b 0x027f5e68
027f5d8c  b 0x027f5e68
027f5d90  b 0x027f5e68
027f5d94  b 0x027f5d98
027f5d98  ldrh r12,[r1,#0x4]
027f5d9c  and lr,r12,#0xff00
027f5da0  and r0,r0,#0xff
027f5da4  mov r12,r0, lsl #0x18
027f5da8  ldrh r0,[r1,#0x2]
027f5dac  orr r0,r12,r0, lsl #0x8
027f5db0  orr r12,r0,lr, lsr #0x8
027f5db4  cmp r12,#0x2000000
027f5db8  bcc 0x027f5dc4
027f5dbc  cmp r12,#0x2800000
027f5dc0  bcc 0x027f5e68
027f5dc4  mov r0,r4
027f5dc8  mov r1,#0x2
027f5dcc  bl 0x038046d4
027f5dd0  b 0x027f5e94
027f5dd4  ldrh r3,[r1,#0x8]
027f5dd8  ldrh r2,[r1,#0xa]
027f5ddc  orr r12,r2,r3, lsl #0x10
027f5de0  cmp r12,#0x2000000
027f5de4  bcc 0x027f5df0
027f5de8  cmp r12,#0x2800000
027f5dec  bcc 0x027f5e00
027f5df0  mov r0,r4
027f5df4  mov r1,#0x2
027f5df8  bl 0x038046d4
027f5dfc  b 0x027f5e94
027f5e00  and r2,r0,#0xff
027f5e04  ldrh r0,[r1,#0x2]
027f5e08  orr r3,r0,r2, lsl #0x10
027f5e0c  ldrh r2,[r1,#0x4]
027f5e10  ldrh r0,[r1,#0x6]
027f5e14  orr r2,r0,r2, lsl #0x10
027f5e18  b 0x027f5e68
027f5e1c  ldrh r3,[r1,#0x6]
027f5e20  ldrh r2,[r1,#0x8]
027f5e24  orr r12,r2,r3, lsl #0x10
027f5e28  cmp r12,#0x2000000
027f5e2c  bcc 0x027f5e38
027f5e30  cmp r12,#0x2800000
027f5e34  bcc 0x027f5e48
027f5e38  mov r0,r4
027f5e3c  mov r1,#0x2
027f5e40  bl 0x038046d4
027f5e44  b 0x027f5e94
027f5e48  and r2,r0,#0xff
027f5e4c  ldrh r0,[r1,#0x2]
027f5e50  orr r3,r0,r2, lsl #0x10
027f5e54  ldrh r2,[r1,#0x4]
027f5e58  b 0x027f5e68
027f5e5c  and r3,r0,#0xff
027f5e60  ldrh r0,[r1,#0x2]
027f5e64  orr r3,r0,r3, lsl #0x10
027f5e68  str r2,[sp,#0x0]
027f5e6c  str r12,[sp,#0x4]
027f5e70  mov r0,#0x1
027f5e74  mov r1,r4
027f5e78  mov r2,#0x3
027f5e7c  bl 0x03804588
027f5e80  cmp r0,#0x0
027f5e84  bne 0x027f5e94
027f5e88  mov r0,r4
027f5e8c  mov r1,#0x4
027f5e90  bl 0x038046d4
027f5e94  add sp,sp,#0xc
027f5e98  ldmia sp!,{r4,r5,lr}
027f5e9c  bx lr
