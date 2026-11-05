021a3228  ldr r3,[0x21a3244]
021a322c  ldr r3,[r3,#0x0]
021a3230  cmp r3,#0x0
021a3234  strne r0,[r3,#0x0]
021a3238  strbne r1,[r3,#0x8]
021a323c  strbne r2,[r3,#0x9]
021a3240  bx lr
