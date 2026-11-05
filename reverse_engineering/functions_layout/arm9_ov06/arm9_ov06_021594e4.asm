021594e4  stmdb sp!,{r3,lr}
021594e8  mov r2,#0x1f
021594ec  bl 0x0215986c
021594f0  cmp r0,#0x0
021594f4  moveq r0,#0x1
021594f8  movne r0,#0x0
021594fc  ldmia sp!,{r3,pc}
