02160e6c  stmdb sp!,{r4,r5,r6,r7,lr}
02160e70  sub sp,sp,#0x4
02160e74  mov r7,r0
02160e78  ldr r0,[r7,#0x20]
02160e7c  mov r6,r3
02160e80  ldr r0,[r0,#0xc]
02160e84  mov r5,#0x0
02160e88  ldr r4,[r0,#0x24]
02160e8c  ldr r0,[r4,#0x10]
02160e90  cmp r0,#0x1
02160e94  bne 0x02160ee4
02160e98  mov r0,r2, lsl #0x10
02160e9c  str r1,[r7,#0x0]
02160ea0  mov r3,r0, lsr #0x10
02160ea4  mov r0,r1
02160ea8  str r3,[r7,#0x8]
02160eac  mov r1,r2
02160eb0  str r3,[r7,#0x4]
02160eb4  mov r5,#0x1
02160eb8  bl 0x02051098
02160ebc  ldr r1,[sp,#0x18]
02160ec0  strh r0,[r7,#0xc]
02160ec4  mov r0,r1, lsl #0x10
02160ec8  str r6,[r7,#0x10]
02160ecc  mov r0,r0, lsr #0x10
02160ed0  str r0,[r7,#0x18]
02160ed4  mov r0,#0x2
02160ed8  str r0,[r4,#0x10]
02160edc  mov r0,#0x0
02160ee0  str r0,[r4,#0x18]
02160ee4  mov r0,r5
02160ee8  add sp,sp,#0x4
02160eec  ldmia sp!,{r4,r5,r6,r7,pc}
