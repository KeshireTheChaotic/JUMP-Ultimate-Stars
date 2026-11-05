0214d088  stmdb sp!,{r4,r5,r6,lr}
0214d08c  ldr r4,[0x214d0e4]
0214d090  mov r0,#0x3
0214d094  mov r6,#0x1
0214d098  strh r0,[r4,#0x8]
0214d09c  mov r5,r6
0214d0a0  ldrh r0,[r4,#0xa]
0214d0a4  tst r0,r5, lsl r6
0214d0a8  beq 0x0214d0cc
0214d0ac  mov r0,r6
0214d0b0  bl 0x0214d51c
0214d0b4  cmp r0,#0x1
0214d0b8  bne 0x0214d0cc
0214d0bc  mov r0,r6
0214d0c0  bl 0x0214d5d0
0214d0c4  mov r0,r6
0214d0c8  blx 0x021bfd64
0214d0cc  add r0,r6,#0x1
0214d0d0  mov r0,r0, lsl #0x10
0214d0d4  mov r6,r0, lsr #0x10
0214d0d8  cmp r6,#0x10
0214d0dc  bcc 0x0214d0a0
0214d0e0  ldmia sp!,{r4,r5,r6,pc}
