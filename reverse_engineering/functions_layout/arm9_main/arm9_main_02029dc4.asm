02029dc4  ldrh r12,[r0,#0x8]
02029dc8  mov r3,#0x0
02029dcc  b 0x02029dec
02029dd0  ldr r2,[r0,#0x10]
02029dd4  mov r1,r3, lsl #0x1
02029dd8  ldrh r1,[r2,r1]
02029ddc  cmp r1,#0x0
02029de0  strhne r3,[r0,#0xa]
02029de4  bne 0x02029df4
02029de8  add r3,r3,#0x1
02029dec  cmp r3,r12
02029df0  bcc 0x02029dd0
02029df4  ldrh r1,[r0,#0x8]
02029df8  sub r3,r1,#0x1
02029dfc  b 0x02029e20
02029e00  ldr r2,[r0,#0x10]
02029e04  mov r1,r3, lsl #0x1
02029e08  ldrh r1,[r2,r1]
02029e0c  cmp r1,#0x0
02029e10  addne r1,r3,#0x1
02029e14  strhne r1,[r0,#0xc]
02029e18  bxne lr
02029e1c  sub r3,r3,#0x1
02029e20  cmp r3,#0x0
02029e24  bge 0x02029e00
02029e28  bx lr
