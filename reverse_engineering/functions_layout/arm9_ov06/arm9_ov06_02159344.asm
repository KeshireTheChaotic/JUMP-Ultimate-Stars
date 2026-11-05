02159344  stmdb sp!,{r3,lr}
02159348  ldr r2,[r1,#0x4]
0215934c  add r1,r0,#0x100
02159350  ldrsh r0,[r2,#0x2]
02159354  ldrsb r1,[r1,#0xe0]
02159358  blx 0x0214e22c
0215935c  mov r0,#0x0
02159360  ldmia sp!,{r3,pc}
