0217b078  cmp r1,#0x8
0217b07c  movcs r0,#0x1
0217b080  bxcs lr
0217b084  ldr r2,[0x217b0a4]
0217b088  ldr r3,[r0,#0x38]
0217b08c  ldr r0,[r2,r1,lsl #0x2]
0217b090  and r1,r3,#0xff
0217b094  cmp r1,r0
0217b098  movls r0,#0x1
0217b09c  movhi r0,#0x0
0217b0a0  bx lr
