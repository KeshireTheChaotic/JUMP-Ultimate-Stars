0200d12c  eor r12,r0,r1
0200d130  and r12,r12,#0x80000000
0200d134  cmp r0,#0x0
0200d138  rsblt r0,r0,#0x0
0200d13c  addlt r12,r12,#0x1
0200d140  cmp r1,#0x0
0200d144  rsblt r1,r1,#0x0
0200d148  beq 0x0200d324
0200d14c  cmp r0,r1
0200d150  movcc r1,r0
0200d154  movcc r0,#0x0
0200d158  bcc 0x0200d324
0200d15c  mov r2,#0x1c
0200d160  mov r3,r0, lsr #0x4
0200d164  cmp r1,r3, lsr #0xc
0200d168  suble r2,r2,#0x10
0200d16c  movle r3,r3, lsr #0x10
0200d170  cmp r1,r3, lsr #0x4
0200d174  suble r2,r2,#0x8
0200d178  movle r3,r3, lsr #0x8
0200d17c  cmp r1,r3
0200d180  suble r2,r2,#0x4
0200d184  movle r3,r3, lsr #0x4
0200d188  mov r0,r0, lsl r2
0200d18c  rsb r1,r1,#0x0
0200d190  adds r0,r0,r0
0200d194  add r2,r2,r2, lsl #0x1
0200d198  add pc,pc,r2, lsl #0x2
0200d324  ands r3,r12,#0x80000000
0200d328  rsbne r0,r0,#0x0
0200d32c  ands r3,r12,#0x1
0200d330  rsbne r1,r1,#0x0
0200d334  bx lr
