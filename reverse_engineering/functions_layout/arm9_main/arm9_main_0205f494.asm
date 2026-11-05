0205f494  stmdb sp!,{r4,r5,r6,r7,r8,lr}
0205f498  ldr r12,[sp,#0x1c]
0205f49c  ldr r8,[sp,#0x18]
0205f4a0  mov r12,r12, lsl #0x1c
0205f4a4  mov r4,r12, lsr #0x10
0205f4a8  mov r6,#0x0
0205f4ac  cmp r2,#0x0
0205f4b0  ldmiale sp!,{r4,r5,r6,r7,r8,pc}
0205f4b4  mov lr,r3, lsl #0x1
0205f4b8  mov r12,r6
0205f4bc  mov r5,r0
0205f4c0  mov r7,r12
0205f4c4  cmp r1,#0x0
0205f4c8  ble 0x0205f4e4
0205f4cc  orr r3,r4,r8
0205f4d0  add r7,r7,#0x1
0205f4d4  cmp r7,r1
0205f4d8  add r8,r8,#0x1
0205f4dc  strh r3,[r5],#0x2
0205f4e0  blt 0x0205f4cc
0205f4e4  add r6,r6,#0x1
0205f4e8  cmp r6,r2
0205f4ec  add r0,r0,lr
0205f4f0  blt 0x0205f4bc
0205f4f4  ldmia sp!,{r4,r5,r6,r7,r8,pc}
