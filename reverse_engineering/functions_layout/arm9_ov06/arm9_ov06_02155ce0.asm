02155ce0  stmdb sp!,{r4,lr}
02155ce4  mov r4,r1
02155ce8  ldrsb r2,[r4,#0x2]
02155cec  mov r1,#0x3
02155cf0  bl 0x021565a4
02155cf4  ldrb r1,[r4,#0x3]
02155cf8  strh r1,[r0,#0x2]
02155cfc  ldmia sp!,{r4,pc}
