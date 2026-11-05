0202c708  ldr r2,[r0,#0x4]
0202c70c  sub r12,r2,#0x1
0202c710  b 0x0202c730
0202c714  ldr r2,[r0,#0x0]
0202c718  add r3,r2,r12, lsl #0x4
0202c71c  ldrh r2,[r3,#0x6]
0202c720  cmp r1,r2
0202c724  moveq r0,r3
0202c728  bxeq lr
0202c72c  sub r12,r12,#0x1
0202c730  cmp r12,#0x0
0202c734  bge 0x0202c714
0202c738  mov r0,#0x0
0202c73c  bx lr
