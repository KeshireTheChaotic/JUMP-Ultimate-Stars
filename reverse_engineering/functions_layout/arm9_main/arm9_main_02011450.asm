02011450  add r2,r0,r1
02011454  ldrh r1,[r0,r1]
02011458  ldrh r0,[r2,#0x2]
0201145c  orr r0,r1,r0, lsl #0x10
02011460  bx lr
