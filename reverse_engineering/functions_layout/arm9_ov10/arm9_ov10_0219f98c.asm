0219f98c  stmdb sp!,{r3,r4,lr}
0219f990  sub sp,sp,#0x4
0219f994  ldr r0,[0x219f9e0]
0219f998  ldr r0,[r0,#0x0]
0219f99c  cmp r0,#0x0
0219f9a0  beq 0x0219f9d8
0219f9a4  bl 0x0219b620
0219f9a8  mov r4,r0
0219f9ac  bl 0x0219b688
0219f9b0  mov r1,#0x1
0219f9b4  mov r2,r1, lsl r0
0219f9b8  mov r0,r4, lsl #0x18
0219f9bc  mov r1,#0x0
0219f9c0  and r12,r2,#0xff
0219f9c4  mov r2,r1
0219f9c8  mov r3,r0, asr #0x18
0219f9cc  mov r0,#0x3
0219f9d0  str r12,[sp,#0x0]
0219f9d4  bl 0x0219f834
0219f9d8  add sp,sp,#0x4
0219f9dc  ldmia sp!,{r3,r4,pc}
