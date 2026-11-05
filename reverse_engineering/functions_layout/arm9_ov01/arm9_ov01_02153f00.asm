02153f00  stmdb sp!,{r3,lr}
02153f04  sub sp,sp,#0x8
02153f08  ldr r2,[r0,#0x4]
02153f0c  add r1,sp,#0x4
02153f10  ldr lr,[r2,#0x10]
02153f14  add r2,sp,#0x0
02153f18  ldr r3,[lr,#0x54]
02153f1c  add r12,r3,#0x1
02153f20  mov r3,r12, lsr #0x2
02153f24  rsb r3,r3,#0x0
02153f28  str r12,[lr,#0x54]
02153f2c  mov r3,r3, lsl #0xc
02153f30  str r3,[sp,#0x0]
02153f34  ldr r3,[lr,#0x54]
02153f38  mov r3,r3, lsr #0x2
02153f3c  mov r3,r3, lsl #0xc
02153f40  str r3,[sp,#0x4]
02153f44  bl 0x021511c8
02153f48  add sp,sp,#0x8
02153f4c  ldmia sp!,{r3,pc}
