037ff068  rsb r1,r1,#0x10000
037ff06c  mov r0,r0, lsl #0x4
037ff070  add r0,r0,#0x4000000
037ff074  add r0,r0,#0x400
037ff078  strh r1,[r0,#0x8]
037ff07c  bx lr
