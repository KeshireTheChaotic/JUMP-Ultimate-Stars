0215b23c  mov r12,r0, lsl #0x8
0215b240  mov r0,r1, lsl #0x8
0215b244  and r12,r12,#0xff00
0215b248  and r1,r2,#0xff
0215b24c  ldr r2,[0x215b26c]
0215b250  orr r12,r12,r1
0215b254  and r1,r0,#0xff00
0215b258  and r0,r3,#0xff
0215b25c  strh r12,[r2,#0x0]
0215b260  orr r0,r1,r0
0215b264  strh r0,[r2,#0x4]
0215b268  bx lr
