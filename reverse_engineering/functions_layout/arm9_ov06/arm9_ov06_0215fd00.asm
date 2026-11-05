0215fd00  add r3,r0,r1, lsl #0x1
0215fd04  ldrh r2,[r0,#0x5a]
0215fd08  ldrh r1,[r3,#0x16]
0215fd0c  add r1,r2,r1
0215fd10  strh r1,[r0,#0x5a]
0215fd14  ldrh r2,[r0,#0x5c]
0215fd18  ldrh r1,[r3,#0x16]
0215fd1c  add r1,r2,r1
0215fd20  strh r1,[r0,#0x5c]
0215fd24  ldrh r2,[r0,#0x56]
0215fd28  ldrh r1,[r3,#0x16]
0215fd2c  add r1,r2,r1
0215fd30  strh r1,[r0,#0x56]
0215fd34  ldrh r2,[r0,#0x58]
0215fd38  ldrh r1,[r3,#0x16]
0215fd3c  add r1,r2,r1
0215fd40  strh r1,[r0,#0x58]
0215fd44  bx lr
