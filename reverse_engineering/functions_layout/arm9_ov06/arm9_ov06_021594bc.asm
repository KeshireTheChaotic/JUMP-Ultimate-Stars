021594bc  stmdb sp!,{r3,lr}
021594c0  ldrb r1,[r0,#0x1eb]
021594c4  cmp r1,#0x0
021594c8  ldmiane sp!,{r3,pc}
021594cc  add r0,r0,#0x100
021594d0  ldrsb r0,[r0,#0xe0]
021594d4  mov r1,#0x1
021594d8  mov r0,r1, lsl r0
021594dc  blx 0x0214e2bc
021594e0  ldmia sp!,{r3,pc}
