03800038  cmp r1,#0x6d
0380003c  rsblt r1,r1,#0xff
03800040  strblt r1,[r0,#0x1c]
03800044  rsbge r2,r1,#0x7f
03800048  ldrge r1,[0x3800058]
0380004c  ldrbge r1,[r1,r2]
03800050  strbge r1,[r0,#0x1c]
03800054  bx lr
