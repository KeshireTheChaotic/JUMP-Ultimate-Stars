0205b030  ldr r1,[0x205b04c]
0205b034  mov r2,#0x1
0205b038  mvn r0,r2, lsl r0
0205b03c  ldr r2,[r1,#0x0]
0205b040  and r0,r2,r0
0205b044  str r0,[r1,#0x0]
0205b048  bx lr
