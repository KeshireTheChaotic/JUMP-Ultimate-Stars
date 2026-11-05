020425bc  ldr r0,[0x20425e8]
020425c0  ldr r3,[r0,#0x3d8]
020425c4  eor r3,r3,#0x1
020425c8  add r3,r1,r3, lsl #0x2
020425cc  ldr r1,[r3,#0xc]
020425d0  cmp r2,r1
020425d4  str r2,[r3,#0xc]
020425d8  movne r1,#0x1
020425dc  strbne r1,[r0,#0x9]
020425e0  strbne r1,[r0,#0x2]
020425e4  bx lr
