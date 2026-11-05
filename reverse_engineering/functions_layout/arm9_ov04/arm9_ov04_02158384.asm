02158384  stmdb sp!,{r3,lr}
02158388  cmp r0,#0x0
0215838c  moveq r0,#0x0
02158390  ldmiaeq sp!,{r3,pc}
02158394  add r0,r0,r1, lsl #0x2
02158398  ldr r0,[r0,#0x4]
0215839c  bl 0x02157ef0
021583a0  ldmia sp!,{r3,pc}
