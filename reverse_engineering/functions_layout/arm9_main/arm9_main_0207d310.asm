0207d310  stmdb sp!,{r3,lr}
0207d314  ldr r3,[r0,#0x138]
0207d318  blx r3
0207d31c  mov r0,r0, lsl #0x18
0207d320  mov r0,r0, asr #0x18
0207d324  ldmia sp!,{r3,pc}
