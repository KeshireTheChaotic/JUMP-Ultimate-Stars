027f612c  and r1,r0,#0xff0000
027f6130  mov r1,r1, lsr #0x10
027f6134  mov r1,r1, lsl #0x10
027f6138  mov r2,r1, lsr #0x10
027f613c  and r1,r0,#0xff00
027f6140  mov r1,r1, lsl #0x8
027f6144  mov r1,r1, lsr #0x10
027f6148  and r0,r0,#0xff
027f614c  mov r0,r0, lsl #0x10
027f6150  mov r0,r0, lsr #0x10
027f6154  ldr r12,[0x27f61e8]
027f6158  ldrh r3,[r12,#0x0]
027f615c  ands r3,r3,#0x80
027f6160  bne 0x027f6158
027f6164  mov r3,#0x8900
027f6168  strh r3,[r12,#0x0]
027f616c  mov r12,#0xdb
027f6170  ldr r3,[0x27f61ec]
027f6174  strh r12,[r3,#0x0]
027f6178  ldr r12,[0x27f61e8]
027f617c  ldrh r3,[r12,#0x0]
027f6180  ands r3,r3,#0x80
027f6184  bne 0x027f617c
027f6188  and r3,r2,#0xff
027f618c  ldr r2,[0x27f61ec]
027f6190  strh r3,[r2,#0x0]
027f6194  ldr r3,[0x27f61e8]
027f6198  ldrh r2,[r3,#0x0]
027f619c  ands r2,r2,#0x80
027f61a0  bne 0x027f6198
027f61a4  and r2,r1,#0xff
027f61a8  ldr r1,[0x27f61ec]
027f61ac  strh r2,[r1,#0x0]
027f61b0  ldr r2,[0x27f61e8]
027f61b4  ldrh r1,[r2,#0x0]
027f61b8  ands r1,r1,#0x80
027f61bc  bne 0x027f61b4
027f61c0  mov r1,#0x8100
027f61c4  strh r1,[r2,#0x0]
027f61c8  and r1,r0,#0xff
027f61cc  ldr r0,[0x27f61ec]
027f61d0  strh r1,[r0,#0x0]
027f61d4  ldr r1,[0x27f61e8]
027f61d8  ldrh r0,[r1,#0x0]
027f61dc  ands r0,r0,#0x80
027f61e0  bne 0x027f61d8
027f61e4  bx lr
