02155970  stmdb sp!,{r3,lr}
02155974  ldr r2,[r1,#0x0]
02155978  add r1,sp,#0x0
0215597c  str r2,[sp,#0x0]
02155980  ldr r0,[r0,#0x4]
02155984  bl 0x02023700
02155988  ldmia sp!,{r3,pc}
