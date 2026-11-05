02049138  ldr r2,[r1,#0x0]
0204913c  ldr r0,[0x2049174]
02049140  cmp r2,r0
02049144  ldrbeq r0,[r1,#0x4]
02049148  cmpeq r0,#0x10
0204914c  movne r0,#0x0
02049150  bxne lr
02049154  ldrb r2,[r1,#0x5]
02049158  ldrb r0,[r1,#0x6]
0204915c  ldrb r3,[r1,#0x7]
02049160  ldrb r1,[r1,#0x8]
02049164  orr r0,r2,r0, lsl #0x8
02049168  orr r0,r0,r3, lsl #0x10
0204916c  orr r0,r0,r1, lsl #0x18
02049170  bx lr
