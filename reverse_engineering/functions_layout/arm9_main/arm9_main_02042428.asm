02042428  ldr r2,[0x204245c]
0204242c  ldr r2,[r2,#0x3d8]
02042430  eor r2,r2,#0x1
02042434  add r1,r1,r2, lsl #0x2
02042438  add r0,r0,r2, lsl #0x2
0204243c  ldr r1,[r1,#0xc]
02042440  ldr r0,[r0,#0xc]
02042444  cmp r0,r1
02042448  mvncc r0,#0x0
0204244c  bxcc lr
02042450  movhi r0,#0x1
02042454  movls r0,#0x0
02042458  bx lr
