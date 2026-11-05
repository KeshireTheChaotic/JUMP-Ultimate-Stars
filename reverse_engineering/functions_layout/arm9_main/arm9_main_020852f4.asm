020852f4  mov r3,r1, lsl #0xc
020852f8  str r3,[r0,#0x0]
020852fc  ldr r1,[r2,#0x0]
02085300  smull r1,r2,r3,r1
02085304  mov r1,r1, lsr #0xc
02085308  orr r1,r1,r2, lsl #0x14
0208530c  str r1,[r0,#0x0]
02085310  bx lr
