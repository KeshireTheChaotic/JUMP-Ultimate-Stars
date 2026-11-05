0200c85c  and r2,r0,#0x80000000
0200c860  mov r12,r0, lsr #0x17
0200c864  mov r3,r0, lsl #0x9
0200c868  ands r12,r12,#0xff
0200c86c  beq 0x0200c894
0200c870  cmp r12,#0xff
0200c874  beq 0x0200c8b8
0200c878  add r12,r12,#0x380
0200c87c  mov r0,r3, lsl #0x14
0200c880  orr r1,r2,r3, lsr #0xc
0200c884  orr r1,r1,r12, lsl #0x14
0200c888  bx lr
0200c894  mov r1,r2
0200c898  mov r0,#0x0
0200c89c  bx lr
0200c8b8  cmp r3,#0x0
0200c8bc  bhi 0x0200c8d0
0200c8c0  ldr r1,[0x200c8dc]
0200c8c4  orr r1,r1,r2
0200c8c8  mov r0,#0x0
0200c8cc  bx lr
0200c8d0  mvn r0,#0x0
0200c8d4  bic r1,r0,#0x80000000
0200c8d8  bx lr
