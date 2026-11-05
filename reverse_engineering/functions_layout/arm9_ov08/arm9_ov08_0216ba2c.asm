0216ba2c  rsbvc r6,r1,#0x630000
0216ba30  rsbmi r6,r2,#0x2f000
0216ba34  ldrbvs r5,[r4,#-0x367]!
0216ba38  mcrvs p2,0x1,r3,cr14,cr0,0x3
0216ba3c  stcvs p7,cr6,[lr],#-0x18c
0216ba40  andeq r0,r0,r0
