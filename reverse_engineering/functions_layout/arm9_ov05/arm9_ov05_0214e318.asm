0214e318  ldrb r2,[r0,#0x6]
0214e31c  cmp r2,#0x0
0214e320  movne r0,#0x0
0214e324  bxne lr
0214e328  ldr r2,[0x214e34c]
0214e32c  ldrb r3,[r0,#0x7]
0214e330  ldr r2,[r2,#0x0]
0214e334  mov r0,#0xd4
0214e338  ldr r2,[r2,#0x44]
0214e33c  mla r0,r3,r0,r2
0214e340  add r0,r0,r1, lsl #0x1
0214e344  ldrh r0,[r0,#0xcc]
0214e348  bx lr
