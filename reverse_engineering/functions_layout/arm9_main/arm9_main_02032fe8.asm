02032fe8  ldr r0,[0x203300c]
02032fec  ldr r1,[0x2033010]
02032ff0  ldr r2,[r0,#0x254]
02032ff4  add r2,r2,#0x1
02032ff8  and r3,r2,#0x7
02032ffc  str r3,[r0,#0x254]
02033000  mov r3,r2, lsl #0x1d
02033004  add r0,r1,r3, lsr #0x19
02033008  bx lr
