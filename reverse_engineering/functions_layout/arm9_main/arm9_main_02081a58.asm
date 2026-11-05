02081a58  mov r2,#0x0
02081a5c  tst r0,#0x2600
02081a60  mov r3,r2
02081a64  movne r0,#0x10
02081a68  bxne lr
02081a6c  tst r0,#0xff
02081a70  moveq r0,#0x11
02081a74  bxeq lr
02081a78  tst r0,#0xf0
02081a7c  movne r3,#0x4
02081a80  movne r2,r3
02081a84  tst r1,#0x100
02081a88  movne r2,#0xc
02081a8c  tst r1,#0xc0
02081a90  mov r1,r0, lsr r3
02081a94  ldr r0,[0x2081aac]
02081a98  and r1,r1,#0xf
02081a9c  ldr r0,[r0,r1,lsl #0x2]
02081aa0  movne r2,#0x8
02081aa4  add r0,r2,r0
02081aa8  bx lr
