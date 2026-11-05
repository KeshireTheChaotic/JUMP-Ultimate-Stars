021a1ea8  ldrb r2,[r0,#0x35]
021a1eac  and r1,r1,#0xff
021a1eb0  mov r1,r1, lsl #0x1f
021a1eb4  bic r2,r2,#0x4
021a1eb8  orr r1,r2,r1, lsr #0x1d
021a1ebc  strb r1,[r0,#0x35]
021a1ec0  bx lr
