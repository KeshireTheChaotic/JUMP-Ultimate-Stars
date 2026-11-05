02161420  stmdb sp!,{r3,lr}
02161424  sub sp,sp,#0x8
02161428  ldr r12,[r0,#0x4]
0216142c  add r1,sp,#0x4
02161430  ldrsh r3,[r12,#0xa2]
02161434  add r2,sp,#0x0
02161438  mov r3,r3, lsl #0xc
0216143c  str r3,[sp,#0x0]
02161440  ldrsh r3,[r12,#0xa0]
02161444  mov r3,r3, lsl #0xc
02161448  str r3,[sp,#0x4]
0216144c  bl 0x021511c8
02161450  add sp,sp,#0x8
02161454  ldmia sp!,{r3,pc}
