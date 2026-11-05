02160fec  ldr r0,[0x216100c]
02160ff0  ldrh r1,[r1,#0x2]
02160ff4  ldr r0,[r0,#0x0]
02160ff8  ldr r0,[r0,#0xa4]
02160ffc  cmp r0,r1
02161000  movge r0,#0x1
02161004  movlt r0,#0x0
02161008  bx lr
