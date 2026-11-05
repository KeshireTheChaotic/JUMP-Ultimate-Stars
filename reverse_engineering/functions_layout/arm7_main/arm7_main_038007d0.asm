038007d0  mov r0,#0x0
038007d4  ldr r3,[0x3800810]
038007d8  b 0x03800800
038007dc  add r12,r3,r0, lsl #0x6
038007e0  ldrb r1,[r3,r0,lsl #0x6]
038007e4  mov r2,r1, lsl #0x1f
038007e8  movs r2,r2, lsr #0x1f
038007ec  biceq r1,r1,#0x1
038007f0  orreq r1,r1,#0x1
038007f4  strbeq r1,[r12,#0x0]
038007f8  bxeq lr
038007fc  add r0,r0,#0x1
03800800  cmp r0,#0x20
03800804  blt 0x038007dc
03800808  mvn r0,#0x0
0380080c  bx lr
