027ea1ac  ldr r2,[0x27ea1e4]
027ea1b0  ldr r1,[r2,#0x0]
027ea1b4  add r1,r1,#0x300
027ea1b8  strh r0,[r1,#0xae]
027ea1bc  ldr r1,[0x27ea1e8]
027ea1c0  strh r0,[r1,#0x0]
027ea1c4  ldr r1,[r2,#0x0]
027ea1c8  add r1,r1,#0x300
027ea1cc  ldrh r1,[r1,#0x3a]
027ea1d0  mov r1,r1, lsl #0x18
027ea1d4  movs r1,r1, lsr #0x1f
027ea1d8  ldrne r1,[0x27ea1ec]
027ea1dc  strhne r0,[r1,#0x0]
027ea1e0  bx lr
