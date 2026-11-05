0218df34  cmp r0,#0x32
0218df36  blt 0x0218df42
0218df38  cmp r0,#0xfe
0218df3a  bgt 0x0218df42
0218df3c  lsl r2,r0,#0x2
0218df3e  ldr r0,[0x0218df44]
0218df40  str r1,[r0,r2]
0218df42  bx lr
