0217d094  ldr r0,[r0,#0x34]
0217d098  cmp r0,#0x0
0217d09c  ldrne r0,[r0,#0x4]
0217d0a0  mvnne r1,#0x0
0217d0a4  ldrne r0,[r0,#0x10]
0217d0a8  strbne r1,[r0,#0xe]
0217d0ac  bx lr
