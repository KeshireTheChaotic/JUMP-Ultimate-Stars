0205ba9c  mov r2,#0x24
0205baa0  mul r2,r0,r2
0205baa4  mov r0,r1, lsl #0x10
0205baa8  ldr r1,[0x205bab8]
0205baac  mov r0,r0, lsr #0x10
0205bab0  str r0,[r1,r2]
0205bab4  bx lr
