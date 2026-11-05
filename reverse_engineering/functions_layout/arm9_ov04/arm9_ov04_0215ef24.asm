0215ef24  mov r3,#0x0
0215ef28  mvn r2,#0x0
0215ef2c  b 0x0215ef38
0215ef30  strb r2,[r0,r3,lsl #0x2]
0215ef34  add r3,r3,#0x1
0215ef38  ldrsb r1,[r0,#0x10]
0215ef3c  cmp r3,r1
0215ef40  blt 0x0215ef30
0215ef44  bx lr
