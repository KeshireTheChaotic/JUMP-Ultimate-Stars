038068d0  mov r3,#0x0
038068d4  ldr r0,[0x3806908]
038068d8  str r3,[r0,#0x20]
038068dc  mov r2,r3
038068e0  mov r1,r3, lsl #0x1
038068e4  strh r2,[r0,r1]
038068e8  add r3,r3,#0x1
038068ec  cmp r3,#0x10
038068f0  blt 0x038068e0
038068f4  ldr r1,[0x380690c]
038068f8  ldrh r0,[r1,#0x0]
038068fc  bic r0,r0,#0x80
03806900  strh r0,[r1,#0x0]
03806904  bx lr
