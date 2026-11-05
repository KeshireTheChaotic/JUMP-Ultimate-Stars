027e93b0  ands r1,r0,#0x1
027e93b4  ldrhne r0,[r0,#-0x1]
027e93b8  movne r0,r0, asr #0x8
027e93bc  andne r0,r0,#0xff
027e93c0  ldrheq r0,[r0,#0x0]
027e93c4  andeq r0,r0,#0xff
027e93c8  and r0,r0,#0xff
027e93cc  bx lr
