0217fe30  ldrb r1,[r0,#0xa0]
0217fe34  add r1,r1,#0xff
0217fe38  and r1,r1,#0xff
0217fe3c  cmp r1,#0x1
0217fe40  movhi r1,#0x0
0217fe44  strbhi r1,[r0,#0xa0]
0217fe48  strbhi r1,[r0,#0xa1]
0217fe4c  bx lr
