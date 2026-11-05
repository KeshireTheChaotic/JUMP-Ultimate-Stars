02073c10  stmdb sp!,{r3,r4,r5,lr}
02073c14  mov r5,r0
02073c18  mov r4,r1
02073c1c  bl 0x0203b3e4
02073c20  rsb r2,r4,#0x0
02073c24  ldr r0,[r0,#0x88]
02073c28  ldr r1,[r5,#0x4]
02073c2c  mov r2,r2, asr #0x1
02073c30  bl 0x0206e468
02073c34  ldmia sp!,{r3,r4,r5,pc}
