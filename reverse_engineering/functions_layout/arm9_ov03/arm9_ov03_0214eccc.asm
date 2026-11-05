0214eccc  stmdb sp!,{r3,lr}
0214ecd0  sub sp,sp,#0x8
0214ecd4  ldr r12,[r0,#0x4]
0214ecd8  add r1,sp,#0x4
0214ecdc  ldrsh r3,[r12,#0xa2]
0214ece0  add r2,sp,#0x0
0214ece4  mov r3,r3, lsl #0xc
0214ece8  str r3,[sp,#0x0]
0214ecec  ldrsh r3,[r12,#0xa0]
0214ecf0  mov r3,r3, lsl #0xc
0214ecf4  str r3,[sp,#0x4]
0214ecf8  bl 0x0214e990
0214ecfc  add sp,sp,#0x8
0214ed00  ldmia sp!,{r3,pc}
