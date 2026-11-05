037ff130  stmdb sp!,{r4,r5,r6,r7,lr}
037ff134  sub sp,sp,#0x4
037ff138  mov r7,r2
037ff13c  mov r6,r3
037ff140  ldr r5,[sp,#0x18]
037ff144  mov r4,r0, lsl #0x4
037ff148  ldr r2,[0x37ff1cc]
037ff14c  strb r5,[r2,r0]
037ff150  ldr r2,[0x37ff1d0]
037ff154  ldr r2,[r2,#0x0]
037ff158  cmp r2,#0x0
037ff15c  movge r5,r2
037ff160  ldr r2,[0x37ff1d4]
037ff164  strb r1,[r2,r0]
037ff168  ldr r2,[0x37ff1d8]
037ff16c  ldr r2,[r2,#0x0]
037ff170  cmp r2,#0x0
037ff174  ble 0x037ff19c
037ff178  mov r2,#0x1
037ff17c  mov r2,r2, lsl r0
037ff180  ldr r0,[0x37ff1dc]
037ff184  ands r0,r2,r0
037ff188  beq 0x037ff19c
037ff18c  mov r0,r1
037ff190  mov r1,r5
037ff194  bl 0x037fee8c
037ff198  mov r1,r0
037ff19c  mov r0,r5, lsl #0x10
037ff1a0  orr r0,r0,#0x60000000
037ff1a4  orr r0,r0,r7, lsl #0x8
037ff1a8  orr r1,r1,r0
037ff1ac  add r0,r4,#0x4000000
037ff1b0  str r1,[r0,#0x400]
037ff1b4  rsb r1,r6,#0x10000
037ff1b8  add r0,r0,#0x400
037ff1bc  strh r1,[r0,#0x8]
037ff1c0  add sp,sp,#0x4
037ff1c4  ldmia sp!,{r4,r5,r6,r7,lr}
037ff1c8  bx lr
