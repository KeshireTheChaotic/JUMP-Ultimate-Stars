0200d340  cmp r0,r1
0200d344  movcc r1,r0
0200d348  movcc r0,#0x0
0200d34c  bxcc lr
0200d350  mov r2,#0x1c
0200d354  mov r3,r0, lsr #0x4
0200d358  cmp r1,r3, lsr #0xc
0200d35c  suble r2,r2,#0x10
0200d360  movle r3,r3, lsr #0x10
0200d364  cmp r1,r3, lsr #0x4
0200d368  suble r2,r2,#0x8
0200d36c  movle r3,r3, lsr #0x8
0200d370  cmp r1,r3
0200d374  suble r2,r2,#0x4
0200d378  movle r3,r3, lsr #0x4
0200d37c  mov r0,r0, lsl r2
0200d380  rsb r1,r1,#0x0
0200d384  adds r0,r0,r0
0200d388  add r2,r2,r2, lsl #0x1
0200d38c  add pc,pc,r2, lsl #0x2
