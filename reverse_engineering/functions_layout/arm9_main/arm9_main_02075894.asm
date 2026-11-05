02075894  ldr r3,[r0,#0x4]
02075898  mov r0,#0x18
0207589c  mla r3,r1,r0,r3
020758a0  add r0,r3,r2, lsl #0x2
020758a4  add r1,r3,#0x4
020758a8  ldr r0,[r0,#0x4]
020758ac  add r1,r1,r2, lsl #0x2
020758b0  add r0,r1,r0
020758b4  bx lr
