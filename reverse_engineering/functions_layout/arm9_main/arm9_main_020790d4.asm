020790d4  ldr r12,[r0,#0x4]
020790d8  mov r1,r1, lsl #0x1
020790dc  ldr r3,[r12,#0x10]
020790e0  mov r0,#0x0
020790e4  strh r2,[r3,r1]
020790e8  strb r0,[r12,#0xf]
020790ec  bx lr
