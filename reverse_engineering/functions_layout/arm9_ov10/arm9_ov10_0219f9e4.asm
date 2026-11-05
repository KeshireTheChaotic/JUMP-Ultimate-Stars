0219f9e4  stmdb sp!,{r3,lr}
0219f9e8  ldr r1,[0x219fa1c]
0219f9ec  ldr r1,[r1,#0x0]
0219f9f0  cmp r1,#0x0
0219f9f4  ldmiaeq sp!,{r3,pc}
0219f9f8  mov r0,r0, lsl #0x18
0219f9fc  mov r1,#0x0
0219fa00  mov r12,#0xff
0219fa04  mov r2,r1
0219fa08  mov r3,r0, asr #0x18
0219fa0c  mov r0,#0x1
0219fa10  str r12,[sp,#0x0]
0219fa14  bl 0x0219f834
0219fa18  ldmia sp!,{r3,pc}
