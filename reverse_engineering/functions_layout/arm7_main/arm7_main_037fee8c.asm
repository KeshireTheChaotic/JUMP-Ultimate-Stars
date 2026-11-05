037fee8c  cmp r1,#0x18
037fee90  bge 0x037feebc
037fee94  ldr r2,[0x37feef0]
037fee98  ldr r3,[r2,#0x0]
037fee9c  ldr r2,[0x37feef4]
037feea0  sub r2,r2,r3
037feea4  add r1,r1,#0x28
037feea8  mul r1,r3,r1
037feeac  add r1,r1,r2, lsl #0x6
037feeb0  mul r1,r0,r1
037feeb4  mov r0,r1, asr #0x15
037feeb8  bx lr
037feebc  cmp r1,#0x68
037feec0  bxle lr
037feec4  ldr r2,[0x37feef0]
037feec8  ldr r12,[r2,#0x0]
037feecc  ldr r2,[0x37feef4]
037feed0  add r3,r12,r2
037feed4  rsb r2,r12,#0x0
037feed8  sub r1,r1,#0x28
037feedc  mul r1,r2,r1
037feee0  add r1,r1,r3, lsl #0x6
037feee4  mul r1,r0,r1
037feee8  mov r0,r1, asr #0x15
037feeec  bx lr
