01ff9450  clz r10,r3
01ff9454  mov r3,r3, lsl r10
01ff9458  add r3,r3,r3
01ff945c  rsb r9,r10,#0x20
01ff9460  mov r6,r3, lsr r9
01ff9464  mov r9,#0x1
01ff9468  add r6,r6,r9, lsl r10
01ff946c  tst r6,#0x1
01ff9470  rsbne r6,r6,#0x1
01ff9474  mov r6,r6, asr #0x1
01ff9478  mov r3,r3, lsl r10
01ff947c  sub r2,r2,r10, lsl #0x1
01ff9480  subs r2,r2,#0x1
01ff9484  movge pc,lr
01ff9488  b 0x01ff943c
