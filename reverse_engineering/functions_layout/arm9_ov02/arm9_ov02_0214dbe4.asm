0214dbe4  cmp r6,#0x0
0214dbe8  ldrbne r0,[r9,#0x0]
0214dbec  add r5,r5,#0x1
0214dbf0  addne r0,r0,#0x1
0214dbf4  strbne r0,[r9,#0x0]
0214dbf8  ldrb r0,[r10,#0x30]
0214dbfc  cmp r5,r0
