0200c8e0  bic r1,r0,#0x80000000
0200c8e4  mov r2,#0x9e
0200c8e8  subs r2,r2,r1, lsr #0x17
0200c8ec  ble 0x0200c908
0200c8f0  mov r1,r1, lsl #0x8
0200c8f4  orr r1,r1,#0x80000000
0200c8f8  cmp r0,#0x0
0200c8fc  mov r0,r1, lsr r2
0200c900  rsbmi r0,r0,#0x0
0200c904  bx lr
0200c908  mvn r0,r0, asr #0x1f
0200c90c  add r0,r0,#0x80000000
0200c910  bx lr
