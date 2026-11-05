0215acb0  stmdb sp!,{r3,lr}
0215acb4  sub sp,sp,#0x8
0215acb8  ldr r0,[r0,#0x4]
0215acbc  add r1,sp,#0x4
0215acc0  ldr r12,[r0,#0x10]
0215acc4  add r2,sp,#0x0
0215acc8  ldr r0,[r12,#0x58]
0215accc  add r3,r0,#0x1
0215acd0  mov r0,r3, lsr #0x2
0215acd4  rsb r0,r0,#0x0
0215acd8  str r3,[r12,#0x58]
0215acdc  mov r0,r0, lsl #0xc
0215ace0  str r0,[sp,#0x0]
0215ace4  ldr r0,[r12,#0x58]
0215ace8  mov r0,r0, lsr #0x2
0215acec  mov r0,r0, lsl #0xc
0215acf0  str r0,[sp,#0x4]
0215acf4  ldr r0,[r12,#0x28]
0215acf8  bl 0x0214d4c0
0215acfc  bl 0x0207382c
0215ad00  add sp,sp,#0x8
0215ad04  ldmia sp!,{r3,pc}
