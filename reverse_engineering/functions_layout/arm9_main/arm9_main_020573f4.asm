020573f4  ldr r2,[0x2057410]
020573f8  mov r1,#0xc
020573fc  mla r1,r0,r1,r2
02057400  ldrb r0,[r1,#0x8]
02057404  add r0,r0,#0x1
02057408  strb r0,[r1,#0x8]
0205740c  bx lr
