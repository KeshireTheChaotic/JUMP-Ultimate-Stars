027e02c0  mov r2,#0x0
027e02c4  mov r3,r2
027e02c8  ldr r1,[0x27e02f4]
027e02cc  add r0,r1,r3
027e02d0  add r0,r0,#0x1000
027e02d4  ldrb r0,[r0,#0x554]
027e02d8  add r2,r2,r0
027e02dc  add r3,r3,#0x1
027e02e0  cmp r3,#0x20
027e02e4  blt 0x027e02cc
027e02e8  mov r0,r2, lsr #0x5
027e02ec  ldr r12,[0x27e02f8]
027e02f0  bx r12
