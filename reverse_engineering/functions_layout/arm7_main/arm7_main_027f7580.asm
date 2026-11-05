027f7580  stmdb sp!,{r4,lr}
027f7584  sub sp,sp,#0x8
027f7588  mov r4,r0
027f758c  add r0,sp,#0x0
027f7590  bl 0x027f74fc
027f7594  ldrh r0,[sp,#0x0]
027f7598  mov r0,r0, lsl #0x19
027f759c  movs r0,r0, lsr #0x1f
027f75a0  moveq r0,#0x0
027f75a4  beq 0x027f75c0
027f75a8  mov r0,#0x6
027f75ac  mov r1,#0x50
027f75b0  mov r2,r4
027f75b4  mov r3,#0x3
027f75b8  bl 0x027f717c
027f75bc  mov r0,#0x1
027f75c0  add sp,sp,#0x8
027f75c4  ldmia sp!,{r4,lr}
027f75c8  bx lr
