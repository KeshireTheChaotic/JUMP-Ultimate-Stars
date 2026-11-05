0200acc4  push {r4,lr}
0200acc6  add r4,r0,#0x0
0200acc8  ldr r0,[r4,#0x0]
0200acca  cmp r0,#0x0
0200accc  beq 0x0200acd2
0200acce  blx 0x0201b268
0200acd2  add r0,r4,#0x0
0200acd4  pop {r4,pc}
