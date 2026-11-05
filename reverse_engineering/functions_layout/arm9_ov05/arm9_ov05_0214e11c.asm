0214e11c  stmdb sp!,{r3,lr}
0214e120  ldr r3,[0x214e18c]
0214e124  ldr r3,[r3,#0x0]
0214e128  ldr r12,[r3,#0x44]
0214e12c  cmp r12,#0x0
0214e130  moveq r0,#0x0
0214e134  ldmiaeq sp!,{r3,pc}
0214e138  ldrb r3,[r0,#0x6]
0214e13c  cmp r3,#0x0
0214e140  movne r0,#0x0
0214e144  ldmiane sp!,{r3,pc}
0214e148  ldrsb r3,[r0,#0x8]
0214e14c  subs lr,r3,#0x3
0214e150  movmi r0,#0x0
0214e154  ldmiami sp!,{r3,pc}
0214e158  ldrb r3,[r0,#0x7]
0214e15c  mov r0,#0xd4
0214e160  mla r12,r3,r0,r12
0214e164  add r0,r12,lr, lsl #0x4
0214e168  add r3,r0,r1, lsl #0x3
0214e16c  add r0,r12,#0x64
0214e170  add r3,r3,r2, lsl #0x2
0214e174  add r0,r0,lr, lsl #0x4
0214e178  add r0,r0,r1, lsl #0x3
0214e17c  ldr r1,[r3,#0x64]
0214e180  add r0,r0,r2, lsl #0x2
0214e184  add r0,r1,r0
0214e188  ldmia sp!,{r3,pc}
