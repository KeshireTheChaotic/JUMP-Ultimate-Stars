037ff298  stmdb sp!,{r4,r5,r6,r7,r8,lr}
037ff29c  mov r8,r1
037ff2a0  mov r7,r2
037ff2a4  mov r6,r3
037ff2a8  ldr r1,[sp,#0x20]
037ff2ac  ldr r5,[sp,#0x2c]
037ff2b0  mov r4,r0, lsl #0x4
037ff2b4  ldr r2,[0x37ff354]
037ff2b8  strb r5,[r2,r0]
037ff2bc  ldr r2,[0x37ff358]
037ff2c0  ldr r2,[r2,#0x0]
037ff2c4  cmp r2,#0x0
037ff2c8  movge r5,r2
037ff2cc  ldr r2,[0x37ff35c]
037ff2d0  strb r1,[r2,r0]
037ff2d4  ldr r2,[0x37ff360]
037ff2d8  ldr r2,[r2,#0x0]
037ff2dc  cmp r2,#0x0
037ff2e0  ble 0x037ff308
037ff2e4  mov r2,#0x1
037ff2e8  mov r2,r2, lsl r0
037ff2ec  ldr r0,[0x37ff364]
037ff2f0  ands r0,r2,r0
037ff2f4  beq 0x037ff308
037ff2f8  mov r0,r1
037ff2fc  mov r1,r5
037ff300  bl 0x037fee8c
037ff304  mov r1,r0
037ff308  ldr r2,[sp,#0x24]
037ff30c  mov r0,r7, lsl #0x1d
037ff310  orr r0,r0,r6, lsl #0x1b
037ff314  orr r0,r0,r5, lsl #0x10
037ff318  orr r0,r0,r2, lsl #0x8
037ff31c  orr r0,r1,r0
037ff320  add r1,r4,#0x4000000
037ff324  str r0,[r1,#0x400]
037ff328  ldr r0,[sp,#0x28]
037ff32c  rsb r2,r0,#0x10000
037ff330  add r0,r1,#0x400
037ff334  strh r2,[r0,#0x8]
037ff338  ldr r2,[sp,#0x18]
037ff33c  strh r2,[r0,#0xa]
037ff340  ldr r0,[sp,#0x1c]
037ff344  str r0,[r1,#0x40c]
037ff348  str r8,[r1,#0x404]
037ff34c  ldmia sp!,{r4,r5,r6,r7,r8,lr}
037ff350  bx lr
