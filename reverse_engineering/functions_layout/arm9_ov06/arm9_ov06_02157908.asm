02157908  cmp r0,#0x0
0215790c  bxeq lr
02157910  add r2,r0,r1, lsl #0x1
02157914  ldrh r3,[r2,#0x6e]
02157918  ldr r2,[0x2157938]
0215791c  mov r12,r1, lsl #0x1
02157920  cmp r3,r2
02157924  addcc r1,r0,#0x6e
02157928  ldrhcc r0,[r1,r12]
0215792c  addcc r0,r0,#0x1
02157930  strhcc r0,[r1,r12]
02157934  bx lr
