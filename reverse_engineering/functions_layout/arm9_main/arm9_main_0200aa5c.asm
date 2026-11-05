0200aa5c  push {r0,r1,r2,r3}
0200aa5e  mov r0,#0x2
0200aa60  ldr r1,[sp,#0x4]
0200aa62  lsl r0,r0,#0x1e
0200aa64  and r0,r1
0200aa66  add sp,#0x10
0200aa68  bx lr
