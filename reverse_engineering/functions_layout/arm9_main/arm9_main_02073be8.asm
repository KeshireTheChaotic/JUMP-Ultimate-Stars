02073be8  stmdb sp!,{r3,r4,r5,lr}
02073bec  mov r5,r0
02073bf0  mov r4,r1
02073bf4  bl 0x0203b3e4
02073bf8  sub r2,r4,#0x10
02073bfc  ldr r0,[r0,#0x88]
02073c00  ldr r1,[r5,#0x4]
02073c04  mov r2,r2, asr #0x1
02073c08  bl 0x0206e468
02073c0c  ldmia sp!,{r3,r4,r5,pc}
