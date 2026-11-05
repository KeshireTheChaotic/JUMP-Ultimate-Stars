02150308  stmdb sp!,{r3,lr}
0215030c  sub sp,sp,#0x8
02150310  ldr r12,[r1,#0x4]
02150314  ldr lr,[r12,#0x10]
02150318  strh r2,[lr,#0x0]
0215031c  strh r3,[lr,#0x2]
02150320  ldrsh r12,[lr,#0x2]
02150324  ldrsh r3,[r0,#0x22]
02150328  add r2,sp,#0x0
0215032c  add r3,r12,r3
02150330  mov r3,r3, lsl #0xc
02150334  str r3,[sp,#0x0]
02150338  ldrsh r3,[r0,#0x20]
0215033c  ldrsh r12,[lr,#0x0]
02150340  mov r0,r1
02150344  add r1,sp,#0x4
02150348  add r3,r12,r3
0215034c  mov r3,r3, lsl #0xc
02150350  str r3,[sp,#0x4]
02150354  bl 0x0214e1b8
02150358  add sp,sp,#0x8
0215035c  ldmia sp!,{r3,pc}
