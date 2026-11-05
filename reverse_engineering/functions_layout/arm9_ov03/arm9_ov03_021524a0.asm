021524a0  stmdb sp!,{r3,lr}
021524a4  sub sp,sp,#0x8
021524a8  ldr r2,[r0,#0x4]
021524ac  add r1,sp,#0x4
021524b0  ldr lr,[r2,#0x10]
021524b4  add r2,sp,#0x0
021524b8  ldr r3,[lr,#0x4c]
021524bc  add r12,r3,#0x1
021524c0  mov r3,r12, lsr #0x2
021524c4  rsb r3,r3,#0x0
021524c8  str r12,[lr,#0x4c]
021524cc  mov r3,r3, lsl #0xc
021524d0  str r3,[sp,#0x0]
021524d4  ldr r3,[lr,#0x4c]
021524d8  mov r3,r3, lsr #0x2
021524dc  mov r3,r3, lsl #0xc
021524e0  str r3,[sp,#0x4]
021524e4  bl 0x0214e990
021524e8  add sp,sp,#0x8
021524ec  ldmia sp!,{r3,pc}
