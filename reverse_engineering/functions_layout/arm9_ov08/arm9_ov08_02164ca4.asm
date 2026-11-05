02164ca4  ldr r1,[0x02164cb4]
02164ca6  ldr r2,[r1,#0x0]
02164ca8  ldr r1,[r2,#0x40]
02164caa  sub r1,#0x9
02164cac  cmp r1,#0x1
02164cae  bls 0x02164cb2
02164cb0  str r0,[r2,#0x54]
02164cb2  bx lr
