0215d100  stmdb sp!,{r3,r4,r5,lr}
0215d104  mov r5,r0
0215d108  add r0,sp,#0x0
0215d10c  mov r4,r2
0215d110  bl 0x0215ced4
0215d114  add r0,sp,#0x0
0215d118  ldr r0,[r0,#0x0]
0215d11c  bl 0x0215b71c
0215d120  bl 0x0215b6f4
0215d124  ldr r0,[r0,#0x4]
0215d128  mov r1,r5
0215d12c  ldr r0,[r0,#0x10]
0215d130  mov r2,#0x20
0215d134  add r0,r0,r4, lsl #0x1
0215d138  bl 0x02051890
0215d13c  ldmia sp!,{r3,r4,r5,pc}
