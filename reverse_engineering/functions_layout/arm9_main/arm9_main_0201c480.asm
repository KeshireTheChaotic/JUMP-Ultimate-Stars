0201c480  stmdb sp!,{r3,lr}
0201c484  ldr r0,[r0,#0x4]
0201c488  ldr r1,[r0,#0x0]
0201c48c  ldr r1,[r1,#0x70]
0201c490  blx r1
0201c494  ldmia sp!,{r3,pc}
