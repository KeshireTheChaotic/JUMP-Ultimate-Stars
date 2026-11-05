0202e23c  stmdb sp!,{r4,lr}
0202e240  ldr r3,[r0,#0x0]
0202e244  mov r4,r2
0202e248  ldr r3,[r3,#0x1c]
0202e24c  blx r3
0202e250  ldrsh r0,[r0,#0x0]
0202e254  strh r0,[r4,#0x0]
0202e258  ldmia sp!,{r4,pc}
