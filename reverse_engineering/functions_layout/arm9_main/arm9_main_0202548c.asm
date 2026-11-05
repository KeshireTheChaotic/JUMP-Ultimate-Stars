0202548c  ldr r0,[r1,#0x64]
02025490  ldr r0,[r0,#0x1c]
02025494  mov r0,r0, lsl #0x10
02025498  movs r0,r0, lsr #0x1f
0202549c  movne r0,#0x1
020254a0  moveq r0,#0x0
020254a4  strb r0,[r2,#0x0]
020254a8  bx lr
