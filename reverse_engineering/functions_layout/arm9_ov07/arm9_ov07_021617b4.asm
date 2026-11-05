021617b4  ldr r0,[r0,#0x20]
021617b8  ldr r0,[r0,#0xc]
021617bc  ldr r3,[r0,#0x24]
021617c0  ldr r0,[r3,#0x41c]
021617c4  cmp r1,r0
021617c8  movlt r0,#0x1
021617cc  bxlt lr
021617d0  add r0,r0,#0x20
021617d4  cmp r1,r0
021617d8  movge r0,#0x0
021617dc  bxge lr
021617e0  mov r2,r1, lsr #0x1f
021617e4  rsb r0,r2,r1, lsl #0x1b
021617e8  add r1,r2,r0, ror #0x1b
021617ec  mov r0,#0x1
021617f0  mov r1,r0, lsl r1
021617f4  ldr r2,[r3,#0x418]
021617f8  ands r1,r2,r1
021617fc  moveq r0,#0x0
02161800  bx lr
