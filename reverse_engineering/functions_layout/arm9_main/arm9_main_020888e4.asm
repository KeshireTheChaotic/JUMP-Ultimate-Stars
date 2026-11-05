020888e4  ldr r0,[0x2088900]
020888e8  ldrb r1,[r0,#0x1]
020888ec  ldrb r0,[r0,#0x0]
020888f0  cmp r1,r0
020888f4  movne r0,#0x1
020888f8  moveq r0,#0x0
020888fc  bx lr
