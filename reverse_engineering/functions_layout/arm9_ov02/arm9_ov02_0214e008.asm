0214e008  cmp r0,#0x2b
0214e00c  ldrcc r1,[0x214e020]
0214e010  subcs r0,r0,#0x2b
0214e014  ldrcs r1,[0x214e024]
0214e018  ldr r0,[r1,r0,lsl #0x2]
0214e01c  bx lr
