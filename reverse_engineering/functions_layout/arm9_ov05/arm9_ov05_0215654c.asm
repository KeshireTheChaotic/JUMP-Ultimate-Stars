0215654c  ldr r3,[0x2156574]
02156550  mov r2,#0xc
02156554  mla r2,r1,r2,r3
02156558  mov r1,r0, lsr #0x5
0215655c  ldr r1,[r2,r1,lsl #0x2]
02156560  and r2,r0,#0x1f
02156564  mov r0,#0x1
02156568  tst r1,r0, lsl r2
0215656c  moveq r0,#0x0
02156570  bx lr
