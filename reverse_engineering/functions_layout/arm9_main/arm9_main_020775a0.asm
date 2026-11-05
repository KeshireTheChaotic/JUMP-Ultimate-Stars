020775a0  cmp r1,#0x0
020775a4  moveq r0,#0x0
020775a8  bxeq lr
020775ac  ldrb r0,[r1,#0x40]
020775b0  cmp r0,#0x2
020775b4  movne r0,#0x0
020775b8  bxne lr
020775bc  ldr r0,[0x207760c]
020775c0  ldrb r1,[r1,#0x41]
020775c4  ldr r0,[r0,#0x0]
020775c8  ldr r2,[r0,#0x50]
020775cc  ldrb r0,[r2,r1,lsl #0x2]
020775d0  add r1,r2,r1, lsl #0x2
020775d4  cmp r0,#0x2
020775d8  movne r0,#0x1
020775dc  bxne lr
020775e0  ldrb r0,[r1,#0x1]
020775e4  cmp r0,#0x3
020775e8  moveq r0,#0x1
020775ec  bxeq lr
020775f0  cmp r0,#0x5
020775f4  moveq r0,#0x1
020775f8  bxeq lr
020775fc  cmp r0,#0x6
02077600  moveq r0,#0x1
02077604  movne r0,#0x0
02077608  bx lr
