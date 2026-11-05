027f2e88  stmdb sp!,{r4,r5,r6,lr}
027f2e8c  mov r5,r0
027f2e90  mov r4,r1
027f2e94  ldr r0,[0x27f2ef8]
027f2e98  ldrh r1,[r0,#0x0]
027f2e9c  ldrh r0,[r0,#0x0]
027f2ea0  add r0,r1,r0, lsl #0x8
027f2ea4  mov r0,r0, lsl #0x10
027f2ea8  movs r6,r0, lsr #0x10
027f2eac  moveq r6,#0x1
027f2eb0  mov r0,r6
027f2eb4  bl 0x027e9364
027f2eb8  mov r0,r5
027f2ebc  mov r1,r6
027f2ec0  bl 0x027ec420
027f2ec4  add r5,r4,#0x34
027f2ec8  add r0,r4,#0x33
027f2ecc  bl 0x027e93b0
027f2ed0  mov r4,r0
027f2ed4  mov r6,#0x0
027f2ed8  b 0x027f2ee8
027f2edc  bl 0x027e9334
027f2ee0  strh r0,[r5],#0x2
027f2ee4  add r6,r6,#0x2
027f2ee8  cmp r6,r4
027f2eec  bcc 0x027f2edc
027f2ef0  ldmia sp!,{r4,r5,r6,lr}
027f2ef4  bx lr
