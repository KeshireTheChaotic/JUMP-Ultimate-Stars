0205e02c  ldr r1,[r0,#0x8]
0205e030  ldr r0,[r0,#0xc]
0205e034  cmp r1,r0
0205e038  movge r0,#0x1
0205e03c  movlt r0,#0x0
0205e040  bx lr
