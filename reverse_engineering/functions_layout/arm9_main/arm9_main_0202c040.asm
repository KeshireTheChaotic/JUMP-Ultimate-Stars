0202c040  sub sp,sp,#0x8
0202c044  ldr r0,[r0,#0x0]
0202c048  cmp r0,#0x0
0202c04c  sublt r0,r0,#0xff
0202c050  sublt r0,r0,#0x700
0202c054  strlt r0,[sp,#0x4]
0202c058  addge r0,r0,#0xff
0202c05c  addlt r1,sp,#0x4
0202c060  addge r0,r0,#0x700
0202c064  addge r1,sp,#0x0
0202c068  strge r0,[sp,#0x0]
0202c06c  ldr r1,[r1,#0x0]
0202c070  mov r0,r1, asr #0xb
0202c074  add r0,r1,r0, lsr #0x14
0202c078  mov r0,r0, asr #0xc
0202c07c  add sp,sp,#0x8
0202c080  bx lr
