02161928  stmdb sp!,{r4,r5,r6,lr}
0216192c  mov r6,r0
02161930  ldr r0,[r6,#0x20]
02161934  mov r5,r3
02161938  ldr r0,[r0,#0xc]
0216193c  ldr r4,[r0,#0x24]
02161940  ldrb r0,[r4,#0x1]
02161944  cmp r0,#0x5
02161948  movne r0,#0x0
0216194c  ldmiane sp!,{r4,r5,r6,pc}
02161950  mov r0,#0x1
02161954  strb r0,[r4,#0x1]
02161958  mov r3,r2, lsl #0x10
0216195c  str r1,[r6,#0x0]
02161960  mov r3,r3, lsr #0x10
02161964  mov r0,r1
02161968  mov r1,r2
0216196c  str r3,[r6,#0x4]
02161970  bl 0x02051098
02161974  strh r0,[r6,#0xc]
02161978  ldr r0,[sp,#0x10]
0216197c  str r5,[r6,#0x10]
02161980  mov r0,r0, lsl #0x10
02161984  mov r3,r0, lsr #0x10
02161988  add r1,r4,#0x10
0216198c  mov r0,#0x0
02161990  mov r2,#0x158
02161994  str r3,[r6,#0x18]
02161998  bl 0x0205174c
0216199c  mov r0,#0x1
021619a0  ldmia sp!,{r4,r5,r6,pc}
