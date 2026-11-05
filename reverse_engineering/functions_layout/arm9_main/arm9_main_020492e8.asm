020492e8  ldr r2,[r0,#0x8]
020492ec  and r1,r1,#0xff
020492f0  bic r2,r2,#0xff
020492f4  orr r1,r2,r1
020492f8  str r1,[r0,#0x8]
020492fc  bx lr
