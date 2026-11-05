0203d6d0  ldr r1,[r1,#0x0]
0203d6d4  mov r0,r0, lsl #0xc
0203d6d8  cmp r0,r1
0203d6dc  movne r0,#0x1
0203d6e0  moveq r0,#0x0
0203d6e4  bx lr
