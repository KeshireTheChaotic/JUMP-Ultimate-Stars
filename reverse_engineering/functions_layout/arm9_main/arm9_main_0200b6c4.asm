0200b6c4  and r2,r1,#0x80000000
0200b6c8  mov r12,r1, lsr #0x14
0200b6cc  bics r12,r12,#0x800
0200b6d0  beq 0x0200b73c
0200b6d4  mov r3,r12, lsl #0x15
0200b6d8  cmn r3,#0x200000
0200b6dc  bcs 0x0200b720
0200b6e0  subs r12,r12,#0x380
0200b6e4  bls 0x0200b744
0200b6e8  cmp r12,#0xff
0200b6ec  bge 0x0200b76c
0200b6f0  mov r1,r1, lsl #0xc
0200b6f4  orr r3,r2,r1, lsr #0x9
0200b6f8  orr r3,r3,r0, lsr #0x1d
0200b6fc  movs r1,r0, lsl #0x3
0200b700  orr r0,r3,r12, lsl #0x17
0200b704  bxeq lr
0200b708  tst r1,#0x80000000
0200b70c  bxeq lr
0200b710  movs r1,r1, lsl #0x1
0200b714  andeqs r1,r0,#0x1
0200b718  addne r0,r0,#0x1
0200b71c  bx lr
0200b720  orrs r3,r0,r1, lsl #0xc
0200b724  bne 0x0200b734
0200b728  mov r0,#0xff000000
0200b72c  orr r0,r2,r0, lsr #0x1
0200b730  bx lr
0200b734  mvn r0,#0x80000000
0200b738  bx lr
0200b73c  mov r0,r2
0200b740  bx lr
0200b744  cmn r12,#0x17
0200b748  beq 0x0200b758
0200b74c  bmi 0x0200b764
0200b750  mov r0,r2
0200b754  bx lr
0200b758  orr r0,r0,r1, lsl #0xc
0200b75c  mov r0,r2
0200b760  bx lr
0200b764  mov r0,r2
0200b768  bx lr
0200b76c  mov r0,#0xff000000
0200b770  orr r0,r2,r0, lsr #0x1
0200b774  bx lr
