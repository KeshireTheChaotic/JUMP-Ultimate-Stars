037ff7d0  add r0,r0,#0x4000000
037ff7d4  ldrb r0,[r0,#0x508]
037ff7d8  ands r0,r0,#0x80
037ff7dc  movne r0,#0x1
037ff7e0  moveq r0,#0x0
037ff7e4  bx lr
