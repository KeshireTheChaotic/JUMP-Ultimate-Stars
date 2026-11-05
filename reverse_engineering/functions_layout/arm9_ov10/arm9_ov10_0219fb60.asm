0219fb60  stmdb sp!,{r3,lr}
0219fb64  ldr r0,[0x219fba8]
0219fb68  ldr r0,[r0,#0x0]
0219fb6c  cmp r0,#0x0
0219fb70  ldmiaeq sp!,{r3,pc}
0219fb74  bl 0x0219b634
0219fb78  cmp r0,#0x0
0219fb7c  ldmiaeq sp!,{r3,pc}
0219fb80  bl 0x0219b620
0219fb84  mov r0,r0, lsl #0x18
0219fb88  mov r1,#0x0
0219fb8c  mov r12,#0xff
0219fb90  mov r3,r0, asr #0x18
0219fb94  mov r2,r1
0219fb98  mov r0,#0x104
0219fb9c  str r12,[sp,#0x0]
0219fba0  bl 0x0219f834
0219fba4  ldmia sp!,{r3,pc}
