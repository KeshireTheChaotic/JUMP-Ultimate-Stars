02161bac  andeq r7,r0,r1, ror #0x4
02161bb0  ldmdbvs r3!,{r4,r6,r8,r9,r10,r11,sp,lr}^
02161bb4  mcrvs p9,0x3,r6,cr15,cr4,0x3
02161bb8  andeq r0,r0,r0
02161bbc  rsbvcs r6,r3,r4, asr #0x12
02161bc0  andeq r0,r0,r0
02161bc4  strbtvc r6,[lr],#-0xf66
02161bc8  blvs 0x03e3c48c
02161bcc  strbtvc r6,[lr],#-0xf66
