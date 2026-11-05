02073e40  stmdb sp!,{r3,r4,r5,lr}
02073e44  mov r5,r0
02073e48  mov r4,r1
02073e4c  bl 0x0203b3e4
02073e50  mov r2,r4, asr #0x1
02073e54  ldr r0,[r0,#0x88]
02073e58  ldr r1,[r5,#0x4]
02073e5c  sub r2,r2,#0x10
02073e60  bl 0x0206e468
02073e64  ldmia sp!,{r3,r4,r5,pc}
