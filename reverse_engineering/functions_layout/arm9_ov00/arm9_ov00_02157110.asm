02157110  ldr r1,[r1,#0x0]
02157114  cmp r1,r0, lsl #0xc
02157118  movge r0,#0x1
0215711c  movlt r0,#0x0
02157120  bx lr
