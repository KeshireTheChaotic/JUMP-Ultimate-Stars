0202e5b0  stmdb sp!,{r3,lr}
0202e5b4  ldr r2,[r0,#0x0]
0202e5b8  ldr r2,[r2,#0x1c]
0202e5bc  blx r2
0202e5c0  ldrsh r0,[r0,#0x0]
0202e5c4  mov r0,r0, lsl #0x1
0202e5c8  ldmia sp!,{r3,pc}
