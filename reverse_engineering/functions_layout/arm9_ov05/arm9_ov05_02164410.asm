02164410  ldr r1,[0x2164430]
02164414  mov r2,r0, lsr #0x5
02164418  ldr r1,[r1,r2,lsl #0x2]
0216441c  and r2,r0,#0x1f
02164420  mov r0,#0x1
02164424  tst r1,r0, lsl r2
02164428  moveq r0,#0x0
