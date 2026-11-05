027f75cc  stmdb sp!,{r4,lr}
027f75d0  sub sp,sp,#0x8
027f75d4  mov r4,r0
027f75d8  add r0,sp,#0x0
027f75dc  bl 0x027f74fc
027f75e0  ldrh r0,[sp,#0x0]
027f75e4  mov r0,r0, lsl #0x19
027f75e8  movs r0,r0, lsr #0x1f
027f75ec  moveq r0,#0x0
027f75f0  beq 0x027f760c
027f75f4  mov r0,#0x86
027f75f8  mov r1,#0x50
027f75fc  mov r2,r4
027f7600  mov r3,#0x3
027f7604  bl 0x027f717c
027f7608  mov r0,#0x1
027f760c  add sp,sp,#0x8
027f7610  ldmia sp!,{r4,lr}
027f7614  bx lr
