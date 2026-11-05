0206e5f4  ldr r0,[0x206e614]
0206e5f8  ldrb r1,[r0,#0x12]
0206e5fc  cmp r1,#0x0
0206e600  movne r1,#0x0
0206e604  strbne r1,[r0,#0x12]
0206e608  movne r0,#0x1
0206e60c  moveq r0,#0x0
0206e610  bx lr
