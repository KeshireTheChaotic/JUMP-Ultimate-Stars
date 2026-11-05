0201e400  stmdb sp!,{r4,lr}
0201e404  cmp r2,#0x0
0201e408  ldreq r2,[r0,#0x1c]
0201e40c  ldrh r4,[r0,#0x52]
0201e410  mov lr,#0x0
0201e414  b 0x0201e43c
0201e418  ldr r12,[r0,#0x4c]
0201e41c  add r3,r12,lr, lsl #0x4
0201e420  ldr r3,[r3,#0x4]
0201e424  cmp r3,r1
0201e428  ldreq r3,[r12,lr,lsl #0x4]
0201e42c  cmpeq r3,r2
0201e430  moveq r0,#0x1
0201e434  ldmiaeq sp!,{r4,pc}
0201e438  add lr,lr,#0x1
0201e43c  cmp lr,r4
0201e440  blt 0x0201e418
0201e444  mov r0,#0x0
0201e448  ldmia sp!,{r4,pc}
