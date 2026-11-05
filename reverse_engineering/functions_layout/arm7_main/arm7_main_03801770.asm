03801770  cmp r1,#0xf
03801774  movgt r0,#0x0
03801778  bxgt lr
0380177c  add r0,r0,r1
03801780  ldrb r1,[r0,#0x8]
03801784  cmp r1,#0xff
03801788  moveq r0,#0x0
0380178c  ldrne r0,[0x3801798]
03801790  addne r0,r0,r1, lsl #0x6
03801794  bx lr
