020398b8  stmdb sp!,{r4,lr}
020398bc  mul r2,r1,r2
020398c0  mov r4,r0
020398c4  mov r0,r2, lsr #0x1
020398c8  bl 0x0201a228
020398cc  str r0,[r4,#0xc]
020398d0  mov r0,#0x1
020398d4  strb r0,[r4,#0x10]
020398d8  ldmia sp!,{r4,pc}
