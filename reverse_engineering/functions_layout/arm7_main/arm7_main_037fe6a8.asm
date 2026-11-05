037fe6a8  stmdb sp!,{r4,r5,r6,r7,r8,r9}
037fe6ac  add r9,r1,r2
037fe6b0  mov r12,r2, lsr #0x5
037fe6b4  add r12,r1,r12, lsl #0x5
037fe6b8  mov r2,r0
037fe6bc  mov r3,r2
037fe6c0  mov r4,r2
037fe6c4  mov r5,r2
037fe6c8  mov r6,r2
037fe6cc  mov r7,r2
037fe6d0  mov r8,r2
037fe6d4  cmp r1,r12
037fe6d8  stmialt r1!,{r0,r2,r3,r4,r5,r6,r7,r8}
037fe6dc  blt 0x037fe6d4
037fe6e0  cmp r1,r9
037fe6e4  stmialt r1!,{r0}
037fe6e8  blt 0x037fe6e0
037fe6ec  ldmia sp!,{r4,r5,r6,r7,r8,r9}
037fe6f0  bx lr
