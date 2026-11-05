02156358  stmdb sp!,{r3,lr}
0215635c  ldr r0,[r0,#0x7c]
02156360  bl 0x021562e8
02156364  cmp r0,#0x0
02156368  moveq r0,#0x1
0215636c  movne r0,#0x0
02156370  ldmia sp!,{r3,pc}
