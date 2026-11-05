0217d750  stmdb sp!,{r3,lr}
0217d754  ldr r3,[r0,#0x4]
0217d758  ldr r2,[0x217d790]
0217d75c  ldr lr,[r3,#0x10]
0217d760  ldr r1,[r2,r1,lsl #0x2]
0217d764  ldr r12,[lr,#0x4]
0217d768  mvn r2,r1
0217d76c  ldr r3,[r12,#0xe4]
0217d770  mov r1,#0x0
0217d774  and r2,r3,r2
0217d778  str r2,[r12,#0xe4]
0217d77c  strb r1,[lr,#0x12]
0217d780  ldr r0,[r0,#0x4]
0217d784  ldr r1,[0x217d794]
0217d788  bl 0x02028384
0217d78c  ldmia sp!,{r3,pc}
