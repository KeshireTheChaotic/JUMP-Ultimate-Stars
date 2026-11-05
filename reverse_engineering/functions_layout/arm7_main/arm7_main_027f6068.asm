027f6068  and r1,r0,#0xff0000
027f606c  mov r1,r1, lsr #0x10
027f6070  mov r1,r1, lsl #0x10
027f6074  mov r2,r1, lsr #0x10
027f6078  and r1,r0,#0xff00
027f607c  mov r1,r1, lsl #0x8
027f6080  mov r1,r1, lsr #0x10
027f6084  and r0,r0,#0xff
027f6088  mov r0,r0, lsl #0x10
027f608c  mov r0,r0, lsr #0x10
027f6090  ldr r12,[0x27f6124]
027f6094  ldrh r3,[r12,#0x0]
027f6098  ands r3,r3,#0x80
027f609c  bne 0x027f6094
027f60a0  mov r3,#0x8900
027f60a4  strh r3,[r12,#0x0]
027f60a8  mov r12,#0xd8
027f60ac  ldr r3,[0x27f6128]
027f60b0  strh r12,[r3,#0x0]
027f60b4  ldr r12,[0x27f6124]
027f60b8  ldrh r3,[r12,#0x0]
027f60bc  ands r3,r3,#0x80
027f60c0  bne 0x027f60b8
027f60c4  and r3,r2,#0xff
027f60c8  ldr r2,[0x27f6128]
027f60cc  strh r3,[r2,#0x0]
027f60d0  ldr r3,[0x27f6124]
027f60d4  ldrh r2,[r3,#0x0]
027f60d8  ands r2,r2,#0x80
027f60dc  bne 0x027f60d4
027f60e0  and r2,r1,#0xff
027f60e4  ldr r1,[0x27f6128]
027f60e8  strh r2,[r1,#0x0]
027f60ec  ldr r2,[0x27f6124]
027f60f0  ldrh r1,[r2,#0x0]
027f60f4  ands r1,r1,#0x80
027f60f8  bne 0x027f60f0
027f60fc  mov r1,#0x8100
027f6100  strh r1,[r2,#0x0]
027f6104  and r1,r0,#0xff
027f6108  ldr r0,[0x27f6128]
027f610c  strh r1,[r0,#0x0]
027f6110  ldr r1,[0x27f6124]
027f6114  ldrh r0,[r1,#0x0]
027f6118  ands r0,r0,#0x80
027f611c  bne 0x027f6114
027f6120  bx lr
