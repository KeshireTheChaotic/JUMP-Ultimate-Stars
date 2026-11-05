027e9438  stmdb sp!,{r4,r5,r6,lr}
027e943c  mov r6,r0
027e9440  mov r5,r2
027e9444  mov r4,r3
027e9448  mov r2,#0x12
027e944c  bl 0x027e9488
027e9450  cmp r4,#0x0
027e9454  beq 0x027e946c
027e9458  add r0,r6,#0x24
027e945c  mov r1,r5
027e9460  add r2,r4,#0x1
027e9464  mov r2,r2, lsr #0x1
027e9468  bl 0x027e9488
027e946c  ldmia sp!,{r4,r5,r6,lr}
027e9470  bx lr
