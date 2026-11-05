0204a8c8  stmdb sp!,{r3,lr}
0204a8cc  ldr r12,[r0,#0x6c]
0204a8d0  ldr lr,[r0,#0x60]
0204a8d4  mul r12,r2,r12
0204a8d8  add lr,lr,r1
0204a8dc  ldrb r2,[r0,#0x4d]
0204a8e0  mov r0,#0x1
0204a8e4  ldrb r1,[lr,r12]
0204a8e8  mov r0,r0, lsl r2
0204a8ec  and r0,r0,#0xff
0204a8f0  mvn r0,r0
0204a8f4  and r0,r1,r0
0204a8f8  orr r0,r0,r3, lsl r2
0204a8fc  strb r0,[lr,r12]
0204a900  ldmia sp!,{r3,pc}
