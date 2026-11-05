0219b688  stmdb sp!,{r3,lr}
0219b68c  blx 0x0217668c
0219b690  mov r2,#0x0
0219b694  mov r1,#0x1
0219b698  b 0x0219b6ac
0219b69c  tst r0,r1, lsl r2
0219b6a0  movne r0,r2
0219b6a4  ldmiane sp!,{r3,pc}
0219b6a8  add r2,r2,#0x1
0219b6ac  cmp r2,#0x4
0219b6b0  blt 0x0219b69c
0219b6b4  mov r0,#0x0
0219b6b8  ldmia sp!,{r3,pc}
