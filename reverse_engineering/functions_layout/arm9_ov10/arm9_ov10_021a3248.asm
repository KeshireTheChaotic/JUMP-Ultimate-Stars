021a3248  ldr r0,[0x21a3260]
021a324c  ldr r1,[r0,#0x0]
021a3250  cmp r1,#0x0
021a3254  movne r0,#0x0
021a3258  strne r0,[r1,#0x0]
021a325c  bx lr
