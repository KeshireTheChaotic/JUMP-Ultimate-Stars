0214d95c  stmdb sp!,{r3,lr}
0214d960  ldr r2,[0x214d98c]
0214d964  ldr r1,[0x214d990]
0214d968  ldr r12,[r2,#0x0]
0214d96c  ldr r3,[r1,#0x0]
0214d970  sub r12,r12,#0x1
0214d974  ldr r1,[0x214d994]
0214d978  str r12,[r2,#0x0]
0214d97c  str r3,[r1,r12,lsl #0x2]
0214d980  ldr r0,[r0,#0x4]
0214d984  bl 0x020314a0
0214d988  ldmia sp!,{r3,pc}
