02160e1c  ldclvs p9,cr6,[r4],#-0x150
02160e20  rsbvc r2,r3,r5, ror #0x1c
02160e24  andeq r0,r0,r0, ror r0
02160e28  ldclvs p9,cr6,[r4],#-0x1d0
02160e2c  ldmdbvs r4!,{r0,r2,r5,r6,r8,r9,r10,r11,sp}^
02160e30  mcrcs p12,0x3,r6,cr5,cr4,0x3
02160e34  rsbeqs r6,r2,r1, ror #0x2
