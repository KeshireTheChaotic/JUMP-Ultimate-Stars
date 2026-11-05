0216bb08  rsbvc r6,r1,#0x630000
0216bb0c  rsbmi r7,r2,#0xbc000
0216bb10  ldrbvs r5,[r4,#-0x367]!
0216bb14  mcrvs p3,0x1,r3,cr14,cr0,0x3
0216bb18  stcvs p12,cr6,[lr],#-0x18c
0216bb1c  andeq r0,r0,r0
