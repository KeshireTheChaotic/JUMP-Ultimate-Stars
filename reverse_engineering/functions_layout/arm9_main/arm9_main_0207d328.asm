0207d328  stmdb sp!,{r3,lr}
0207d32c  ldr r3,[r0,#0x120]
0207d330  blx r3
0207d334  mov r0,r0, lsl #0x10
0207d338  mov r0,r0, asr #0x10
0207d33c  ldmia sp!,{r3,pc}
