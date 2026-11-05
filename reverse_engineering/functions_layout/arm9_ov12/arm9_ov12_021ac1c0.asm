021ac1c0  mov r2,#0x0
021ac1c4  mov r1,r2
021ac1c8  str r1,[r0,r2,lsl #0x2]
021ac1cc  add r2,r2,#0x1
021ac1d0  cmp r2,#0x3
021ac1d4  bcc 0x021ac1c8
021ac1d8  bx lr
