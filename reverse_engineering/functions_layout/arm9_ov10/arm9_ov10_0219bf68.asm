0219bf68  ldr r0,[0x219bf80]
0219bf6c  ldr r1,[r0,#0x0]
0219bf70  cmp r1,#0x0
0219bf74  movne r0,#0x1
0219bf78  strbne r0,[r1,#0x55]
0219bf7c  bx lr
