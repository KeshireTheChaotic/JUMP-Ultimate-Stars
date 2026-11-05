02059d28  stmdb sp!,{r4,r5,lr}
02059d2c  sub sp,sp,#0x4
02059d30  mov r12,#0x1
02059d34  mov r3,r12, lsl r3
02059d38  sub r3,r3,#0x1
02059d3c  mov r5,r0
02059d40  and r0,r1,r3
02059d44  mov r4,r2
02059d48  bl 0x02050dd0
02059d4c  add r1,r5,#0x800
02059d50  ldrh r1,[r1,#0x10]
02059d54  mla r0,r1,r0,r4
02059d58  add sp,sp,#0x4
02059d5c  ldmia sp!,{r4,r5,lr}
02059d60  bx lr
