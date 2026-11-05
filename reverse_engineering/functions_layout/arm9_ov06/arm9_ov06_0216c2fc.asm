0216c2fc  stmdb sp!,{r4,lr}
0216c300  mov r4,r0
0216c304  mov r0,r1, lsl #0x12
0216c308  str r0,[r4,#0x0]
0216c30c  ldr r2,[r2,#0x0]
0216c310  mov r1,r2, asr #0x5
0216c314  add r1,r2,r1, lsr #0x1a
0216c318  mov r1,r1, asr #0x6
0216c31c  bl 0x0200d12c
0216c320  str r0,[r4,#0x0]
0216c324  ldmia sp!,{r4,pc}
