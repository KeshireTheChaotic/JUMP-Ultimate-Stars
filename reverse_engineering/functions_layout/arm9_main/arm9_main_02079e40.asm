02079e40  stmdb sp!,{r3,lr}
02079e44  sub sp,sp,#0x8
02079e48  ldr r3,[r2,#0x4]
02079e4c  mov r2,r1
02079e50  ldr r1,[r3,#0x64]
02079e54  ldrsh r12,[r2,#0x8]
02079e58  ldrsh r3,[r2,#0x4]
02079e5c  ldrb lr,[r1,#0x48]
02079e60  ldrb r1,[r1,#0x49]
02079e64  add r3,r12,r3
02079e68  mov r12,lr, lsl #0x1
02079e6c  add r3,r3,r3, lsr #0x1f
02079e70  rsb r12,r12,#0x1
02079e74  mov r3,r3, asr #0x1
02079e78  mul r3,r12,r3
02079e7c  strh r3,[sp,#0x0]
02079e80  mov r1,r1, lsl #0x1
02079e84  ldrsh r12,[r2,#0xa]
02079e88  ldrsh r3,[r2,#0x6]
02079e8c  rsb lr,r1,#0x1
02079e90  add r1,r12,r3
02079e94  add r1,r1,r1, lsr #0x1f
02079e98  mov r1,r1, asr #0x1
02079e9c  mul r1,lr,r1
02079ea0  strh r1,[sp,#0x2]
02079ea4  ldrsh lr,[r2,#0x8]
02079ea8  ldrsh r3,[r2,#0x4]
02079eac  mov r12,#0xc
02079eb0  add r1,sp,#0x0
02079eb4  sub r3,lr,r3
02079eb8  add r3,r3,r3, lsr #0x1f
02079ebc  mov r3,r3, asr #0x1
02079ec0  strh r3,[sp,#0x4]
02079ec4  ldrsh lr,[r2,#0xa]
02079ec8  ldrsh r3,[r2,#0x6]
02079ecc  sub r3,lr,r3
02079ed0  add r3,r3,r3, lsr #0x1f
02079ed4  mov r3,r3, asr #0x1
02079ed8  strh r3,[sp,#0x6]
02079edc  ldrsb r3,[r2,#0xe]
02079ee0  ldrsb r2,[r2,#0xf]
02079ee4  mov r3,r3, lsl #0x1a
02079ee8  mov r3,r3, asr #0x1a
02079eec  mla r0,r3,r12,r0
02079ef0  mov r2,r2, lsl #0x1a
02079ef4  ldr r0,[r0,#0x70]
02079ef8  mov r2,r2, asr #0x1a
02079efc  bl 0x0207b22c
02079f00  add sp,sp,#0x8
02079f04  ldmia sp!,{r3,pc}
