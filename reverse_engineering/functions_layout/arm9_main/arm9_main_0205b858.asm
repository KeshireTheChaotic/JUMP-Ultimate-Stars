0205b858  ldr r3,[r0,#0x0]
0205b85c  cmp r3,#0x0
0205b860  movne r2,#0x1
0205b864  strhne r2,[r3,#0x34]
0205b868  ldrne r0,[r0,#0x0]
0205b86c  strhne r1,[r0,#0x38]
0205b870  bx lr
