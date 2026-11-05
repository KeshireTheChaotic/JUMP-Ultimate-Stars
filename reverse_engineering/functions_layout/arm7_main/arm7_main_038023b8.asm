038023b8  stmdb sp!,{lr}
038023bc  sub sp,sp,#0x4
038023c0  mov lr,#0x0
038023c4  ldr r3,[0x380241c]
038023c8  mov r0,#0x24
038023cc  mul r2,lr,r0
038023d0  add r12,r3,r2
038023d4  ldrb r1,[r3,r2]
038023d8  bic r1,r1,#0x1
038023dc  strb r1,[r3,r2]
038023e0  strb lr,[r12,#0x1]
038023e4  add lr,lr,#0x1
038023e8  cmp lr,#0x10
038023ec  blt 0x038023cc
038023f0  mov r2,#0x0
038023f4  ldr r1,[0x3802420]
038023f8  ldrb r0,[r1,r2,lsl #0x6]
038023fc  bic r0,r0,#0x1
03802400  strb r0,[r1,r2,lsl #0x6]
03802404  add r2,r2,#0x1
03802408  cmp r2,#0x20
0380240c  blt 0x038023f8
03802410  add sp,sp,#0x4
03802414  ldmia sp!,{lr}
03802418  bx lr
