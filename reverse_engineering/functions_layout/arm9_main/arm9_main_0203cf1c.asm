0203cf1c  ldr r0,[r0,#0x8]
0203cf1e  ldrh r0,[r0,#0x14]
0203cf20  cmp r0,#0x0
0203cf22  bne 0x0203cf28
0203cf24  mov r0,#0x1
0203cf26  bx lr
0203cf28  mov r0,#0x0
0203cf2a  bx lr
