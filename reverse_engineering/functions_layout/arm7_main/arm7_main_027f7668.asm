027f7668  stmdb sp!,{r4,lr}
027f766c  sub sp,sp,#0x8
027f7670  mov r4,r0
027f7674  add r0,sp,#0x0
027f7678  bl 0x027f74fc
027f767c  ldrh r0,[sp,#0x0]
027f7680  mov r0,r0, lsl #0x1c
027f7684  mov r0,r0, lsr #0x1c
027f7688  cmp r0,#0x4
027f768c  movne r0,#0x0
027f7690  bne 0x027f76ac
027f7694  mov r0,#0x86
027f7698  mov r1,#0x10
027f769c  mov r2,r4
027f76a0  mov r3,#0x3
027f76a4  bl 0x027f717c
027f76a8  mov r0,#0x1
027f76ac  add sp,sp,#0x8
027f76b0  ldmia sp!,{r4,lr}
027f76b4  bx lr
