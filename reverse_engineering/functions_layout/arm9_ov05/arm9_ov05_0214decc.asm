0214decc  ldr r0,[r0,#0x0]
0214ded0  ldrb r0,[r0,#0x4]
0214ded4  cmp r0,r1
0214ded8  moveq r0,#0x1
0214dedc  movne r0,#0x0
0214dee0  bx lr
