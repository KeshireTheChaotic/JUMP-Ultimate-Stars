02011464  ldrb r2,[r0,#0xc]
02011468  mov r2,r2, lsr #0x1
0201146c  mov r2,r2, lsl #0x1
02011470  add r2,r2,#0x1
02011474  add r2,r0,r2
02011478  add r1,r2,r1, lsl #0x1
0201147c  ldrsh r1,[r1,#0xd]
02011480  add r1,r1,r1, lsr #0x1f
02011484  mov r1,r1, asr #0x1
02011488  add r1,r1,#0x2
0201148c  add r0,r0,r1, lsl #0x1
02011490  bx lr
