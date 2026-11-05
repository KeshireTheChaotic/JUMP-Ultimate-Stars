02073e68  stmdb sp!,{r3,r4,r5,lr}
02073e6c  mov r5,r0
02073e70  mov r4,r1
02073e74  bl 0x0203b3f4
02073e78  mov r2,r4, asr #0x1
02073e7c  ldr r0,[r0,#0x88]
02073e80  ldr r1,[r5,#0x4]
02073e84  sub r2,r2,#0x10
02073e88  bl 0x0206e468
02073e8c  ldmia sp!,{r3,r4,r5,pc}
