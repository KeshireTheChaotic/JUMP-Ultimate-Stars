027e0060  ldr r1,[0x27e00ac]
027e0064  ldr r2,[r1,#0x550]
027e0068  strh r0,[r2,#0x36]
027e006c  strh r0,[r2,#0x32]
027e0070  add r1,r2,#0x100
027e0074  ldrh r1,[r1,#0x88]
027e0078  cmp r1,#0x0
027e007c  addne r0,r0,#0x2
027e0080  movne r0,r0, lsl #0x10
027e0084  movne r0,r0, lsr #0x10
027e0088  strhne r0,[r2,#0x3c]
027e008c  strhne r0,[r2,#0x38]
027e0090  bxne lr
027e0094  add r0,r0,#0x2
027e0098  mov r0,r0, lsl #0x10
027e009c  mov r0,r0, lsr #0x10
027e00a0  strh r0,[r2,#0x3e]
027e00a4  strh r0,[r2,#0x3a]
027e00a8  bx lr
