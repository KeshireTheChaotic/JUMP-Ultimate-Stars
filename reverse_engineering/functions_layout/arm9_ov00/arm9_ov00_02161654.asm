02161654  ldmdbvs r3!,{r4,r6,r8,r9,r10,r11,sp,lr}^
02161658  mcrvs p9,0x3,r6,cr15,cr4,0x3
0216165c  andeq r0,r0,r0
02161660  strbtvc r6,[lr],#-0xf66
02161664  blvs 0x03e3bf28
02161668  strbtvc r6,[lr],#-0xf66
0216166c  strbtvc r6,[r6],#-0x12e
02161670  andeq r0,r0,r0
02161674  strlt r12,[r2],r2,lsl #0xd
02161678  andeq lr,r0,r2, lsl #0x13
