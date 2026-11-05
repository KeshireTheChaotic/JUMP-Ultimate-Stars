02155cc0  stmdb sp!,{r4,lr}
02155cc4  mov r4,r1
02155cc8  ldrsb r2,[r4,#0x2]
02155ccc  mov r1,#0xd
02155cd0  bl 0x021565a4
02155cd4  ldrb r1,[r4,#0x3]
02155cd8  strb r1,[r0,#0x2]
02155cdc  ldmia sp!,{r4,pc}
