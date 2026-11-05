0201c77c  stmdb sp!,{r3,lr}
0201c780  mov r2,r0
0201c784  ldr r0,[r2,#0x44]
0201c788  ldr r2,[r2,#0x1c]
0201c78c  ldr r3,[r0,#0x0]
0201c790  ldr r3,[r3,#0x3c]
0201c794  blx r3
0201c798  ldmia sp!,{r3,pc}
