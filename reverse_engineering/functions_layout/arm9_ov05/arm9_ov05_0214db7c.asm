0214db7c  andeq r2,r0,r0, lsl r7
0214db80  stmdb sp!,{r3,lr}
0214db84  cmp r2,#0x0
0214db88  mov lr,#0x0
0214db8c  beq 0x0214dbc4
0214db90  b 0x0214dbbc
0214db94  ldr r3,[r1,#0x0]
0214db98  add lr,lr,#0x1
0214db9c  str r3,[r0,#0x0]
0214dba0  ldr r3,[r1],#0x8
0214dba4  sub r2,r2,#0x1
0214dba8  ldrb r12,[r3,#0x6]
