02155d98  stmdb sp!,{r4,lr}
02155d9c  mov r4,r1
02155da0  ldrsb r2,[r4,#0x2]
02155da4  mov r1,#0xe
02155da8  bl 0x021565a4
02155dac  ldrsb r1,[r4,#0x3]
02155db0  strb r1,[r0,#0x2]
02155db4  ldmia sp!,{r4,pc}
