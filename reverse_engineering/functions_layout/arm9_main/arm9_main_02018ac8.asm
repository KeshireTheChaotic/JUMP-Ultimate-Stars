02018ac8  ldr r3,[r0,#0x0]
02018acc  ldr r1,[r1,#0x0]
02018ad0  smull r1,r2,r3,r1
02018ad4  mov r1,r1, lsr #0xc
02018ad8  orr r1,r1,r2, lsl #0x14
02018adc  str r1,[r0,#0x0]
02018ae0  bx lr
