0201a57c  ldr r1,[0x201a59c]
0201a580  ldrb r1,[r1,#0x1]
0201a584  cmp r1,#0x0
0201a588  addne r0,r0,#0x400
0201a58c  ldrhne r1,[r0,#0x9c]
0201a590  ldrne r0,[0x201a5a0]
0201a594  strhne r1,[r0,#0x0]
0201a598  bx lr
