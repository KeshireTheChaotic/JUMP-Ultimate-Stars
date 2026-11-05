02161df4  ldr r1,[0x2161e14]
02161df8  mov r2,r0, lsr #0x5
02161dfc  ldr r1,[r1,r2,lsl #0x2]
02161e00  and r2,r0,#0x1f
02161e04  mov r0,#0x1
02161e08  tst r1,r0, lsl r2
02161e0c  moveq r0,#0x0
02161e10  bx lr
