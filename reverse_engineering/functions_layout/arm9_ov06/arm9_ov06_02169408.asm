02169408  cmp r1,#0x0
0216940c  ldr r1,[r0,#0x34]
02169410  orrne r1,r1,#0x2
02169414  biceq r1,r1,#0x2
02169418  str r1,[r0,#0x34]
0216941c  bx lr
