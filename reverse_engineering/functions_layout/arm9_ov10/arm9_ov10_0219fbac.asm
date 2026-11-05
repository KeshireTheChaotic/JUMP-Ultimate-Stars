0219fbac  stmdb sp!,{r3,lr}
0219fbb0  ldr r0,[0x219fbf4]
0219fbb4  ldr r0,[r0,#0x0]
0219fbb8  cmp r0,#0x0
0219fbbc  ldmiaeq sp!,{r3,pc}
0219fbc0  bl 0x0219b634
0219fbc4  cmp r0,#0x0
0219fbc8  ldmiaeq sp!,{r3,pc}
0219fbcc  bl 0x0219b620
0219fbd0  mov r12,#0xff
0219fbd4  mov r3,r0, lsl #0x18
0219fbd8  mov r1,#0x0
0219fbdc  mov r2,r1
0219fbe0  add r0,r12,#0x6
0219fbe4  mov r3,r3, asr #0x18
0219fbe8  str r12,[sp,#0x0]
0219fbec  bl 0x0219f834
0219fbf0  ldmia sp!,{r3,pc}
