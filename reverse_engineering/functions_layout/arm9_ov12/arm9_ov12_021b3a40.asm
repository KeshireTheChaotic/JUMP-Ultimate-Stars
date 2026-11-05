021b3a40  ldr r2,[r1,#0x0]
021b3a44  ldr r1,[r0,#0x0]
021b3a48  bic r2,r2,#0x1
021b3a4c  and r1,r1,#0x1
021b3a50  orr r1,r2,r1
021b3a54  str r1,[r0,#0x0]
021b3a58  bx lr
