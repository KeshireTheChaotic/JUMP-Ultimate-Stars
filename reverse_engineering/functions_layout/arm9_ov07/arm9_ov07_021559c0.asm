021559c0  ldr r2,[0x21559e0]
021559c4  str r1,[r0,#0x5f0]
021559c8  cmp r1,r2
021559cc  addne r1,r0,r1
021559d0  addne r1,r1,#0x500
021559d4  ldrsbne r1,[r1,#0xb8]
021559d8  strne r1,[r0,#0x5f4]
021559dc  bx lr
