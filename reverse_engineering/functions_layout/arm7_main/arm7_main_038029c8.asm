038029c8  mov r3,#0x0
038029cc  mov r2,r3
038029d0  ldr r1,[0x38029f0]
038029d4  add r0,r1,r3, lsl #0x6
038029d8  strb r2,[r0,#0xf80]
038029dc  strb r2,[r0,#0xf81]
038029e0  add r3,r3,#0x1
038029e4  cmp r3,#0x8
038029e8  blt 0x038029d4
038029ec  bx lr
