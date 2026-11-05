021a20ac  mov r3,#0x0
021a20b0  b 0x021a20cc
021a20b4  add r2,r0,r3, lsl #0x2
021a20b8  ldr r2,[r2,#0x3c]
021a20bc  cmp r1,r2
021a20c0  moveq r0,#0x1
021a20c4  bxeq lr
021a20c8  add r3,r3,#0x1
021a20cc  cmp r3,#0x3
021a20d0  blt 0x021a20b4
021a20d4  mov r0,#0x0
021a20d8  bx lr
