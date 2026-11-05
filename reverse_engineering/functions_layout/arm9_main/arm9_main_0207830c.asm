0207830c  add r2,r0,#0x500
02078310  ldrsb r2,[r2,#0xcd]
02078314  subs r1,r2,r1
02078318  movmi r0,#0x0
0207831c  strbpl r1,[r0,#0x5cd]
02078320  movpl r0,#0x1
02078324  bx lr
