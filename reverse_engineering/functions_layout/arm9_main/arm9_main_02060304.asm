02060304  ldrb r3,[r0,#0x1]
02060308  ldr r2,[0x206031c]
0206030c  ldrb r1,[r0,#0x0]
02060310  add r0,r2,r3, lsl #0x4
02060314  ldr r0,[r0,r1,lsl #0x2]
02060318  bx lr
