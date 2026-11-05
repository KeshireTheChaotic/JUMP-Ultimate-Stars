0216812c  stmdb sp!,{r3,lr}
02168130  stmib r0,{r1,r2}
02168134  ldr r3,[r0,#0x48]
02168138  ldr r1,[0x2168158]
0216813c  mov r3,r3, lsl #0x1
02168140  ldrh r3,[r1,r3]
02168144  ldr r12,[r0,#0x4]
02168148  mov r1,r2
0216814c  mov r2,#0x4
02168150  blx r12
02168154  ldmia sp!,{r3,pc}
