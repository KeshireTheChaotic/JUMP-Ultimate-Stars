02150360  stmdb sp!,{r3,lr}
02150364  sub sp,sp,#0x8
02150368  ldr r3,[r1,#0x4]
0215036c  ldr lr,[r3,#0x10]
02150370  strh r2,[lr,#0x2]
02150374  ldrsh r12,[lr,#0x2]
02150378  ldrsh r3,[r0,#0x22]
0215037c  add r2,sp,#0x0
02150380  add r3,r12,r3
02150384  mov r3,r3, lsl #0xc
02150388  str r3,[sp,#0x0]
0215038c  ldrsh r3,[r0,#0x20]
02150390  ldrsh r12,[lr,#0x0]
02150394  mov r0,r1
02150398  add r1,sp,#0x4
0215039c  add r3,r12,r3
021503a0  mov r3,r3, lsl #0xc
021503a4  str r3,[sp,#0x4]
021503a8  bl 0x0214e1b8
021503ac  add sp,sp,#0x8
021503b0  ldmia sp!,{r3,pc}
