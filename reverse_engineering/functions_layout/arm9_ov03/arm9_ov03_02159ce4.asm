02159ce4  stmdb sp!,{r3,lr}
02159ce8  sub sp,sp,#0x8
02159cec  ldr r12,[r0,#0x4]
02159cf0  add r1,sp,#0x4
02159cf4  ldrsh r3,[r12,#0xa2]
02159cf8  add r2,sp,#0x0
02159cfc  mov r3,r3, lsl #0xc
02159d00  str r3,[sp,#0x0]
02159d04  ldrsh r3,[r12,#0xa0]
02159d08  mov r3,r3, lsl #0xc
02159d0c  str r3,[sp,#0x4]
02159d10  bl 0x0214e990
02159d14  add sp,sp,#0x8
02159d18  ldmia sp!,{r3,pc}
