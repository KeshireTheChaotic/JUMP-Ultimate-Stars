0215872c  stmdb sp!,{r3,lr}
02158730  sub sp,sp,#0x8
02158734  ldr r2,[r0,#0x4]
02158738  add r1,sp,#0x4
0215873c  ldr lr,[r2,#0x10]
02158740  add r2,sp,#0x0
02158744  ldr r3,[lr,#0xd4]
02158748  add r12,r3,#0x1
0215874c  mov r3,r12, lsr #0x2
02158750  rsb r3,r3,#0x0
02158754  str r12,[lr,#0xd4]
02158758  mov r3,r3, lsl #0xc
0215875c  str r3,[sp,#0x0]
02158760  ldr r3,[lr,#0xd4]
02158764  mov r3,r3, lsr #0x2
02158768  mov r3,r3, lsl #0xc
0215876c  str r3,[sp,#0x4]
02158770  bl 0x0214e990
02158774  add sp,sp,#0x8
02158778  ldmia sp!,{r3,pc}
