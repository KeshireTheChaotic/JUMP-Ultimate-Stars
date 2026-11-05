02150330  stmdb sp!,{r3,lr}
02150334  sub sp,sp,#0x8
02150338  ldr r2,[r0,#0x4]
0215033c  add r1,sp,#0x4
02150340  ldr lr,[r2,#0x10]
02150344  add r2,sp,#0x0
02150348  ldr r3,[lr,#0x74]
0215034c  add r12,r3,#0x1
02150350  mov r3,r12, lsr #0x2
02150354  rsb r3,r3,#0x0
02150358  str r12,[lr,#0x74]
0215035c  mov r3,r3, lsl #0xc
02150360  str r3,[sp,#0x0]
02150364  ldr r3,[lr,#0x74]
02150368  mov r3,r3, lsr #0x2
0215036c  mov r3,r3, lsl #0xc
02150370  str r3,[sp,#0x4]
02150374  bl 0x0214e990
02150378  add sp,sp,#0x8
0215037c  ldmia sp!,{r3,pc}
