0214d560  add r2,r2,r2, lsl #0x2
0214d564  add r1,r1,r2
0214d568  add r1,r0,r1, lsl #0x2
0214d56c  ldr r2,[r1,#0x14]
0214d570  ldr r1,[r0,#0xc0]
0214d574  cmp r1,r2
0214d578  ldreq r0,[r0,#0xb8]
0214d57c  bxeq lr
0214d580  ldr r1,[r0,#0xc4]
0214d584  cmp r1,r2
0214d588  ldreq r2,[r0,#0xbc]
0214d58c  mov r0,r2
0214d590  bx lr
