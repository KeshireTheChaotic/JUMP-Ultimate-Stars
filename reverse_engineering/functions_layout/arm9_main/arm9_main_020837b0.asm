020837b0  stmdb sp!,{r3,lr}
020837b4  ldr r2,[0x20837dc]
020837b8  mov r3,r0
020837bc  ldr r0,[r2,#0x0]
020837c0  mov r2,r1
020837c4  ldr r0,[r0,#0x8c]
020837c8  mov r1,r3
020837cc  bl 0x0207d1c4
020837d0  mov r0,r0, lsl #0x10
020837d4  mov r0,r0, asr #0x10
020837d8  ldmia sp!,{r3,pc}
