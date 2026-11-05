02158424  stmdb sp!,{r3,lr}
02158428  cmp r0,#0x0
0215842c  ldmiaeq sp!,{r3,pc}
02158430  add r0,r0,r1, lsl #0x2
02158434  ldr r0,[r0,#0x4]
02158438  bl 0x021580c0
0215843c  ldmia sp!,{r3,pc}
