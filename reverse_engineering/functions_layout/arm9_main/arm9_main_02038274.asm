02038274  stmdb sp!,{r3,lr}
02038278  cmp r2,#0x20000000
0203827c  strcs r2,[r0,#0x0]
02038280  movcs r1,#0x0
02038284  strbcs r1,[r0,#0x4]
02038288  ldmiacs sp!,{r3,pc}
0203828c  bl 0x020380d0
02038290  ldmia sp!,{r3,pc}
