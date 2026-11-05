02025d98  cmp r2,#0x0
02025d9c  addne r3,r0,r1, lsl #0x2
02025da0  strne r2,[r3,#0xc]
02025da4  ldrne r3,[r0,#0x8]
02025da8  movne r2,#0x1
02025dac  orrne r1,r3,r2, lsl r1
02025db0  bne 0x02025dd0
02025db4  ldr r3,[0x2025dd8]
02025db8  add r2,r0,r1, lsl #0x2
02025dbc  str r3,[r2,#0xc]
02025dc0  mov r2,#0x1
02025dc4  mvn r1,r2, lsl r1
02025dc8  ldr r2,[r0,#0x8]
02025dcc  and r1,r2,r1
02025dd0  str r1,[r0,#0x8]
02025dd4  bx lr
