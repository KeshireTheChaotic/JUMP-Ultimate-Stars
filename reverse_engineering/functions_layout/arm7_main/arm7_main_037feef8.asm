037feef8  stmdb sp!,{r4,r5,r6,r7,r8,lr}
037feefc  ldr r1,[0x37fef50]
037fef00  str r0,[r1,#0x0]
037fef04  mov r4,#0x0
037fef08  ldr r6,[0x37fef54]
037fef0c  mov r7,#0x1
037fef10  ldr r5,[0x37fef58]
037fef14  mov r0,r7, lsl r4
037fef18  ands r0,r0,r5
037fef1c  beq 0x037fef3c
037fef20  mov r8,r4, lsl #0x4
037fef24  add r0,r8,#0x4000000
037fef28  ldrb r1,[r0,#0x402]
037fef2c  ldrb r0,[r6,r4]
037fef30  bl 0x037fee8c
037fef34  add r1,r8,#0x4000000
037fef38  strb r0,[r1,#0x400]
037fef3c  add r4,r4,#0x1
037fef40  cmp r4,#0x10
037fef44  blt 0x037fef14
037fef48  ldmia sp!,{r4,r5,r6,r7,r8,lr}
037fef4c  bx lr
