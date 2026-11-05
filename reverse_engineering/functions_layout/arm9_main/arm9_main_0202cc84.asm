0202cc84  stmdb sp!,{r4,lr}
0202cc88  ldr r3,[r0,#0x0]
0202cc8c  mov r4,r2
0202cc90  ldr r3,[r3,#0x1c]
0202cc94  blx r3
0202cc98  ldrsh r0,[r0,#0x0]
0202cc9c  strh r0,[r4,#0x0]
0202cca0  ldmia sp!,{r4,pc}
