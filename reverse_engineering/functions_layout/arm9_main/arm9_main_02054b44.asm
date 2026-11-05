02054b44  stmdb sp!,{lr}
02054b48  sub sp,sp,#0xc
02054b4c  bl 0x02055238
02054b50  ldr r1,[0x2054be4]
02054b54  ldr r3,[0x2054be8]
02054b58  ldrh r12,[r1,#0x0]
02054b5c  ldr r2,[0x2054bec]
02054b60  mvn r1,#0x0
02054b64  strh r12,[sp,#0x0]
02054b68  ldr r12,[r3,#0x0]
02054b6c  ldr r3,[r3,#0x4]
02054b70  and r1,r12,r1
02054b74  and r2,r3,r2
02054b78  str r1,[sp,#0x4]
02054b7c  ldr r1,[0x2054bf0]
02054b80  str r2,[sp,#0x8]
02054b84  ldr r1,[r1,#0x0]
02054b88  ands r1,r1,#0x8
02054b8c  beq 0x02054bb8
02054b90  ldrh r1,[sp,#0x0]
02054b94  ands r1,r1,#0x8000
02054b98  bne 0x02054bb8
02054b9c  ldr r3,[sp,#0x4]
02054ba0  mov r1,#0x1
02054ba4  ldr r2,[sp,#0x8]
02054ba8  adds r3,r3,r1
02054bac  adc r1,r2,#0x0
02054bb0  str r3,[sp,#0x4]
02054bb4  str r1,[sp,#0x8]
02054bb8  bl 0x0205524c
02054bbc  ldr r2,[sp,#0x4]
02054bc0  ldr r1,[sp,#0x8]
02054bc4  ldrh r0,[sp,#0x0]
02054bc8  mov r1,r1, lsl #0x10
02054bcc  orr r1,r1,r2, lsr #0x10
02054bd0  orr r1,r1,r0, asr #0x1f
02054bd4  orr r0,r0,r2, lsl #0x10
02054bd8  add sp,sp,#0xc
02054bdc  ldmia sp!,{lr}
02054be0  bx lr
