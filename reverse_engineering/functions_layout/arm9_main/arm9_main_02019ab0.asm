02019ab0  ldr r2,[r0,#0x8]
02019ab4  mov r1,r1, lsl #0x1f
02019ab8  bic r2,r2,#0x8000
02019abc  orr r1,r2,r1, lsr #0x10
02019ac0  str r1,[r0,#0x8]
02019ac4  bx lr
