0214ed44  stmdb sp!,{r3,lr}
0214ed48  sub sp,sp,#0x8
0214ed4c  ldr r2,[r0,#0x4]
0214ed50  add r1,sp,#0x4
0214ed54  ldr lr,[r2,#0x10]
0214ed58  add r2,sp,#0x0
0214ed5c  ldr r3,[lr,#0x68]
0214ed60  add r12,r3,#0x1
0214ed64  mov r3,r12, lsr #0x2
0214ed68  rsb r3,r3,#0x0
0214ed6c  str r12,[lr,#0x68]
0214ed70  mov r3,r3, lsl #0xc
0214ed74  str r3,[sp,#0x0]
0214ed78  ldr r3,[lr,#0x68]
0214ed7c  mov r3,r3, lsr #0x2
0214ed80  mov r3,r3, lsl #0xc
0214ed84  str r3,[sp,#0x4]
0214ed88  bl 0x0214e990
0214ed8c  add sp,sp,#0x8
0214ed90  ldmia sp!,{r3,pc}
