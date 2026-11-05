0204c254  mov r2,#0x0
0204c258  mov r1,r2
0204c25c  str r1,[r0,r2,lsl #0x2]
0204c260  add r2,r2,#0x1
0204c264  cmp r2,#0x3
0204c268  bcc 0x0204c25c
0204c26c  bx lr
