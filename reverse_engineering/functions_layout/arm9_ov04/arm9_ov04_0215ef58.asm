0215ef58  ldrsb r3,[r0,#0x10]
0215ef5c  mov r2,#0x0
0215ef60  b 0x0215ef7c
0215ef64  mov r1,r2, lsl #0x2
0215ef68  ldrsb r1,[r0,r1]
0215ef6c  cmp r1,#0x0
0215ef70  movlt r0,#0x0
0215ef74  bxlt lr
0215ef78  add r2,r2,#0x1
0215ef7c  cmp r2,r3
0215ef80  blt 0x0215ef64
0215ef84  mov r0,#0x1
0215ef88  bx lr
