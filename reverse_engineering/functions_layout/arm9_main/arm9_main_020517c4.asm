020517c4  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10}
020517c8  add r10,r1,r2
020517cc  mov r12,r2, lsr #0x5
020517d0  add r12,r1,r12, lsl #0x5
020517d4  cmp r1,r12
020517d8  ldmialt r0!,{r2,r3,r4,r5,r6,r7,r8,r9}
020517dc  stmialt r1!,{r2,r3,r4,r5,r6,r7,r8,r9}
020517e0  blt 0x020517d4
020517e4  cmp r1,r10
020517e8  ldmialt r0!,{r2}
020517ec  stmialt r1!,{r2}
020517f0  blt 0x020517e4
020517f4  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10}
020517f8  bx lr
