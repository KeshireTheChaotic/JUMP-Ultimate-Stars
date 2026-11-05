0215515c  ldrsh r2,[r1,#0x0]
02155160  mov r2,r2, lsl #0xc
02155164  str r2,[r0,#0x0]
02155168  ldrsh r2,[r1,#0x2]
0215516c  mov r2,r2, lsl #0xc
02155170  str r2,[r0,#0x4]
02155174  ldrsh r2,[r1,#0x4]
02155178  mov r2,r2, lsl #0xc
0215517c  str r2,[r0,#0x8]
02155180  ldrsh r1,[r1,#0x6]
02155184  mov r1,r1, lsl #0xc
02155188  str r1,[r0,#0xc]
0215518c  bx lr
