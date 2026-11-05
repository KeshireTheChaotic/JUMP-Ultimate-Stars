021733b4  cmp r0,#0x0
021733b8  ldrlt r1,[0x21733d4]
021733bc  ldrlt r2,[r1,#0x0]
021733c0  addlt r2,r2,#0x1
021733c4  strlt r2,[r1,#0x0]
021733c8  ldr r1,[0x21733d8]
021733cc  ldrsb r0,[r1,r0]
021733d0  bx lr
