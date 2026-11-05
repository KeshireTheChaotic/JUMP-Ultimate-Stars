0219c9c4  stmdb sp!,{r4,lr}
0219c9c8  mov r4,#0x0
0219c9cc  mov r0,r4
0219c9d0  bl 0x0219ca34
0219c9d4  add r4,r4,#0x1
0219c9d8  cmp r4,#0x4
0219c9dc  blt 0x0219c9cc
0219c9e0  ldmia sp!,{r4,pc}
