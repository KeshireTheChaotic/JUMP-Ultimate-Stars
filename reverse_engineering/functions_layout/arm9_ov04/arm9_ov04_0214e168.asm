0214e168  stmdb sp!,{r3,lr}
0214e16c  sub sp,sp,#0x8
0214e170  ldr r2,[r0,#0x4]
0214e174  add r1,sp,#0x4
0214e178  ldr lr,[r2,#0x10]
0214e17c  add r2,sp,#0x0
0214e180  ldr r3,[lr,#0x4]
0214e184  add r12,r3,#0x1
0214e188  mov r3,r12, lsr #0x2
0214e18c  rsb r3,r3,#0x0
0214e190  str r12,[lr,#0x4]
0214e194  mov r3,r3, lsl #0xc
0214e198  str r3,[sp,#0x0]
0214e19c  ldr r3,[lr,#0x4]
0214e1a0  mov r3,r3, lsr #0x2
0214e1a4  mov r3,r3, lsl #0xc
0214e1a8  str r3,[sp,#0x4]
0214e1ac  bl 0x0214e1b8
0214e1b0  add sp,sp,#0x8
0214e1b4  ldmia sp!,{r3,pc}
