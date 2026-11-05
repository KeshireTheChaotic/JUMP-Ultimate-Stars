0219fae0  stmdb sp!,{r3,lr}
0219fae4  ldr r0,[0x219fb1c]
0219fae8  ldr r0,[r0,#0x0]
0219faec  cmp r0,#0x0
0219faf0  ldmiaeq sp!,{r3,pc}
0219faf4  bl 0x0219b620
0219faf8  mov r0,r0, lsl #0x18
0219fafc  mov r1,#0x0
0219fb00  mov r12,#0xff
0219fb04  mov r3,r0, asr #0x18
0219fb08  mov r2,r1
0219fb0c  mov r0,#0x25
0219fb10  str r12,[sp,#0x0]
0219fb14  bl 0x0219f834
0219fb18  ldmia sp!,{r3,pc}
