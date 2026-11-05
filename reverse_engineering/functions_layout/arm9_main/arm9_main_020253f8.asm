020253f8  ldr r0,[r1,#0x64]
020253fc  ldrb r0,[r0,#0x10]
02025400  mov r0,r0, lsl #0x18
02025404  mov r0,r0, lsr #0x1f
02025408  strb r0,[r2,#0x0]
0202540c  bx lr
