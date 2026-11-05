0217a56c  mov r2,r1, asr #0x5
0217a570  add r2,r0,r2, lsl #0x2
0217a574  bic r0,r1,#0x1f
0217a578  sub r1,r1,r0
0217a57c  ldr r2,[r2,#0x34]
0217a580  mov r0,#0x1
0217a584  tst r2,r0, lsl r1
0217a588  moveq r0,#0x0
0217a58c  bx lr
