0214dc8c  mov r5,#0x0
0214dc90  add r0,r4,r5, lsl #0x2
0214dc94  ldr r0,[r0,#0x18]
0214dc98  cmp r0,#0x0
0214dc9c  beq 0x0214dcac
0214dca0  ldr r1,[r0,#0x0]
0214dca4  ldr r1,[r1,#0x8]
0214dca8  blx r1
0214dcac  add r5,r5,#0x1
0214dcb0  cmp r5,#0x3
0214dcb4  blt 0x0214dc90
0214dcb8  mov r5,#0x0
0214dcbc  add r0,r4,r5, lsl #0x2
0214dcc0  ldr r0,[r0,#0x24]
0214dcc4  cmp r0,#0x0
0214dcc8  beq 0x0214dcd0
0214dccc  bl 0x02034d7c
0214dcd0  add r5,r5,#0x1
0214dcd4  cmp r5,#0x3
0214dcd8  blt 0x0214dcbc
0214dcdc  ldr r0,[r4,#0x10]
