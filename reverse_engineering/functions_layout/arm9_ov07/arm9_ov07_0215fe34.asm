0215fe34  add r1,r0,#0x5000
0215fe38  ldr r2,[r1,#0xf0]
0215fe3c  ldr r12,[0x215fe54]
0215fe40  cmp r2,#0x1
0215fe44  ldreq r2,[r1,#0xf4]
0215fe48  streq r2,[r1,#0xf0]
0215fe4c  mov r1,#0x0
0215fe50  bx r12
