02032030  stmdb sp!,{r4,lr}
02032034  mov r4,r0
02032038  mov r0,r1, lsl #0x12
0203203c  str r0,[r4,#0x0]
02032040  ldr r2,[r2,#0x0]
02032044  mov r1,r2, asr #0x5
02032048  add r1,r2,r1, lsr #0x1a
0203204c  mov r1,r1, asr #0x6
02032050  bl 0x0200d12c
02032054  str r0,[r4,#0x0]
02032058  ldmia sp!,{r4,pc}
