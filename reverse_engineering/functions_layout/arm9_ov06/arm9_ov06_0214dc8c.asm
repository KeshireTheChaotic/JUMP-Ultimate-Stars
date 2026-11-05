0214dc8c  stmdavs r2,{r0,r2,r6,r11,lr}
0214dc90  addeq r2,r0,r10, asr r0
0214dc94  mcrne p14,0x2,r5,cr9,cr1,0x0
0214dc98  sub r5,r8,r1, lsl r2
0214dc9c  ldcpl p13,cr1,[r10],{0x42}
0214dca0  suble r2,r4,r0, lsl #0x14
0214dca4  stclne p2,cr2,[r4,#0x0]
0214dca8  stmdavs r11,{r1,r3,r4,r8,r10,r12,lr}
0214dcac  stmdavs r12,{r1,r3,r4,r9,r12,lr}
0214dcb0  strbtpl r1,[r2],#0xcc3
0214dcb4  stcne p8,cr6,[r3,#-0x30]
0214dcb8  stclne p4,cr5,[r3,#-0x388]
0214dcbc  stmdacc r8!,{r2,r3,r11,sp,lr}
0214dcc0  stmdavs r9,{r1,r5,r6,r7,r10,r12,lr}
0214dcc4  cdpne p8,0x5,cr5,cr1,cr8,0x0
