02162e0c  stmdals r3,{r2,r5,r8,r11,lr}
02162e10  stmdbcs r0,{r0,r6,r11,r12,lr}
02162e14  andcs sp,r1,r9, lsr r0
02162e18  andlt r4,r7,r8, lsl #0xf
02162e1c  stclne p13,cr11,[r4,#0x3c0]!
02162e20  ldccs p12,cr1,[r0,#-0x1b4]
