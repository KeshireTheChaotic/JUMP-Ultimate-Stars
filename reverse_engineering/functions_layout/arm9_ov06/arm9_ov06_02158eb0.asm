02158eb0  mov r2,r1, lsr #0x5
02158eb4  add r0,r0,r2, lsl #0x2
02158eb8  ldr r2,[r0,#0x8]
02158ebc  and r1,r1,#0x1f
02158ec0  mov r0,#0x1
02158ec4  tst r2,r0, lsl r1
02158ec8  moveq r0,#0x0
02158ecc  bx lr
