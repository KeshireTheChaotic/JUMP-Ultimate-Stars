0200c9e4  eor r2,r0,r1
0200c9e8  and r2,r2,#0x80000000
0200c9ec  mov r12,#0xff
0200c9f0  ands r3,r12,r0, lsr #0x17
0200c9f4  mov r0,r0, lsl #0x8
0200c9f8  cmpne r3,#0xff
0200c9fc  beq 0x0200ca60
0200ca00  orr r0,r0,#0x80000000
0200ca04  ands r12,r12,r1, lsr #0x17
0200ca08  mov r1,r1, lsl #0x8
0200ca0c  cmpne r12,#0xff
0200ca10  beq 0x0200caa0
0200ca14  orr r1,r1,#0x80000000
0200ca18  add r12,r3,r12
0200ca1c  umull r1,r3,r0,r1
0200ca20  movs r0,r3
0200ca24  addpl r0,r0,r0
0200ca28  subpl r12,r12,#0x1
0200ca2c  subs r12,r12,#0x7f
0200ca30  bmi 0x0200cb24
0200ca34  cmp r12,#0xfe
0200ca38  bge 0x0200cb5c
0200ca3c  ands r3,r0,#0xff
0200ca40  orr r0,r2,r0, lsr #0x8
0200ca44  add r0,r0,r12, lsl #0x17
0200ca48  tst r3,#0x80
0200ca4c  bxeq lr
0200ca50  orrs r1,r1,r3, lsl #0x19
0200ca54  andeqs r3,r0,#0x1
0200ca58  addne r0,r0,#0x1
0200ca5c  bx lr
0200ca60  cmp r3,#0x0
0200ca64  beq 0x0200cb78
0200ca68  movs r0,r0, lsl #0x1
0200ca6c  bne 0x0200cb4c
0200ca70  mov r12,r1, lsr #0x17
0200ca74  mov r1,r1, lsl #0x9
0200ca78  ands r12,r12,#0xff
0200ca7c  beq 0x0200ca94
0200ca80  cmp r12,#0xff
0200ca84  blt 0x0200cb40
0200ca88  cmp r1,#0x0
0200ca8c  beq 0x0200cb40
0200ca90  b 0x0200cb4c
0200ca94  cmp r1,#0x0
0200ca98  beq 0x0200cb54
0200ca9c  b 0x0200cb40
0200caa0  cmp r12,#0x0
0200caa4  beq 0x0200cb78
0200caa8  movs r1,r1, lsl #0x1
0200caac  bne 0x0200cb4c
0200cab0  b 0x0200cb40
0200cb24  cmn r12,#0x18
0200cb28  beq 0x0200cb38
0200cb2c  bmi 0x0200cb70
0200cb30  mov r0,r2
0200cb34  bx lr
0200cb38  mov r0,r0, lsl #0x1
0200cb3c  b 0x0200cb68
0200cb40  mov r0,#0xff000000
0200cb44  orr r0,r2,r0, lsr #0x1
0200cb48  bx lr
0200cb4c  mvn r0,#0x80000000
0200cb50  bx lr
0200cb54  mvn r0,#0x80000000
0200cb58  bx lr
0200cb5c  mov r0,#0xff000000
0200cb60  orr r0,r2,r0, lsr #0x1
0200cb64  bx lr
0200cb68  mov r0,r2
0200cb6c  bx lr
0200cb70  mov r0,r2
0200cb74  bx lr
0200cb78  mov r0,r2
0200cb7c  bx lr
