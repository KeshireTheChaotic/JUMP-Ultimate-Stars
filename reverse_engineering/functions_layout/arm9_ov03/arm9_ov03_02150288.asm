02150288  stmdb sp!,{r3,lr}
0215028c  sub sp,sp,#0x8
02150290  ldr r12,[r0,#0x4]
02150294  add r1,sp,#0x4
02150298  ldrsh r3,[r12,#0xa2]
0215029c  add r2,sp,#0x0
021502a0  mov r3,r3, lsl #0xc
021502a4  str r3,[sp,#0x0]
021502a8  ldrsh r3,[r12,#0xa0]
021502ac  mov r3,r3, lsl #0xc
021502b0  str r3,[sp,#0x4]
021502b4  bl 0x0214e990
021502b8  add sp,sp,#0x8
021502bc  ldmia sp!,{r3,pc}
