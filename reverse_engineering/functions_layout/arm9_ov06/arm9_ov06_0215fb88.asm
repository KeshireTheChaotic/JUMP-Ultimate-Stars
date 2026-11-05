0215fb88  ldr r1,[0x215fc1c]
0215fb8c  mov r3,#0x0
0215fb90  ldr r12,[r1,#0x0]
0215fb94  mov r2,#0x1b0
0215fb98  ldr r12,[r12,#0xc]
0215fb9c  ldrh r12,[r12,#0x0]
0215fba0  mov r12,r12, lsl #0x8
0215fba4  strh r12,[r0,#0x5a]
0215fba8  ldr r12,[r1,#0x0]
0215fbac  ldr r12,[r12,#0xc]
0215fbb0  ldrh r12,[r12,#0x4]
0215fbb4  mov r12,r12, lsl #0x8
0215fbb8  strh r12,[r0,#0x5e]
0215fbbc  ldr r12,[r1,#0x0]
0215fbc0  ldr r12,[r12,#0xc]
0215fbc4  ldrh r12,[r12,#0x8]
0215fbc8  mov r12,r12, lsl #0x8
0215fbcc  strh r12,[r0,#0x60]
0215fbd0  ldr r12,[r1,#0x0]
0215fbd4  ldr r12,[r12,#0xc]
0215fbd8  ldrh r12,[r12,#0xc]
0215fbdc  mov r12,r12, lsl #0x8
0215fbe0  strh r12,[r0,#0x5c]
0215fbe4  ldr r1,[r1,#0x0]
0215fbe8  ldr r1,[r1,#0xc]
0215fbec  ldrh r1,[r1,#0x10]
0215fbf0  mov r1,r1, lsl #0x8
0215fbf4  strh r1,[r0,#0x62]
0215fbf8  ldrh r1,[r0,#0x5a]
0215fbfc  strh r1,[r0,#0x56]
0215fc00  ldrh r1,[r0,#0x5c]
0215fc04  strh r1,[r0,#0x58]
0215fc08  str r3,[r0,#0xc]
0215fc0c  strh r2,[r0,#0x12]
0215fc10  strh r3,[r0,#0x10]
0215fc14  strh r3,[r0,#0x14]
0215fc18  bx lr
