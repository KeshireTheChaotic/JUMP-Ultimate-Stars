02018228  ldrsh r1,[r0,#0x0]
0201822c  ldrsh r0,[r0,#0x4]
02018230  cmp r0,r1
02018234  subgt r0,r0,r1
02018238  suble r0,r1,r0
0201823c  bx lr
