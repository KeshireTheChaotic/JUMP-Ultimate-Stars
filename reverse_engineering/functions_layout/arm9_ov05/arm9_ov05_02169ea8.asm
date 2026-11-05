02169ea8  ldr r1,[0x2169ec8]
02169eac  mov r2,r0, lsr #0x5
02169eb0  ldr r1,[r1,r2,lsl #0x2]
02169eb4  and r2,r0,#0x1f
02169eb8  mov r0,#0x1
02169ebc  tst r1,r0, lsl r2
02169ec0  moveq r0,#0x0
02169ec4  bx lr
