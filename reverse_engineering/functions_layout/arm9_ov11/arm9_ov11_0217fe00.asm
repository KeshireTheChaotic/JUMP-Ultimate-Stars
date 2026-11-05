0217fe00  cmp r1,#0x8
0217fe04  movcs r0,#0x1
0217fe08  bxcs lr
0217fe0c  ldr r2,[0x217fe2c]
0217fe10  ldr r3,[r0,#0x38]
0217fe14  ldr r0,[r2,r1,lsl #0x2]
0217fe18  and r1,r3,#0xff
0217fe1c  cmp r1,r0
0217fe20  movls r0,#0x1
0217fe24  movhi r0,#0x0
0217fe28  bx lr
