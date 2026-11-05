0205b050  ldr r0,[0x205b090]
0205b054  mov r3,#0x1
0205b058  ldr r2,[r0,#0x0]
0205b05c  mov r0,#0x0
0205b060  ands r1,r2,r3
0205b064  ldreq r1,[0x205b090]
0205b068  ldreq r2,[r1,#0x0]
0205b06c  orreq r2,r2,r3
0205b070  streq r2,[r1,#0x0]
0205b074  bxeq lr
0205b078  add r0,r0,#0x1
0205b07c  cmp r0,#0x8
0205b080  mov r3,r3, lsl #0x1
0205b084  blt 0x0205b060
0205b088  mvn r0,#0x0
0205b08c  bx lr
