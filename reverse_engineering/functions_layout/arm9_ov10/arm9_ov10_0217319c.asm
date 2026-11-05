0217319c  str r0,[r4,#0x0]
0217319e  ldr r1,[r4,#0x0]
021731a0  ldr r0,[0x021731c4]
021731a2  cmp r1,r0
021731a4  blt 0x021731aa
021731a6  rsb r0,r1
021731a8  str r0,[r4,#0x0]
021731aa  pop {r4,pc}
