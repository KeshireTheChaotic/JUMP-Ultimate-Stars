0217bfc8  ldr r0,[r0,#0x0]
0217bfcc  cmp r0,#0x0
0217bfd0  moveq r0,#0x0
0217bfd4  addne r0,r0,r1, lsl #0x1
0217bfd8  ldrhne r0,[r0,#0xac]
0217bfdc  bx lr
