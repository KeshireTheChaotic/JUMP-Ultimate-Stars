0217ab28  mov r2,r1, asr #0x5
0217ab2c  add r2,r0,r2, lsl #0x2
0217ab30  bic r0,r1,#0x1f
0217ab34  sub r1,r1,r0
0217ab38  ldr r2,[r2,#0x34]
0217ab3c  mov r0,#0x1
0217ab40  tst r2,r0, lsl r1
0217ab44  moveq r0,#0x0
0217ab48  bx lr
