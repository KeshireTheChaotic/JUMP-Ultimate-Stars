020114fc  add r1,r0,r1, lsl #0x1
02011500  ldrsh r1,[r1,#0x10]
02011504  add r1,r1,r1, lsr #0x1f
02011508  mov r1,r1, asr #0x1
0201150c  add r1,r1,#0x2
02011510  add r0,r0,r1, lsl #0x1
02011514  bx lr
