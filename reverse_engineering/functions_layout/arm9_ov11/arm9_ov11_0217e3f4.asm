0217e3f4  cmp r1,#0x8
0217e3f8  movcs r0,#0x1
0217e3fc  bxcs lr
0217e400  ldr r2,[0x217e420]
0217e404  ldr r3,[r0,#0x38]
0217e408  ldr r0,[r2,r1,lsl #0x2]
0217e40c  and r1,r3,#0xff
0217e410  cmp r1,r0
0217e414  movls r0,#0x1
0217e418  movhi r0,#0x0
0217e41c  bx lr
