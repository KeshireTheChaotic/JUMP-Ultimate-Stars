0204a904  stmdb sp!,{r3,lr}
0204a908  ldr r12,[r0,#0x6c]
0204a90c  ldr lr,[r0,#0x60]
0204a910  mul r12,r2,r12
0204a914  add lr,lr,r1
0204a918  ldrb r2,[r0,#0x4c]
0204a91c  mov r0,#0x1
0204a920  ldrb r1,[lr,r12]
0204a924  mov r0,r0, lsl r2
0204a928  and r0,r0,#0xff
0204a92c  mvn r0,r0
0204a930  and r0,r1,r0
0204a934  orr r0,r0,r3, lsl r2
0204a938  strb r0,[lr,r12]
0204a93c  ldmia sp!,{r3,pc}
