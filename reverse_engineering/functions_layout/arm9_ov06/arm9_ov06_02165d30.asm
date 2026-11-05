02165d30  mov r1,#0x0
02165d34  strh r1,[r0,#0x26]
02165d38  strh r1,[r0,#0x24]
02165d3c  ldr r1,[r0,#0x34]
02165d40  orr r1,r1,#0x1000
02165d44  str r1,[r0,#0x34]
02165d48  bx lr
