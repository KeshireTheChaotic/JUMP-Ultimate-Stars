0219dbb4  ldr r2,[0x219dbd8]
0219dbb8  cmp r1,r2
0219dbbc  movhi r1,r2
0219dbc0  ldr r2,[0x219dbdc]
0219dbc4  ldr r2,[r2,#0x0]
0219dbc8  add r0,r2,r0, lsl #0x1
0219dbcc  add r0,r0,#0x1c00
0219dbd0  strh r1,[r0,#0x28]
0219dbd4  bx lr
