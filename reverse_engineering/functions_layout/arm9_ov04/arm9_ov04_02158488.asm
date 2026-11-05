02158488  stmdb sp!,{r3,lr}
0215848c  cmp r0,#0x0
02158490  ldmiaeq sp!,{r3,pc}
02158494  add r0,r0,r1, lsl #0x2
02158498  ldr r0,[r0,#0x4]
0215849c  bl 0x021581e8
021584a0  ldmia sp!,{r3,pc}
