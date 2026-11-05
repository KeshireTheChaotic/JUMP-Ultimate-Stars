027e00b0  ldr r1,[0x27e00fc]
027e00b4  ldr r2,[r1,#0x550]
027e00b8  strh r0,[r2,#0x30]
027e00bc  strh r0,[r2,#0x34]
027e00c0  add r1,r2,#0x100
027e00c4  ldrh r1,[r1,#0x88]
027e00c8  cmp r1,#0x0
027e00cc  addne r0,r0,#0x4
027e00d0  movne r0,r0, lsl #0x10
027e00d4  movne r0,r0, lsr #0x10
027e00d8  strhne r0,[r2,#0x3e]
027e00dc  strhne r0,[r2,#0x3a]
027e00e0  bxne lr
027e00e4  add r0,r0,#0x4
027e00e8  mov r0,r0, lsl #0x10
027e00ec  mov r0,r0, lsr #0x10
027e00f0  strh r0,[r2,#0x3c]
027e00f4  strh r0,[r2,#0x38]
027e00f8  bx lr
