02153a9c  add r2,r0,r1
02153aa0  mov r3,#0x0
02153aa4  strb r3,[r2,#0x546]
02153aa8  mov r12,#0x1
02153aac  add r3,r0,r1, lsl #0x2
02153ab0  strb r12,[r2,#0x54c]
02153ab4  ldr r2,[r3,#0x43c]
02153ab8  sub r1,r12,#0x2
02153abc  cmp r2,r1
02153ac0  strne r1,[r3,#0x43c]
02153ac4  strbne r12,[r0,#0x544]
02153ac8  strbne r12,[r0,#0x545]
02153acc  bx lr
