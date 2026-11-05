0215aed0  cmp r0,#0x0
0215aed4  bxeq lr
0215aed8  add r2,r0,r1, lsl #0x1
0215aedc  ldrh r3,[r2,#0x6e]
0215aee0  ldr r2,[0x215af00]
0215aee4  mov r12,r1, lsl #0x1
0215aee8  cmp r3,r2
0215aeec  addcc r1,r0,#0x6e
0215aef0  ldrhcc r0,[r1,r12]
0215aef4  addcc r0,r0,#0x1
0215aef8  strhcc r0,[r1,r12]
0215aefc  bx lr
