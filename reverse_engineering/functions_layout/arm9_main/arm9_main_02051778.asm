02051778  stmdb sp!,{r4,r5,r6,r7,r8,r9}
0205177c  add r9,r1,r2
02051780  mov r12,r2, lsr #0x5
02051784  add r12,r1,r12, lsl #0x5
02051788  mov r2,r0
0205178c  mov r3,r2
02051790  mov r4,r2
02051794  mov r5,r2
02051798  mov r6,r2
0205179c  mov r7,r2
020517a0  mov r8,r2
020517a4  cmp r1,r12
020517a8  stmialt r1!,{r0,r2,r3,r4,r5,r6,r7,r8}
020517ac  blt 0x020517a4
020517b0  cmp r1,r9
020517b4  stmialt r1!,{r0}
020517b8  blt 0x020517b0
020517bc  ldmia sp!,{r4,r5,r6,r7,r8,r9}
020517c0  bx lr
