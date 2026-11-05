0219fa60  stmdb sp!,{r3,lr}
0219fa64  ldr r0,[0x219fa9c]
0219fa68  ldr r0,[r0,#0x0]
0219fa6c  cmp r0,#0x0
0219fa70  ldmiaeq sp!,{r3,pc}
0219fa74  bl 0x0219b620
0219fa78  mov r0,r0, lsl #0x18
0219fa7c  mov r1,#0x0
0219fa80  mov r12,#0xff
0219fa84  mov r3,r0, asr #0x18
0219fa88  mov r2,r1
0219fa8c  mov r0,#0x27
0219fa90  str r12,[sp,#0x0]
0219fa94  bl 0x0219f834
0219fa98  ldmia sp!,{r3,pc}
