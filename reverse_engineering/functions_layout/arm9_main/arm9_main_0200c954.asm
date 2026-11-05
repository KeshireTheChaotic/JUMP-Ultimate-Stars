0200c954  ands r2,r0,#0x80000000
0200c958  rsbmi r0,r0,#0x0
0200c95c  cmp r0,#0x0
0200c960  bxeq lr
0200c964  clz r3,r0
0200c968  movs r0,r0, lsl r3
0200c96c  rsb r3,r3,#0x9e
0200c970  ands r1,r0,#0xff
0200c974  add r0,r0,r0
0200c978  orr r0,r2,r0, lsr #0x9
0200c97c  orr r0,r0,r3, lsl #0x17
0200c980  bxeq lr
0200c984  tst r1,#0x80
0200c988  bxeq lr
0200c98c  ands r3,r1,#0x7f
0200c990  andeqs r3,r0,#0x1
0200c994  addne r0,r0,#0x1
0200c998  bx lr
