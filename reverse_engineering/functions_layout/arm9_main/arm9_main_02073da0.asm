02073da0  stmdb sp!,{r3,r4,r5,lr}
02073da4  mov r5,r0
02073da8  mov r4,r1
02073dac  bl 0x0203b3f4
02073db0  rsb r2,r4,#0x0
02073db4  ldr r0,[r0,#0x88]
02073db8  ldr r1,[r5,#0x4]
02073dbc  mov r2,r2, asr #0x1
02073dc0  bl 0x0206e468
02073dc4  ldmia sp!,{r3,r4,r5,pc}
