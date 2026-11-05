0214e43c  ldrb r1,[r0,#0x6]
0214e440  cmp r1,#0x1
0214e444  movne r0,#0x0
0214e448  bxne lr
0214e44c  ldrsb r1,[r0,#0x8]
0214e450  subs r3,r1,#0x1
0214e454  movmi r0,#0x0
0214e458  bxmi lr
0214e45c  ldr r1,[0x214e47c]
0214e460  ldrb r2,[r0,#0x7]
0214e464  ldr r1,[r1,#0x0]
0214e468  mov r0,#0x14
0214e46c  ldr r1,[r1,#0x48]
0214e470  mla r0,r2,r0,r1
0214e474  ldrb r0,[r0,r3,lsl #0x3]
0214e478  bx lr
