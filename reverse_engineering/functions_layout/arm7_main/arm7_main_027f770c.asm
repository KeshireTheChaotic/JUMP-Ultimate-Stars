027f770c  stmdb sp!,{r4,lr}
027f7710  sub sp,sp,#0x8
027f7714  mov r4,r0
027f7718  add r0,sp,#0x0
027f771c  bl 0x027f74fc
027f7720  ldrh r0,[sp,#0x0]
027f7724  mov r0,r0, lsl #0x1c
027f7728  mov r0,r0, lsr #0x1c
027f772c  and r0,r0,#0xb
027f7730  cmp r0,#0x1
027f7734  movne r0,#0x0
027f7738  bne 0x027f7754
027f773c  mov r0,#0x86
027f7740  mov r1,#0x10
027f7744  mov r2,r4
027f7748  mov r3,#0x1
027f774c  bl 0x027f717c
027f7750  mov r0,#0x1
027f7754  add sp,sp,#0x8
027f7758  ldmia sp!,{r4,lr}
027f775c  bx lr
