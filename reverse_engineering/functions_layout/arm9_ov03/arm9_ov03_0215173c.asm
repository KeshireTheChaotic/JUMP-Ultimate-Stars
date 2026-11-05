0215173c  stmdb sp!,{r3,lr}
02151740  sub sp,sp,#0x8
02151744  ldr r2,[r0,#0x4]
02151748  add r1,sp,#0x4
0215174c  ldr lr,[r2,#0x10]
02151750  add r2,sp,#0x0
02151754  ldr r3,[lr,#0x5c]
02151758  add r12,r3,#0x1
0215175c  mov r3,r12, lsr #0x2
02151760  rsb r3,r3,#0x0
02151764  str r12,[lr,#0x5c]
02151768  mov r3,r3, lsl #0xc
0215176c  str r3,[sp,#0x0]
02151770  ldr r3,[lr,#0x5c]
02151774  mov r3,r3, lsr #0x2
02151778  mov r3,r3, lsl #0xc
0215177c  str r3,[sp,#0x4]
02151780  bl 0x0214e990
02151784  add sp,sp,#0x8
02151788  ldmia sp!,{r3,pc}
