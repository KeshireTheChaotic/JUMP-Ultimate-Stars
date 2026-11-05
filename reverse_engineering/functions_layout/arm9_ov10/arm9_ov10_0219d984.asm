0219d984  ldr r1,[0x219d9c4]
0219d988  mov r3,#0x0
0219d98c  mvn r2,#0x0
0219d990  ldr r0,[r1,#0x0]
0219d994  add r0,r0,r3, lsl #0x1
0219d998  add r0,r0,#0x1c00
0219d99c  add r3,r3,#0x1
0219d9a0  strh r2,[r0,#0x30]
0219d9a4  cmp r3,#0x4
0219d9a8  blt 0x0219d990
0219d9ac  ldr r0,[0x219d9c4]
0219d9b0  mov r1,#0x0
0219d9b4  ldr r0,[r0,#0x0]
0219d9b8  add r0,r0,#0x1000
0219d9bc  str r1,[r0,#0xc38]
0219d9c0  bx lr
