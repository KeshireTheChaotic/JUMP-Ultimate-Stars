020839a8  ldr r1,[r0,#0x2c]
020839ac  tst r1,#0x40
020839b0  addne r0,r0,#0x30
020839b4  ldreq r0,[r0,#0x10]
020839b8  ldreq r0,[r0,#0x70]
020839bc  bx lr
