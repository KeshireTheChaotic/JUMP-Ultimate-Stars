0214e850  ldr r1,[0x214e874]
0214e854  ldr r2,[0x214e878]
0214e858  ldr r3,[r1,#0x0]
0214e85c  ldr r0,[0x214e87c]
0214e860  ldr r2,[r2,r3,lsl #0x2]
0214e864  add r3,r3,#0x1
0214e868  str r3,[r1,#0x0]
0214e86c  str r2,[r0,#0x0]
0214e870  bx lr
