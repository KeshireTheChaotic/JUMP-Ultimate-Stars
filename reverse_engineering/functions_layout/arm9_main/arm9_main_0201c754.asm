0201c754  stmdb sp!,{r3,lr}
0201c758  mov r1,r0
0201c75c  ldr r0,[r1,#0x44]
0201c760  ldr r1,[r1,#0x1c]
0201c764  ldr r2,[r0,#0x0]
0201c768  ldr r2,[r2,#0x38]
0201c76c  blx r2
0201c770  ldmia sp!,{r3,pc}
