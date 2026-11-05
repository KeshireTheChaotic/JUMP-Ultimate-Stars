021599a0  stmdb sp!,{r3,lr}
021599a4  sub sp,sp,#0x8
021599a8  ldr r2,[r0,#0x4]
021599ac  add r1,sp,#0x4
021599b0  ldr lr,[r2,#0x10]
021599b4  add r2,sp,#0x0
021599b8  ldr r3,[lr,#0x54]
021599bc  add r12,r3,#0x1
021599c0  mov r3,r12, lsr #0x2
021599c4  rsb r3,r3,#0x0
021599c8  str r12,[lr,#0x54]
021599cc  mov r3,r3, lsl #0xc
021599d0  str r3,[sp,#0x0]
021599d4  ldr r3,[lr,#0x54]
021599d8  mov r3,r3, lsr #0x2
021599dc  mov r3,r3, lsl #0xc
021599e0  str r3,[sp,#0x4]
021599e4  bl 0x0214e990
021599e8  add sp,sp,#0x8
021599ec  ldmia sp!,{r3,pc}
