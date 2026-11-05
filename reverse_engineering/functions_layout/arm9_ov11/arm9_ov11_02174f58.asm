02174f58  cmp r1,#0x0
02174f5c  movlt r0,#0x0
02174f60  bxlt lr
02174f64  add r1,r0,r1, lsl #0x2
02174f68  ldr r1,[r1,#0x8]
02174f6c  cmp r1,#0x0
02174f70  movlt r0,#0x0
02174f74  addge r0,r0,r1
02174f78  bx lr
