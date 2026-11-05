02153260  ldr r3,[r0,#0x0]
02153264  ldr r1,[r1,#0x0]
02153268  smull r1,r2,r3,r1
0215326c  mov r1,r1, lsr #0xc
02153270  orr r1,r1,r2, lsl #0x14
02153274  str r1,[r0,#0x0]
02153278  bx lr
