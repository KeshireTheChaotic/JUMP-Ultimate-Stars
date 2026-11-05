037ff94c  stmdb sp!,{lr}
037ff950  sub sp,sp,#0x4
037ff954  ldrh lr,[r0,#0x24]
037ff958  and r2,lr,#0xff
037ff95c  ldrh r12,[r1,#0x24]
037ff960  and r0,r12,#0xff
037ff964  mov r2,r2, lsl #0x4
037ff968  mov r3,r0, lsl #0x4
037ff96c  ldr r1,[0x37ff9a8]
037ff970  ldrb r0,[r1,lr,asr #0x8]
037ff974  mov r2,r2, asr r0
037ff978  ldrb r0,[r1,r12,asr #0x8]
037ff97c  mov r0,r3, asr r0
037ff980  cmp r2,r0
037ff984  beq 0x037ff998
037ff988  cmp r2,r0
037ff98c  movlt r0,#0x1
037ff990  mvnge r0,#0x0
037ff994  b 0x037ff99c
037ff998  mov r0,#0x0
037ff99c  add sp,sp,#0x4
037ff9a0  ldmia sp!,{lr}
037ff9a4  bx lr
