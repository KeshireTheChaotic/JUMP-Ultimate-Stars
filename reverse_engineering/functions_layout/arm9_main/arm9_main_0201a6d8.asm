0201a6d8  stmdb sp!,{r3,r4,r5,lr}
0201a6dc  mov r5,r1
0201a6e0  mov r4,r0
0201a6e4  bl 0x0201a548
0201a6e8  add r0,r5,#0x7
0201a6ec  mov r0,r0, lsr #0x3
0201a6f0  sub r5,r0,#0x1
0201a6f4  add r0,r4,r5, lsl #0x2
0201a6f8  ldr r0,[r0,#0x418]
0201a6fc  cmp r0,#0x0
0201a700  bne 0x0201a724
0201a704  adds r0,r4,r5, lsl #0x5
0201a708  beq 0x0201a71c
0201a70c  add r2,r5,#0x1
0201a710  mov r1,r4
0201a714  mov r2,r2, lsl #0x3
0201a718  bl 0x0201af54
0201a71c  add r1,r4,r5, lsl #0x2
0201a720  str r0,[r1,#0x418]
0201a724  add r0,r4,r5, lsl #0x2
0201a728  ldr r0,[r0,#0x418]
0201a72c  bl 0x0201b078
0201a730  ldr r1,[0x201a750]
0201a734  ldrb r1,[r1,#0x1]
0201a738  cmp r1,#0x0
0201a73c  addne r1,r4,#0x400
0201a740  ldrhne r2,[r1,#0x9c]
0201a744  ldrne r1,[0x201a754]
0201a748  strhne r2,[r1,#0x0]
0201a74c  ldmia sp!,{r3,r4,r5,pc}
