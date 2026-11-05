02045664  ldr r3,[r0,#0x8]
02045668  add r2,r3,r1
0204566c  str r2,[r0,#0x8]
02045670  ldr r1,[r0,#0xc]
02045674  cmp r2,r1
02045678  strhi r2,[r0,#0xc]
0204567c  mov r0,r3
02045680  bx lr
