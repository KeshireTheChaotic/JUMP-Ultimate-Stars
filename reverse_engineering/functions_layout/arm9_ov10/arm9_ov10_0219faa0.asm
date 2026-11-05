0219faa0  stmdb sp!,{r3,lr}
0219faa4  ldr r0,[0x219fadc]
0219faa8  ldr r0,[r0,#0x0]
0219faac  cmp r0,#0x0
0219fab0  ldmiaeq sp!,{r3,pc}
0219fab4  bl 0x0219b620
0219fab8  mov r0,r0, lsl #0x18
0219fabc  mov r1,#0x0
0219fac0  mov r12,#0xff
0219fac4  mov r3,r0, asr #0x18
0219fac8  mov r2,r1
0219facc  mov r0,#0x24
0219fad0  str r12,[sp,#0x0]
0219fad4  bl 0x0219f834
0219fad8  ldmia sp!,{r3,pc}
