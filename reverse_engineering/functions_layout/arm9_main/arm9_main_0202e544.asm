0202e544  stmdb sp!,{r4,lr}
0202e548  ldr r3,[r0,#0x0]
0202e54c  mov r4,r2
0202e550  ldr r3,[r3,#0x1c]
0202e554  blx r3
0202e558  ldrsb r0,[r0,#0x0]
0202e55c  strb r0,[r4,#0x0]
0202e560  ldmia sp!,{r4,pc}
