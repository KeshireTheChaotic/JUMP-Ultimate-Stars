02177c00  mov r2,r1, asr #0x5
02177c04  add r2,r0,r2, lsl #0x2
02177c08  bic r0,r1,#0x1f
02177c0c  sub r1,r1,r0
02177c10  ldr r2,[r2,#0x34]
02177c14  mov r0,#0x1
02177c18  tst r2,r0, lsl r1
02177c1c  moveq r0,#0x0
02177c20  bx lr
