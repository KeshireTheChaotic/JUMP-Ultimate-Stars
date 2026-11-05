02160d30  ldclvs p9,cr6,[r4],#-0x150
02160d34  strbvs r5,[r1],#-0xf65
02160d38  andeq r0,r0,r4, rrx
02160d3c  ldmdbvs r7,{r0,r6,r10,r11,lr}^
02160d40  strbtvc r6,[r5],#-0x764
02160d44  cdpcs p13,0x7,cr6,cr0,cr9,0x2
02160d48  andeq r0,r0,r8, rrx
