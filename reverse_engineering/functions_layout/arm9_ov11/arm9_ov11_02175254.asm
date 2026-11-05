02175254  ldr r0,[r0,#0x4]
02175258  bl 0x02028330
0217525c  add r0,r10,r9, lsl #0x2
02175260  ldr r0,[r0,#0x34]
02175264  mov r1,#0x1
02175268  ldr r0,[r0,#0x4]
0217526c  ldr r2,[r0,#0x0]
02175270  ldr r2,[r2,#0xd8]
02175274  blx r2
02175278  b 0x021752b8
021752b8  ldr r0,[0x2175614]
021752bc  ldr r1,[r10,#0x0]
021752c0  ldr r0,[r0,#0x0]
021752c4  ldrb r1,[r1,#0x41]
021752c8  ldr r2,[r0,#0x48]
021752cc  mov r0,#0x14
021752d0  mla r3,r1,r0,r2
021752d4  ldr r0,[r10,#0x4]
021752d8  ldr r2,[r7,#0x10]
021752dc  ldrb r1,[r0,#0x8]
021752e0  ldr r5,[r2,#0x5c]
021752e4  mov r0,r7
021752e8  add r1,r3,r1, lsl #0x3
021752ec  ldrsb r3,[r1,#0x2]
