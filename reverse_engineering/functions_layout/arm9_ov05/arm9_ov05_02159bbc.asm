02159bbc  ldrb r2,[r0,#0x4e1]
02159bc0  ldr r3,[r0,#0x0]
02159bc4  mov r1,#0x14
02159bc8  mla r1,r2,r1,r3
02159bcc  ldrb r0,[r0,#0x4e0]
02159bd0  add r0,r1,r0, lsl #0x2
02159bd4  ldr r0,[r0,#0x8]
02159bd8  bx lr
