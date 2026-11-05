0201c01c  stmdb sp!,{r4,lr}
0201c020  ldr r2,[r0,#0x0]
0201c024  mov r4,r0
0201c028  ldr r2,[r2,#0xf8]
0201c02c  blx r2
0201c030  ldrh r1,[r4,#0x2c]
0201c034  strh r1,[r4,#0x2e]
0201c038  ldmia sp!,{r4,pc}
