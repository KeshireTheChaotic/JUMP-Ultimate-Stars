037ff080  stmdb sp!,{r4,r5,lr}
037ff084  sub sp,sp,#0x4
037ff088  mov r5,r0
037ff08c  mov r4,r2
037ff090  ldr r0,[0x37ff0f8]
037ff094  strb r1,[r0,r5]
037ff098  ldr r0,[0x37ff0fc]
037ff09c  ldr r0,[r0,#0x0]
037ff0a0  cmp r0,#0x0
037ff0a4  ble 0x037ff0d8
037ff0a8  mov r0,#0x1
037ff0ac  mov r2,r0, lsl r5
037ff0b0  ldr r0,[0x37ff100]
037ff0b4  ands r0,r2,r0
037ff0b8  beq 0x037ff0d8
037ff0bc  mov r0,r5, lsl #0x4
037ff0c0  add r0,r0,#0x4000000
037ff0c4  ldrb r2,[r0,#0x402]
037ff0c8  mov r0,r1
037ff0cc  mov r1,r2
037ff0d0  bl 0x037fee8c
037ff0d4  mov r1,r0
037ff0d8  orr r1,r1,r4, lsl #0x8
037ff0dc  mov r0,r5, lsl #0x4
037ff0e0  add r0,r0,#0x4000000
037ff0e4  add r0,r0,#0x400
037ff0e8  strh r1,[r0,#0x0]
037ff0ec  add sp,sp,#0x4
037ff0f0  ldmia sp!,{r4,r5,lr}
037ff0f4  bx lr
