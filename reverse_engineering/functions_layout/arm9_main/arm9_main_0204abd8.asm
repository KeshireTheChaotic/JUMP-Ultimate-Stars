0204abd8  ldr r0,[0x204abf4]
0204abdc  ldrsb r1,[r0,#0x0]
0204abe0  ldrsb r0,[r0,#0x1]
0204abe4  orr r0,r1,r0, lsl #0x8
0204abe8  mov r0,r0, lsl #0x10
0204abec  mov r0,r0, lsr #0x10
0204abf0  bx lr
