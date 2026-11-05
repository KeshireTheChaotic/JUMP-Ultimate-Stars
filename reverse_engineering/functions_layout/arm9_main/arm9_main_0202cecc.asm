0202cecc  stmdb sp!,{r4,lr}
0202ced0  ldr r3,[r0,#0x0]
0202ced4  mov r4,r2
0202ced8  ldr r3,[r3,#0x1c]
0202cedc  blx r3
0202cee0  ldr r0,[r0,#0x0]
0202cee4  str r0,[r4,#0x0]
0202cee8  ldmia sp!,{r4,pc}
