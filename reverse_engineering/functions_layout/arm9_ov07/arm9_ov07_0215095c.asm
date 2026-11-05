0215095c  stmdb sp!,{r3,lr}
02150960  sub sp,sp,#0x8
02150964  ldr r2,[r0,#0x4]
02150968  add r1,sp,#0x4
0215096c  ldr lr,[r2,#0x10]
02150970  add r2,sp,#0x0
02150974  ldr r3,[lr,#0x4]
02150978  add r12,r3,#0x1
0215097c  mov r3,r12, lsr #0x2
02150980  rsb r3,r3,#0x0
02150984  str r12,[lr,#0x4]
02150988  mov r3,r3, lsl #0xc
0215098c  str r3,[sp,#0x0]
02150990  ldr r3,[lr,#0x4]
02150994  mov r3,r3, lsr #0x2
02150998  mov r3,r3, lsl #0xc
0215099c  str r3,[sp,#0x4]
021509a0  bl 0x0214f218
021509a4  add sp,sp,#0x8
021509a8  ldmia sp!,{r3,pc}
