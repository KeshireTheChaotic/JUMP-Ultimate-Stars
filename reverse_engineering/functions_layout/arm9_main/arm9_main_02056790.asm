02056790  stmdb sp!,{r4,r5,lr}
02056794  sub sp,sp,#0x4
02056798  ldr r12,[sp,#0x18]
0205679c  mov r3,r3, lsl #0x1a
020567a0  orr r4,r3,r1, lsl #0x18
020567a4  ldr r5,[sp,#0x24]
020567a8  mov r3,r12, lsl #0x18
020567ac  ldr r1,[sp,#0x1c]
020567b0  ldr r12,[sp,#0x10]
020567b4  orr r4,r4,r5, lsl #0x10
020567b8  orr r4,r12,r4
020567bc  ldr lr,[sp,#0x20]
020567c0  orr r3,r3,r1, lsl #0x16
020567c4  ldr r12,[sp,#0x14]
020567c8  orr r1,r0,lr, lsl #0x10
020567cc  orr r3,r12,r3
020567d0  mov r0,#0xe
020567d4  str r4,[sp,#0x0]
020567d8  bl 0x02056594
020567dc  add sp,sp,#0x4
020567e0  ldmia sp!,{r4,r5,lr}
020567e4  bx lr
