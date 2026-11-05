0206b304  stmdb sp!,{r4,lr}
0206b308  sub sp,sp,#0x240
0206b30c  mov r4,r0
0206b310  ldrh r2,[r4,#0xe]
0206b314  ldrb r3,[r4,#0x10]
0206b318  ldr r0,[r4,#0x4]
0206b31c  add r1,sp,#0x40
0206b320  bl 0x0206ae7c
0206b324  ldrb lr,[r4,#0x16]
0206b328  mov r12,#0x0
0206b32c  add r3,sp,#0x40
0206b330  add r0,sp,#0x0
0206b334  b 0x0206b354
0206b338  ldrb r1,[r4,#0x10]
0206b33c  mov r2,r12, lsl #0x1
0206b340  add r12,r12,#0x1
0206b344  sub r1,r1,lr
0206b348  add r1,r3,r1, lsl #0x1
0206b34c  ldrh r1,[r2,r1]
0206b350  strh r1,[r0,r2]
0206b354  cmp r12,lr
0206b358  blt 0x0206b338
0206b35c  ldrb r0,[r4,#0x10]
0206b360  add r2,sp,#0x40
0206b364  sub r3,r0,#0x1
0206b368  b 0x0206b384
0206b36c  sub r0,r3,r0
0206b370  mov r0,r0, lsl #0x1
0206b374  ldrh r1,[r2,r0]
0206b378  mov r0,r3, lsl #0x1
0206b37c  sub r3,r3,#0x1
0206b380  strh r1,[r2,r0]
0206b384  ldrb r0,[r4,#0x16]
0206b388  cmp r3,r0
0206b38c  bge 0x0206b36c
0206b390  mov r12,#0x0
0206b394  add r2,sp,#0x0
0206b398  add r1,sp,#0x40
0206b39c  b 0x0206b3b0
0206b3a0  mov r3,r12, lsl #0x1
0206b3a4  ldrh r0,[r2,r3]
0206b3a8  add r12,r12,#0x1
0206b3ac  strh r0,[r1,r3]
0206b3b0  ldrb r0,[r4,#0x16]
0206b3b4  cmp r12,r0
0206b3b8  blt 0x0206b3a0
0206b3bc  ldr r0,[r4,#0x4]
0206b3c0  ldrh r2,[r4,#0xe]
0206b3c4  ldrb r3,[r4,#0x10]
0206b3c8  ldr r0,[r0,#0x4]
0206b3cc  add r1,sp,#0x40
0206b3d0  bl 0x02029c68
0206b3d4  add sp,sp,#0x240
0206b3d8  ldmia sp!,{r4,pc}
