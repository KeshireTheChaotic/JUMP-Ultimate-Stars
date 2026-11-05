0200dbc4  ldr r0,[r0,#0x8]
0200dbc8  cmp r0,#0x0
0200dbcc  ldrbne r0,[r0,#0x0]
0200dbd0  andne r0,r0,#0x1f
0200dbd4  moveq r0,#0x0
0200dbd8  and r0,r0,#0xff
0200dbdc  bx lr
