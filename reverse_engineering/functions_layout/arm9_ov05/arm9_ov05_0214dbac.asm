0214dbac  ldrh r3,[r3,#0x0]
0214dbb0  add r3,r3,r12, lsl #0xa
0214dbb4  str r3,[r0,#0x4]
0214dbb8  add r0,r0,#0x8
0214dbbc  cmp r2,#0x0
0214dbc0  bne 0x0214db94
0214dbc4  mov r0,lr
