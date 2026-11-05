027e3970  stmdb sp!,{r4,lr}
027e3974  mov r4,r0
027e3978  sub r0,r4,#0x40
027e397c  mov r1,#0x42
027e3980  bl 0x03807acc
027e3984  sub r0,r4,r0, lsl #0x1
027e3988  add r0,r0,#0x5e
027e398c  ldmia sp!,{r4,lr}
027e3990  bx lr
