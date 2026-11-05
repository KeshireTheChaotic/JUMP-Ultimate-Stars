0215e6a8  stmdb sp!,{r4,lr}
0215e6ac  mov r4,r0
0215e6b0  bl 0x0205889c
0215e6b4  cmp r0,#0x0
0215e6b8  bne 0x0215e6c4
0215e6bc  bl 0x02055684
0215e6c0  b 0x0215e708
0215e6c4  cmp r0,#0x8000
0215e6c8  bne 0x0215e6d4
0215e6cc  bl 0x02055684
0215e6d0  b 0x0215e708
0215e6d4  add r4,r4,#0x1
0215e6d8  sub r1,r4,#0x1
0215e6dc  mov r2,#0x1
0215e6e0  mov r1,r2, lsl r1
0215e6e4  ands r1,r1,r0
0215e6e8  bne 0x0215e708
0215e6ec  add r4,r4,#0x1
0215e6f0  cmp r4,#0x10
0215e6f4  movgt r4,r2
0215e6f8  sub r1,r4,#0x1
0215e6fc  mov r1,r2, lsl r1
0215e700  ands r1,r1,r0
0215e704  beq 0x0215e6ec
0215e708  mov r0,r4, lsl #0x10
0215e70c  mov r0,r0, lsr #0x10
0215e710  ldmia sp!,{r4,pc}
