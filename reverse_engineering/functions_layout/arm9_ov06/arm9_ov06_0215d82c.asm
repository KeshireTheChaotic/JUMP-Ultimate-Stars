0215d82c  cmp r0,#0x0
0215d830  bxeq lr
0215d834  add r2,r0,r1, lsl #0x1
0215d838  ldrh r3,[r2,#0x6e]
0215d83c  ldr r2,[0x215d85c]
0215d840  mov r12,r1, lsl #0x1
0215d844  cmp r3,r2
0215d848  addcc r1,r0,#0x6e
0215d84c  ldrhcc r0,[r1,r12]
0215d850  addcc r0,r0,#0x1
0215d854  strhcc r0,[r1,r12]
0215d858  bx lr
