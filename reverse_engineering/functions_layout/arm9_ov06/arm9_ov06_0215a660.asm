0215a660  cmp r0,#0x0
0215a664  bxeq lr
0215a668  add r2,r0,r1, lsl #0x1
0215a66c  ldrh r3,[r2,#0x6e]
0215a670  ldr r2,[0x215a690]
0215a674  mov r12,r1, lsl #0x1
0215a678  cmp r3,r2
0215a67c  addcc r1,r0,#0x6e
0215a680  ldrhcc r0,[r1,r12]
0215a684  addcc r0,r0,#0x1
0215a688  strhcc r0,[r1,r12]
0215a68c  bx lr
