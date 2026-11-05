0216ab3c  ldr r0,[r0,#0x8]
0216ab40  cmp r0,#0x0
0216ab44  ldrne r0,[r0,#0x4]
0216ab48  ldrne r0,[r0,#0x64]
0216ab4c  ldrbne r0,[r0,#0x48]
0216ab50  moveq r0,#0x1
0216ab54  bx lr
