02166288  stmdb sp!,{r4,lr}
0216628c  mov r4,r1
02166290  bl 0x02083648
02166294  ldr r2,[r4,#0xc]
02166298  mov r1,#0x1
0216629c  ldrb r0,[r2,#0x14d]
021662a0  sub r0,r0,#0x1
021662a4  strb r0,[r2,#0x14d]
021662a8  ldrb r0,[r4,#0x23]
021662ac  ldr r2,[r4,#0xc]
021662b0  mvn r0,r1, lsl r0
021662b4  ldr r1,[r2,#0x148]
021662b8  and r0,r1,r0
021662bc  str r0,[r2,#0x148]
021662c0  ldmia sp!,{r4,pc}
