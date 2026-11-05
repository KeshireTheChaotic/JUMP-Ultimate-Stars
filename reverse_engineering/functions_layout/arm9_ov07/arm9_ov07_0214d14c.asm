0214d14c  stmdb sp!,{r4,r5,r6,r7,r8,lr}
0214d150  mov r6,#0x1
0214d154  ldr r8,[0x214d1d0]
0214d158  mov r7,#0x0
0214d15c  mov r4,#0x3
0214d160  mov r5,r6
0214d164  ldrh r0,[r8,#0x12]
0214d168  tst r0,r5, lsl r6
0214d16c  beq 0x0214d1a0
0214d170  mov r0,r6
0214d174  mov r1,r4
0214d178  blx 0x021be9f0
0214d17c  cmp r0,#0x0
0214d180  orrne r0,r7,r5, lsl r6
0214d184  movne r0,r0, lsl #0x10
0214d188  movne r7,r0, lsr #0x10
0214d18c  bne 0x0214d1a0
0214d190  mov r0,r6
0214d194  bl 0x0214d5d0
0214d198  mov r0,r6
0214d19c  blx 0x021bfd64
0214d1a0  add r0,r6,#0x1
0214d1a4  mov r0,r0, lsl #0x10
0214d1a8  mov r6,r0, lsr #0x10
0214d1ac  cmp r6,#0x10
0214d1b0  bcc 0x0214d164
0214d1b4  cmp r7,#0x0
0214d1b8  ldreq r0,[0x214d1d0]
0214d1bc  moveq r1,#0x7
0214d1c0  ldrne r0,[0x214d1d0]
0214d1c4  movne r1,#0x4
0214d1c8  strh r1,[r0,#0x8]
0214d1cc  ldmia sp!,{r4,r5,r6,r7,r8,pc}
