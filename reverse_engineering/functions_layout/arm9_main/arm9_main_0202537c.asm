0202537c  stmdb sp!,{r4,lr}
02025380  ldr r1,[r1,#0x0]
02025384  mov r4,r0
02025388  mov r0,r1, lsl #0x6
0202538c  str r0,[r4,#0x0]
02025390  ldr r2,[r2,#0x0]
02025394  mov r1,r2, asr #0x5
02025398  add r1,r2,r1, lsr #0x1a
0202539c  mov r1,r1, asr #0x6
020253a0  bl 0x0200d12c
020253a4  str r0,[r4,#0x0]
020253a8  ldmia sp!,{r4,pc}
