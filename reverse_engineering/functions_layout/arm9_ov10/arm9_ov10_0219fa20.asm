0219fa20  stmdb sp!,{r3,lr}
0219fa24  ldr r0,[0x219fa5c]
0219fa28  ldr r0,[r0,#0x0]
0219fa2c  cmp r0,#0x0
0219fa30  ldmiaeq sp!,{r3,pc}
0219fa34  bl 0x0219b620
0219fa38  mov r0,r0, lsl #0x18
0219fa3c  mov r1,#0x0
0219fa40  mov r12,#0xff
0219fa44  mov r3,r0, asr #0x18
0219fa48  mov r2,r1
0219fa4c  mov r0,#0x2
0219fa50  str r12,[sp,#0x0]
0219fa54  bl 0x0219f834
0219fa58  ldmia sp!,{r3,pc}
