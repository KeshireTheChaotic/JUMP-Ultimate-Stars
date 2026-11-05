02164434  ldr r1,[0x2164454]
02164438  mov r2,r0, lsr #0x5
0216443c  ldr r1,[r1,r2,lsl #0x2]
02164440  and r2,r0,#0x1f
02164444  mov r0,#0x1
02164448  tst r1,r0, lsl r2
0216444c  moveq r0,#0x0
02164450  bx lr
