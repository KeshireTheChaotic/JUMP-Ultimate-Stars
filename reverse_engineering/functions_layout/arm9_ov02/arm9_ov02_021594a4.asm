021594a4  stmdb sp!,{r3,lr}
021594a8  ldr r0,[r0,#0x4]
021594ac  ldr r0,[r0,#0x48]
021594b0  cmp r0,#0x0
021594b4  moveq r0,#0x0
021594b8  ldmiaeq sp!,{r3,pc}
021594bc  bl 0x0214d498
021594c0  ldmia sp!,{r3,pc}
