027e93d0  ands r2,r0,#0x1
027e93d4  ldrhne r2,[r0,#-0x1]
027e93d8  andne r2,r2,#0xff
027e93dc  orrne r1,r2,r1, lsl #0x8
027e93e0  strhne r1,[r0,#-0x1]
027e93e4  ldrheq r2,[r0,#0x0]
027e93e8  andeq r2,r2,#0xff00
027e93ec  andeq r1,r1,#0xff
027e93f0  orreq r1,r2,r1
027e93f4  strheq r1,[r0,#0x0]
027e93f8  bx lr
