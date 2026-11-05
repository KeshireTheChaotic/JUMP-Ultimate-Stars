02160fbc  cdpvs p0,0x6,cr7,cr5,cr15,0x3
02160fc0  swics 0x676e69
02160fc4  ldrbtvc r6,[r4],#-0x170
02160fc8  cdpcs p2,0x6,cr7,cr14,cr5,0x3
02160fcc  rsbeq r6,lr,r2, ror #0x12
02160fd0  subcc r5,r4,r12, ror #0x10
02160fd4  andeq r0,r0,r12, lsl r0
