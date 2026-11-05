0214f310  stmdb sp!,{r3,lr}
0214f314  ldrb r2,[r0,#0x0]
0214f318  cmp r2,#0x0
0214f31c  moveq r0,#0x1
0214f320  ldmiaeq sp!,{r3,pc}
0214f324  cmp r2,#0xff
0214f328  moveq r0,#0x0
0214f32c  ldmiaeq sp!,{r3,pc}
0214f330  ldr r1,[0x214f378]
0214f334  mov r12,r2, lsr #0x5
0214f338  ldr r1,[r1,r12,lsl #0x2]
0214f33c  and r2,r2,#0x1f
0214f340  mov r3,#0x1
0214f344  tst r1,r3, lsl r2
0214f348  moveq r0,#0x0
0214f34c  ldmiaeq sp!,{r3,pc}
0214f350  ldr r1,[0x214f37c]
0214f354  ldrb r0,[r0,#0x1]
0214f358  ldr r1,[r1,r12,lsl #0x2]
0214f35c  mov lr,#0x0
0214f360  tst r1,r3, lsl r2
0214f364  movne lr,#0x2
0214f368  cmp r0,lr
0214f36c  movhi r0,#0x0
0214f370  movls r0,#0x1
0214f374  ldmia sp!,{r3,pc}
