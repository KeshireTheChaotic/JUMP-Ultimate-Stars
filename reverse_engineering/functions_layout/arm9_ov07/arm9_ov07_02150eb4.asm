02150eb4  ldr r1,[0x2150ed8]
02150eb8  ldr r2,[0x2150edc]
02150ebc  ldr r3,[r1,#0x0]
02150ec0  ldr r0,[0x2150ee0]
02150ec4  ldr r2,[r2,r3,lsl #0x2]
02150ec8  add r3,r3,#0x1
02150ecc  str r3,[r1,#0x0]
02150ed0  str r2,[r0,#0x0]
02150ed4  bx lr
