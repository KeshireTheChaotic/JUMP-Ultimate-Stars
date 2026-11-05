0219fb20  stmdb sp!,{r3,lr}
0219fb24  ldr r0,[0x219fb5c]
0219fb28  ldr r0,[r0,#0x0]
0219fb2c  cmp r0,#0x0
0219fb30  ldmiaeq sp!,{r3,pc}
0219fb34  bl 0x0219b620
0219fb38  mov r12,#0xff
0219fb3c  mov r3,r0, lsl #0x18
0219fb40  mov r1,#0x0
0219fb44  mov r2,r1
0219fb48  add r0,r12,#0x3
0219fb4c  mov r3,r3, asr #0x18
0219fb50  str r12,[sp,#0x0]
0219fb54  bl 0x0219f834
0219fb58  ldmia sp!,{r3,pc}
