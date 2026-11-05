02073d78  stmdb sp!,{r3,r4,r5,lr}
02073d7c  mov r5,r0
02073d80  mov r4,r1
02073d84  bl 0x0203b3f4
02073d88  sub r2,r4,#0x10
02073d8c  ldr r0,[r0,#0x88]
02073d90  ldr r1,[r5,#0x4]
02073d94  mov r2,r2, asr #0x1
02073d98  bl 0x0206e468
02073d9c  ldmia sp!,{r3,r4,r5,pc}
