02160ecc  ldr r0,[0x2160eec]
02160ed0  ldrh r1,[r1,#0x2]
02160ed4  ldr r0,[r0,#0x0]
02160ed8  ldr r0,[r0,#0x1c]
02160edc  cmp r0,r1
02160ee0  movge r0,#0x1
02160ee4  movlt r0,#0x0
02160ee8  bx lr
