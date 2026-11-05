0200c914  tst r0,#0x80000000
0200c918  bne 0x0200c938
0200c91c  mov r1,#0x9e
0200c920  subs r1,r1,r0, lsr #0x17
0200c924  blt 0x0200c94c
0200c928  mov r2,r0, lsl #0x8
0200c92c  orr r0,r2,#0x80000000
0200c930  mov r0,r0, lsr r1
0200c934  bx lr
0200c938  mov r2,#0xff000000
0200c93c  cmp r2,r0, lsl #0x1
0200c940  movcs r0,#0x0
0200c944  mvncc r0,#0x0
0200c948  bx lr
0200c94c  mvn r0,#0x0
0200c950  bx lr
