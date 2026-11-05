027f76b8  stmdb sp!,{r4,lr}
027f76bc  sub sp,sp,#0x8
027f76c0  mov r4,r0
027f76c4  add r0,sp,#0x0
027f76c8  bl 0x027f74fc
027f76cc  ldrh r0,[sp,#0x0]
027f76d0  mov r0,r0, lsl #0x1c
027f76d4  mov r0,r0, lsr #0x1c
027f76d8  and r0,r0,#0xb
027f76dc  cmp r0,#0x1
027f76e0  movne r0,#0x0
027f76e4  bne 0x027f7700
027f76e8  mov r0,#0x6
027f76ec  mov r1,#0x10
027f76f0  mov r2,r4
027f76f4  mov r3,#0x1
027f76f8  bl 0x027f717c
027f76fc  mov r0,#0x1
027f7700  add sp,sp,#0x8
027f7704  ldmia sp!,{r4,lr}
027f7708  bx lr
