0207d2a8  stmdb sp!,{r3,lr}
0207d2ac  mov r1,#0x0
0207d2b0  ldr r3,[r0,#0x128]
0207d2b4  mov r2,r1
0207d2b8  blx r3
0207d2bc  mov r0,r0, lsl #0x10
0207d2c0  mov r0,r0, asr #0x10
0207d2c4  ldmia sp!,{r3,pc}
