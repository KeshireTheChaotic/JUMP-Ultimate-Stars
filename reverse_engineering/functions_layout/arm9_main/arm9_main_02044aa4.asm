02044aa4  str r1,[r0,#0x70]
02044aa8  ldrh r3,[r0,#0x2c]
02044aac  ldrh r2,[r0,#0x2e]
02044ab0  ldr r12,[0x2044acc]
02044ab4  mul r2,r3,r2
02044ab8  ldr r1,[r12,r1,lsl #0x2]
02044abc  mul r2,r1,r2
02044ac0  mov r1,r2, lsr #0x3
02044ac4  str r1,[r0,#0x68]
02044ac8  bx lr
